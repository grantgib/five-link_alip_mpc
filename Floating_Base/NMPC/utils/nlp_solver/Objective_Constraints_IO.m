function [Xdec,Udec,Wdec,P,obj,g,obj_vector,Q_mat,R,C] = Objective_Constraints_IO(dyn_info,mpc_info,ref_info,N)
import casadi.*
%% Extract variables
% dyn_info
n_q = dyn_info.dim.n_q;
n_x = dyn_info.dim.n_x;
n_u = dyn_info.dim.n_u;
n_w = dyn_info.dim.n_w;
f = dyn_info.func.f_NL;
f_w = dyn_info.func.wrench;
% use_descriptor = dyn_info.descriptor;
% E = dyn_info.func.E_nonlinear;
% H = dyn_info.func.H_nonlinear;
Kp = dyn_info.ctrl.Kp;
Kd = dyn_info.ctrl.Kd;

% mpc_info
DT = mpc_info.DT;

% ref_info
full_ref = ref_info.full_ref;

%% Symbolics
Udec = SX.sym('U',n_u,N+1);      % controls in R^N-1. subset of the decision variables
Xdec = SX.sym('X',n_x,N+1);  % A vector that represents the states over the optimization problem.
Wdec = SX.sym('W',n_w,N+1);
P = SX.sym('P',n_x+(N+1)*(n_x + n_u));
% P = SX.sym('P',n_x+(N+1)*(n_x + n_u));

% P = [xinit | x_0ref | u_0ref | x_1ref | u_1ref | ... | x_Nref | u_Nref]
% parameters (which include the initial state and the reference along the
% predicted trajectory (reference states and reference controls))

%% Define Penalties
% Bryson's rule
% Q_vector = zeros(2*n_q,1);
% for i = 1:n_q
%     Q_vector(i) = 1/full_ref.bounds.RightStance.states.x.ub(i);
%     Q_vector(n_q+i) = 1/full_ref.bounds.RightStance.states.dx.ub(i);
% end
% Q_weights = [1, 1, 50, 15, 15, 5, 5,...
%     1, 1, 1, 1, 1, 1, 1]';
% Q = Q_weights.*Q_vector;
% Q_mat = diag(Q);
C = [0 0 0 1 0 0 0;     % stance thigh
     0 0 1 1 1 0 0;     % torso, stance leg together
     0 0 0 0 0 1 0;     % swing leg
     0 0 0 0 0 0 1];    % swing leg
Q_mat = [C'*C, zeros(n_q,n_q);
     zeros(n_q,n_q), 10*C'*C];

Q_term = 1e4*Q_mat;

% Control penalty
R_vector = zeros(n_u,1);
for i = 1:n_u
    R_vector(i) = 1/full_ref.bounds.RightStance.inputs.Control.u.ub(i);
end
R_weights = 0.001*[1, 1, 1, 1]';
R = R_weights.*R_vector;
R_mat = diag(R);

%% Objective Function
obj_vector = SX.zeros(N+1,1);    % initialize objective function (scalar output)
for k = 1:N+1
    x_k = Xdec(:,k);   % current state
    du_k = Udec(:,k);   % current control
    if k < N+1
        x_ref_k = P((k-1)*(n_x+n_u)+(n_x+1):(k-1)*(n_x+n_u)+(n_x+(n_x)));
        u_ref_k = P((k-1)*(n_x+n_u)+(n_x+(n_x+1)):(k-1)*(n_x+n_u)+(n_x+(n_x)+n_u));
        % Running stage and control cost (u is now a delta_u added to
        % nominal IO controller so no reference dependece on u)
        obj_vector(k) = (x_k - x_ref_k)'*Q_mat*(x_k - x_ref_k) + ...
            (du_k)'*R_mat*(du_k); 
        
    else
        Term_cost = (x_k - x_ref_k)'*Q_term*(x_k - x_ref_k);
    end
end
obj = sum(obj_vector) + Term_cost;
 
%% Equality Constraints (Dynamics)
g = [];                          % initialize equality constraints vector
g = [g; Xdec(:,1) - P(1:n_x)];    % initial condition constraints
for k = 1:N+1
    q_k = Xdec(1:n_q,k);
    dq_k = Xdec(n_q+1:2*n_q,k);
    x_k = [q_k; dq_k];            % current state
    du_k = Udec(:,k);              % current control
    w_k = Wdec(:,k);              % current wrench
    x_ref_k = P((k-1)*(n_x+n_u)+(n_x+1):(k-1)*(n_x+n_u)+(n_x+(n_x)));
    u_ref_k = P((k-1)*(n_x+n_u)+(n_x+(n_x+1)):(k-1)*(n_x+n_u)+(n_x+(n_x)+n_u));
    
    % Compute IO input
    Kp = 66;
    Kd = 13;
    y_des = x_ref_k(4:n_q);
    dy_des = x_ref_k(n_q+4:end);
    u_IO_k = dyn_info.func.u_IO(q_k,dq_k,y_des,dy_des,Kp,Kd);
    u_k = u_IO_k ;%+ du_k;
    
    % Contact constraint
    w_sym_k = f_w(q_k,dq_k,u_k);
    g = [g; w_k - w_sym_k];
    
    % Forward Integration dynamics constraint
    if k < N+1
        x_k_1 = Xdec(:,k+1);
        xdot = f(q_k,dq_k,u_k,w_k);          % Nonlinear dynamics propogation
        x_k_1_euler = x_k + (DT*xdot);  % Forward Euler Discretization prediction
        g = [g; x_k_1 - x_k_1_euler];   % Update constraints vector
    end
    
    
end

