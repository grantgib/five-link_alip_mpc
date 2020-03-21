function [t_next, x_next, u_next_guess] = Update_State_Check_FW(mpc_info,t_current,x_init,u_init)
%% Extract inputs
traj_correct = ...
    load(fullfile(pwd,'\..\NMPC\saved_results\Stairs(ascend)_Ht(0.05)_N(10)_DT(0.005)_Time(1 sec).mat'));
% dyn_info
f_nonlinear = traj_correct.dyn_info.func.f_NL;
% mpc_info 
DT = mpc_info.DT;

%% Forward Euler
x_current = x_init;
u_current = u_init(:,1);
f_value = full(f_nonlinear(x_current,u_current));
x_next = x_current+ (DT*f_value);

t_next = t_current + DT;
u_next_guess = [u_init(:,2:end), u_init(:,end)];
end