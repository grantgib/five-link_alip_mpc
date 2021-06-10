function [t_next, x_next, u_next_guess, w_next_guess] = ...
    Update_State(dyn_info,mpc_info,t_current,x_init,u_init,w_init)
%% Extract inputs
% dyn_info
f_nonlinear = dyn_info.func.f_NL;
n_q = dyn_info.dim.n_q;

% mpc_info
DT = mpc_info.DT;
N = mpc_info.N;

%% Forward Euler to get next state
q_current = x_init(1:n_q);
dq_current = x_init(n_q+1:end);
x_current = [q_current; dq_current];
u_current = u_init(:,1);
w_current = w_init(:,1);
f_value = full(f_nonlinear(q_current,dq_current,u_current,w_current));
x_next = x_current + (DT*f_value);    % forward euler
t_next = t_current + DT;
u_next_guess = [u_init(:,2:size(u_init,2)), u_init(:,size(u_init,2))];
w_next_guess = [w_init(:,2:size(w_init,2)), w_init(:,size(w_init,2))];

%% Check Simulation
% traj_correct = ...
%     load(fullfile(pwd,'\..\NMPC\saved_results\Stairs(ascend)_Ht(0.05)_N(10)_DT(0.005)_Time(1 sec).mat'));
% w_traj_correct = traj_correct.traj_info.w_traj;
% [w_init', w_traj_correct(:,mpc_info.iter:N + mpc_info.iter)']
% f_value_check = full(traj_correct.dyn_info.func.f_NL(x_current,u_current));
% disp("f error");
% ferror = f_value - f_value_check; disp(ferror);
% 
% disp('Correct traj current and next');
% realtraj = traj_correct.traj_info.x_traj(:,mpc_info.iter:mpc_info.iter+1); 
% % disp(realtraj);
% disp('free wrench output');
% newtraj = [x_current, x_next];
% % disp(newtraj);
% disp('Error between traj');
% errtraj = newtraj - realtraj;
% disp(errtraj);


end