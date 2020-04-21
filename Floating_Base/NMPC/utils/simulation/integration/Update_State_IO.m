function [t_next, x_next, u_sol, w_sol,ddq_sol] = ...
    Update_State_IO(dyn_info,ctrl_info,ref_info,constr_info,x_ref_current,ddy_ref_current,t_current,x_init,u_mpc,w_mpc)
import casadi.*
%% Extract inputs
% dyn_info
f_NL = dyn_info.func.f_NL;
f_NL_ext = dyn_info.func.f_NL_ext;
f_w = dyn_info.func.wrench;
f_ddq = dyn_info.func.f_ddq;
u_IO = dyn_info.func.u_IO;
u_IO_NMPC = dyn_info.func.u_IO_NMPC;
n_q = dyn_info.dim.n_q;
n_u = dyn_info.dim.n_u;
% check_ZD = dyn_info.ctrl.check_ZD;

% ctrl_info
DT = ctrl_info.DT;
IO_info = ctrl_info.IO_info;
IO_type = ctrl_info.IO_info.type;
iter = ctrl_info.iter;

% ref_info
s_func = ref_info.phase_based.s_func;
alpha_h = ref_info.phase_based.alpha_h;
alpha_dh = ref_info.phase_based.alpha_dh;
alpha_ddh = ref_info.phase_based.alpha_ddh;

% state/control variables
q_current = x_init(1:n_q);
dq_current = x_init(n_q+1:end);
x_current = [q_current; dq_current];
% u_current = u_init(:,1);
% w_current = w_init(:,1);
q_ref_current = x_ref_current(1:n_q,end);
dq_ref_current = x_ref_current(n_q+1:end,end);
ddq_ref_current = ddy_ref_current(:,end);

%% Compute I/O control input if zero dynamics are linear (no NMPC control)
% h_q = q_current(4:end);       % just for reference
% dh_q = dq_current(4:end);

    Kp = dyn_info.ctrl.Kp;
    Kd = dyn_info.ctrl.Kd;



if IO_type == "phase"
    s_current = full(s_func(q_current));
    h_d = bezier(alpha_h ,s_current);
    dh_d = bezier(alpha_dh ,s_current);
    ddh_d = bezier(alpha_ddh,s_current);
elseif IO_type == "time"
    h_d = q_ref_current(4:end);
    dh_d = dq_ref_current(4:end);
    ddh_d = ddq_ref_current;
end

if IO_info.linear
    u_sol = full(u_IO(q_current,dq_current,h_d,dh_d,ddh_d,Kp,Kd));
    w_sol = f_w(q_current,dq_current,u_sol);
else % NMPC zero dynamics in I/O controller
%     u_sol = full(u_IO_NMPC(q_current,dq_current,h_d,dh_d,ddh_d,u_mpc(:,1)));
    u_sol = full(u_IO_NMPC(q_current,dq_current,h_d,dh_d,ddh_d,Kp,Kd,u_mpc(:,1)));
    w_sol = w_mpc(:,1);
end

%% Check if torque is saturated
if constr_info.torque.sat && IO_info.linear
    u_max = constr_info.torque.sat*ones(n_u,1);
    u_min = -u_max;
    u_sol = min(max(u_sol,u_min),u_max);
end

w_sol = f_w(q_current,dq_current,u_sol);
ddq_sol = full(f_ddq(q_current,dq_current,u_sol,w_sol));
% if abs(full(w_check-w_sol)) > 0.1
%     error("Wrench computation not right")
% end
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
params_int = struct('q_init',q_current,'dq_init',dq_current,'u',u_sol,...
    'w',w_sol,'DT',DT,'w_ext',w_ext);
params_int.type = "Euler";
% params_int.type = "RK4";
if params_int.type == "Euler"
    [x_next,t_next] = Forward_Euler_Integrate(f_nonlinear,x_current,t_current,params_int);
elseif params_int.type == "RK4"
    [x_next,t_next] = Runge_Kutta_4_Integrate(f_nonlinear,x_current,t_current,params_int);
end

end