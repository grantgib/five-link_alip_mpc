%% Nonlinear Model Predictive Control for Rabbit (planar 5-link walker)
%   Trajectory Tracking
%   Floating Base (multi-shooting with Wrench Included)
%   Continuous Dynamics ~ no impact considered
%   Impact Map included ~ shrinking horizon used before impact (i.e. can't
%       predict states ahead of impact currently)
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

%% Controller Information
% General
ctrl_info = struct;
ctrl_info.DT = 0.005;
ctrl_info.type = "IO";
% ctrl_info.type = "NMPC";

% MPC info
ctrl_info.mpc_info.N = 4;
ctrl_info.mpc_info.DT = ctrl_info.DT;

% IO info
ctrl_info.IO_info.DT = ctrl_info.DT;
ctrl_info.IO_info.type = "phase";

%% Load Desired Reference Trajectory
ref_info.num_steps = 10;
ref_info.step_height = "0.05";
ref_info.step_vel = "0.40";
ref_info.step_dir = "Ascend";
ref_info.traj_name = ref_info.step_dir + "_Ht(" + ref_info.step_height + ')_Vel(' + ref_info.step_vel + ").mat";
% ref_info.step_dir = "Descend";
% ref_info.traj_name = ref_info.step_dir + "_Ht(" + ref_info.step_height + ")_Time(" + 1 + ").mat";

% Load reference
ref_info = Load_Reference_Trajectory(ctrl_info,ref_info);

% IC
ref_info.x_init = [ref_info.full_ref.gait(1).states.x(:,1); ref_info.full_ref.gait(1).states.dx(:,1)];
% ref_info.x_init = ref_info.x_ref(:,1);
disp("Reference Trajectory Loaded!");
disp("Initial Condition Set!");

%% Generate Dynamics Functions
tic
[dyn_info] = Generate_Dynamics_Nonlinear();
disp("Dynamic Functions Created!  (" + toc + " sec)");

%% Build Nonlinear Program
disp("Begin NLP formulation...");
tic
if ctrl_info.type == "NMPC"
    [ctrl_info] = Formulate_NLP_TrajectoryTracking(dyn_info,ctrl_info,ref_info);
elseif ctrl_info.type == "IO"
    [ctrl_info] = Formulate_NLP_TrajectoryTracking_IO(dyn_info,ctrl_info,ref_info);
end
disp("Finished formulating NLP!  (" + toc + " sec)");

%% ************************** Run Simulation ******************************
disp("Begin simulation...");
if ctrl_info.type == "NMPC"
    [traj_info,ctrl_info] = ...
        Simulate_Nonlinear_TrajectoryTracking(dyn_info,ctrl_info,ref_info);
elseif ctrl_info.type == "IO"
    [traj_info] = Simulate_IO_TrajectoryTracking(dyn_info,ctrl_info,ref_info);
end
disp("Finished simulation!");

%% Save Simulation
if false
    args = ctrl_info.mpc_info.args;
    penalties = struct;
    penalties.Q = ctrl_info.mpc_info.Q;
    penalties.R = ctrl_info.mpc_info.R;
    %     save_name = "Stairs(" + ref_info.step_dir + ")_Ht(" + ref_info.step_height +...
    %         ")_N(" + mpc_info.N + ")_DT(" + mpc_info.DT +...
    %         ")_Time(" + ref_info.step_time + " sec).mat";
    save_name = "Stairs(" + ref_info.step_dir + ")_Ht(" + ref_info.step_height +...
        ")_N(" + ctrl_info.mpc_info.N + ")_DT(" + ctrl_info.mpc_info.DT +...
        ")_Vel(" + ref_info.step_vel + " sec).mat";
    save(fullfile('saved_results/',save_name),'ref_info','traj_info','dyn_info','args','penalties');
end
disp("Saved Trajectory!");

%% Plot
plotSettings = struct;
plotSettings.x = 1;
plotSettings.u = 1;
plotSettings.w = 0;
plotSettings.xerr = 1;
plotSettings.y = 0;
plotSettings.s = 1;
plotSettings.calc_time = 0;
plotSettings.single_sol = 0;
plotSettings.traj_title = ref_info.step_height + "m " + ref_info.step_dir;
Plot_TrajectoryTracking(dyn_info,ctrl_info,ref_info,traj_info,plotSettings);
disp('Finished Plotting!');

%% Animation
animateSettings = struct;
animateSettings.traj = 1;
animateSettings.ref = 0;
animateSettings.speed = 0.5;
animateSettings.single_sol = 0;
Animate_MPC_Traj(ctrl_info,ref_info,traj_info,animateSettings);
disp('Finished Animation!');

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


