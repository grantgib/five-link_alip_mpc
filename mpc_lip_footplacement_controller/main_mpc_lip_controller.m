%% Foot Placement for RABBIT (planar 5-link walker) with MPC and Linear Inverted Pendulum
clear; clc; close all;
restoredefaultpath;
cur = pwd;

if isunix
    addpath([cur '/../external_packages/casadi-linux-matlabR2014b-v3.5.5/']);
else
    addpath([cur '/../external_packages/casadi-windows-matlabR2016a-v3.5.5/']);
end

if ~exist('gen/opt_solvers','dir')
    mkdir('gen/opt_solvers')
end
addpath(genpath([cur '/gen/']));
addpath(genpath([cur '/utils_fp_lipm/']));
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
    't_step_period',    0.1,... 
    'p_st_com_des',     0.6,...    % z_H
    'z_mid',            0.10,...
    'torso_pitch_des',  0,...
    'angle_x',          deg2rad(0),...       % radians
    'mu',               1);
xcdot_des = 2;
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
% x_init = [...
%     -0.4375    0.6305    0.0000    2.6470    1.2955    1.9942   1.5614,...
%     -0.4296    0.0256   -0.0000   -0.7549    0.1665    1.0625    1.3411]';
% x_init = [...
%     -0.4609    0.6494   -0.0000    2.6403    1.2292    2.3345    1.2111,...
%     zeros(1,7)]';
sim_info = struct(...
    'fp_method',            'grant',... % grant, yukai
    'int_type',             "RK4",...  % Euler, RK4
    'use_codegen',          false,...
    'num_steps',            10,...
    'num_steps_fast',       50,...
    'num_steps_stop',       50,...
    'num_steps_treadmill',  5,...  
    'x_init',               x_init,...
    'dt_sim',               0.005);

% Foot placement optimization 
N_steps_ahead = 10;
q = 1;
for i = 1:N_steps_ahead
    if i > N_steps_ahead-1
        Q(i) = q;
    else
        Q(i) = q;
    end
end
xc_max_hip = sqrt(sym_info.params.length_leg.^2 - gait_info.p_st_com_des.^2); % mechanical configuration max step related to hip. Opt still needs to relate to COM
ratio = 0.7;
sym_info.fp_opt = struct(...
    'qpsolver',         "qrqp",...     % ipopt, ipopt_ma57, qrqp
    'dt_opt',           0.005,...
    'intg_opt',         "eul",...       % rk4, eul
    'N_steps_ahead',    N_steps_ahead,...
    'ufp_stance_max',   ratio*2*[xc_max_hip; xc_max_hip],...
    'ufp_stance_min',   ratio*2*[-xc_max_hip; -xc_max_hip],...
    'Q',                Q);

%% Formulate LIP foot placement Optimization
tic
compile = true;
[sym_info] = formulate_lip_fp_opt(sym_info,gait_info,compile);
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
    'vc',       1,...
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