function [t_next, x_next, u_sol, w_sol] = ...
    Update_State_IO(dyn_info,ctrl_info,ref_info,x_ref_current,ddy_ref_current,t_current,x_init,u_mpc,w_mpc)
import casadi.*
%% Extract inputs
% dyn_info
f_nonlinear = dyn_info.func.f_NL;
f_w = dyn_info.func.wrench;
u_IO = dyn_info.func.u_IO;
n_q = dyn_info.dim.n_q;
check_ZD = dyn_info.ctrl.check_ZD;

% ctrl_info 
DT = ctrl_info.DT;
IO_type = ctrl_info.IO_info.type;

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

%% Compute I/O control input u
if check_ZD
    Kp = 0;
    Kd = 0;
else
    Kp = dyn_info.ctrl.Kp;
    Kd = dyn_info.ctrl.Kd;
end
% h_q = q_current(4:end);       % just for reference 
% dh_q = dq_current(4:end);

if IO_type == "phase"
    s_current = full(s_func(q_current));
    h_d = bezier(alpha_h ,s_current);
    dh_d = bezier(alpha_dh ,s_current);
    ddh_d = bezier(alpha_ddh ,s_current);
elseif IO_type == "time"
    h_d = q_ref_current(4:end);
    dh_d = dq_ref_current(4:end);
    ddh_d = ddq_ref_current;
end
u_sol = full(u_IO(q_current,dq_current,h_d,dh_d,ddh_d,Kp,Kd));
w_sol = f_w(q_current,dq_current,u_sol);

%% forward integrate
% f_value = full(f_nonlinear(q_current,dq_current,u_sol,w_sol));
% x_next = x_current + (DT*f_value);    % forward euler
% t_next = t_current + DT;
params_int = struct('q_init',q_current,'dq_init',dq_current,'u',u_sol,...
    'w',w_sol,'DT',DT);
params_int.type = "Euler";
% params_int.type = "RK4";
if params_int.type == "Euler"
    [x_next,t_next] = Forward_Euler_Integrate(f_nonlinear,x_current,t_current,params_int);
elseif params_int.type == "RK4"
    [x_next,t_next] = Runge_Kutta_4_Integrate(f_nonlinear,x_current,t_current,params_int);
end

% display_io_update = 0;
% if display_io_update
%     disp("x_init (t = " + t_current + ") = "); disp(x_init);
%     disp("x_next (t = " + t_next + ") = "); disp(x_next);
%     disp("h = "); disp(h);
%     disp("dh = "); disp(dh);
%     disp("ddy = "); disp(ddy);
%     disp("u = "); disp(u_sol);
%     disp("=========== End of Update ======================");
% end
end