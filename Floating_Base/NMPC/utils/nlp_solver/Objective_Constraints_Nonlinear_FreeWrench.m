function [Xdec,Udec,P,obj,g,obj_vector] = Objective_Constraints_Nonlinear_FreeWrench(DT,N,n_q,n_x,n_u,f_nonlinear_partial,ddq_func,J_c,dJ_c,E_nonlinear,H_nonlinear,use_descriptor,param)
import casadi.*
f_partial = f_nonlinear_partial;
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
Q_vector = zeros(2*n_q,1);
for i = 1:n_q
Q_vector(i) = 10/param.bounds.RightStance.states.x.ub(i);
Q_vector(n_q+i) = 1/param.bounds.RightStance.states.dx.ub(i);
end
Q_vector(2*n_q+1) = 0;
Q_vector(2*n_q+2) = 0;
Q_vector(2*n_q+3) = 0;
Q_weights = diag([1, 1, 10, 1, 1, 1, 1,...
                  1, 1, 1, 1, 1, 1, 1,...
                  0, 0, 0]);
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
    x_ref_k = P((k-1)*(n_x+n_u)+(n_x+1):(k-1)*(n_x+n_u)+(n_x+n_x));
    u_ref_k = P((k-1)*(n_x+n_u)+(n_x+n_x+1):(k-1)*(n_x+n_u)+(n_x+n_x+n_u));
    % Running stage and control cost
    obj_vector(k) = (x_k-x_ref_k)'*Q*(x_k-x_ref_k) + ...
        (u_k-u_ref_k)'*R*(u_k-u_ref_k);
end
obj = sum(obj_vector);
%% Equality Constraints (Dynamics)
g = [];                     % initialize equality constraints vector
g = [g; Xdec(:,1)-P(1:n_x)];   % initial condition constraints
for k = 1:N
    q_k = Xdec(1:n_q,k);
    dq_k = Xdec(n_q+1:2*n_q,k);
    x_k_partial = [q_k; dq_k];
    x_k_1_partial = Xdec(1:2*n_q,k+1);                   % next state (from decision variables)
    x_k = Xdec(:,k);                       % current state
    u_k = Udec(:,k);                       % current control
    
    if use_descriptor
        g = [g; E(x_k)*x_k_1 - E(x_k)*x_k - DT*H(x_k,u_k)]; % E*xdot = H --> E(xk)*x_k1 = E(xk)*xk + DT*H(xk)
    else
        xdot_partial = f_partial(x_k,u_k);                  % Nonlinear dynamics propogation
        x_k_1_euler = x_k_partial + (DT*xdot_partial);      % Forward Euler Discretization prediction
        dynamics_constraint_partial = x_k_1_partial - x_k_1_euler;
        contact_constraint = J_c*ddq_func(x_k,u_k)+dJ_c*dq_k;
        
        
        g = [g; dynamics_constraint_partial];       % Update constraints vector
        g = [g; contact_constraint];   % Remember to increase args.ubg length
        g = [g; Xdec(2*n_q+2,k)];
    end
end

