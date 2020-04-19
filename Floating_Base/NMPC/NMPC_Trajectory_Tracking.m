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
ctrl_info.mpc_info.N = 1;
ctrl_info.mpc_info.DT = ctrl_info.DT;

% IO info
ctrl_info.IO_info.DT = ctrl_info.DT;
ctrl_info.IO_info.type = "phase"; % time
ctrl_info.IO_info.linear = true; % true

%% Load Desired Reference Trajectory
tic
ref_info.num_steps = 40;
ref_info.step_height = "0";
ref_info.step_vel = "0.75";
ref_info.step_dir = "Ascend";
ref_info.traj_name = ref_info.step_dir + "_Ht(" + ref_info.step_height + ')_Vel(' + ref_info.step_vel + ").mat";
% ref_info.step_dir = "Descend";
% ref_info.traj_name = ref_info.step_dir + "_Ht(" + ref_info.step_height + ")_Time(" + 1 + ").mat";

% Load reference
ref_info.better_traj = 0;
ref_info = Load_Reference_Trajectory(ctrl_info,ref_info);
disp("Reference Trajectory Loaded! ( " + toc + " sec)");

% IC
% if ref_info.better_traj
%     new_traj = load('new_alphas');
%     ref_info.x_init = new_traj.x_init_new;
% else
%     ref_info.x_init = [ref_info.full_ref.gait(1).states.x(:,1); ref_info.full_ref.gait(1).states.dx(:,1)];
% end
ref_info.x_init = [ref_info.full_ref.gait(1).states.x(:,1); ref_info.full_ref.gait(1).states.dx(:,1)];
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
disp("Finished formulating NLP! (N = " + ctrl_info.mpc_info.N + ", " + toc + " sec)");

%% ************************** Run Simulation ******************************
disp("Begin simulation...");
if ctrl_info.type == "NMPC"
    [traj_info,ctrl_info] = ...
        Simulate_Nonlinear_TrajectoryTracking(dyn_info,ctrl_info,ref_info);
elseif ctrl_info.type == "IO"
    [traj_info,ctrl_info] = Simulate_IO_TrajectoryTracking(dyn_info,ctrl_info,ref_info);
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
        ")_Vel(" + ref_info.step_vel + " sec)_New.mat";
    save(fullfile('saved_results/IO',save_name),'ref_info','traj_info','dyn_info','penalties');
end
disp("Saved Trajectory!");


%% Extract Better Trajectory
% [alpha_h,alpha_dh,alpha_ddh,alpha_ddh_old,s_func,x_init_new,gait] = Generate_Better_Trajectory(dyn_info,ctrl_info,ref_info,traj_info);
% save('new_gait','gait');
% disp("Saved new gait");
% save('new_alphas','alpha_h','alpha_dh','alpha_ddh','alpha_ddh_old','s_func','x_init_new')
% disp("Saved new alphas");

%% Plot
close all;
plotSettings = struct('x',1,...
    'u',         1,...
    'w',         0,...
    'xerr',      0,...
    'y_sw',      0,...
    's',         0,...
    'calc_time', 0,...
    'impact',    0,...
    'single_sol',0,...
    'virtuals',  0,...
    'h_q_vs_s',  0,...
    'last_step', 0);
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


