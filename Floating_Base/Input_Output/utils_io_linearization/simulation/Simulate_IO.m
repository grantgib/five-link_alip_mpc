function [traj_info,ctrl_info] = ...
    Simulate_IO(dyn_info,ctrl_info,ref_info,constr_info)
import casadi.*

%% Extract inputs
% dyn_info
n_q = dyn_info.dim.n_q;
n_x = dyn_info.dim.n_x;
n_u = dyn_info.dim.n_u;
n_w = dyn_info.dim.n_w;
f_pos_swing = dyn_info.func.f_pos_swing;
f_pos_stance = dyn_info.func.f_pos_stance;
f_ha = dyn_info.func.f_ha;
f_ha_dot = dyn_info.func.f_ha_dot;
f_ha_ddot = dyn_info.func.f_ha_ddot;
f_y = dyn_info.func.f_y;
f_y_dot = dyn_info.func.f_y_dot;
f_y_ddot = dyn_info.func.f_y_ddot;
f_u_IO = dyn_info.func.f_u_IO;
f_w = dyn_info.func.f_w;
Kp = dyn_info.ctrl.Kp;
Kd = dyn_info.ctrl.Kd;

% ctrl_info
DT = ctrl_info.DT;

% ref_info
Q_REF_Original = ref_info.q_ref;
Q_DOT_REF_Original = ref_info.q_dot_ref;
X_REF_Original = ref_info.x_ref;
Q_DDOT_REF_Original = ref_info.q_ddot_ref;
U_REF_Original = ref_info.u_ref;
W_REF_Original = ref_info.w_ref;
HD_REF_Original = ref_info.hd_ref;
HD_DOT_REF_Original = ref_info.hd_dot_ref;
HD_DDOT_REF_Original = ref_info.hd_ddot_ref;
x_init = ref_info.x_init;
num_steps = ref_info.num_steps;

%% Initialize Variables
% traj_info struct
traj_info.num_impacts = 0;

% reference trajectories
X_REF = X_REF_Original;
U_REF = U_REF_Original;
HD_REF = HD_REF_Original;
HD_DOT_REF = HD_DOT_REF_Original;
HD_DDOT_REF = HD_DDOT_REF_Original;
W_REF = W_REF_Original;

% Initialize variables
ctrl_info.iter = 1;            % simulation iteration number (proportional to t_current)
traj_info.iter_impact = 1;
t_current = 0;
time_traj(1) = t_current;
time_calc = [];
x_traj = [];
u_io_traj = [];
w_io_traj = [];

ha_traj = [];
ha_dot_traj = [];
ha_ddot_traj = [];
hd_traj = [];
hd_dot_traj = [];
hd_ddot_traj = [];
y_traj = [];
y_dot_traj = [];
y_ddot_traj = [];

pos_swing_start = full(f_pos_swing(x_init(1:7)))';
pos_sw = full(f_pos_swing(x_init(1:7)))';
pos_st = full(f_pos_stance(x_init(1:7)))';
pos_sw_normal = [0; 0];

x_ref_traj = X_REF(:,1);
w_ref_traj = [];
u_ref_traj = [];
impact_traj = [];

