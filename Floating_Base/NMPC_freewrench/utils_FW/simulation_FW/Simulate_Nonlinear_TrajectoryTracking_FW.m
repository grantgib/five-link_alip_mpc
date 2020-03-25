function [traj_info,mpc_info] = ...
    Simulate_Nonlinear_TrajectoryTracking_FW(dyn_info,mpc_info,ref_info)
import casadi.*

%% Extract inputs
% dyn_info
n_x = dyn_info.dim.n_x;
n_u = dyn_info.dim.n_u;
n_w = dyn_info.dim.n_w;

% mpc_info
DT = mpc_info.DT;
N = mpc_info.N;
sim_time = mpc_info.sim_time;
solver = mpc_info.solvers_NL{1};

% ref_info
X_REF_Original = ref_info.x_ref;
U_REF_Original = ref_info.u_ref;
x_init = ref_info.x_init;

%% Initialize Variables
mpciter = 1;            % simulation iteration number (proportional to t_current)
t_current = 0;          
t_final = DT * (size(X_REF_Original,2)-1);
X_REF = X_REF_Original;
U_REF = U_REF_Original;

% Initialize IPOPT solver with reference state, control and wrench (similar
% to a warm start
traj_correct = load(fullfile(pwd,'\..\NMPC\saved_results\Stairs(ascend)_Ht(0.05)_N(10)_DT(0.005)_Time(1 sec).mat'));
X0 = traj_correct.traj_info.x_traj(:,1:N+1);
U0 = traj_correct.traj_info.u_traj(:,1:N+1);
W0 = traj_correct.traj_info.w_traj(:,1:N+1);

% Initialize storage variables
time_traj(1) = t_current;
time_solver = [];
x_traj = [];
u_traj = [];          
w_traj = [];
x_traj_all = [];    % stores entire solution from IPOPT at each timestep
u_traj_all = [];
w_traj_all = [];

%% Main Loop
main_loop = tic;    % Begin timer
while(mpciter < sim_time / DT)
    % Start solver computation timer
    solver_comp_time = tic;
    
    %% Shrinking Horizon Check & Update parameters
    if round(time_traj(end) + DT * N,3) > t_final
        % Select fewer decision variables and solver with sizes
        % corresponding to decreased prediction horizon (~lookup table)
        N_new = round( (t_final - time_traj(end)) / DT );
        indx = (mpc_info.N-N_new)+1;
        solver = mpc_info.solvers_NL{indx};
        N = N_new;
    end
    
    % Resize if Prediction Horizons changes
    X0 = X0(:,1:N+1);

    % Set Parameter vector and Decision Variables
    args = Update_Args_Nonlinear_FW(dyn_info,ref_info,x_init,N,X_REF,U_REF);
    args.x0  = [reshape(X0(:,1:N+1),n_x*(N+1),1);
        reshape(U0(:,1:N+1),n_u*(N+1),1);
        reshape(W0(:,1:N+1),n_w*(N+1),1)];
    
    %% Solve MPC NLP solver (uses IPOPT)
    sol = solver('x0', args.x0, 'lbx', args.lbx, 'ubx', args.ubx,...
        'lbg', args.lbg, 'ubg', args.ubg,'p',args.p);
    % Store solver time
    time_solver = [time_solver, toc(solver_comp_time)];
    
    % Extract solutions
    x_sol = reshape(full(sol.x(1:n_x*(N+1))),n_x,N+1);
    u_sol = reshape(full(sol.x(n_x*(N+1)+1:n_x*(N+1)+n_u*(N+1)))',n_u,N+1);
    w_sol = reshape(full(sol.x((n_x+n_u)*(N+1)+1:end))',n_w,N+1);
    
    % Store Entire time step trajectory
    if (N == mpc_info.N)   % before shrinking horizon zone
        x_traj_all(1:n_x,:,mpciter) = reshape(full(sol.x(1:n_x*(N+1)))',n_x,N+1);
        u_traj_all(1:n_u,:,mpciter) = reshape(full(sol.x(n_x*(N+1)+1:n_x*(N+1)+n_u*(N+1)))',n_u,N+1);
        w_traj_all(1:n_w,:,mpciter) = reshape(full(sol.x((n_u+n_x)*(N+1)+1:end))',n_w,N+1);
    end
    
    % Store trajectory and time
    x_traj = [x_traj, x_init];
    u_traj = [u_traj , u_sol(:,1)];
    w_traj = [w_traj , w_sol(:,1)];
    time_traj(mpciter) = t_current;
    
    %% Apply the control, Update State, and Warm Start
    % Predict next step with Forward Euler Discretization
    [t_next, x_next, u_next_guess, w_next_guess] = Update_State_FW(dyn_info,mpc_info,t_current,x_init,u_sol,w_sol);
    
    % Check if impact has occurred
    
    
    % Update time and state
    t_current = t_next;
    x_init = x_next;    
    
    % Warm start solver
    X0 = [x_sol(:,2:N+1), x_sol(:,N+1)];    
    U0 = u_next_guess;
    W0 = w_next_guess;
    
    % Shift X_REF and U_REF. Once time is within final N+1 prediction
    % windows the reference trajectory will begin repeating (the problem
    % changes to a regulator problem. If a hybrid update is not being used
    % we implement a shrinking horizon method to decrease N so that the
    % problem remains trajectory tracking    
    X_REF = [X_REF(:,2:end),X_REF(:,end)];
    U_REF = [U_REF(:,2:end),U_REF(:,end)];
    
    % Update iteration counter
    mpciter = mpciter + 1;
    mpc_info.iter = mpc_info.iter + 1;
    
    % Print every n iterations
    if mod(mpciter-1,50) == 0
        disp("MPC iteration = " + (mpciter-1));
    end
end
% Finish updating trajectory and time after loop finishes
x_traj = [x_traj, x_next];          % Update last state after loop has stopped
time_traj(end+1) = time_traj(end) + DT;     % update time since you simulated forward last control input

%% Final Calculations
x_traj_end_error = norm((x_traj(:,end)-X_REF),2);
average_mpc_time = mean(time_solver);
traj_error = vecnorm((x_traj - X_REF_Original(:,1:size(x_traj,2)))');
disp("Trajectory error (2-norm) = ")
disp(traj_error');
disp("Final trajectory error (2-norm) = " + x_traj_end_error);
disp("Average MPC Calculation Time = " + average_mpc_time);

%% Update function outputs
traj_info.time_solver = time_solver;
traj_info.time_traj = time_traj;
traj_info.x_traj = x_traj;
traj_info.u_traj = u_traj;
traj_info.w_traj = w_traj;
traj_info.x_traj_all = x_traj_all;
traj_info.u_traj_all = u_traj_all;
traj_info.w_traj_all = w_traj_all;
traj_info.stats.x_traj_final_error = x_traj_end_error;
traj_info.stats.avgmpctime = average_mpc_time;
traj_info.stats.x_traj_error = traj_error;
mpc_info.args = args;

end