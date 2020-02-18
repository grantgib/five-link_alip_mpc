function [Xdec,Udec,P,obj,g,obj_vector] = Objective_Constraints_Nonlinear(DT,N,n_x,n_u,f_nonlinear,E_nonlinear,H_nonlinear,use_descriptor,param)
import casadi.*
f = f_nonlinear;
E = E_nonlinear;
H = H_nonlinear;
%% Symbolics
Udec = SX.sym('U',n_u,N+1);      % controls in R^N-1. subset of the decision variables
Xdec = SX.sym('X',n_x,N+1);  % A vector that represents the states over the optimization problem.
P = SX.sym('P',n_x + (N+1)*(n_x + n_u));
% P = [xinit | x_0ref | u_0ref | x_1ref | u_1ref | ... | x_Nref | u_Nref]
% parameters (which include the initial state and the reference along the
% predicted trajectory (reference states and reference controls))

%% Define Penalties
% Bryson's rule
n_q = n_x/2;
Q_vector = zeros(n_x,1);
for i = 1:n_q
Q_vector(i) = 10/param.bounds.RightStance.states.x.ub(i);
Q_vector(n_q+i) = 1/param.bounds.RightStance.states.dx.ub(i);
end
Q_weights = diag([1, 1, 10, 1, 1, 1, 1,...
                  1, 1, 1, 1, 1, 1, 1]);
Q = Q_weights*diag(Q_vector);

% Control penalty
R_q1R = 1/param.bounds.RightStance.inputs.Control.u.ub(1);
R_q2R = 1/param.bounds.RightStance.inputs.Control.u.ub(2);
R_q1L = 1/param.bounds.RightStance.inputs.Control.u.ub(3);
R_q2L = 1/param.bounds.RightStance.inputs.Control.u.ub(4);

% Diagonal matrix form
R = diag([R_q1R,R_q2R,R_q1L,R_q2L]);                    % control penalty
%% Objective Function
obj_vector = SX.zeros(N+1,1);    % initialize objective function (scalar output)
for k = 1:N+1
    x_k = Xdec(:,k);   % current state
    u_k = Udec(:,k);   % current control
    % Running stage and control cost
    obj_vector(k) = (x_k-P((k-1)*(n_x+n_u)+(n_x+1):(k-1)*(n_x+n_u)+(n_x+n_x)))'*Q*(x_k-P((k-1)*(n_x+n_u)+(n_x+1):(k-1)*(n_x+n_u)+(n_x+n_x))) + ...
        (u_k-P((k-1)*(n_x+n_u)+(n_x+n_x+1):(k-1)*(n_x+n_u)+(n_x+n_x+n_u)))'*R*(u_k-P((k-1)*(n_x+n_u)+(n_x+n_x+1):(k-1)*(n_x+n_u)+(n_x+n_x+n_u)));
end
obj = sum(obj_vector);
%% Equality Constraints (Dynamics)
g = [];                     % initialize equality constraints vector
g = [g; Xdec(:,1)-P(1:n_x)];   % initial condition constraints
for k = 1:N
    x_k = Xdec(:,k);                       % current state
    u_k = Udec(:,k);                       % current control
    x_k_1 = Xdec(:,k+1);                   % next state (from decision variables)
    
    if use_descriptor
        g = [g; E(x_k)*x_k_1 - E(x_k)*x_k - DT*H(x_k,u_k)]; % E*xdot = H --> E(xk)*x_k1 = E(xk)*xk + DT*H(xk)
    else
        xdot = f(x_k,u_k);                  % Nonlinear dynamics propogation
        x_k_1_euler = x_k + (DT*xdot);      % Forward Euler Discretization prediction
        g = [g; x_k_1 - x_k_1_euler];       % Update constraints vector
    end
end

