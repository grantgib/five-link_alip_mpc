function [Xdec,Udec,Wdec,P,obj,g,obj_vector,Q_mat,R,C] = Objective_Constraints_Nonlinear(dyn_info,ctrl_info,ref_info,N)
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

% mpc_info
mpc_info = ctrl_info;
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
Q_mat = [(C'*C), zeros(n_q,n_q);
    zeros(n_q,n_q), 100*(C'*C)];

% Control penalty
R_vector = zeros(n_u,1);
for i = 1:n_u
    R_vector(i) = 1/full_ref.bounds.RightStance.inputs.Control.u.ub(i);
end
R_weights = 1e-3*[1, 1, 1, 1]';
R = R_weights.*R_vector;
R_mat = diag(R);

% Terminal state penalty
CLF_term = true;
if CLF_term
    % (LQR of closed-loop linear system y'' = v)
    Q_term = CLF_Terminal_Penalty(Q_mat,R_mat);
    Q_term = 1*Q_term;
    eig_Qterm = eig(Q_term);
    
else
    Q_term = 1e4*Q_mat;
end
disp("Q_term = "); disp(Q_term);
disp("E-values = "); disp(eig_Qterm);

%% Objective Function
obj_vector = SX.zeros(N+1,1);    % initialize objective function (scalar output)
for k = 1:N+1
    x_k = Xdec(:,k);   % current state
    u_k = Udec(:,k);   % current control
    x_ref_k = P((k-1)*(n_x+n_u)+(n_x+1):(k-1)*(n_x+n_u)+(n_x+(n_x)));
    u_ref_k = P((k-1)*(n_x+n_u)+(n_x+(n_x+1)):(k-1)*(n_x+n_u)+(n_x+(n_x)+n_u));
    if k < N+1
        % Running stage and control cost
        obj_vector(k) = (x_k - x_ref_k)'*Q_mat*(x_k - x_ref_k) + ...
            (u_k - u_ref_k)'*R_mat*(u_k - u_ref_k);
    else
        ya_N = x_k(4:7);     % virtual constraint
        dya_N = x_k(11:end); % derivative
        yd_N = x_ref_k(4:7);
        dyd_N = x_ref_k(11:end);
        yerr_N = ya_N - yd_N;
        dyerr_N = dya_N - dyd_N;
        Term_cost = [yerr_N; dyerr_N]'*Q_term*[yerr_N; dyerr_N];
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
    u_k = Udec(:,k);              % current control
    w_k = Wdec(:,k);              % current wrench
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

