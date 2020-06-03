%% View Saved Results for NMPC Trajectory Tracking (planar 5-link walker)
%   Trajectory Tracking
%   Floating Base (multi-shooting with Wrench Included)
%   Continuous Dynamics
clear; clc; close all;

%% Path setup
restoredefaultpath;
if isunix
    addpath('../../casadi-linux-matlabR2014b-v3.5.1');
    import casadi.*
else
    addpath('../Toolboxes/casadi-windows-matlabR2014b-3.5.1');
    import casadi.*
end
addpath(genpath('utils_nmpc/'));
addpath(genpath('saved_results/'));

%% Trajectory Options
DT = 0.005;
grf_active = 0;         % 1 for GRF constraint active
torque_sat = 0;         % if nonzero, number is the saturated torque value
isObstacle = 0;         % 1 for obstacle
step_dir = "Ascend";    % Descend
step_height = "0.10";   % 0.05, 0.10
step_vel = "0.75";      % 0.50 or 0.75
if step_dir == "Ascend"
    step_height_dbl = double(step_height);
else
    step_height_dbl = -double(step_height);
end
IO_linear = 0;          % 1 -> IO-L,    0 -> IO-NMPC
N = 10;

%% Load Results
extra_settings = "";
if grf_active
    extra_settings = extra_settings + "_GRF(mu = " + constr_info.grf.mu + ")";
    load_dir = "GRF/";
end
if torque_sat
    extra_settings = extra_settings + "_TorqueSaturate(" + constr_info.torque.sat + ")";
    load_dir = "GRF_Torques/";
end
if isObstacle
    extra_settings = extra_settings + "_Obstacle";
    load_dir = "GRF_Torques_Obstacle/";
end

if ~grf_active && ~torque_sat && ~isObstacle
    load_dir = "Unconstrained/";
end

if IO_linear
    load_name = "Stairs(" + step_dir + ...
        ")_Ht(" + string(step_height_dbl) + ...
        " m)_N(0-IO)_DT(" + DT + ...
        " s)_Vel(" + step_vel + " mps)" + ...
        extra_settings + ".mat";
    
    results = load(fullfile('saved_results/IO/',load_dir,load_name));
else
    load_name = "Stairs(" + step_dir + ...
        ")_Ht(" + string(step_height_dbl) + ...
        " m)_N(" + N + ...
        ")_DT(" + DT + ...
        " s)_Vel(" + step_vel + " mps)_" + ...
        extra_settings + ".mat";
    
    results = load(fullfile('saved_results/IO_NMPC/',load_dir,load_name));
end

%% Extract Loaded Data
ctrl_info = results.ctrl_info;
ref_info = results.ref_info;
constr_info = results.constr_info;
dyn_info = results.dyn_info;
traj_info = results.traj_info;
mpc_info = ctrl_info.mpc_info;

%% Trajectory Statistics
x_traj_final_error = traj_info.stats.x_traj_final_error;
avg_calc_time = traj_info.stats.avg_calc_time;
x_traj_error = traj_info.stats.x_traj_error;
disp('************** Trajectory STATISTICS **************')
disp("Trajectory error (2-norm) = ")
disp(x_traj_error);
disp("Final trajectory error (2-norm) = " + x_traj_final_error);
disp("Average MPC Calculation Time = " + avg_calc_time);
disp("State Penalty (Q)"); disp(mpc_info.Q);
disp("Control Inputs Penalty (R)"); disp(mpc_info.R);

%% Plot
plotSettings = struct('x',0,...
    'x_s',              0,...
    'u',                0,...
    'w',                0,...
    'xerr',             0,...
    'y_sw',             0,...
    'y_sw_normal',      0,...
    's',                0,...
    'calc_time',        0,...
    'impact',           0,...
    'virtuals',         0,...
    'h_q_vs_s',         0,...
    'last_step',        0,...
    'single_sol',       0,...
    'pos_stancefoot',   0,...
    'x_all',            1);
plotSettings.traj_title = ref_info.step_height + "m " + ref_info.step_dir;
Plot_TrajectoryTracking(dyn_info,ctrl_info,ref_info,traj_info,constr_info,plotSettings);
disp('Finished Plotting!');

%% Animation
animateSettings = struct('traj',1,...
    'ref',          1,...
    'speed',        1,...
    'single_sol',   0);
Animation_Grant(dyn_info,ctrl_info,ref_info,traj_info,animateSettings);
% Animate_MPC_Traj(ctrl_info,ref_info,traj_info,animateSettings);
disp('Finished Animation!');


%% end of code




























