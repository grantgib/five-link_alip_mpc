function [nlp_info] = Objective_Constraints_Linear(dyn_info,ctrl_info,ref_info,constr_info,N)
import casadi.*
%% Extract variables
% dyn_info
n_q = dyn_info.dim.n_q;
n_x = dyn_info.dim.n_x;
n_u = dyn_info.dim.n_u;
n_w = dyn_info.dim.n_w;
f_linear = dyn_info.func.f_L;
f_w = dyn_info.func.wrench;
f_sw_pos = dyn_info.func.f_pos_swing;

% ctrl_info
lmpc_info = ctrl_info.lmpc_info;
DT = lmpc_info.DT;

% ref_info
full_ref = ref_info.full_ref;

%% Symbolics
dU_dec = SX.sym('dU',n_u,N+1);      % controls in R^N-1. subset of the decision variables
dX_dec = SX.sym('dX',n_x,N+1);  % A vector that represents the states over the optimization problem.
dW_dec = SX.sym('dW',n_w,N+1);
P_delta_xinit = SX.sym('P_delta_xinit',n_x,1);  % [delta_x_init]
P_xref = SX.sym('P_xref',n_x,N+1);              % [x_0ref | ... | x_Nref]
P_uref = SX.sym('P_uref',n_u,N+1);              % [u_0ref | ... | u_Nref]
P_wref = SX.sym('P_wref',n_w,N+1);              % [w_0ref | ... | w_Nref]

%% Define Penalties
% Bryson's rule (Normalize weights)
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
    zeros(n_q,n_q), C'*C];

% Terminal penalty
Q_term = 10*Q_mat;

% Control penalty
% R_vector = zeros(n_u,1);
% for i = 1:n_u
%     R_vector(i) = 1/full_ref.bounds.RightStance.inputs.Control.u.ub(i);
% end
% R_weights = 0.1*[1, 1, 1, 1]';
% R = R_weights.*R_vector;
% R_mat = diag(R);
R_mat = 1e-10*eye(n_u);

%% Equality Constraints (Dynamics)
g_constraints = [];                          % initialize equality constraints vector
g_constraints = [g_constraints; dX_dec(:,1) - P_delta_xinit];    % initial condition constraints
cost_running = SX.zeros(N+1,1);    % initialize objective function (scalar output)

for k = 1:N+1
    % delta syms
    delta_q_k = dX_dec(1:n_q,k);
    delta_dq_k = dX_dec(n_q+1:2*n_q,k);
    delta_x_k = [delta_q_k; delta_dq_k];          
    delta_u_k = dU_dec(:,k);
    delta_w_k = dW_dec(:,k); 
    
    % ref syms
    q_ref_k = P_xref(1:n_q,k);
    dq_ref_k = P_xref(n_q+1:end,k);
    u_ref_k = P_uref(:,k);
    w_ref_k = P_wref(:,k);
    
    % total syms
    q_k = q_ref_k + delta_q_k;
    dq_k = dq_ref_k + delta_dq_k;
    x_k = [q_k; dq_k];
    u_k = u_ref_k + delta_u_k;
    w_k = w_ref_k + delta_w_k;
     
    %% Contact constraint
    w_sym_k = f_w(q_k,dq_k,u_k);
    g_constraints = [g_constraints; w_k - w_sym_k];
    
    %% Forward Integration dynamics constraint
    if k < N+1
        delta_x_k_1 = dX_dec(:,k+1);
        delta_xdot = f_linear(q_k,dq_k,u_k,w_k,delta_q_k,delta_dq_k,delta_u_k,delta_w_k);          % Nonlinear dynamics propogation
        delta_x_k_1_euler = delta_x_k + (DT*delta_xdot);  % Forward Euler Discretization prediction
        g_constraints = [g_constraints; delta_x_k_1 - delta_x_k_1_euler];   % Update constraints vector
    end
    
    %% Objective
    if k < N+1
        cost_running(k) = delta_x_k'*Q_mat*delta_x_k + ...
            delta_u_k'*R_mat*delta_u_k;
    else
        cost_terminal = delta_x_k'*Q_term*delta_x_k;
    end
end
cost_sum = sum(cost_running) + cost_terminal;

%% Phased swing foot height Constraints
if constr_info.obstacle.isObstacle
    for k = 1:N+1
        delta_q_k = dX_dec(1:n_q,k);
        q_ref_k = P_xref(1:n_q,k);
        q_k = q_ref_k + delta_q_k;
        sw_k = f_sw_pos(q_k);
        z_sw_k = sw_k(2);
        g_constraints = [g_constraints; z_sw_k];
    end
end

%% Ground Reaction Force Constraint
if constr_info.grf.active
    for k = 1:N+1
        delta_w_k = dW_dec(:,k);
        w_k = w_ref_k + delta_w_k;
        fric = w_k(1)./w_k(2);
        g_constraints = [g_constraints; fric];
    end
end

%% Torque Saturation
if constr_info.torque.sat
    for k = 1:N+1
        delta_u_k = dU_dec(:,k);
        u_ref_k = P_uref(:,k);
        u_k = u_ref_k + delta_u_k;
        g_constraints = [g_constraints; u_k];
    end
end

%% Return output
nlp_info = struct('dX_dec', dX_dec,...
    'dU_dec',               dU_dec,...
    'dW_dec',               dW_dec,...
    'P_delta_xinit',        P_delta_xinit,...
    'P_xref',               P_xref,...
    'P_uref',               P_uref,...
    'P_wref',               P_wref,...
    'g_constraints',        g_constraints,...
    'cost_sum',             cost_sum,...
    'cost_running',         cost_running,...
    'cost_terminal',        cost_terminal,...
    'Q_mat',                Q_mat,...
    'R_mat',                R_mat,...
    'C_mat',                C);
end











