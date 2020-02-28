function [Xdec,Udec,Wdec,P,obj,g,obj_vector] = Objective_Constraints_Nonlinear(dyn_info,ref_info,DT,N,use_descriptor)
import casadi.*
%% Extract variables
% dyn_info
n_q = dyn_info.dim.n_q;
n_x = dyn_info.dim.n_x;
n_u = dyn_info.dim.n_u;
n_w = dyn_info.dim.n_w;
D = dyn_info.mat.D;
G = dyn_info.mat.G;
B = dyn_info.mat.B;
Jc = dyn_info.mat.Jc;
dJc = dyn_info.mat.dJc;
f = dyn_info.func.f_nonlinear;
f_lambda = dyn_info.func.f_lambda;
% E = dyn_info.func.E_nonlinear;
% H = dyn_info.func.H_nonlinear;

% ref_info
full_ref = ref_info.full_ref;


%% Symbolics
Udec = SX.sym('U',n_u,N+1);      % controls in R^N-1. subset of the decision variables
Xdec = SX.sym('X',n_x,N+1);  % A vector that represents the states over the optimization problem.
Wdec = SX.sym('W',n_w,N+1);
P = SX.sym('P',n_x+n_w+(N+1)*(n_x + n_u));
% P = [xinit | winit| x_0ref | u_0ref | x_1ref | u_1ref | ... | x_Nref | u_Nref]
% parameters (which include the initial state and the reference along the
% predicted trajectory (reference states and reference controls))

%% Define Penalties
% Bryson's rule
Q_vector = zeros(2*n_q,1);
for i = 1:n_q
    Q_vector(i) = 10/full_ref.bounds.RightStance.states.x.ub(i);
    Q_vector(n_q+i) = 1/full_ref.bounds.RightStance.states.dx.ub(i);
end
Q_weights = diag([1, 1, 1, 1, 1, 1, 1,...
    1, 1, 1, 1, 1, 1, 1]);
Q = Q_weights*diag(Q_vector);

% Control penalty
R_q1R = 1/full_ref.bounds.RightStance.inputs.Control.u.ub(1);
R_q2R = 1/full_ref.bounds.RightStance.inputs.Control.u.ub(2);
R_q1L = 1/full_ref.bounds.RightStance.inputs.Control.u.ub(3);
R_q2L = 1/full_ref.bounds.RightStance.inputs.Control.u.ub(4);
R = diag([R_q1R,R_q2R,R_q1L,R_q2L]);                    % control penalty

% Force penalty
Q_w = 0*diag([1,1]);
%% Objective Function
obj_vector = SX.zeros(N+1,1);    % initialize objective function (scalar output)
for k = 1:N+1
    x_k = Xdec(:,k);   % current state
    u_k = Udec(:,k);   % current control
    w_k = Wdec(:,k);
    x_ref_k = P((k-1)*(n_x+n_u)+(n_x+n_w+1):(k-1)*(n_x+n_u)+(n_x+(n_x+n_w)));
    u_ref_k = P((k-1)*(n_x+n_u)+(n_x+(n_x+n_w+1)):(k-1)*(n_x+n_u)+(n_x+(n_x+n_w)+n_u));
    % Running stage and control cost
    obj_vector(k) = (x_k - x_ref_k)'*Q*(x_k - x_ref_k) + ...
        (u_k - u_ref_k)'*R*(u_k - u_ref_k) + ...
        w_k'*Q_w*w_k;
end
obj = sum(obj_vector);
%% Equality Constraints (Dynamics)
g = [];                          % initialize equality constraints vector
g = [g; Xdec(:,1) - P(1:n_x)];    % initial condition constraints
g = [g; Wdec(:,1) - P(n_x+1:n_x+n_w)];
for k = 1:N+1
    q_k = Xdec(1:n_q,k);
    dq_k = Xdec(n_q+1:2*n_q,k);
    x_k = [q_k; dq_k];            % current state
    u_k = Udec(:,k);              % current control
    w_k = Wdec(:,k);
    
    % Contact constraint
    lambda_k = f_lambda(q_k,dq_k,u_k);
    g = [g; w_k - lambda_k];
    
    % Forward Integration dynamics constraint
    if k < N+1
        x_k_1 = Xdec(:,k+1);
        xdot = f(x_k,u_k,w_k);          % Nonlinear dynamics propogation
        x_k_1_euler = x_k + (DT*xdot);  % Forward Euler Discretization prediction
        g = [g; x_k_1 - x_k_1_euler];   % Update constraints vector
    end
    
end

