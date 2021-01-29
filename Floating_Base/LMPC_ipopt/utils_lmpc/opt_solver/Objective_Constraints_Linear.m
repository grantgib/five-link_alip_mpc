function [nlp_info,g_constraints] = Objective_Constraints_Linear(dyn_info,ctrl_info,ref_info,constr_info,N)
import casadi.*
%% Extract variables
% dyn_info
n_q = dyn_info.dim.n_q;
n_x = dyn_info.dim.n_x;
n_u = dyn_info.dim.n_u;
n_w = dyn_info.dim.n_w;
f_linear = dyn_info.func.f_L;
f_w_linear = dyn_info.func.f_w_linear;
f_pos_swing = dyn_info.func.f_pos_swing;
f_impact_relabel_linear = dyn_info.func.f_impact_relabel_linear;

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
% State penalty
% C = [0 0 0 1 0 0 0;     % stance thigh
%      0 0 1 1 1 0 0;     % torso, stance leg together
%      0 0 0 0 0 1 0;     % swing leg
%      0 0 0 0 0 0 1];    % swing leg
C = [0 0 1 1 1 0 0;     % stance thigh
     0 0 0 0 1 0 0;     % torso, stance leg together
     0 0 0 0 0 1 0;     % swing thigh
     0 0 0 0 0 0 1];    % swing leg
Q_mat = [C'*C, zeros(n_q,n_q);
    zeros(n_q,n_q), C'*C];

% Terminal penalty
Q_term = 1e4*Q_mat;

% Control penalty
R_mat = 1e-10*eye(n_u);

%% Equality Constraint (Initial Condition)
constr_init = dX_dec(:,1) - P_delta_xinit;    % initial condition constraints

%% Equality Constraint (Dynamics)
constr_dyn = cell(N+1,1);
for imp = 1:N+1
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
        x_ref_k = [q_ref_k; dq_ref_k];
        u_ref_k = P_uref(:,k);
        w_ref_k = P_wref(:,k);
               
        % Forward Integration dynamics constraint
        if k < N+1
            delta_x_k_1 = dX_dec(:,k+1);
            delta_xdot = f_linear(x_ref_k,u_ref_k,w_ref_k,delta_x_k,delta_u_k,delta_w_k);           % Linear dynamics propogation
            delta_x_k_1_euler = delta_x_k + (DT*delta_xdot);                                            % Forward Euler Discretization prediction
            delta_x_k_1_impact = f_impact_relabel_linear(x_ref_k,delta_x_k);
            if k == (imp-1)
                constr_dyn{imp} = [constr_dyn{imp}; delta_x_k_1 - delta_x_k_1_impact];   
            else
                constr_dyn{imp} = [constr_dyn{imp}; delta_x_k_1 - delta_x_k_1_euler];   
            end
        end 
    end
    disp("g_constraints. Impact in prediction horizon at N = " + (imp-1));
end
%% Equality Constraint (Wrench & Cost Function)
cost_running = SX.zeros(N+1,1);    % initialize objective function (scalar output)
constr_wrench = [];
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
    x_ref_k = [q_ref_k; dq_ref_k];
    u_ref_k = P_uref(:,k);
    w_ref_k = P_wref(:,k);
    
    % Contact constraint
    delta_w_sym_k = f_w_linear(x_ref_k,u_ref_k,delta_x_k,delta_u_k);
    constr_wrench = [constr_wrench; delta_w_k - delta_w_sym_k];
    
    % Objective
    if k < N+1
        cost_running(k) = delta_x_k'*Q_mat*delta_x_k + ...
                          delta_u_k'*R_mat*delta_u_k;
    else
        cost_terminal = delta_x_k'*Q_term*delta_x_k;
    end
end
cost_sum = sum(cost_running) + cost_terminal;

%% Compile Equality Constraints
g_constraints = cell(N+1,1);
for imp = 1:N+1
    g_constraints{imp} = [constr_init;
        constr_dyn{imp};
        constr_wrench];
end

%% Phased swing foot height Constraints
if constr_info.obstacle.isObstacle
    for k = 1:N+1
        delta_q_k = dX_dec(1:n_q,k);
        q_ref_k = P_xref(1:n_q,k);
        q_k = q_ref_k + delta_q_k;
        sw_k = f_pos_swing(q_k);
        z_sw_k = sw_k(2);
        for imp = 1:N+1
            g_constraints{imp} = [g_constraints{imp}; z_sw_k];
        end
    end
end

%% Ground Reaction Force Constraint
if constr_info.grf.active
    for k = 1:N+1
        delta_w_k = dW_dec(:,k);
        w_k = w_ref_k + delta_w_k;
        fric = w_k(1)./w_k(2);
        for imp = 1:N+1
            g_constraints{imp} = [g_constraints{imp}; fric];
        end
    end
end

%% Torque Saturation
if constr_info.torque.sat
    for k = 1:N+1
        delta_u_k = dU_dec(:,k);
        u_ref_k = P_uref(:,k);
        u_k = u_ref_k + delta_u_k;
        for imp = 1:N+1
            g_constraints{imp} = [g_constraints{imp}; u_k];
        end
    end
end

%% Return output
nlp_info = struct('dX_dec',         dX_dec,...
                  'dU_dec',         dU_dec,...
                  'dW_dec',         dW_dec,...
                  'P_delta_xinit',  P_delta_xinit,...
                  'P_xref',         P_xref,...
                  'P_uref',         P_uref,...
                  'P_wref',         P_wref,...
                  'cost_sum',       cost_sum,...
                  'cost_running',   cost_running,...
                  'cost_terminal',  cost_terminal,...
                  'Q_mat',          Q_mat,...
                  'R_mat',          R_mat,...
                  'C_mat',          C);
end











