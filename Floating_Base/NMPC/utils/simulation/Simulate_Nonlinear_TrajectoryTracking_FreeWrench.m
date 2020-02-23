function [x_traj,u_traj,x_traj_all,t_all,mpciter,args] = ...
    Simulate_Nonlinear_TrajectoryTracking_FreeWrench(x_init,X_REF_Original,U_REF_Original,param,...
    f_nonlinear,lambda_func,n_q,n_x,n_u,mpc_info)
import casadi.*

% Extract data from mpc_info
DT = mpc_info.DT;
N = mpc_info.N;
sim_time = mpc_info.sim_time;
solver = mpc_info.solvers_NL{1};

% Initialize Variables
t_current = 0;          % current time step (sec)
t_all(1) = t_current;
t_final = DT * (size(X_REF_Original,2)-1);
X_REF = X_REF_Original;
U_REF = U_REF_Original;


X0 = repmat(x_init,1,N+1)'; % initialization of the states decision variables
U0 = zeros(N+1,n_u);

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
    
    % Set Parameter vector and Decision Variables
    args = Update_Args_Nonlinear_FreeWrench(x_init,N,n_q,n_x,n_u,X_REF,U_REF,param);
    args.x0  = [reshape(X0(1:N+1,:)',n_x*(N+1),1);reshape(U0(1:N+1,:)',n_u*(N+1),1)];
    
    %% Solve MPC NLP solver (uses IPOPT)
    sol = solver('x0', args.x0, 'lbx', args.lbx, 'ubx', args.ubx,...
        'lbg', args.lbg, 'ubg', args.ubg,'p',args.p);
    
    % Extract solutions
    u = reshape(full(sol.x(n_x*(N+1)+1:end))',n_u,N+1)';
    lambda_sol = full(sol.x(n_x+2*n_q+1:2*n_x));
    % Store Entire time step trajectory
    if round(t_all(end) + DT * N,3) < t_final
        x_traj_all(:,1:n_x,mpciter)= reshape(full(sol.x(1:n_x*(N+1)))',n_x,N+1)';
    end
    % controller trajectory only uses first control input (could be
    % modified)
    u_traj= [u_traj ; u(1,:)];
    
    %% Apply the control and guess next solution by shifting
    % vector containing all time steps
    t_all(mpciter) = t_current;
    
    % Predict next step with Forward Euler Discretization
    [t_next, x_next, u_next_guess] = Update_State_FreeWrench(DT,n_q,t_current, x_init, u, f_nonlinear,lambda_func,lambda_sol);
    t_current = t_next;
    x_init = x_next;
    U0 = u_next_guess;
    
    % Update trajectory
    x_traj(:,mpciter+1) = x_init;
    
    % Warm Start: Store solution trajectory as next guess of state decision
    % variables. Shift trajectory to initialize the next step
    X0 = reshape(full(sol.x(1:n_x*(N+1)))',n_x,N+1)';
    X0 = [X0(2:end,:);X0(end,:)];   % initialize with next step and add on last state twice
    
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
u_traj = u_traj';

%% Final Calculations
ss_error = norm((x_traj(:,end)-X_REF),2);
average_mpc_time = main_loop_time/(mpciter+1);
traj_error = vecnorm((x_traj - X_REF_Original(:,1:size(x_traj,2)))');
disp("Trajectory error (2-norm) = ")
disp(traj_error');
disp("Steady-state error (2-norm) = " + ss_error);
disp("Average MPC Calculation Time = " + average_mpc_time);

end