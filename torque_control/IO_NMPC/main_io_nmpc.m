%% Trajectory Tracking for Rabbit (planar 5-link walker)
%   Floating Base 
%       *(multi-shooting with Wrench Included for nmpc)
%   Continuous Dynamics
%   Impact Map included in prediction horizon
clear; clc; close all;

%% Controller Information
% General
ctrl_info = struct('DT', 0.005,...
    'step_look_ahead',  10,...
    'int',              "Euler",...
    'type',             "IO"); % IO, LMPC

% MPC info
ctrl_info.mpc_info = struct('N',2,...
    'DT',   ctrl_info.DT);

% Input-output NMPC info
ctrl_info.IO_info = struct('DT', ctrl_info.DT,...
    'type',     "phase",... % or time
    'linear',   0);         % 1 uses IO-L no mpc

%% Generate Dynamics Functions
disp("Calculating Kinematics and Dynamics Functions...");
tic
[dyn_info] = Generate_Dynamics_Kinematics();
disp("Kinematics and Dynamic Functions Created!  (" + toc + " sec)");

%% Load Desired Reference Trajectory
tic
ref_info = struct('num_steps', 4,...
    'external_force',       0,...
    'step_height',          "0.10",...
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
ref_info = Load_Reference_Trajectory(ctrl_info,dyn_info,ref_info);
disp("Reference Trajectory Loaded! ( " + toc + " sec)");

% Second Trajectory
% tic
% ref_info_2 = struct('num_steps', 10,...
%     'external_force',       0,...
%     'step_height',          "0.05",...
%     'step_vel',             "0.75");
% 
% ref_info_2.step_dir = "Ascend";
% % ref_info_2.step_dir = "Descend";
% 
% if ref_info_2.step_dir == "Descend"
%     ref_info_2.step_height_dbl = -double(ref_info_2.step_height);
% else
%     ref_info_2.step_height_dbl = double(ref_info_2.step_height);
% end
% ref_info_2.traj_name = ref_info_2.step_dir + "_Ht(" + ref_info_2.step_height + ')_Vel(' + ref_info_2.step_vel + ").mat";
% 
% % Load reference
% ref_info_2 = Load_Reference_Trajectory(ctrl_info,dyn_info,ref_info_2);
% ref_info.traj2 = ref_info_2;
% disp("Second Trajectory Loaded! ( " + toc + " sec)");
% 
% % Third Trajectory
% tic
% ref_info_3 = struct('num_steps', 10,...
%     'external_force',       0,...
%     'step_height',          "0.05",...
%     'step_vel',             "0.75");
% 
% ref_info_3.step_dir = "Ascend";
% % ref_info_3.step_dir = "Descend";
% 
% if ref_info_3.step_dir == "Descend"
%     ref_info_3.step_height_dbl = -double(ref_info_3.step_height);
% else
%     ref_info_3.step_height_dbl = double(ref_info_3.step_height);
% end
% ref_info_3.traj_name = ref_info_3.step_dir + "_Ht(" + ref_info_3.step_height + ')_Vel(' + ref_info_3.step_vel + ").mat";
% 
% % Load reference
% ref_info_3 = Load_Reference_Trajectory(ctrl_info,dyn_info,ref_info_3);
% ref_info.traj3 = ref_info_3;
% disp("Third Trajectory Loaded! ( " + toc + " sec)");

%% Initial Condition
ref_info.x_init = [ref_info.full_ref.gait(1).states.x(:,1);
    ref_info.full_ref.gait(1).states.dx(:,1)];
disp("Initial Condition Set!");

%% Constraint Information
constr_info = struct;

% constrain the Ground Reaction Forces
constr_info.grf = struct('active',0,...
    'mu',       0.9,...
    'fail',     0);

% Saturate the torque
constr_info.torque = struct('sat',0);

% Constrain swing foot height as a function of phase
constr_info.obstacle = struct('isObstacle',0,...
    'height',       0.12,...
    'width',        [0.73, 0.85]); % As a function of phase
disp("Constraint Information Set!");

%% Build Nonlinear Program
disp("Begin NLP formulation...");
tic
[ctrl_info] = Formulate_NLP(dyn_info,ctrl_info,ref_info,constr_info);
disp("Finished formulating NLP! (N = " + ctrl_info.mpc_info.N + ", " + toc + " sec)");

%% ************************** Run Simulation ******************************
disp("Begin simulation...");
[traj_info,ctrl_info] = Simulate(dyn_info,ctrl_info,ref_info,constr_info);
disp("Finished simulation!");

%% Save Simulation
if false
    Save_Info(ctrl_info,ref_info,constr_info,dyn_info,traj_info);
end

%% Plot
close all;
plotSettings = struct('x',              1,...
                      'x_s',            0,...
                      'u',              0,...
                      'w',              0,...
                      'xerr',           0,...
                      'y_sw',           0,...
                      'y_sw_normal',    0,...
                      's',              0,...
                      'calc_time',      0,...
                      'impact',         0,...
                      'virtuals',       0,...
                      'h_q_vs_s',       0,...
                      'last_step',      0,...
                      'single_sol',     0,...
                      'pos_stancefoot', 0,...
                      'x_all',          0);
plotSettings.traj_title = ref_info.step_height + "m " + ref_info.step_dir;
Plot_Results(dyn_info,ctrl_info,ref_info,traj_info,constr_info,plotSettings);
disp('Finished Plotting!');

%% Animation
animateSettings = struct('traj',1,...
    'ref',          0,...
    'speed',        1,...
    'single_sol',   0);
Animation_Grant(dyn_info,ctrl_info,ref_info,traj_info,animateSettings);
% Animate_MPC_Traj(ctrl_info,ref_info,traj_info,animateSettings);
disp('Finished Animation!');