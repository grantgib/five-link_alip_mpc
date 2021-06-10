 function [t_next, x_next] = ...
    Impact_Update(dyn_info,ctrl_info,ref_info,traj_info,sol_info,params_int)
%% Extract inputs
% dyn_info
f_nonlinear = dyn_info.func.f_NL;
n_q = dyn_info.dim.n_q;
f_w = dyn_info.func.wrench;

% ctrl_info
DT = ctrl_info.DT;
int_type = ctrl_info.int;

% ref_info
s_func = ref_info.phase_based.s_func;
step_height_dbl = ref_info.step_height_dbl;

% traj_info
num_impacts = traj_info.num_impacts;

% sol_info
t0 = sol_info.t_init;
x0 = sol_info.x_init;
u_sol = sol_info.u_sol_mpc(:,1);

%% Compute actual wrench
q0 = x0(1:n_q);
dq0 = x0(n_q+1:end);
w_sol = f_w(q0,dq0,u_sol);

%% Root finding impact time
[DT_impact,height_impact,x_minus] = Bisection_Root_Finder(dyn_info,ref_info,ctrl_info,num_impacts,params_int);
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
w_plus = full(f_w(q_plus,dq_plus,u_sol));

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
params_int.type = int_type;

[t_next,x_next] = Forward_Integrate(params_int);

end












