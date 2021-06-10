function [Xdec,Udec,P,obj,g,obj_vector] = Objective_Constraints_Nonlinear(dyn_info,mpc_info,ref_info,N)
import casadi.*

%% Extract inputs
% dyn_info
f = dyn_info.func.f_NL;
E = dyn_info.func.E_NL;
H = dyn_info.func.H_NL;
n_x = dyn_info.dim.n_x;
n_q = dyn_info.dim.n_q;
n_u = dyn_info.dim.n_u;
use_descriptor = dyn_info.descriptor;

% mpc_info
DT = mpc_info.DT;

% ref_info
full_ref = ref_info.full_ref;

%% Symbolics
Udec = SX.sym('U',n_u,N+1);      % controls in R^N-1. subset of the decision variables
Xdec = SX.sym('X',n_x,N+1);  % A vector that represents the states over the optimization problem.
P = SX.sym('P',n_x + (N+1)*(n_x + n_u));
% P = [xinit | x_0ref | u_0ref | x_1ref | u_1ref | ... | x_Nref | u_Nref]
% parameters (which include the initial state and the reference along the
% predicted trajectory (reference states and reference controls))

%% Define Penalties (Bryson's Rule)
% State penalty
Q_vector = zeros(2*n_q,1);
for i = 1:n_q
    Q_vector(i) = 1/full_ref.bounds.RightStance.states.x.ub(i);
    Q_vector(n_q+i) = 1/full_ref.bounds.RightStance.states.dx.ub(i);
end
Q_weights = diag([1, 1, 1, 1, 1, 1, 1,...
    1, 1, 1, 1, 1, 1, 1]);
Q = Q_weights*diag(Q_vector);

% Control penalty
R_vector = zeros(n_u,1);
for i = 1:n_u
    R_vector(i) = 1/full_ref.bounds.RightStance.inputs.Control.u.ub(i);
end
R_weights = 0.001*diag([1 1 1 1]);
R = R_weights*diag(R_vector);                   % control penalty
% R_q1R = 1/param.bounds.RightStance.inputs.Control.u.ub(1);
% R_q2R = 1/param.bounds.RightStance.inputs.Control.u.ub(2);
% R_q1L = 1/param.bounds.RightStance.inputs.Control.u.ub(3);
% R_q2L = 1/param.bounds.RightStance.inputs.Control.u.ub(4);
% R = diag([R_q1R,R_q2R,R_q1L,R_q2L]);                    % control penalty

% Output penalty
Qy = 10*diag([1 0 1]);

%% Objective Function
obj_vector = SX.zeros(N+1,1);    % initialize objective function (scalar output)
if mpc_info.type == "output"
    %     disp('*** Output tracking enabled! ***');
    for k = 1:N+1
        x_k = Xdec(:,k);   % current state
        u_k = Udec(:,k);   % current control
        y_k = leftToePos(x_k(1:n_q,k));
        x_ref_k = P((k-1)*(n_x+n_u)+(n_x+1):(k-1)*(n_x+n_u)+(n_x+n_x));
        u_ref_k = P((k-1)*(n_x+n_u)+(n_x+n_x+1):(k-1)*(n_x+n_u)+(n_x+n_x+n_u));
        y_ref_k = leftToePos(x_ref_k(1:n_q,k));
        % Running stage and control cost
        obj_vector(k) = (x_k - x_ref_k)'*Q*(x_k - x_ref_k) + ...
            (u_k - u_ref_k)'*R*(u_k - u_ref_k) + ...
            (y_k - y_ref_k)'*Qy*(y_k - y_ref_k);
    end
elseif mpc_info.type == "traj_track"
    %     disp('*** State trajectory tracking enabled! ***');
    for k = 1:N+1
        x_k = Xdec(:,k);   % current state
        u_k = Udec(:,k);   % current control
        x_ref_k = P((k-1)*(n_x+n_u)+(n_x+1):(k-1)*(n_x+n_u)+(n_x+n_x));
        u_ref_k = P((k-1)*(n_x+n_u)+(n_x+n_x+1):(k-1)*(n_x+n_u)+(n_x+n_x+n_u));
        % Running stage and control cost
        obj_vector(k) = (x_k-x_ref_k)'*Q*(x_k-x_ref_k) + ...
            (u_k-u_ref_k)'*R*(u_k-u_ref_k);
    end
end
obj = sum(obj_vector);

%% Equality Constraints (Dynamics)
g = [];                     % initialize equality constraints vector
g = [g; Xdec(:,1) - P(1:n_x)];   % initial condition constraints
for k = 1:N
    x_k = Xdec(:,k);                       % current state
    u_k = Udec(:,k);                       % current control
    x_k_1 = Xdec(:,k+1);
    if use_descriptor
        g = [g; E(x_k)*x_k_1 - E(x_k)*x_k - DT*H(x_k,u_k)]; % E*xdot = H --> E(xk)*x_k1 = E(xk)*xk + DT*H(xk)
    else
        xdot = f(x_k,u_k);                  % Nonlinear dynamics propogation
        x_k_1_euler = x_k + (DT*xdot);      % Forward Euler Discretization prediction
        g = [g; x_k_1 - x_k_1_euler];       % Update constraints vector
    end
end

