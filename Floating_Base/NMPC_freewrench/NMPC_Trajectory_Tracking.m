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
addpath(genpath('utils/'));
addpath(genpath('Reference_Trajectories'));
addpath(genpath('../FROST_code'))

%% Time Step, Prediction Horizon, Simulation Time
mpc_info = struct;
mpc_info.DT = 0.005;
mpc_info.N = 10;
mpc_info.sim_time = 1;

%% Load Desired Reference Trajectory
cur = pwd;
stpheight = 0.04;
dir = 'descend';
traj_name = string(stpheight) + '_' + dir + '.mat';
ref_info = Load_Reference_Trajectory(mpc_info,dir,traj_name);
ref_info.x_init = [ref_info.full_ref.gait(1).states.x(:,1); ref_info.full_ref.gait(1).states.dx(:,1)];
ref_info.w_init = ref_info.full_ref.gait(1).inputs.fRightToe([1,3],1);
disp("Reference Trajectory Loaded and Initial Condition Set!");

%% Generate Dynamics Functions
free_wrench = 0;    % Equals 1 if wrench vector is decision variable
tic
[dyn_info] = Generate_Dynamics_Nonlinear();
disp("Dynamic Functions Created!  (" + toc + " sec)");

%% Build Nonlinear Program
use_descriptor = 0;     % Equals 1 if using descriptor ODE form for dynamics equality propogation
disp("Begin NLP formulation...");
tic
[mpc_info] = Formulate_NLP_TrajectoryTracking(dyn_info,mpc_info,ref_info,use_descriptor);
disp("Finished formulating NLP!  (" + toc + " sec)");

%% ***********************************************************************
%       Run Simulation
%*************************************************************************
disp("Begin simulation...");
[traj_info,mpc_info] = ...
    Simulate_Nonlinear_TrajectoryTracking(dyn_info,mpc_info,ref_info);
disp("Finished simulation!");

%% Save Simulation


%% Plot
plotSettings = struct;
plotSettings.q = 1;
plotSettings.dq = 1;
plotSettings.u = 1;
plotSettings.w = 1;
plotSettings.single_sol = 0;
plotSettings.traj_title = string(stpheight)+'m '+dir;
Plot_TrajectoryTracking(dyn_info,mpc_info,ref_info,traj_info,plotSettings);

%% Animate
animateSettings = struct;
animateSettings.traj = 1;
animateSettings.ref = 0;
animateSettings.single_sol = 0;
Animate_MPC_Traj(mpc_info,ref_info,traj_info,animateSettings);

%% Single Solution 
% Plots
plotSettings.q = 0;
plotSettings.dq = 0;
plotSettings.u = 0;
plotSettings.w = 0;
plotSettings.single_sol = 0;
Plot_TrajectoryTracking(dyn_info,mpc_info,ref_info,traj_info,plotSettings);
% Animation
animateSettings.traj = 0;
animateSettings.ref = 0;
animateSettings.single_sol = 0;
Animate_MPC_Traj(mpc_info,ref_info,traj_info,animateSettings);

% Just checked the trajectory for N = 150, and the trajectory generated for
% the first time step is perfect. There may be a problem with the
% update_state step which is causing additional errors to be introduced...?







