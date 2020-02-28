%% Nonlinear Model Predictive Control for Rabbit (planar 5-link walker)
%   Trajectory Tracking
%   Floating Base
%   Continuous Dynamics ~ no impact considered
clear; clc;

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
mpc_info.N = 1;
mpc_info.sim_time = 1;

%% Load Desired Reference Trajectory
cur = pwd;
stpheight = 0.05;
dir = 'ascend';
traj_name = string(stpheight) + '_' + dir + '.mat';
% Compute reference
ref_info = Load_Reference_Trajectory(mpc_info,dir,traj_name);
% IC
x_init = [ref_info.full_ref.gait(1).states.x(:,1); ref_info.full_ref.gait(1).states.dx(:,1)];
ref_info.x_init = x_init;
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
[x_traj,u_traj,x_traj_all,t_all,mpciter,args] = ...
    Simulate_Nonlinear_TrajectoryTracking(ref_info.x_init,ref_info.x_ref,ref_info.u_ref,ref_info.full_ref,...
    dyn_info.func.f_NL,dyn_info.dim.n_x,dyn_info.dim.n_u,mpc_info);
disp("Finished simulation!");

%% Save Simulation

%% Plot
plotSettings = struct;
plotSettings.q = 1;
plotSettings.dq = 1;
plotSettings.u = 1;
traj_title = string(stpheight)+'m '+dir;
if (true)
    Plot_TrajectoryTracking(t_all,x_traj,u_traj,ref_info.x_ref(:,1:end-1),ref_info.u_ref(:,1:end-1),plotSettings,traj_title,args);
end

%% Animate
animateSettings = struct;
animateSettings.traj = 1;
animateSettings.ref = 0;
Animate_MPC_Traj(t_all,ref_info.x_ref,x_traj,animateSettings)









