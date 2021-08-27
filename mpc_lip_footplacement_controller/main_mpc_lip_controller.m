%% Foot Placement for RABBIT (planar 5-link walker) with MPC and Linear Inverted Pendulum
clear; clc; close all;
restoredefaultpath;
cur = pwd;
addpath(genpath([cur '/utils_fp_lipm/']));

if isunix
    addpath([cur '/../external_packages/casadi-linux-matlabR2014b-v3.5.5/']);
else
    addpath([cur '/../external_packages/casadi-windows-matlabR2016a-v3.5.5/']);
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
% [sym_info] = formulate_vc_io(sym_info);
[sym_info] = formulate_vc_io_slope(sym_info);
disp("Virtual Constraint Symbolics Loaded! (" + toc + " sec)");

%% Controller Information
% Gait
% Each leg link is 0.4 m (hip to knee)
gait_info = struct(...
    't_step_period',    0.3,... 
    'p_st_com_des',     0.6,...    % z_H
    'z_mid',            0.10,...
    'torso_pitch_des',  0,...
    'angle_x',          deg2rad(0),...       % radians
    'mu',               1);
xcdot_des = 0.5;
ycdot_des = 0;
gait_info.Lx_des = - sym_info.params.m * gait_info.p_st_com_des * ycdot_des;
gait_info.Ly_des = sym_info.params.m * gait_info.p_st_com_des * xcdot_des;

% Simulation
% x_init = [...
%     -0.1843, 0.6903, 0.3566, 2.0572, 0.9338, 2.6929, 0.5409,...
%     0.5875, 0.4288, 0.2230, 1.4558, -1.4592, 0.3176, 0.6527]';
% x_init = [-0.1843, 0.6903, 0.3566, 2.0572, 0.9338, 2.0572, 0.5409, zeros(1,7)]';
% x_init = [0; 0.7; 0; -pi/6+pi; pi/3; -pi/6+pi; pi/4; zeros(7,1)];
x_init = [0; 0.658; 0; -0.6828+pi; 1.168; -0.6489+pi; 1.281; 0; 0; 0; 0; 0; 0; 0];

sim_info = struct(...
    'method',               'yukai',... % grant, yukai
    'int_type',             "RK4",...  % Euler, RK4
    'num_steps',            4,...
    'num_steps_fast',       50,...
    'num_steps_stop',       50,...
    'num_steps_treadmill',  5,...  
    'x_init',               x_init,...
    'dt_sim',               0.005);

% Foot placement optimization 
N_steps_ahead = 3;
q = 10;
for i = 1:N_steps_ahead
    if i > N_steps_ahead-1
        Q_avgvel(i) = q^i;
    else
        Q_avgvel(i) = q^i;
    end
end
% Q_avgvel = 10*ones(1,N_steps_ahead);
ufp_max_hip = 2 * sqrt(sym_info.params.length_leg.^2 - gait_info.p_st_com_des.^2);        % mechanical configuration max step related to hip. Opt still needs to relate to COM
sym_info.fp_opt = struct(...
    'dt_opt',           0.01,...
    'N_steps_ahead',    N_steps_ahead,...
    'ufp_stance_max',   [ufp_max_hip; 0; 0],...
    'ufp_stance_min',   [-ufp_max_hip; 0; 0],...
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
    's',        0,... 
    'impact',   0);
plot_results(sym_info,traj_info,plot_info);
disp('Finished Plotting!');

%% Animation
animate_info = struct(...
    'speed',        1);
sim_restart = true;
while sim_restart
    sim_restart = animate_results_grant(sym_info,traj_info,animate_info);
end
% animate_results_FROST(traj_info,animate_info);
disp('Finished Animation!');