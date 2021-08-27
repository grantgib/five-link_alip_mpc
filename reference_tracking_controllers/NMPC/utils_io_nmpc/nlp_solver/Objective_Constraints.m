function [nlp_info,g_constraints] = Objective_Constraints(dyn_info,ctrl_info,ref_info,constr_info,N)
import casadi.*
%% Extract variables
% dyn_info
n_q = dyn_info.dim.n_q;
n_x = dyn_info.dim.n_x;
n_u = dyn_info.dim.n_u;
n_w = dyn_info.dim.n_w;
n_h = dyn_info.dim.n_h;
f_NL = dyn_info.func.f_NL;
f_w = dyn_info.func.f_w;
f_pos_sw = dyn_info.func.f_pos_swing;
f_impact_relabel = dyn_info.func.f_impact_relabel;

% ctrl_info
mpc_info = ctrl_info.mpc_info;
DT = mpc_info.DT;

% ref_info
full_ref = ref_info.full_ref;

%% Symbolics
U_dec = SX.sym('U',n_u,N+1);      % controls in R^N-1. subset of the decision variables
X_dec = SX.sym('X',n_x,N+1);  % A vector that represents the states over the optimization problem.
W_dec = SX.sym('W',n_w,N+1);
P_xinit = SX.sym('P_xinit',n_x,1);  % reference states/controls[x_init]
P_xref = SX.sym('P_xref',n_x,N+1);  % [x_0ref | x_1ref | ... | x_Nref]
P_uref = SX.sym('P_uref',n_u,N+1);  % [u_0ref | u_1ref | ... | u_Nref]

%% Define Penalties
C = [0 0 0 1 0 0 0;     % stance thigh
     0 0 1 1 1 0 0;     % torso, stance leg together
     0 0 0 0 0 1 0;     % swing leg
     0 0 0 0 0 0 1];    % swing leg
% Q_virt = eye(2*n_h);
Q_mat = [C'*C, zeros(n_q,n_q);
         zeros(n_q,n_q), C'*C];

% Control penalty
R_vector = zeros(n_u,1);
for i = 1:n_u
    R_vector(i) = 1/full_ref.bounds.RightStance.inputs.Control.u.ub(i);
end
R_weights = 0.1*[1, 1, 1, 1]';
R = R_weights.*R_vector;
R_mat = diag(R);

% Terminal state penalty (LQR of closed-loop linear system y'' = v)
% Q_term = CLF_Terminal_Penalty(Q_mat,R_mat);
Q_term = 1e4*Q_mat;
%% Equality Constraint (Initial Condition)
constr_init = X_dec(:,1) - P_xinit;    % initial condition constraints

%% Equality Constraint (Dynamics)
constr_dyn = cell(N+1,1);
for imp = 1:N+1  % impact in prediction horizon (0 means no impact and a number corresponds to where in the prediction horizon an impact occurs   
    constr_dyn{imp} = [];
    for k = 1:N+1
        q_k = X_dec(1:n_q,k);
        dq_k = X_dec(n_q+1:2*n_q,k);
        x_k = [q_k; dq_k];            % current state
        u_k = U_dec(:,k);               % current control
        w_k = W_dec(:,k);              % current wrench     
        
        % Forward Integration dynamics constraint
        if k < N+1
            x_k_1 = X_dec(:,k+1);
            xdot = f_NL(x_k,u_k,w_k);       % Nonlinear dynamics propogation
            x_k_1_euler = x_k + (DT*xdot);  % Forward Euler Discretization prediction
            x_k_1_impact = f_impact_relabel(x_k);
            if k == (imp-1)
                constr_dyn{imp} = [constr_dyn{imp}; x_k_1 - x_k_1_impact];
            else   
                constr_dyn{imp} = [constr_dyn{imp}; x_k_1 - x_k_1_euler];   % Update constraints vector
            end
        end
    end
end
%% Wrench Constraint & Objective function
cost_running = SX.zeros(N+1,1);    % initialize objective function (scalar output)
constr_wrench = [];
for k = 1:N+1
    q_k = X_dec(1:n_q,k);
    dq_k = X_dec(n_q+1:2*n_q,k);
    x_k = [q_k; dq_k];              % current state
    u_k = U_dec(:,k);               % current control
    w_k = W_dec(:,k);               % current wrench
    x_ref_k = P_xref(:,k);
    u_ref_k = P_uref(:,k);
        
    % Contact constraint
    w_sym_k = f_w(x_k,u_k);
    constr_wrench = [constr_wrench; w_k - w_sym_k];
    
    % Objective
    if k < N+1
        % Running stage and control cost (u is now a delta_u added to
        % nominal IO controller so no reference dependece on u)
        cost_running(k) = (x_k - x_ref_k)'*Q_mat*(x_k - x_ref_k) + ...
                          (u_k - u_ref_k)'*R_mat*(u_k - u_ref_k);
    else
        cost_terminal = (x_k - x_ref_k)'*Q_term*(x_k - x_ref_k);
    end
end
cost_sum = sum(cost_running) + cost_terminal;

%% Compile equality constraints
g_constraints = cell(N+1,1);
for imp = 1:N+1
g_constraints{imp} = [constr_init;
                      constr_dyn{imp};
                      constr_wrench];
end

%% Phased swing foot height Constraints
if constr_info.obstacle.isObstacle
    for k = 1:N+1
        q_k = X_dec(1:n_q,k);
        sw_k = f_pos_sw(q_k);
        z_sw_k = sw_k(2);
        for imp = 1:N+1
            g_constraints{imp} = [g_constraints{imp}; z_sw_k];
        end
    end
end

%% Ground Reaction Force Constraint
if constr_info.grf.active
    for k = 1:N+1
        w_k = W_dec(:,k);
        fric = w_k(1)./w_k(2);
        for imp = 1:N+1
            g_constraints{imp} = [g_constraints{imp}; fric];
        end
    end
end

%% Torque Saturation
if constr_info.torque.sat
    for k = 1:N+1
        q_k = X_dec(1:n_q,k);
        dq_k = X_dec(n_q+1:2*n_q,k);
        x_k = [q_k; dq_k];              % current state
        u_k = U_dec(:,k);               % current control
        
        for imp = 1:N+1
            g_constraints{imp} = [g_constraints{imp}; u_k];
        end
    end
end

%% Return output
nlp_info = struct('X_dec',          X_dec,...
                  'U_dec',          U_dec,...
                  'W_dec',          W_dec,...
                  'P_xinit',        P_xinit,...
                  'P_xref',         P_xref,...
                  'P_uref',         P_uref,...
                  'cost_sum',       cost_sum,...
                  'cost_running',   cost_running,...
                  'cost_terminal',  cost_terminal,...
                  'Q_mat',          Q_mat,...
                  'R_mat',          R_mat,...
                  'C_mat',          C);
end











