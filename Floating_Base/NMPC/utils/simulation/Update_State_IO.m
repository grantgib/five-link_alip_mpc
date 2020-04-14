function [t_next, x_next, u_sol, w_sol] = ...
    Update_State_IO(dyn_info,mpc_info,x_ref_current,t_current,x_init,u_mpc,w_mpc)
import casadi.*
%% Extract inputs
% dyn_info
f_nonlinear = dyn_info.func.f_NL;
f_w = dyn_info.func.wrench;
u_IO = dyn_info.func.u_IO;
f_L2fh = dyn_info.func.L2fh;
f_LgLfh = dyn_info.func.LgLfh;
f_v = dyn_info.func.v;
f_h = dyn_info.func.h;
f_dh = dyn_info.func.dh;
n_q = dyn_info.dim.n_q;


% mpc_info
if isempty(mpc_info)
    DT = 0.005;
else
    DT = mpc_info.DT;
    N = mpc_info.N;
end

% state/control variables
q_current = x_init(1:n_q);
dq_current = x_init(n_q+1:end);
x_current = [q_current; dq_current];
% u_current = u_init(:,1);
% w_current = w_init(:,1);
q_ref_current = x_ref_current(1:n_q,end);
dq_ref_current = x_ref_current(n_q+1:end,end);

%% Compute I/O control input u
check_zero_dynamics = 0;
if check_zero_dynamics
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
u_sol = full(u_IO(q_current,dq_current,y_d,dy_d,Kp,Kd));

L2fh = full(f_L2fh(q_current,dq_current,y_d));
LgLfh = full(f_LgLfh(q_current,dq_current,y_d));
v = full(f_v(q_current,dq_current,y_d,dy_d,Kp,Kd));
h = full(f_h(q_current,y_d));
dh = full(f_dh(dq_current,dy_d));
ddy = L2fh + LgLfh*u_sol;

%% forward integrate
w_sol = full(f_w(q_current,dq_current,u_sol));
f_value = full(f_nonlinear(q_current,dq_current,u_sol,w_sol));

x_next = x_current + (DT*f_value);    % forward euler
t_next = t_current + DT;

disp("x_init (t = " + t_current + ") = "); disp(x_init);
disp("x_next (t = " + t_next + ") = "); disp(x_next);
disp("h = "); disp(h);
disp("dh = "); disp(dh);
disp("ddy = "); disp(ddy);
disp("u = "); disp(u_sol);
disp("=========== End of Update ======================");

end