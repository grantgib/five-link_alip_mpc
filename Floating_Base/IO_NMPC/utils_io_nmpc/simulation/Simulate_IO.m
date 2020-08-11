function [traj_info,ctrl_info] = ...
    Simulate_IO(dyn_info,ctrl_info,ref_info,constr_info)
import casadi.*

%% Extract inputs
% dyn_info
n_q = dyn_info.dim.n_q;
n_x = dyn_info.dim.n_x;
n_u = dyn_info.dim.n_u;
n_w = dyn_info.dim.n_w;
n_y = dyn_info.dim.n_y;
pos_swingfoot = dyn_info.func.f_pos_swing;
pos_stancefoot = dyn_info.func.f_pos_stance;

% ctrl_info
DT = ctrl_info.DT;
IO_info = ctrl_info.IO_info;

% mpc_info
mpc_info = ctrl_info.mpc_info;
N = mpc_info.N;
solvers_NL = mpc_info.solvers_NLP; %solvers_NL{1};

% ref_info
X_REF_Original = ref_info.x_ref;
U_REF_Original = ref_info.u_ref;
DDH_REF_Original = ref_info.ddq_ref(4:end,:);
W_REF_Original = ref_info.w_ref;
x_init = ref_info.x_init;

num_steps = ref_info.num_steps;
s_func = ref_info.phase_based.s_func;

y_sw_start = full(pos_swingfoot(x_init(1:7)))';

%% Initialize Variables
% traj_info struct
traj_info.num_impacts = 0;
ctrl_info.step_look_ahead = 3;

% reference trajectories
X_REF = X_REF_Original;
U_REF = U_REF_Original;
DDH_REF = DDH_REF_Original;
W_REF = W_REF_Original;
traj_info.idx_preimpact = size(X_REF,2);
for idx = 1:ctrl_info.step_look_ahead
    x_ref_temp = X_REF_Original + ...
        [(X_REF(1:2,end)-X_REF(1:2,1)).*(ones(2,size(X_REF_Original,2)));
        zeros(12,size(X_REF_Original,2))];
    u_ref_temp = U_REF_Original;
    ddh_ref_temp = DDH_REF_Original;
    w_ref_temp = W_REF_Original;
    X_REF = [X_REF, x_ref_temp];
    U_REF = [U_REF, u_ref_temp];
    DDH_REF = [DDH_REF, ddh_ref_temp];
    W_REF = [W_REF, w_ref_temp];   
    traj_info.idx_preimpact = [traj_info.idx_preimpact, size(X_REF,2)];
end
X_REF_FULL = X_REF;
U_REF_FULL = U_REF;
DDH_REF_FULL = DDH_REF;
W_REF_FULL = W_REF;
% figure; plot(X_REF(2,:));

