function [t_next, x_next] = ...
    Impact_Update_IO(dyn_info,mpc_info,ref_info,t0,x0,u_init,w_init,num_impacts,x_ref_current,ddq_ref)
%% Extract inputs
% dyn_info
f_nonlinear = dyn_info.func.f_NL;
n_q = dyn_info.dim.n_q;
f_w = dyn_info.func.wrench;
u_IO_time = dyn_info.func.u_IO_time;
n_q = dyn_info.dim.n_q;
check_ZD = dyn_info.ctrl.check_ZD;

% mpc_info
DT = mpc_info.DT;

% ref_info
step_height = double(ref_info.step_height);


%% Compute u_sol and w_sol
q0 = x0(1:n_q);
dq0 = x0(n_q+1:end);
q_ref_current = x_ref_current(1:n_q,end);
dq_ref_current = x_ref_current(n_q+1:end,end);
ddq_ref_current = ddq_ref(:,end);
if check_ZD
    Kp = 0;
    Kd = 0;
else
    Kp = dyn_info.ctrl.Kp;
    Kd = dyn_info.ctrl.Kd;
end
y_a = q0(4:end);
dy_a = dq0(4:end);
y_d = q_ref_current(4:end);
dy_d = dq_ref_current(4:end);
ddy_d = ddq_ref_current;

u_sol = full(u_IO_time(q0,dq0,y_d,dy_d,ddy_d,Kp,Kd));
w_sol = full(f_w(q0,dq0,u_sol));

%% Root finding impact time

f_value = full(f_nonlinear(q0,dq0,u_sol,w_sol));
y_func = @(delT) leftToeZ(x0(1:7)+(delT*f_value(1:7))) - step_height*(num_impacts+1);
DT_impact = fzero(y_func, DT/2);     % Matlab root finding function
if DT_impact > DT
    error("Root finding method did not work. Guessed that impact occured outside of specified time interval. 0 <= t <= DT");
end
% Display impact height of swing foot
height_impact = leftToeZ(x0(1:7)+(DT_impact*f_value(1:7)));
t_minus = t0 + DT_impact;
disp("-> Swing foot impacts step (" + height_impact + " m) at " + t_minus + " sec");

%% Forward Integrate until update
x_minus = x0 + DT_impact*f_value;

%% Apply Impact Map and Relabel
[x_plus, w_plus] = Impact_Map_Relabel(dyn_info,x_minus);
q_plus = x_plus(1:n_q);
dq_plus = x_plus(n_q+1:end);

%% Forward Integrate until t0 + DT has been reached
x_next = x_plus + (DT - DT_impact)*full(f_nonlinear(q_plus,dq_plus,u_sol,w_plus));
t_next = t0 + DT;

end