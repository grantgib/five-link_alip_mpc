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
trajName = string(stpheight) + '_' + dir + '.mat';
if isequal(dir,'ascend')
    full_ref = load(fullfile('Reference_Trajectories\variousStepHeightsAscend\',trajName));
else
    full_ref = load(fullfile('Reference_Trajectories\variousStepHeightsDescend\',trajName));
end
% Interpolate trajectory (*** This could be a problem ****)
trajRef = calculations.referenceTrajBez(full_ref.gait,mpc_info.DT);
X_REF_Original = [trajRef.x; trajRef.dx];
U_REF_Original = trajRef.u;

x_ref_init = [full_ref.gait(1).states.x(:,1); full_ref.gait(1).states.dx(:,1)];
delta_x_init = 0.02*x_ref_init; % initial condition. 14X1
x_init = [full_ref.gait(1).states.x(:,3); full_ref.gait(1).states.dx(:,3)];

ref_info = struct;
ref_info.x_ref = X_REF_Original;
ref_info.u_ref = U_REF_Original;
ref_info.full_ref = full_ref;

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
    Simulate_Nonlinear_TrajectoryTracking(x_init,dyn_info,mpc_info,ref_info);
disp("Finished simulation!");

%% Save Simulation


%% Plot
plotSettings = struct;
plotSettings.q = 1;
plotSettings.dq = 1;
plotSettings.u = 1;

traj_title = string(stpheight)+'m '+dir;
if (true)
    Plot_TrajectoryTracking(traj_info,mpc_info,plotSettings,traj_title);
end

%% Animate
animateSettings = struct;
animateSettings.traj = 1;
animateSettings.ref = 0;
Animate_MPC_Traj(ref_info,traj_info,animateSettings)









