function [t_next,x_next,impact_occurred] = ...
    Update_State_Linear(dyn_info,ctrl_info,ref_info,constr_info,sol_info,traj_info,params)
import casadi.*
%% Extract inputs
% params
y_sw_traj = params.y_sw_traj;

% dyn_info
f_linear = dyn_info.func.f_L;
f_w = dyn_info.func.wrench;
f_pos_swingfoot = dyn_info.func.f_pos_swing;
n_q = dyn_info.dim.n_q;
n_u = dyn_info.dim.n_u;

% ctrl_info
DT = ctrl_info.DT;
N = ctrl_info.lmpc_info.N;
int_type = ctrl_info.int;

% ref_info
s_func = ref_info.phase_based.s_func;

% sol_info
t_current = sol_info.t_init;
delta_x_init = sol_info.delta_x_init;
delta_u_sol = sol_info.delta_u_sol_mpc(:,1);
delta_w_sol = sol_info.delta_w_sol_mpc(:,1);

x_init = sol_info.x_init;
u_sol = sol_info.u_sol_mpc(:,1);
w_sol = sol_info.w_sol_mpc(:,1);

%% Check if torque is saturated
if constr_info.torque.sat
    u_max = constr_info.torque.sat*ones(n_u,1);
    u_min = -u_max;
    u_sol = min(max(u_sol,u_min),u_max);
end

%% Compute actual wrench
w_sol = full(f_w(x_init(1:n_q),x_init(n_q+1:end),u_sol));

%% Check if External Force is applied
% if ref_info.external_force && iter == 225
%     f_nonlinear = f_NL_ext;
%     w_ext = ref_info.external_force;
%     disp("-> External Force of " + ref_info.external_force + " N applied at the Hip! (Iteration " + iter + ")");
% else
%     f_nonlinear = f_L;
%     w_ext = 0;
% end

%% forward integrate
params_int = struct('f',                f_linear,...
                    't_init',           t_current,...
                    'delta_q_init',     delta_x_init(1:n_q),...
                    'delta_dq_init',    delta_x_init(n_q+1:end),...
                    'delta_x_init',     delta_x_init,...
                    'delta_u',          delta_u_sol,...
                    'delta_w',          delta_w_sol,...
                    'q_init',           x_init(1:n_q),...
                    'dq_init',          x_init(n_q+1:end),...
                    'x_init',           x_init,...
                    'u',                u_sol,...
                    'w',                w_sol,...
                    'DT',               DT,...
                    'w_ext',            zeros(2,1)); % w_ext is the optional external force
params_int.type = int_type;
[t_next,delta_x_next] = Forward_Integrate_Linear(params_int);
x_next = sol_info.X_REF(:,2) + delta_x_next;

%% Check for impact and apply different dynamics if true
y_sw_current = full(f_pos_swingfoot(x_next(1:7)))';
if y_sw_current(2) < (traj_info.num_impacts+1)*ref_info.step_height_dbl &&...  % height at stairs
    y_sw_current(2) - y_sw_traj(2,end) < 0 &&...                                     % velocity is negative
    y_sw_traj(2,end) > (traj_info.num_impacts+1)*ref_info.step_height_dbl            % previous swing foot height was above the stair (fixes conditional when you switch leg coordinates)
    
    disp("-> Impact occured, find when it happened!");
    disp("NOT WORRKINGGGGGGGGG!!!!!!!!!!!!!!!!!!!!!!!!!!!");
    [t_next,x_next] = Impact_Update(dyn_info,ctrl_info,ref_info,traj_info,sol_info);
    impact_occurred = 1;
else
    impact_occurred = 0;
end


end