%% Main Loop
% args = Update_Args_Nonlinear(dyn_info,ctrl_info,ref_info,constr_info,traj_info,x_init,N,X_REF,U_REF,X_REF_FULL);
while(traj_info.num_impacts < num_steps && ctrl_info.iter < num_steps*size(X_REF_Original,2))
    %% Computations for IO control
    x_current = x_init;
    
    % Desired virtual outputs
    hd_current = HD_REF(:,1);
    hd_dot_current = HD_DOT_REF(:,1);
    hd_ddot_current = HD_DDOT_REF(:,1);
    
    % input and wrench
    u_sol_io = full(f_u_IO(x_current,hd_current,hd_dot_current,hd_ddot_current,Kp,Kd)); % x,hd,hd_dot,hd_ddot,Kp,Kd
    w_sol_io = full(f_w(x_init,u_sol_io));
    
    % Actual virtual outputs
    ha_current = full(f_ha(x_init(1:n_q)));
    ha_dot_current = full(f_ha_dot(x_init));
    ha_ddot_current = full(f_ha_ddot(x_init,u_sol_io,w_sol_io));
    
    % Output
    y_current = full(f_y(x_init(1:n_q),hd_current));
    y_dot_current = full(f_y_dot(x_init,hd_dot_current));
    y_ddot_current = full(f_y_ddot(x_init,u_sol_io,w_sol_io,hd_ddot_current));
      
    %% Store trajectory and time
    x_traj = [x_traj, x_init];
    x_ref_traj = [x_ref_traj, X_REF(:,1)];
    u_ref_traj = [u_ref_traj, U_REF(:,1)];
    w_ref_traj = [w_ref_traj, W_REF(:,1)];
    hd_traj = [hd_traj, HD_REF(:,1)];
    hd_dot_traj = [hd_dot_traj, HD_DOT_REF(:,1)];
    hd_ddot_traj = [hd_ddot_traj, HD_DDOT_REF(:,1)];
    time_traj(ctrl_info.iter) = t_current;
    impact_traj = [impact_traj, traj_info.num_impacts];
    
    u_io_traj = [u_io_traj , u_sol_io];
    w_io_traj = [w_io_traj , w_sol_io];
    
    ha_traj = [ha_traj, ha_current];
    ha_dot_traj = [ha_dot_traj, ha_dot_current];
    ha_ddot_traj = [ha_ddot_traj, ha_ddot_current];
    y_traj = [y_traj, y_current];
    y_dot_traj = [y_dot_traj, y_dot_current];
    y_ddot_traj = [y_ddot_traj, y_ddot_current];
    
    sol_info = struct(...
        't_init',       t_current',...
        'x_init',       x_init,...
        'u_sol',        u_sol_io,...
        'w_sol',        w_sol_io,...
        'X_REF',        X_REF,...
        'HD_DDOT_REF',  HD_DDOT_REF);
    
    %% Apply the control and forward integrate dynamics
    [t_next,x_next] = Update_State_IO(dyn_info,ctrl_info,sol_info);
    % ******** STOPPED HERE!!!!!
    % Check for impact and apply different dynamics if true
    pos_sw_current = full(f_pos_swing(x_next(1:7)))';
    pos_st_current = full(f_pos_stance(x_next(1:7)))';
    if      pos_sw_current(2) < (traj_info.num_impacts+1)*ref_info.step_height_dbl &&...  % height at stairs
            pos_sw_current(2) - pos_sw(2,end) < 0 &&...                                     % velocity is negative
            pos_sw(2,end) > (traj_info.num_impacts+1)*ref_info.step_height_dbl            % previous swing foot height was above the stair (fixes conditional when you switch leg coordinates)
        
        disp("-> Impact occured, find when it happened!");
        
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
        HD_DDOT_REF = HD_DDOT_REF_FULL;
        W_REF = W_REF_FULL;
        
        % Update stance foot position with previous swing foot impact pos
        pos_st_current = pos_sw_current;
        
        % Update output trajectory
        pos_swing_start = full(f_pos_swing(x_next(1:7)))';
        pos_sw_current = pos_swing_start;
        pos_sw = [pos_sw, pos_sw_current];
        pos_st = [pos_st, pos_st_current];
        sw_offset = [pos_swing_start(1)*(traj_info.num_impacts);
            pos_swing_start(2)*traj_info.num_impacts];
        pos_sw_normal = [pos_sw_normal, (pos_sw_current - sw_offset)];
    else
        % Update output trajectory
        pos_sw = [pos_sw, pos_sw_current];
        pos_st = [pos_st, pos_st_current];
        sw_offset = [pos_swing_start(1)*(traj_info.num_impacts+1);
            pos_swing_start(2)*(traj_info.num_impacts+1)];
        pos_sw_normal = [pos_sw_normal, (pos_sw_current-sw_offset)] ;
    end
    % Update s phase variable
    %     s_traj = [s_traj, full(s_func(x_next(1:n_q)))];
    
    
    %% Update state and time, warm start, shift reference
    t_current = t_next;
    x_init = x_next;
    ctrl_info.iter = ctrl_info.iter + 1;  % update iteration counter
    traj_info.iter_impact = traj_info.iter_impact + 1;
    
    % Shift X_REF and U_REF. Once time is within final N+1 prediction
    % windows the reference trajectory will begin repeating (the problem
    % changes to a regulator problem. If a hybrid update is not being used
    % we implement a shrinking horizon method to decrease N so that the
    % problem remains trajectory tracking
    X_REF = X_REF(:,2:end);
    U_REF = U_REF(:,2:end);
    HD_DDOT_REF = HD_DDOT_REF(:,2:end);
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
hd_ddot_traj = [hd_ddot_traj, HD_DDOT_REF(:,1)];
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
% traj_info.s_traj = s_traj;
traj_info.ddq_traj = q_ddot_traj;
traj_info.impact_traj = impact_traj;
traj_info.y_sw = pos_sw;
traj_info.y_st = pos_st;
traj_info.y_sw_normal = pos_sw_normal;
traj_info.x_traj_all = x_traj_all;
traj_info.u_traj_all = u_traj_all;
traj_info.w_traj_all = w_traj_all;
traj_info.x_ref_traj = x_ref_traj;
traj_info.w_ref_traj = w_ref_traj;
traj_info.ddy_ref_traj = hd_ddot_traj;
traj_info.u_ref_traj = u_ref_traj;
traj_info.stats.time_calc = time_calc;
traj_info.stats.x_traj_final_error = x_traj_final_error;
traj_info.stats.avg_calc_time = avg_calc_time;
traj_info.stats.x_traj_error = x_traj_error;

mpc_info.args = args;
ctrl_info.mpc_info = mpc_info;

end