function [t_next, x_next] = ...
    Impact_Update_IO(dyn_info,ctrl_info,ref_info,t0,x0,u_mpc,w_mpc,num_impacts,x_ref_current,ddq_ref)
%% Extract inputs
% dyn_info
f_nonlinear = dyn_info.func.f_NL;
n_q = dyn_info.dim.n_q;
f_w = dyn_info.func.wrench;
u_IO = dyn_info.func.u_IO;
u_IO_NMPC = dyn_info.func.u_IO_NMPC;
n_q = dyn_info.dim.n_q;

% ctrl_info
DT = ctrl_info.DT;
IO_type = ctrl_info.IO_info.type;
IO_info = ctrl_info.IO_info;

% ref_info
s_func = ref_info.phase_based.s_func;
alpha_h = ref_info.phase_based.alpha_h;
alpha_dh = ref_info.phase_based.alpha_dh;
alpha_ddh = ref_info.phase_based.alpha_ddh;
step_height = double(ref_info.step_height);


%% Compute u_sol and w_sol
q0 = x0(1:n_q);
dq0 = x0(n_q+1:end);
q_ref_current = x_ref_current(1:n_q,end);
dq_ref_current = x_ref_current(n_q+1:end,end);
ddq_ref_current = ddq_ref(:,end);

% h_q = q0(4:end);      % just for reference
% dh_q = dq0(4:end);
    Kp = dyn_info.ctrl.Kp;
    Kd = dyn_info.ctrl.Kd;
if IO_type == "phase"
    s_current = full(s_func(q0));
    h_d = bezier(alpha_h ,s_current);
    dh_d = bezier(alpha_dh ,s_current);
    ddh_d = bezier(alpha_ddh ,s_current);
elseif IO_type == "time"
    h_d = q_ref_current(4:end);
    dh_d = dq_ref_current(4:end);
    ddh_d = ddq_ref_current;
end

if IO_info.linear
    u_sol = full(u_IO(q0,dq0,h_d,dh_d,ddh_d,Kp,Kd));
    w_sol = full(f_w(q0,dq0,u_sol));
else % NMPC zero dynamics used in I/O controller
%     u_sol = full(u_IO_NMPC(q0,dq0,h_d,dh_d,ddh_d,u_mpc));
    u_sol = full(u_IO_NMPC(q0,dq0,h_d,dh_d,ddh_d,Kp,Kd,u_mpc));
    w_sol = w_mpc;
end
w_sol = f_w(q0,dq0,u_sol);
% if abs(full(w_check-w_sol)) > 1e-5
%     error("Wrench computation not right")
% end

%% There could be an issue that the controller does not change immediately after impact.
% Current Implementation makes sense for real world implementation but might be inducing too much error currently

%% Root finding impact time
f_value = full(f_nonlinear(q0,dq0,u_sol,w_sol));
y_func = @(delT) leftToeZ(x0(1:7)+(delT*f_value(1:7))) - step_height*(num_impacts+1);
options = optimset('Display','iter'); % show iterations
[DT_impact,fval,exitflag,output] = fzero(y_func,DT/4);     % Matlab root finding function
if DT_impact > DT && y_func(DT) < 1e-5
    DT_impact = DT;
elseif DT_impact > DT
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