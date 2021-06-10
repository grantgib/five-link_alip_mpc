function [DT_root, height_root, x_minus] = Bisection_Root_Finder(dyn_info,ref_info,ctrl_info,q0,dq0,u_sol,w_sol,num_impacts)
%% Extract Inputs
f_nonlinear = dyn_info.func.f_NL;
x0 = [q0; dq0];
t0 = 0; % time-invariant so start time doesn't matter for bisection 
step_height_dbl = ref_info.step_height_dbl;
pos_swingfoot = dyn_info.func.f_pos_swing;
DT = ctrl_info.DT;
params_int = struct('f',f_nonlinear,...
    't_init',t0,...
    'q_init',q0,...
    'dq_init',dq0,...
    'x_init',x0,...
    'u',u_sol,...
    'w',w_sol,...
    'w_ext',0,...
    'type',ctrl_info.int);
tol = 1e-10;
% time bounds
DT_min = 0;
DT_max = DT;

%% Bisection loop
while true
    DT_guess = DT_min + (DT_max - DT_min) / 2;
    params_int.DT = DT_guess;
    [x_guess,t_guess] = Forward_Integrate(params_int);
    value_guess = full(pos_swingfoot(x_guess(1:7)))' - step_height_dbl*(num_impacts+1);
    
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
x_root = full(pos_swingfoot(x_guess(1:7)))';
height_root = x_root(2);
x_minus = x_guess;

end