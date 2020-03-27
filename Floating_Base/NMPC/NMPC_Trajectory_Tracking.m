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
addpath(genpath('../reference_trajectories/'));
addpath(genpath('../FROST_code'))

%% Time Step, Prediction Horizon, Simulation Time
mpc_info = struct;
mpc_info.DT = 0.005;
mpc_info.N = 1;
mpc_info.iter = 1;

%% Load Desired Reference Trajectory
ref_info.step_height = "0.10";
ref_info.step_time = "0.45";
ref_info.step_dir = "Ascend";
ref_info.traj_name = ref_info.step_dir + "_Ht(" + ref_info.step_height + ')_Time(' + ref_info.step_time + ").mat";

% Compute reference
ref_info = Load_Reference_Trajectory(mpc_info,ref_info);

% IC
ref_info.x_init = [ref_info.full_ref.gait(1).states.x(:,1); ref_info.full_ref.gait(1).states.dx(:,1)];
disp("Reference Trajectory Loaded!");
disp("Initial Condition Set!");

%% Generate Dynamics Functions
tic
[dyn_info] = Generate_Dynamics_Nonlinear();
disp("Dynamic Functions Created!  (" + toc + " sec)");

%% Build Nonlinear Program
disp("Begin NLP formulation...");
tic
[mpc_info] = Formulate_NLP_TrajectoryTracking(dyn_info,mpc_info,ref_info);
disp("Finished formulating NLP!  (" + toc + " sec)");

%% ************************** Run Simulation ******************************
disp("Begin simulation...");
[traj_info,mpc_info] = ...
    Simulate_Nonlinear_TrajectoryTracking(dyn_info,mpc_info,ref_info);
disp("Finished simulation!");

%% Save Simulation
if true
    save_name = "Stairs(" + ref_info.step_dir + ")_Ht(" + ref_info.step_height +...
        ")_N(" + mpc_info.N + ")_DT(" + mpc_info.DT +...
        ")_Time(" + ref_info.step_time + " sec).mat";
    save(fullfile('saved_results/',save_name),'ref_info','traj_info','dyn_info');
end
disp("Saved Trajectory!");

%% Plot
plotSettings = struct;
plotSettings.q = 1;
plotSettings.dq = 0;
plotSettings.u = 0;
plotSettings.w = 0;
plotSettings.qerr = 0;
plotSettings.dqerr = 0;
plotSettings.single_sol = 0;
plotSettings.traj_title = ref_info.step_height + "m " + ref_info.step_dir;
Plot_TrajectoryTracking(dyn_info,mpc_info,ref_info,traj_info,plotSettings);

%% Animation
animateSettings = struct;
animateSettings.traj = 1;
animateSettings.ref = 0;
animateSettings.single_sol = 0;
Animate_MPC_Traj(mpc_info,ref_info,traj_info,animateSettings);

%% ============================== EXTRAS ==================================
%% Check Bounds
% ogbounds = [ref_info.full_ref.bounds.RightStance.states.x.lb', ref_info_FW.full_ref.bounds.RightStance.states.x.ub';...
%     ref_info_FW.full_ref.bounds.RightStance.states.dx.lb', ref_info_FW.full_ref.bounds.RightStance.states.dx.ub';...
%     ref_info_FW.full_ref.bounds.RightStance.states.x.lb', ref_info_FW.full_ref.bounds.RightStance.states.x.ub';...
%     ref_info_FW.full_ref.bounds.RightStance.states.dx.lb', ref_info_FW.full_ref.bounds.RightStance.states.dx.ub';
%     ref_info_FW.full_ref.bounds.RightStance.inputs.Control.u.lb, ref_info_FW.full_ref.bounds.RightStance.inputs.Control.u.ub;...
%     ref_info_FW.full_ref.bounds.RightStance.inputs.Control.u.lb, ref_info_FW.full_ref.bounds.RightStance.inputs.Control.u.ub;...
%     -inf, inf;...
%     -inf, inf;...
%     -inf, inf;...
%     -inf, inf];
% mybounds = [mpc_info.args.lbx, mpc_info_FW.args.ubx];
% all_bounds = [mybounds(:,1), ogbounds(:,1), ogbounds(:,2), mybounds(:,2)];
% save('FWbounds','all_bounds');


