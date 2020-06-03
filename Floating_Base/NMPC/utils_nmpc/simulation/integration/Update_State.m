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

%% Warm start input for u and w
u_next_guess = [u_init(:,2:size(u_init,2)), u_init(:,size(u_init,2))];
w_next_guess = [w_init(:,2:size(w_init,2)), w_init(:,size(w_init,2))];


end