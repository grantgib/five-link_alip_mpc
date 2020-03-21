function [traj_info,mpc_info] = ...
    Simulate_Nonlinear_TrajectoryTracking(dyn_info,mpc_info,ref_info)
import casadi.*

%% Extract data from inputs
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
t_current = 0;          % current time step (sec)
t_all(1) = t_current;
t_final = DT * (size(X_REF_Original,2)-1);
X_REF = X_REF_Original;
U_REF = U_REF_Original;

X0 = repmat(x_init,1,N+1); % initialization of the states decision variables
U0 = zeros(n_u,N+1);
W0 = zeros(n_w,N+1);

x_traj(:,1) = x_init;   % true trajectory states
x_traj_all = [];    % Contains predicted trajectories for each time step
u_traj = [];          % Control input trajectories
w_traj = [];

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
    
    % Use correct trajectory
    traj_correct = ...
    load(fullfile(pwd,'\..\NMPC\saved_results\Stairs(ascend)_Ht(0.05)_N(10)_DT(0.005)_Time(1 sec).mat'));
    X0 = repmat(traj_correct.traj_info.x_traj(:,mpc_info.iter),1,N+1);
    
    % Set Parameter vector and Decision Variables
    args = Update_Args_Nonlinear(x_init,N,dyn_info,ref_info);
    args.x0  = [reshape(X0(:,1:N+1),n_x*(N+1),1);
        reshape(U0(:,1:N+1),n_u*(N+1),1);
        reshape(W0(:,1:N+1),n_w*(N+1),1)];
    
    %% Solve MPC NLP solver (uses IPOPT)
    sol = solver('x0', args.x0, 'lbx', args.lbx, 'ubx', args.ubx,...
        'lbg', args.lbg, 'ubg', args.ubg,'p',args.p);
    
    % Extract solutions
    x_sol = reshape(full(sol.x(1:n_x*(N+1))),n_x,N+1);
    u_sol = reshape(full(sol.x(n_x*(N+1)+1:n_x*(N+1)+n_u*(N+1)))',n_u,N+1);
    w_sol = reshape(full(sol.x((n_x+n_u)*(N+1)+1:end))',n_w,N+1);
    save('NMPC_wrench_firstiter','x_sol','u_sol','w_sol');

    % Store Entire time step trajectory
    if (N == mpc_info.N)   % before shrinking horizon zone
        x_traj_all(1:n_x,:,mpciter) = reshape(full(sol.x(1:n_x*(N+1)))',n_x,N+1);
        u_traj_all(1:n_u,:,mpciter) = reshape(full(sol.x(n_x*(N+1)+1:n_x*(N+1)+n_u*(N+1)))',n_u,N+1);
        w_traj_all(1:n_w,:,mpciter) = reshape(full(sol.x((n_u+n_x)*(N+1)+1:end))',n_w,N+1);
    end
    % store solution into trajectory
    u_traj = [u_traj , u_sol(:,1)];
    w_traj = [w_traj , w_sol(:,1)];
    
    %% Apply the control and guess next solution by shifting
    % vector containing all time steps
    t_all(mpciter) = t_current;
    
    % Predict next step with Forward Euler Discretization
    [t_next, x_next, u_next_guess, w_next_guess] = Update_State(dyn_info,mpc_info,t_current,x_init,u_sol,w_sol);
%     [t_check, x_check, u_check] = Update_State_Check(mpc_info,t_current,x_init,u_sol);
    xerr = x_next - x_check;
    disp("X error after forward euler");
    disp(xerr);
    
%     U0 = u_next_guess;
%     W0 = w_next_guess;
    t_current = t_next;
    x_init = x_next;
    
    % Update trajectory
    x_traj(:,mpciter+1) = x_init;
    
    % Warm Start: Store solution trajectory as next guess of state decision
    % variables. Shift trajectory to initialize the next step
%     X0 = repmat(x_init,1,N+1);
%     X0 = [X0(2:end,:);X0(end,:)];   % initialize with next step and add on last state twice
    
    % Shift X_REF and U_REF ** Only for trajectory tracking**
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

%% Outputs
traj_info.t_all = t_all;
traj_info.x_traj = x_traj;
traj_info.u_traj = u_traj;
traj_info.w_traj = w_traj;
traj_info.x_traj_all = x_traj_all;
traj_info.u_traj_all = u_traj_all;
traj_info.w_traj_all = w_traj_all;
mpc_info.args = args;

end