function [t_next, x_next] = ...
    Impact_Update_IO(dyn_info,ctrl_info,ref_info,traj_info,sol_info)
%% Extract inputs
% dyn_info
n_q = dyn_info.dim.n_q;
f_nonlinear = dyn_info.func.f_NL;
f_w = dyn_info.func.f_w;

% ctrl_info
DT = ctrl_info.DT;

% traj_info
num_impacts = traj_info.num_impacts;

% sol_info
t_current = sol_info.t_init;
x_current = sol_info.x_init;
q_current = x_current(1:n_q);
q_dot_current = x_current(n_q+1:end);
u_sol = sol_info.u_sol(:,1);
w_sol = sol_info.w_sol(:,1);

%% Root finding impact time
[DT_impact,height_impact,x_minus] = Bisection_Root_Finder(dyn_info,ref_info,ctrl_info,x_current,u_sol,w_sol,num_impacts);
if DT_impact > DT
    error("Root finding method did not work. Guessed that impact occured outside of specified time interval. 0 <= t <= DT");
end

% Display impact height of swing foot
t_minus = t_current + DT_impact;
disp("-> Swing foot impacts step (" + height_impact + " m) at " + t_minus + " sec");

%% Apply Impact Map and Relabel
[x_plus, delta_w] = Impact_Map_Relabel(dyn_info,x_minus);
q_plus = x_plus(1:n_q);
q_dot_plus = x_plus(n_q+1:end);
w_plus = full(f_w(x_plus,u_sol));

%% Forward Integrate until t0 + DT has been reached
params_int = struct(...
    'f',            f_nonlinear,...
    't_init',       t_current+DT_impact,...
    'q_init',       q_plus,...
    'q_dot_init',   q_dot_plus,...,
    'x_init',       x_plus,...
    'u',            u_sol,...
    'w',            w_plus,...
    'DT',           (DT-DT_impact),...
    'w_ext',        0);         % w_ext is the optional external force applied at hip
params_int.type = ctrl_info.int;

[x_next,t_next] = Forward_Integrate(params_int);

end












