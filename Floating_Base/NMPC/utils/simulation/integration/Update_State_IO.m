function [t_next, x_next, u_sol, w_sol] = ...
    Update_State_IO(dyn_info,mpc_info,x_ref_current,ddy_ref_current,t_current,x_init,u_mpc,w_mpc)
import casadi.*
%% Extract inputs
% dyn_info
f_nonlinear = dyn_info.func.f_NL;
f_w = dyn_info.func.wrench;
u_IO_time = dyn_info.func.u_IO_time;
% w_IO_time = dyn_info.func.w_IO_time;

n_q = dyn_info.dim.n_q;
check_ZD = dyn_info.ctrl.check_ZD;

% mpc_info 
DT = mpc_info.DT;
N = mpc_info.N;

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

y_a = q_current(4:end);
dy_a = dq_current(4:end);
y_d = q_ref_current(4:end);
dy_d = dq_ref_current(4:end);
ddy_d = ddq_ref_current;

if dyn_info.IO_type == "time"
    u_sol = full(u_IO_time(q_current,dq_current,y_d,dy_d,ddy_d,Kp,Kd));
%     w_IO = full(w_IO_time(q_current,dq_current,y_d,dy_d,ddy_d,Kp,Kd));
else
%     u_sol = full(u_IO(q_current,dq_current,y_d,dy_d,Kp,Kd));
end
w_sol = f_w(q_current,dq_current,u_sol);

% disp("u_{IO} = "); disp(u_sol);
% disp("w_{IO} = "); disp(w_IO);
% disp("w_other = "); disp(w_sol);


%% forward integrate
% f_value = full(f_nonlinear(q_current,dq_current,u_sol,w_sol));
% x_next = x_current + (DT*f_value);    % forward euler
% t_next = t_current + DT;
params_int = struct('q_init',q_current,'dq_init',dq_current,'u',u_sol,...
    'w',w_sol,'DT',DT);
% params_int.type = "Euler";
params_int.type = "RK4";
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