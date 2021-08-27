function [t_next, x_next] = ...
    Impact_Update_IO(dyn_info,ctrl_info,ref_info,traj_info,sol_info)
%% Extract inputs
% dyn_info
f_nonlinear = dyn_info.func.f_NL;
n_q = dyn_info.dim.n_q;
f_w = dyn_info.func.f_w;
n_q = dyn_info.dim.n_q;

% ctrl_info
DT = ctrl_info.DT;

% ref_info
step_height_dbl = ref_info.step_height_dbl;

% traj_info
num_impacts = traj_info.num_impacts;

% sol_info
t0 = sol_info.t_init;
x0 = sol_info.x_init;
u_mpc_first = sol_info.u_sol;
w_mpc_first = sol_info.w_sol;

%% Compute u_sol and w_sol
q0 = x0(1:n_q);
dq0 = x0(n_q+1:end);
x0 = [q0; dq0];
q_ref_current = sol_info.X_REF(1:n_q,1);
dq_ref_current = sol_info.X_REF(n_q+1:end,1);
ddq_ref_current = sol_info.ddh_d(:,1);

% h_q = q0(4:end);      % just for reference
% dh_q = dq0(4:end);
u_sol = u_mpc_first;
w_sol = w_mpc_first;
w_sol = f_w(x0,u_sol);

%% Root finding impact time
[DT_impact,height_impact,x_minus] = Bisection_Root_Finder(dyn_info,ref_info,ctrl_info,q0,dq0,u_sol,w_sol,num_impacts);
if DT_impact > DT
    error("Root finding method did not work. Guessed that impact occured outside of specified time interval. 0 <= t <= DT");
end

% Display impact height of swing foot
t_minus = t0 + DT_impact;
disp("-> Swing foot impacts step (" + height_impact + " m) at " + t_minus + " sec");

%% Apply Impact Map and Relabel
[x_plus, delta_w] = Impact_Map_Relabel(dyn_info,x_minus);
q_plus = x_plus(1:n_q);
dq_plus = x_plus(n_q+1:end);
w_plus = full(f_w(x_plus,u_sol));

%% Forward Integrate until t0 + DT has been reached
params_int = struct('f',        f_nonlinear,...
                    't_init',   t0+DT_impact,...
                    'q_init',   q_plus,...
                    'dq_init',  dq_plus,...,
                    'x_init',   x_plus,...
                    'u',        u_sol,...
                    'w',        w_plus,...
                    'DT',       (DT-DT_impact),...
                    'w_ext',    0);         % w_ext is the optional external force applied at hip
params_int.type = ctrl_info.int;

[x_next,t_next] = Forward_Integrate(params_int);

end












