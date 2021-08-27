%% Nonlinear Model Predictive Control for Rabbit (planar 5-link walker)
%   Output Tracking (Cost function changes)
%   Floating Base
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
mpc_info.type = 'output';

%% Load Desired Reference Trajectory
cur = pwd;
stpheight = 0.05;
dir = 'ascend';
traj_name = string(stpheight) + '_' + dir + '.mat';
% Compute reference
ref_info = Load_Reference_Trajectory(mpc_info,dir,traj_name);
% IC
ref_info.x_init = [ref_info.full_ref.gait(1).states.x(:,1); ref_info.full_ref.gait(1).states.dx(:,1)];
disp("Reference Trajectory Loaded and Initial Condition Set!");

%% Generate Dynamics Functions
tic
[dyn_info] = Generate_Dynamics_Nonlinear();
disp("Dynamic Functions Created!  (" + toc + " sec)");

%% Build Nonlinear Program
use_descriptor = 0;     % Equals 1 if using descriptor ODE form for dynamics equality propogation
disp("Begin NLP formulation...");
tic
[mpc_info] = Formulate_NLP_TrajectoryTracking(dyn_info,mpc_info,ref_info);
disp("Finished formulating NLP!  (" + toc + " sec)");

%% ***********************************************************************
%       Run Simulation
%*************************************************************************
disp("Begin simulation...");
[mpc_info,traj_info] = ...
    Simulate_Nonlinear_TrajectoryTracking(dyn_info,mpc_info,ref_info);
disp("Finished simulation!");

%% Save Simulation


%% Plot
plotSettings = struct;
plotSettings.q = 1;
plotSettings.dq = 1;
plotSettings.u = 1;
plotSettings.traj_title = string(stpheight)+'m '+dir;
Plot_TrajectoryTracking(mpc_info,ref_info,traj_info,plotSettings);

%% Animate
animateSettings = struct;
animateSettings.traj = 1;
animateSettings.ref = 0;
Animate_MPC_Traj(ref_info,traj_info,animateSettings)









