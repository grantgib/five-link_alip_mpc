%% Trajectory Tracking for Rabbit (planar 5-link walker)
%   Floating Base Input Output Linearization
%   Continuous Dynamics
%   Impact Map included in prediction horizon
clear; clc; close all;
set(0,'DefaultFigureWindowStyle','normal');
restoredefaultpath;
addpath(genpath('utils_fp_lipm/'));
addpath(genpath('/home/grantgib/workspace/toolbox/frost-dev/example/rabbit'));
if isunix
    addpath('/home/grantgib/workspace/toolbox/casadi-linux-matlabR2014b-v3.5.5');
else
    addpath('../Toolboxes/casadi-windows-matlabR2014b-3.5.1')
end
%% Generate Dynamics Functions
disp("Calculating Kinematics and Dynamics Functions...");
tic
sym_info.params = struct(...
    'g',            9.81,...
    'm',            32);
[sym_info] = generate_kinematics_dynamics(sym_info);
disp("Kinematics and Dynamic Functions Created!  (" + toc + " sec)");

%% Design Virtual Constraints & IO controller
tic
[sym_info] = formulate_vc_io(sym_info);
disp("Virtual Constraint Symbolics Loaded! (" + toc + " sec)");

%% Controller Information
% Gait
gait_info = struct(...
    't_step_period',    0.2,... 
    'xcdot_des',        0.0,...
    'p_st_com_des',     0.55,...    % z_H
    'torso_pitch_des',  0.1,...
    'angle_x',          0,...
    'mu',               3);

% Simulation
% x_init = [...
%     -0.1843, 0.6903, 0.3566, 2.0572, 0.9338, 2.6929, 0.5409,...
%     0.5875, 0.4288, 0.2230, 1.4558, -1.4592, 0.3176, 0.6527]';
x_init = [...
    -0.1843, 0.6903, 0.3566, 2.0572, 0.9338, 2, 1.5,...
    zeros(1,7)]';

sim_info = struct(...
    'int_type',         "RK4",...  % Euler, RK4
    'num_steps',        8,...
    'x_init',           x_init,...
    'dt',               0.005);

% Foot placement optimization 
N_steps_ahead = 1;
q = 10;
for i = 1:N_steps_ahead
    Q_avgvel(i) = q;
end
% Q_avgvel = 10*ones(1,N_steps_ahead);
sym_info.fp_opt = struct(...
    'dt',               sim_info.dt,...
    'N_steps_ahead',    N_steps_ahead,...
    'UFP_MAX',          [0.4; 0; 0],...
    'UFP_MIN',          [-0.4; 0; 0],...
    'Q_avgvel',         Q_avgvel);

%% Formulate LIP foot placement Optimization
tic
[sym_info] = formulate_lip_fp_opt(sym_info,gait_info);
disp("Formulated LIP-based FP Optimization (" + toc + " sec)");

%% ************************** Run Simulation ******************************
disp("Begin simulation...");
[traj_info] = simulate(sym_info,gait_info,sim_info);
disp("Finished simulation!");

%% Save Simulation
if false
    save_results(ctrl_info,ref_info,constr_info,sym_info,traj_info);
end

%% Plot
close all;
set(0,'DefaultFigureWindowStyle','docked'); % docked,normal

plot_info = struct(...
    'x',        0,...
    'u',        0,...
    'w',        0,...
    'fp',       1,...
    'com_dyn',  1,...
    'vc',       0,...
    'feet',     1,...
    's',        0,... 
    'impact',   0);
plot_results(sym_info,traj_info,plot_info);
disp('Finished Plotting!');

%% Animation
animate_info = struct(...
    'traj',         1,...
    'ref',          0,...
    'speed',        .1,...
    'single_sol',   0);
% animate_results_grant(dyn_info,ctrl_info,ref_info,traj_info,animateSettings);
animate_results_FROST(traj_info,animate_info);
disp('Finished Animation!');