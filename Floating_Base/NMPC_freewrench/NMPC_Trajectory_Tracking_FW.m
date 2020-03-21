%% Nonlinear Model Predictive Control for Rabbit (planar 5-link walker)
%   Trajectory Tracking
%   Floating Base (multi-shooting with Wrench Included)
%   Continuous Dynamics ~ no impact considered
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
addpath(genpath('utils_FW/'));
addpath(genpath('reference_trajectories'));
addpath(genpath('../FROST_code'))

%% Time Step, Prediction Horizon, Simulation Time
mpc_info_FW = struct;
mpc_info_FW.DT = 0.005;
mpc_info_FW.N = 10;
mpc_info_FW.sim_time = 1;
mpc_info_FW.iter = 1;

%% Load Desired Reference Trajectory
cur = pwd;
stpheight = 0.05;
dir = 'ascend';
traj_name = string(stpheight) + '_' + dir + '.mat';
ref_info_FW = Load_Reference_Trajectory_FW(mpc_info_FW,dir,traj_name);
ref_info_FW.x_init = [ref_info_FW.full_ref.gait(1).states.x(:,1); ref_info_FW.full_ref.gait(1).states.dx(:,1)];
disp("Reference Trajectory Loaded!");
disp("Initial Condition Set!");

%% Generate Dynamics Functions
tic
[dyn_info_FW] = Generate_Dynamics_Nonlinear_FW();
disp("Dynamic Functions Created!  (" + toc + " sec)");

%% Build Nonlinear Program
disp("Begin NLP formulation...");
tic
[mpc_info_FW] = Formulate_NLP_TrajectoryTracking_FW(dyn_info_FW,mpc_info_FW,ref_info_FW);
disp("Finished formulating NLP!  (" + toc + " sec)");

%% ************************** Run Simulation ******************************
disp("Begin simulation...");
[traj_info_FW,mpc_info_FW] = ...
    Simulate_Nonlinear_TrajectoryTracking_FW(dyn_info_FW,mpc_info_FW,ref_info_FW);
disp("Finished simulation!");

%% Save Simulation
if true
    save_name = "Stairs(" + dir + ")_Ht(" + stpheight + ")_N(" + mpc_info_FW.N +...
        ")_DT(" + mpc_info_FW.DT + ")_Time(" + mpc_info_FW.sim_time + " sec)_FreeWrench.mat";
    save(fullfile('saved_results/',save_name),'ref_info_FW','traj_info_FW','dyn_info_FW');
end
disp("Saved Trajectory!");

%% Plot
plotSettings = struct;
plotSettings.q = 1;
plotSettings.dq = 1;
plotSettings.u = 1;
plotSettings.w = 1;
plotSettings.single_sol = 0;
plotSettings.traj_title = string(stpheight)+'m '+dir;
Plot_TrajectoryTracking_FW(dyn_info_FW,mpc_info_FW,ref_info_FW,traj_info_FW,plotSettings);

%% Animate
animateSettings = struct;
animateSettings.traj = 1;
animateSettings.ref = 0;
animateSettings.single_sol = 0;
Animate_MPC_Traj_FW(mpc_info_FW,ref_info_FW,traj_info_FW,animateSettings);

%% ======= EXTRAS ========

%% Check Simulation

% ogbounds = [ref_info_FW.full_ref.bounds.RightStance.states.x.lb', ref_info_FW.full_ref.bounds.RightStance.states.x.ub';...
%     ref_info_FW.full_ref.bounds.RightStance.states.dx.lb', ref_info_FW.full_ref.bounds.RightStance.states.dx.ub';...
%     ref_info_FW.full_ref.bounds.RightStance.states.x.lb', ref_info_FW.full_ref.bounds.RightStance.states.x.ub';...
%     ref_info_FW.full_ref.bounds.RightStance.states.dx.lb', ref_info_FW.full_ref.bounds.RightStance.states.dx.ub';
%     ref_info_FW.full_ref.bounds.RightStance.inputs.Control.u.lb, ref_info_FW.full_ref.bounds.RightStance.inputs.Control.u.ub;...
%     ref_info_FW.full_ref.bounds.RightStance.inputs.Control.u.lb, ref_info_FW.full_ref.bounds.RightStance.inputs.Control.u.ub;...
%     -inf, inf;...
%     -inf, inf;...
%     -inf, inf;...
%     -inf, inf];
% mybounds = [mpc_info_FW.args.lbx, mpc_info_FW.args.ubx];
% 
% all_bounds = [mybounds(:,1), ogbounds(:,1), ogbounds(:,2), mybounds(:,2)];
% save('FWbounds','all_bounds');

%% Single Solution 
% % Plots
% plotSettings.q = 0;
% plotSettings.dq = 0;
% plotSettings.u = 0;
% plotSettings.w = 0;
% plotSettings.single_sol = 0;
% Plot_TrajectoryTracking(dyn_info,mpc_info,ref_info,traj_info,plotSettings);
% % Animation
% animateSettings.traj = 0;
% animateSettings.ref = 0;
% animateSettings.single_sol = 0;
% Animate_MPC_Traj(mpc_info,ref_info,traj_info,animateSettings);

% Just checked the trajectory for N = 150, and the trajectory generated for
% the first time step is perfect. There may be a problem with the
% update_state step which is causing additional errors to be introduced...?







