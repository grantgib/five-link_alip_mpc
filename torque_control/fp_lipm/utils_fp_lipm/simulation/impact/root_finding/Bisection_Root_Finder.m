function [DT_root, height_root, x_minus] = ...
    Bisection_Root_Finder(dyn_info,ref_info,ctrl_info,x_init,u_sol,w_sol,num_impacts)
%% Extract Inputs
% dyn_info
n_q = dyn_info.dim.n_q;
f_pos_swing = dyn_info.func.f_pos_swing;
f_nonlinear = dyn_info.func.f_NL;

% ctrl_info
DT = ctrl_info.DT;

% ref_info
step_height_dbl = ref_info.step_height_dbl;

% time bounds
t_init = 0;   
DT_min = 0;
DT_max = DT;

params_int = struct(...
    'f',            f_nonlinear,...
    't_init',       t_init,...
    'q_init',       x_init(1:n_q),...
    'q_dot_init',   x_init(n_q+1:end),...
    'x_init',       x_init,...
    'u',            u_sol,...
    'w',            w_sol,...
    'w_ext',        0,...
    'type',         ctrl_info.int);

%% Bisection loop
tol = 1e-3;
while true
    DT_guess = DT_min + (DT_max - DT_min) / 2;
    params_int.DT = DT_guess;
    [x_guess,t_guess] = Forward_Integrate(params_int);
    value_guess = full(f_pos_swing(x_guess(1:7)))' - step_height_dbl*(num_impacts+1);
    
    if abs(value_guess(2)) <= tol
        break;
    elseif value_guess(2) > 0
        DT_min = DT_guess;
    else
        DT_max = DT_guess;    
    end
end

%% Return correct output
DT_root = DT_guess;
x_root = full(f_pos_swing(x_guess(1:7)))';
height_root = x_root(2);
x_minus = x_guess;

end