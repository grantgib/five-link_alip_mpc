function [mpc_info,traj_info] = ...
    Simulate_Nonlinear_TrajectoryTracking(dyn_info,mpc_info,ref_info)
import casadi.*

%% Extract data
% dyn_info
n_x = dyn_info.dim.n_x;
n_u = dyn_info.dim.n_u;

% mpc_info
DT = mpc_info.DT;
N = mpc_info.N;
sim_time = mpc_info.sim_time;
solver = mpc_info.solvers_NL{1};

% ref_info
x_init = ref_info.x_init;
X_REF_Original = ref_info.x_ref;
U_REF_Original = ref_info.u_ref;
param = ref_info.full_ref;

%% Initialize Variables
t_current = 0;          % current time step (sec)
t_all(1) = t_current;
t_final = DT * (size(X_REF_Original,2)-1);
X_REF = X_REF_Original;
U_REF = U_REF_Original;

X0 = repmat(x_init,1,N+1);
U0 = zeros(n_u,N+1);

x_traj(:,1) = x_init;   % true trajectory states
x_traj_all = [];    % Contains predicted trajectories for each time step
u_traj=[];          % Control input trajectories

mpciter = 1;        % simulation iteration number (proportional to t_current)
main_loop = tic;    % Begin timer

%% Main Loop
while(mpciter < sim_time / DT)
    %% Shrinking Horizon Check & Update parameters
    if round(t_all(end) + DT * N,3) > t_final
        % Select fewer decision variables and solver with sizes
        % corresponding to decreased prediction horizon (~lookup table)
        N_new = round( (t_final - t_all(end)) / DT );
        indx = (mpc_info.N-N_new)+1;
        solver = mpc_info.solvers_NL{indx};
        N = N_new;
    end
    
    % resize if necessary
    X0 = X0(:,1:N+1);
    
    % Set Parameter vector and Decision Variables
    args = Update_Args_Nonlinear(dyn_info,ref_info,x_init,N,X_REF,U_REF);
    args.x0  = [reshape(X0(:,1:N+1),n_x*(N+1),1);...
        reshape(U0(:,1:N+1),n_u*(N+1),1)];
    
    %% Solve MPC NLP solver (uses IPOPT)
    sol = solver('x0', args.x0, 'lbx', args.lbx, 'ubx', args.ubx,...
        'lbg', args.lbg, 'ubg', args.ubg,'p',args.p);
    
    % Extract solutions
    x_sol = reshape(full(sol.x(1:n_x*(N+1)))',n_x,N+1);
    u_sol = reshape(full(sol.x(n_x*(N+1)+1:end))',n_u,N+1);
    
    %% Save first solution
%     save('NMPC_firstiter','x_sol','u_sol');
    
    %%
    % Store Entire time step trajectory
    if (N == mpc_info.N)
        x_traj_all(1:n_x,:,mpciter) = reshape(full(sol.x(1:n_x*(N+1)))',n_x,N+1);
        u_traj_all(1:n_u,:,mpciter) = reshape(full(sol.x(n_x*(N+1)+1:n_x*(N+1)+n_u*(N+1)))',n_u,N+1);
    end
    
    % Controller trajectory only uses first control input (could be
    % modified)
    u_traj= [u_traj, u_sol(:,1)];
    
    %% Apply the control and guess next solution by shifting
    % Vector containing all time steps
    t_all(mpciter) = t_current;
    
    % Predict next step with Forward Euler Discretization
    [t_next, x_next, u_next_guess] = Update_State(dyn_info,mpc_info,t_current,x_init,u_sol);
    t_current = t_next;
    x_init = x_next;
    X0 = x_sol(:,1:N+1);    % warm start
    U0 = u_next_guess;
    
    % Update trajectory
    x_traj(:,mpciter+1) = x_init;
     
    % Shift X_REF and U_REF ** Only for trajectory tracking**
    X_REF = [X_REF(:,2:end),X_REF(:,end)];
    U_REF = [U_REF(:,2:end),U_REF(:,end)];
    
    % Print every n iterations
    if mod(mpciter,50) == 0
        disp("MPC iteration = " + mpciter);
    end
    
    % Update iteration counter
    mpciter = mpciter + 1;
end
main_loop_time = toc(main_loop);
t_all(end+1) = t_all(end) + DT;     % update time since you simulated forward last control input

%% Final Calculations
x_traj_end_error = norm((x_traj(:,end)-X_REF),2);
average_mpc_time = main_loop_time/(mpciter+1);
traj_error = vecnorm((x_traj - X_REF_Original(:,1:size(x_traj,2)))');
disp("Trajectory error (2-norm) = ")
disp(traj_error');
disp("Final trajectory error (2-norm) = " + x_traj_end_error);
disp("Average MPC Calculation Time = " + average_mpc_time);

%% Return
mpc_info.args = args;
traj_info = struct;
traj_info.t_all = t_all;
traj_info.x_traj = x_traj;
traj_info.u_traj = u_traj;
traj_info.x_traj_all = x_traj_all;
traj_info.u_traj_all = u_traj_all;
traj_info.stats.x_traj_final_error = x_traj_end_error;
traj_info.stats.avgmpctime = average_mpc_time;
traj_info.stats.x_traj_error = traj_error;

end