%% Nonlinear Model Predictive Control for Rabbit (planar 5-link walker)
%   Trajectory Tracking
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
addpath(genpath('/../reference_trajectories'));
addpath(genpath('../FROST_code'))

%% Time Step, Prediction Horizon, Simulation Time
mpc_info = struct;
mpc_info.DT = 0.005;
mpc_info.N = 1;
mpc_info.sim_time = 1;
mpc_info.type = 'traj_track';

%% Load Desired Reference Trajectory
step_height = 0.05;
step_time = 1;
step_dir = "Ascend";
traj_name = step_dir + "_Ht(" + string(step_height) + ')_Time(' + step_time + ").mat";

% Compute reference
ref_info = Load_Reference_Trajectory(mpc_info,step_dir,traj_name);

% IC
ref_info.x_init = [ref_info.full_ref.gait(1).states.x(:,1); ref_info.full_ref.gait(1).states.dx(:,1)];
disp("Reference Trajectory Loaded!");
disp("Initial Condition Set!");

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

%% Post-compute Wrench values during trajectory
traj_info = Compute_Wrench(dyn_info,traj_info);
disp("Computed Wrench Post-Simulation!");

%% Save Simulation
% if true
%     save_name = "Stairs(" + dir + ")_Ht(" + stpheight + ")_N(" + mpc_info.N +...
%         ")_DT(" + mpc_info.DT + ")_Time(" + mpc_info.sim_time + " sec).mat";
%     save(fullfile('saved_results/',save_name),'ref_info','traj_info','dyn_info');
% end
% disp("Saved Trajectory!");

%% Plot
plotSettings = struct;
plotSettings.q = 0;
plotSettings.dq = 0;
plotSettings.u = 0;
plotSettings.traj_title = string(step_height)+'m '+step_dir;
Plot_TrajectoryTracking(mpc_info,ref_info,traj_info,plotSettings);

%% Animate
animateSettings = struct;
animateSettings.traj = 0;
animateSettings.ref = 0;
Animate_MPC_Traj(ref_info,traj_info,animateSettings)

%% Extras
% ogbounds = [ref_info.full_ref.bounds.RightStance.states.x.lb', ref_info.full_ref.bounds.RightStance.states.x.ub';...
%     ref_info.full_ref.bounds.RightStance.states.dx.lb', ref_info.full_ref.bounds.RightStance.states.dx.ub';...
%     ref_info.full_ref.bounds.RightStance.states.x.lb', ref_info.full_ref.bounds.RightStance.states.x.ub';...
%     ref_info.full_ref.bounds.RightStance.states.dx.lb', ref_info.full_ref.bounds.RightStance.states.dx.ub';
%     ref_info.full_ref.bounds.RightStance.inputs.Control.u.lb, ref_info.full_ref.bounds.RightStance.inputs.Control.u.ub;...
%     ref_info.full_ref.bounds.RightStance.inputs.Control.u.lb, ref_info.full_ref.bounds.RightStance.inputs.Control.u.ub];
% mybounds = [mpc_info.args.lbx, mpc_info.args.ubx];
%
% all_bounds = [mybounds(:,1), ogbounds(:,1), ogbounds(:,2), mybounds(:,2)];
% save('NMPCbounds','all_bounds');
%





