function [t_next,x_next,u_sol,w_sol,ddq_sol] = ...
    Update_State(dyn_info,ctrl_info,ref_info,constr_info,sol_info)
import casadi.*
%% Extract inputs
% dyn_info
f_NL = dyn_info.func.f_NL;
f_NL_ext = dyn_info.func.f_NL_ext;
f_w = dyn_info.func.f_w;
f_ddq = dyn_info.func.f_ddq;
n_q = dyn_info.dim.n_q;
n_u = dyn_info.dim.n_u;

% ctrl_info
DT = ctrl_info.DT;
iter = ctrl_info.iter;

% sol_info
t_current = sol_info.t_init;
x_init = sol_info.x_init;
u_mpc = sol_info.u_sol_mpc;
w_mpc = sol_info.w_sol_mpc;
q_ref_current = sol_info.X_REF(1:n_q,1);
dq_ref_current = sol_info.X_REF(n_q+1:end,1);
ddq_ref_current = sol_info.ddh_d(:,1);

% state/control variables
q_current = x_init(1:n_q);
dq_current = x_init(n_q+1:end);
x_current = [q_current; dq_current];

%% Compute I/O control input if zero dynamics are linear (no NMPC control)
% h_q = q_current(4:end);       % just for reference
% dh_q = dq_current(4:end);

%% Check if torque is saturated
u_sol = u_mpc(:,1);
if constr_info.torque.sat
    u_max = constr_info.torque.sat*ones(n_u,1);
    u_min = -u_max;
    u_sol = min(max(u_sol,u_min),u_max);
end

%% Check Wrench Solution
w_sol = f_w(x_current,u_sol);
ddq_sol = full(f_ddq(x_current,u_sol,w_sol));

%% Check if External Force is applied
if ref_info.external_force && iter == 225
    f_nonlinear = f_NL_ext;
    w_ext = ref_info.external_force;
    disp("-> External Force of " + ref_info.external_force + " N applied at the Hip! (Iteration " + iter + ")");
else
    f_nonlinear = f_NL;
    w_ext = 0;
end

%% forward integrate
params_int = struct('f',        f_nonlinear,...
                    't_init',   t_current,...
                    'q_init',   q_current,...
                    'dq_init',  dq_current,...
                    'x_init',   x_current,...
                    'u',        u_sol,...
                    'w',        w_sol,...
                    'DT',       DT,...
                    'w_ext',    w_ext); % w_ext is the optional external force
params_int.type = ctrl_info.int;
[x_next,t_next] = Forward_Integrate(params_int);

end