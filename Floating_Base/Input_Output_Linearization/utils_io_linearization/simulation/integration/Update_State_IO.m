function [t_next, x_next] = Update_State_IO(dyn_info,ctrl_info,sol_info)
import casadi.*
%% Extract inputs
% dyn_info
n_q = dyn_info.dim.n_q;
f_nonlinear = dyn_info.func.f_NL;

% ctrl_info
DT = ctrl_info.DT;
iter = ctrl_info.iter;

% sol_info
t_current = sol_info.t_init;
x_init = sol_info.x_init;
u_sol = sol_info.u_sol(:,1);
w_sol = sol_info.w_sol(:,1);

% state/control variables
q_current = x_init(1:n_q);
q_dot_current = x_init(n_q+1:end);
x_current = [q_current; q_dot_current];

%% forward integrate
params_int = struct(...
    'f',            f_nonlinear,...
    't_init',       t_current,...
    'q_init',       q_current,...
    'q_dot_init',   q_dot_current,...
    'x_init',       x_current,...
    'u',            u_sol,...
    'w',            w_sol,...
    'DT',           DT,...
    'w_ext',        0); % w_ext is the optional external force
params_int.type = ctrl_info.int;
[x_next,t_next] = Forward_Integrate(params_int);

end