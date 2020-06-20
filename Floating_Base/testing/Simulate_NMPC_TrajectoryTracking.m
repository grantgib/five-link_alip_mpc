function [traj_info,ctrl_info] = ...
    Simulate_NMPC_TrajectoryTracking(dyn_info,ctrl_info,ref_info)
import casadi.*

%% Extract inputs
% dyn_info
n_x = dyn_info.dim.n_x;
n_u = dyn_info.dim.n_u;
n_w = dyn_info.dim.n_w;
n_y = dyn_info.dim.n_y;

% mpc_info
mpc_info = ctrl_info.mpc_info;
DT = mpc_info.DT;
N = mpc_info.N;
solver = mpc_info.solvers_NL{1};

% ref_info
X_REF_Original = ref_info.x_ref;
U_REF_Original = ref_info.u_ref;
x_init = ref_info.x_init;
num_steps = ref_info.num_steps;

%% Initialize Variables
iter = 1;            % simulation iteration number (proportional to t_current)
t_current = 0;
X_REF = X_REF_Original;
U_REF = U_REF_Original;
stance_foot_pos = [0; 0];
swing_foot_init = leftToePos(x_init(1:7))';
num_impacts = 0;

% Initialize IPOPT solver with reference state, control and wrench (similar
% to a warm start
X0 = X_REF(:,1:N+1);
U0 = U_REF(:,1:N+1);
W0 = zeros(n_w,N+1);

% Initialize storage variables
time_traj(1) = t_current;
time_calc = [];
x_traj = [];
u_traj = [];
w_traj = [];
y_sw = swing_foot_init([1,3]);
x_traj_all = [];    % stores entire solution from IPOPT at each timestep
u_traj_all = [];
w_traj_all = [];
x_ref_traj = [];
u_ref_traj = [];

%% Main Loop

while(num_impacts < num_steps && iter < num_steps*size(X_REF_Original,2))
    % while(mpciter < 5)
    
    % Start solver computation timer
    solver_comp_time = tic;
    
    %% Shrinking Horizon Check & Update parameters
    %     if round(time_traj(end) + DT * N,3) > t_final
    %         % Select fewer decision variables and solver with sizes
    %         % corresponding to decreased prediction horizon (~lookup table)
    %         N_new = round( (t_final - time_traj(end)) / DT );
    %         if N_new < 1    % when we want step to continue until impact
    %             N_new = 1;
    %         end
    %         indx = (mpc_info.N-N_new)+1;
    %         solver = mpc_info.solvers_NL{indx};
    %         N = N_new;
    %     end
    
    % Resize if Prediction Horizons changes
    X0 = X0(:,1:N+1);
    
    % Set Parameter vector and Decision Variables
    args = Update_Args_Nonlinear(dyn_info,ctrl_info,ref_info,x_init,N,X_REF,U_REF);
    args.x0  = [reshape(X0(:,1:N+1),n_x*(N+1),1);
        reshape(U0(:,1:N+1),n_u*(N+1),1);
        reshape(W0(:,1:N+1),n_w*(N+1),1)];
    
    %% Solve MPC NLP solver (uses IPOPT)
    sol = solver('x0', args.x0, 'lbx', args.lbx, 'ubx', args.ubx,...
        'lbg', args.lbg, 'ubg', args.ubg,'p',args.p);
    % Store solver time
    time_calc = [time_calc, toc(solver_comp_time)];
    
    % Extract solutions and outputs
    x_sol = reshape(full(sol.x(1:n_x*(N+1))),n_x,N+1);
    u_sol = reshape(full(sol.x(n_x*(N+1)+1:n_x*(N+1)+n_u*(N+1)))',n_u,N+1);
    w_sol = reshape(full(sol.x((n_x+n_u)*(N+1)+1:end))',n_w,N+1);
    
    % Store Entire time step trajectory
    if (N == mpc_info.N)   % before shrinking horizon zone
        x_traj_all(1:n_x,:,iter) = reshape(full(sol.x(1:n_x*(N+1)))',n_x,N+1);
        u_traj_all(1:n_u,:,iter) = reshape(full(sol.x(n_x*(N+1)+1:n_x*(N+1)+n_u*(N+1)))',n_u,N+1);
        w_traj_all(1:n_w,:,iter) = reshape(full(sol.x((n_u+n_x)*(N+1)+1:end))',n_w,N+1);
    end
    
    % Store trajectory and time
    x_traj = [x_traj, x_init];
    u_traj = [u_traj , u_sol(:,1)];
    w_traj = [w_traj , w_sol(:,1)];
    x_ref_traj = [x_ref_traj, X_REF(:,1)];
    u_ref_traj = [u_ref_traj, U_REF(:,1)];
    time_traj(iter) = t_current;
    
    %% Apply the control and forward integrate dynamics
    % Predict next step with Forward Euler Discretization
    [t_next, x_next, u_next_guess, w_next_guess] = Update_State(dyn_info,mpc_info,t_current,x_init,u_sol,w_sol);
    
    %% Check for impact & Apply Impact/Switch Map
    swing_foot_pos = leftToePos(x_next(1:7))';
    y_swingfoot = swing_foot_pos([1,3]);
    if (y_swingfoot(2) < (num_impacts+1)*double(ref_info.step_height)) &&...
            (y_sw(2,end) > double(ref_info.step_height)) &&...
            (y_swingfoot(2) - y_sw(2,end) < 0) &&...
            (y_swingfoot(1) > stance_foot_pos(1))
        
        disp("-> Impact occured, find when it happened!");
        % Forward Integrate until Impact, Apply Impact, Integrate until
        % t_current + DT has been reached
        [t_next, x_next] = Impact_Update(dyn_info,mpc_info,ref_info,t_current,x_init,u_sol,w_sol,num_impacts);
        
        % Update impact counter
        num_impacts = num_impacts + 1;
        disp("-> Step # " + num_impacts);
        
        % Update reference trajectory
        X_REF = X_REF_Original + ...
            [(X_REF_Original(1:2,end)-X_REF_Original(1:2,1)).*(num_impacts*ones(2,size(X_REF,2)));
            zeros(12,size(X_REF,2))];
        U_REF = U_REF_Original;
        
        % Update stance foot position with previous swing foot impact pos
        stance_foot_pos = y_swingfoot(1);
    end
    
    % Update output trajectory
    y_sw = [y_sw, y_swingfoot];
    
    %% Update state and time, warm start, shift reference
    t_current = t_next;
    x_init = x_next;
    iter = iter + 1;  % update iteration counter
    
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
    
    % Print every n iterations
    if mod(iter-1,10) == 0
        disp("MPC iteration = " + (iter-1));
    end
end
% Finish updating trajectory and time after loop finishes
x_traj = [x_traj, x_next];
x_ref_traj = [x_ref_traj, X_REF(:,1)]; % X_REF has been shifted so the next reference is the first column
time_traj(end+1) = time_traj(end) + DT;

%% End of Simulation Calculations
x_traj_final_error = x_traj(:,end)-x_ref_traj(:,end);
x_traj_final_error_norm = norm(x_traj_final_error,2);
avg_calc_time = mean(time_calc);
x_traj_error = vecnorm((x_traj - x_ref_traj)')';
C = mpc_info.C;
y_error = [C*x_traj_final_error(1:7); C*x_traj_final_error(8:end)];

disp('************** Trajectory Statistics **************')
disp("Trajectory error (2-norm) = ")
disp(x_traj_error);
disp("State Penalty (Q)"); disp(mpc_info.Q);
disp("Control Inputs Penalty (R)"); disp(mpc_info.R);

disp("-> Final trajectory error (2-norm) = " + x_traj_final_error_norm);
disp("-> Average MPC Calculation Time = " + avg_calc_time);
disp("y_error");
disp(y_error);

%% Update function outputs
traj_info.time_traj = time_traj;
traj_info.x_traj = x_traj;
traj_info.u_traj = u_traj;
traj_info.w_traj = w_traj;
traj_info.y_sw = y_sw;
traj_info.x_traj_all = x_traj_all;
traj_info.u_traj_all = u_traj_all;
traj_info.w_traj_all = w_traj_all;
traj_info.x_ref_traj = x_ref_traj;
traj_info.u_ref_traj = u_ref_traj;
traj_info.stats.time_calc = time_calc;
traj_info.stats.x_traj_final_error = x_traj_final_error;
traj_info.stats.avg_calc_time = avg_calc_time;
traj_info.stats.x_traj_error = x_traj_error;
traj_info.stats.num_impacts = num_impacts;
mpc_info.args = args;
ctrl_info.mpc_info = mpc_info;
end