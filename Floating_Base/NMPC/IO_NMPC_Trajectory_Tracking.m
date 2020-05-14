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
ctrl_info = struct('DT', 0.005,...
    'type', "IO");
%     'type', "NMPC");

% MPC info
ctrl_info.mpc_info = struct('N',3,...
    'DT',   ctrl_info.DT);

% IO info
ctrl_info.IO_info = struct('DT', ctrl_info.DT,...
    'type',     "phase",... % or time
    'linear',   0); % 1 uses IO-L!

%% Load Desired Reference Trajectory
tic
ref_info = struct('num_steps', 3,...
    'external_force',       0,...
    'step_height',          "0.05",...
    'step_vel',             "0.75");

ref_info.step_dir = "Ascend";
% ref_info.step_dir = "Descend";

if ref_info.step_dir == "Descend"
    ref_info.step_height_dbl = -double(ref_info.step_height);
else
    ref_info.step_height_dbl = double(ref_info.step_height);
end
ref_info.traj_name = ref_info.step_dir + "_Ht(" + ref_info.step_height + ')_Vel(' + ref_info.step_vel + ").mat";

% Load reference
ref_info = Load_Reference_Trajectory(ctrl_info,ref_info);
disp("Reference Trajectory Loaded! ( " + toc + " sec)");

% Initial Condition
ref_info.x_init = [ref_info.full_ref.gait(1).states.x(:,1);
    ref_info.full_ref.gait(1).states.dx(:,1)];
disp("Initial Condition Set!");

%% Constraint Information
constr_info = struct;

% constrain the Ground Reaction Forces
constr_info.grf = struct('active',1,...
    'mu',       0.9,...
    'fail',     0);

% Saturate the torque
constr_info.torque = struct('sat',5);

% Constrain swing foot height as a function of phase
constr_info.obstacle = struct('isObstacle',0,...
    'height',       0.12,...
    'width',        [0.73, 0.85]); % As a function of phase

disp("Constraint Information Saved!");

%% Generate Dynamics Functions
disp("Calculating Kinematics and Dynamics Functions...");
tic
[dyn_info] = Generate_Kinematics_Dynamics();
disp("Kinematics and Dynamic Functions Created!  (" + toc + " sec)");

%% Build Nonlinear Program
disp("Begin NLP formulation...");
tic
if ctrl_info.type == "IO"
    [ctrl_info] = Formulate_NLP_TrajectoryTracking_IO(dyn_info,ctrl_info,ref_info,constr_info);
end
disp("Finished formulating NLP! (N = " + ctrl_info.mpc_info.N + ", " + toc + " sec)");

%% ************************** Run Simulation ******************************
disp("Begin simulation...");
if ctrl_info.type == "IO"
    [traj_info,ctrl_info] = Simulate_IO_TrajectoryTracking(dyn_info,ctrl_info,ref_info,constr_info);
end
disp("Finished simulation!");

%% Save Simulation
if true
    Save_Trajectory_Info(ctrl_info,ref_info,constr_info,dyn_info,traj_info);
end

%% Plot
close all;
plotSettings = struct('x',0,...
    'x_s',          0,...
    'u',            1,...
    'w',            1,...
    'xerr',         0,...
    'y_sw',         1,...
    'y_sw_normal',  0,...
    's',            0,...
    'calc_time',    0,...
    'impact',       0,...
    'virtuals',     0,...
    'h_q_vs_s',     0,...
    'last_step',    0,...
    'single_sol',   0);
plotSettings.traj_title = ref_info.step_height + "m " + ref_info.step_dir;
Plot_TrajectoryTracking(dyn_info,ctrl_info,ref_info,traj_info,constr_info,plotSettings);
disp('Finished Plotting!');

%% Animation
animateSettings = struct('traj',1,...
    'ref',          0,...
    'speed',        1,...
    'single_sol',   0);
% Animation_Grant(dyn_info,ctrl_info,ref_info,traj_info,animateSettings);
Animate_MPC_Traj(ctrl_info,ref_info,traj_info,animateSettings);
disp('Finished Animation!');
