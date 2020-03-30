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
addpath(genpath('utils/'));
addpath(genpath('../FROST_code'));
addpath(genpath('saved_results/'));


%% Time Step, Prediction Horizon, Simulation Time
mpc_info = struct;
mpc_info.DT = 0.005;
mpc_info.N = 10;
step_dir = "Ascend";
step_height = "0.10";
step_time = "0.45";

%% Load Results
load_name = "Stairs(" + step_dir + ")_Ht(" + step_height +...
        ")_N(" + mpc_info.N + ")_DT(" + mpc_info.DT +...
        ")_Time(" + step_time + " sec).mat";
results = load(fullfile('saved_results/',load_name));
dyn_info = results.dyn_info;
ref_info = results.ref_info;
traj_info = results.traj_info;
mpc_info.args = results.args;
mpc_info.Q = results.penalties.Q;
mpc_info.R = results.penalties.R;

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
plotSettings = struct;
plotSettings.x = 1;
plotSettings.u = 1;
plotSettings.w = 1;
plotSettings.xerr = 0;
plotSettings.y = 1;
plotSettings.calc_time = 1;
plotSettings.single_sol = 0;
plotSettings.traj_title = step_height + "m " + step_dir;
Plot_TrajectoryTracking(dyn_info,mpc_info,ref_info,traj_info,plotSettings);
disp('Finished Plotting!');

%% Animation
animateSettings = struct;
animateSettings.traj = 1;
animateSettings.ref = 0;
animateSettings.single_sol = 0;
Animate_MPC_Traj(mpc_info,ref_info,traj_info,animateSettings);
disp('Finished Animation!');




































%% end of code