if IO_info.linear == 0
    % Initialize IPOPT solver with reference state, control and wrench (similar
    % to a warm start
    X0 = X_REF(:,1:N+1);
    U0 = U_REF(:,1:N+1);
    W0 = zeros(n_w,N+1);
end

% Initialize storage variables
ctrl_info.iter = 1;            % simulation iteration number (proportional to t_current)
traj_info.iter_impact = 1;
t_current = 0;
time_traj(1) = t_current;
time_calc = [];
x_traj = [];
u_traj = [];
w_traj = [];
ddq_traj = [];
u_mpc_traj = [];
y_sw = full(pos_swingfoot(x_init(1:7)))';
y_st = full(pos_stancefoot(x_init(1:7)))';
y_sw_normal = [0;0];
traj_size = 1000;
x_traj_all = zeros(n_x,N+1,traj_size);    % stores entire solution from IPOPT at each timestep
u_traj_all = zeros(n_u,N+1,traj_size);
w_traj_all = [];
ddh_d_traj = [];
x_ref_traj = [];
w_ref_traj = [];
u_ref_traj = [];
s_traj = full(s_func(x_init(1:n_q)));
impact_traj = [];

%% Main Loop
while(traj_info.num_impacts < num_steps && ctrl_info.iter < num_steps*size(X_REF_Original,2))
    %% Solve for NMPC control law
    if IO_info.linear
        x_sol_mpc = [];
        u_sol_mpc = [];
        w_sol_mpc = [];
        if ctrl_info.iter < 2
            args = Update_Args_Nonlinear(dyn_info,ctrl_info,ref_info,constr_info,traj_info,x_init,N,X_REF,U_REF,X_REF_FULL);
        end
    else % use NMPC      
        % Set Parameter vector and Decision Variables
        args = Update_Args_Nonlinear(dyn_info,ctrl_info,ref_info,constr_info,traj_info,x_init,N,X_REF,U_REF,X_REF_FULL);
        args.x0  = [reshape(X0(:,1:N+1),n_x*(N+1),1);
            reshape(U0(:,1:N+1),n_u*(N+1),1);
            reshape(W0(:,1:N+1),n_w*(N+1),1)];
        
        % Choose solver based on if impact occurs during prediction horizon
        index_impact = traj_info.idx_preimpact(1) + 1;     % index of X_REF where new ref begins and impact has just occurred
        for k = 1:N
            if k+(traj_info.iter_impact) == index_impact
                solver = solvers_NL{k+1};
                break;
            elseif k == 1 && traj_info.iter_impact >= index_impact
                solver = solvers_NL{k+1};
                break;
            else
                solver = solvers_NL{1};
            end
        end
        
        % Solve MPC NLP (uses IPOPT)
        solver_comp_time = tic;    % Start solver computation timer
        sol = solver('x0', args.x0, 'lbx', args.lbx, 'ubx', args.ubx,...
            'lbg', args.lbg, 'ubg', args.ubg,'p',args.p);
        time_calc = [time_calc, toc(solver_comp_time)];           % Store solver time
        
        % Extract solutions and outputs
        x_sol_mpc = reshape(full(sol.x(1:n_x*(N+1))),n_x,N+1);
        u_sol_mpc = reshape(full(sol.x(n_x*(N+1)+1:n_x*(N+1)+n_u*(N+1)))',n_u,N+1);
        w_sol_mpc = reshape(full(sol.x((n_x+n_u)*(N+1)+1:end))',n_w,N+1);
        
        u_mpc_traj = [u_mpc_traj, u_sol_mpc(:,1)];
    end
    
    %% Store trajectory and time
    x_traj = [x_traj, x_init];
    if ctrl_info.IO_info.linear
        % do nothing
    else
        x_traj_all(:,:,ctrl_info.iter) = reshape(full(sol.x(1:n_x*(N+1)))',n_x,N+1);
        u_traj_all(:,:,ctrl_info.iter) = reshape(full(sol.x(n_x*(N+1)+1:(n_x+n_u)*(N+1)))',n_u,N+1);
    end
    x_ref_traj = [x_ref_traj, X_REF(:,1)];
    ddh_d_traj = [ddh_d_traj, DDH_REF(:,1)];
    u_ref_traj = [u_ref_traj, U_REF(:,1)];
    w_ref_traj = [w_ref_traj, W_REF(:,1)];
    time_traj(ctrl_info.iter) = t_current;
    impact_traj = [impact_traj, traj_info.num_impacts];
    sol_info = struct('t_init',t_current',...
        'x_init',       x_init,...
        'u_sol_mpc',   u_sol_mpc,...
        'w_sol_mpc',   w_sol_mpc,...
        'X_REF',        X_REF,...
        'ddh_d',        DDH_REF);
    
    %% Apply the control and forward integrate dynamics
    [t_next,x_next,u_sol,w_sol,ddq_sol] = Update_State(dyn_info,ctrl_info,ref_info,constr_info,sol_info);
    u_traj = [u_traj , u_sol];
    w_traj = [w_traj , full(w_sol)];
    ddq_traj = [ddq_traj, ddq_sol];
    sol_info.u_sol = u_sol;     % first input vector of solution
    sol_info.w_sol = w_sol;     % first wrench vector of solution
    
    %% Check for impact and apply different dynamics if true
    y_sw_current = full(pos_swingfoot(x_next(1:7)))';
    y_st_current = full(pos_stancefoot(x_next(1:7)))';
    if      y_sw_current(2) < (traj_info.num_impacts+1)*ref_info.step_height_dbl &&...  % height at stairs
            y_sw_current(2) - y_sw(2,end) < 0 &&...                                     % velocity is negative
            y_sw(2,end) > (traj_info.num_impacts+1)*ref_info.step_height_dbl            % previous swing foot height was above the stair (fixes conditional when you switch leg coordinates)
        
        disp("-> Impact occured, find when it happened!");
%         figure; plot(X_REF_samestep(2,:)); hold on; plot(x_traj(2,:)); legend('ref','real');
        
        % Forward Integrate until Impact, Apply Impact, Integrate until t_current + DT has been reached
        [t_next,x_next] = Impact_Update_IO(dyn_info,ctrl_info,ref_info,traj_info,sol_info);
        
        % Update impact counter
        traj_info.num_impacts = traj_info.num_impacts + 1;
        traj_info.iter_impact = 0;
        disp("-> Step # " + traj_info.num_impacts);
        
        % Update reference trajectory
%         X_REF_FULL = X_REF_FULL + ...
%             [(x_next(1:2) - X_REF_FULL(1:2,1)).*ones(2,size(X_REF_FULL,2));
%             zeros(12,size(X_REF_FULL,2))];
        X_REF_FULL = X_REF_FULL + ...
            [(X_REF(1:2,1) - X_REF_FULL(1:2,1)).*ones(2,size(X_REF_FULL,2));
            zeros(12,size(X_REF_FULL,2))];
        X_REF = X_REF_FULL;
        U_REF = U_REF_FULL;
        DDH_REF = DDH_REF_FULL;
        W_REF = W_REF_FULL;
        
        % Update stance foot position with previous swing foot impact pos
        y_st_current = y_sw_current;
        
        % Update output trajectory
        y_sw_start = full(pos_swingfoot(x_next(1:7)))';
        y_sw_current = y_sw_start;
        y_sw = [y_sw, y_sw_current];
        y_st = [y_st, y_st_current];
        sw_offset = [y_sw_start(1)*(traj_info.num_impacts);
            y_sw_start(2)*traj_info.num_impacts];
        y_sw_normal = [y_sw_normal, (y_sw_current - sw_offset)];
    else
        % Update output trajectory
        y_sw = [y_sw, y_sw_current];
        y_st = [y_st, y_st_current];
        sw_offset = [y_sw_start(1)*(traj_info.num_impacts+1);
            y_sw_start(2)*(traj_info.num_impacts+1)];
        y_sw_normal = [y_sw_normal, (y_sw_current-sw_offset)] ;
    end
    % Update s phase variable
    s_traj = [s_traj, full(s_func(x_next(1:n_q)))];
    
    
    %% Update state and time, warm start, shift reference
    t_current = t_next;
    x_init = x_next;
    ctrl_info.iter = ctrl_info.iter + 1;  % update iteration counter
    traj_info.iter_impact = traj_info.iter_impact + 1;
    
    % Warm start solver
    if ~IO_info.linear
        X0 = [x_sol_mpc(:,2:N+1), x_sol_mpc(:,N+1)];
        U0 = [u_sol_mpc(:,2:end), u_sol_mpc(:,end)];
        W0 = [w_sol_mpc(:,2:end), w_sol_mpc(:,end)];
    end
    % Shift X_REF and U_REF. Once time is within final N+1 prediction
    % windows the reference trajectory will begin repeating (the problem
    % changes to a regulator problem. If a hybrid update is not being used
    % we implement a shrinking horizon method to decrease N so that the
    % problem remains trajectory tracking
    X_REF = X_REF(:,2:end);
    U_REF = U_REF(:,2:end);
    DDH_REF = DDH_REF(:,2:end);
    W_REF = W_REF(:,2:end);
    
    % Print every n iterations
    if mod(ctrl_info.iter-1,10) == 0
        if constr_info.torque.sat
            disp("Iteration = " + (ctrl_info.iter-1) + " (Torque Saturated at " + constr_info.torque.sat + " N-m)");
        else
            disp("Iteration = " + (ctrl_info.iter-1));
        end
    end
end
% Finish updating trajectory and time after loop finishes
x_traj = [x_traj, x_next];
x_ref_traj = [x_ref_traj, X_REF(:,1)]; % X_REF has been shifted so the next reference is the first column
ddh_d_traj = [ddh_d_traj, DDH_REF(:,1)];
time_traj(end+1) = time_traj(end) + DT;
impact_traj = [impact_traj, traj_info.num_impacts];

%% End of Simulation Calculations
x_traj_final_error = x_traj(:,end)-x_ref_traj(:,end);
x_traj_final_error_norm = norm(x_traj_final_error,2);
avg_calc_time = mean(time_calc);
x_traj_error = vecnorm((x_traj - x_ref_traj)')';
% C = mpc_info.C;
% y_error = [C*x_traj_final_error(1:7); C*x_traj_final_error(8:end)];

disp('************** Trajectory Statistics **************')
% disp("Trajectory error (2-norm) = ")
% disp(x_traj_error);
% disp("State Penalty (Q)"); disp(mpc_info.Q);
% disp("Control Inputs Penalty (R)"); disp(mpc_info.R);

disp("-> Final trajectory error (2-norm) = " + x_traj_final_error_norm);
% disp("-> Average MPC Calculation Time = " + avg_calc_time);
% disp("y_error");
% disp(y_error);

y_traj = x_traj(4:n_q,:);
dy_traj = x_traj(11:end,:);
theta_traj = x_traj(3,:) + x_traj(4,:) + x_traj(5,:)/2;

%% Update function outputs
traj_info.time_traj = time_traj;
traj_info.x_traj = x_traj;
traj_info.u_traj = u_traj;
traj_info.w_traj = w_traj;
traj_info.y_traj = y_traj;
traj_info.u_mpc_traj = u_mpc_traj;
traj_info.dy_traj = dy_traj;
traj_info.theta_traj = theta_traj;
traj_info.s_traj = s_traj;
traj_info.ddq_traj = ddq_traj;
traj_info.impact_traj = impact_traj;
traj_info.y_sw = y_sw;
traj_info.y_st = y_st;
traj_info.y_sw_normal = y_sw_normal;
traj_info.x_traj_all = x_traj_all;
traj_info.u_traj_all = u_traj_all;
traj_info.w_traj_all = w_traj_all;
traj_info.x_ref_traj = x_ref_traj;
traj_info.w_ref_traj = w_ref_traj;
traj_info.ddy_ref_traj = ddh_d_traj;
traj_info.u_ref_traj = u_ref_traj;
traj_info.stats.time_calc = time_calc;
traj_info.stats.x_traj_final_error = x_traj_final_error;
traj_info.stats.avg_calc_time = avg_calc_time;
traj_info.stats.x_traj_error = x_traj_error;

mpc_info.args = args;
ctrl_info.mpc_info = mpc_info;

end