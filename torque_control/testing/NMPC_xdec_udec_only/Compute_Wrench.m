function traj_info = Compute_Wrench(dyn_info,traj_info)
import casadi.*
%% Extract inputs
% dyn_info
f_wrench = dyn_info.func.wrench;
n_q = dyn_info.dim.n_q;

% mpc_info

% traj_info
x_traj = traj_info.x_traj;
u_traj = traj_info.u_traj;

%% Compute W_traj
% initialize w_traj 
w_traj = zeros(2,size(u_traj,2));

% compute at each time step
for i = 1:size(u_traj,2)
    q_i = x_traj(1:n_q,i);
    dq_i = x_traj(n_q+1:2*n_q,i);
    u_i = u_traj(:,i);
    w_traj(:,i) =  full(f_wrench(q_i,dq_i,u_i)); 
end

% update traj_info
traj_info.w_traj = w_traj;

end
