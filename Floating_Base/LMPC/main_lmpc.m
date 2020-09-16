%% Trajectory Tracking for Rabbit (planar 5-link walker)
%   Floating Base 
%       *(multi-shooting with Wrench Included for nmpc)
%   Continuous Dynamics
%   Impact Map included in prediction horizon
clear; clc; close all;
disp(" LMPC for Rabbit Stair Climbing ");

%% Controller Information
% General
ctrl_info = struct('DT',                0.005,...
                   'step_look_ahead',   10,...
                   'int',               "Euler",...
                   'type',              "LMPC");

% MPC info
ctrl_info.lmpc_info = struct('N',   10,...
                             'DT',  ctrl_info.DT);

%% Generate Dynamics Functions
disp("Calculating Kinematics and Dynamics Functions...");
tic
[dyn_info] = Generate_Dynamics_Kinematics_Linear();
% [dyn_info] = Generate_Dynamics_Kinematics_Linear_v2();
disp("Kinematics and Dynamic Functions Created!  (" + toc + " sec)");

%% Load Desired Reference Trajectory
tic
ref_info = struct('num_steps',      4,...
                  'external_force', 0,...
                  'step_height',    "0.10",...
                  'step_vel',       "0.75");

ref_info.step_dir = "Ascend";
% ref_info.step_dir = "Descend";

if ref_info.step_dir == "Descend"
    ref_info.step_height_dbl = -double(ref_info.step_height);
else
    ref_info.step_height_dbl = double(ref_info.step_height);
end
ref_info.traj_name = ref_info.step_dir + "_Ht(" + ref_info.step_height + ')_Vel(' + ref_info.step_vel + ").mat";

% Load reference
ref_info = Load_Reference_Trajectory(ctrl_info,dyn_info,ref_info);
disp("Reference Trajectory Loaded! ( " + toc + " sec)");

%% Initial Condition
ref_info.delta_x_init = zeros(dyn_info.dim.n_x,1);
disp("Initial Condition Set!");

%% Constraint Information
constr_info = struct;

% constrain the Ground Reaction Forces
constr_info.grf = struct('active',  1,...
                         'mu',      0.9,...
                         'fail',    0);

% Saturate the torque
constr_info.torque = struct('sat',0);

% Constrain swing foot height as a function of phase
constr_info.obstacle = struct('isObstacle', 0,...
                              'height',     0.12,...
                              'width',      [0.73, 0.85]); % As a function of phase

disp("Constraint Information Set!");

%% Build QP
disp("Begin NLP formulation...");
tic
% [ctrl_info] = Formulate_NLP_Linear(dyn_info,ctrl_info,ref_info,constr_info);
disp("Finished formulating NLP! (N = " + ctrl_info.lmpc_info.N + ", " + toc + " sec)");

%% ************************** Run Simulation *************************** %%
disp("Begin simulation...");
[traj_info,ctrl_info] = Simulate_Linear(dyn_info,ctrl_info,ref_info,constr_info);
% [traj_info,ctrl_info] = Simulate_Linear_v2(dyn_info,ctrl_info,ref_info,constr_info);

disp("Finished simulation!");

%% Save Simulation
if false
    Save_Info(ctrl_info,ref_info,constr_info,dyn_info,traj_info);
end

%% Plot
close all;
plotSettings = struct('x',              1,...
                      'u',              0,...
                      'w',              0,...
                      'delta_x',        0,...
                      'delta_u',        0,...
                      'delta_w',        0,...
                      'x_all',          0,...
                      'u_all',          0,...
                      'w_all',          0,...
                      'delta_x_all',    0,...
                      'delta_u_all',    0,...
                      'delta_w_all',    0,...
                      'x_err',          0,...
                      'y_sw',           0,...
                      'y_sw_normal',    0,...
                      'x_vs_s',         0,...
                      's',              0,...
                      'calc_time',      0,...
                      'impact',         0,...
                      'virtuals',       0,...
                      'h_q_vs_s',       0,...
                      'last_step',      0,...
                      'pos_stancefoot', 0);
plotSettings.traj_title = ref_info.step_height + "m " + ref_info.step_dir;
Plot_Results_Linear(dyn_info,ctrl_info,ref_info,traj_info,constr_info,plotSettings);
disp('Finished Plotting!');

%% Animation
animateSettings = struct('traj',1,...
    'ref',          0,...
    'speed',        1,...
    'single_sol',   0);
% Animation_Grant(dyn_info,ctrl_info,ref_info,traj_info,animateSettings);
Animate_MPC_Traj(ctrl_info,ref_info,traj_info,animateSettings);
disp('Finished Animation!');
