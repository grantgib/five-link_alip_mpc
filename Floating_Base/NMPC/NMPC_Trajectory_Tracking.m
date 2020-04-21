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
ctrl_info.DT = 0.005;
ctrl_info.type = "IO";
% ctrl_info.type = "NMPC";

% MPC info
ctrl_info.mpc_info.N = 1;
ctrl_info.mpc_info.DT = ctrl_info.DT;

% IO info
ctrl_info.IO_info.DT = ctrl_info.DT;
ctrl_info.IO_info.type = "phase"; % time
ctrl_info.IO_info.linear = 0; % true uses PD control only!

%% Load Desired Reference Trajectory
tic
ref_info.num_steps = 10;
ref_info.IC_disturbed = 0;
ref_info.external_force = 0; % Occurs at specific iteration number in Update_State_IO
ref_info.step_height = "0.10";
ref_info.step_vel = "0.75";
% ref_info.step_dir = "Ascend";
ref_info.step_dir = "Descend";
ref_info.traj_name = ref_info.step_dir + "_Ht(" + ref_info.step_height + ')_Vel(' + ref_info.step_vel + ").mat";


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
if ref_info.IC_disturbed
    ref_info.gait_percent_x = 0.50;
    ref_info.gait_percent_dx = 0.26;
    ref_info.x_init = [ref_info.full_ref.gait(1).states.x(:,round(end*ref_info.gait_percent_x));
        ref_info.full_ref.gait(1).states.dx(:,round(end*ref_info.gait_percent_dx))];
else
    ref_info.x_init = [ref_info.full_ref.gait(1).states.x(:,1);
        ref_info.full_ref.gait(1).states.dx(:,1)];
end
disp("Initial Condition Set!");

%% Constraint Information
constr_info = struct;
% Constrain swing foot height as a function of phase
constr_info.obstacle.isObstacle = 0;
constr_info.obstacle.height = 0.08;
constr_info.obstacle.width = [0.4, 0.80]; % As a function of phase

% constrain the Ground Reaction Forces
constr_info.grf.active = 1;
constr_info.grf.mu = 0.9;

% Saturate the torque
constr_info.torque.sat = 0;

disp("Constraint Information Saved!");
%% Generate Dynamics Functions
disp("Calculating Kinematics and Dynamics Functions...");
tic
[dyn_info] = Generate_Dynamics_Nonlinear(ctrl_info);
disp("Dynamic Functions Created!  (" + toc + " sec)");

%% Build Nonlinear Program
disp("Begin NLP formulation...");
tic
if ctrl_info.type == "NMPC"
    [ctrl_info] = Formulate_NLP_TrajectoryTracking(dyn_info,ctrl_info,ref_info);
elseif ctrl_info.type == "IO"
    [ctrl_info] = Formulate_NLP_TrajectoryTracking_IO(dyn_info,ctrl_info,ref_info,constr_info);
end
disp("Finished formulating NLP! (N = " + ctrl_info.mpc_info.N + ", " + toc + " sec)");

%% ************************** Run Simulation ******************************
disp("Begin simulation...");
if ctrl_info.type == "NMPC"
    [traj_info,ctrl_info] = ...
        Simulate_Nonlinear_TrajectoryTracking(dyn_info,ctrl_info,ref_info);
elseif ctrl_info.type == "IO"
    [traj_info,ctrl_info] = Simulate_IO_TrajectoryTracking(dyn_info,ctrl_info,ref_info,constr_info);
end
disp("Finished simulation!");

%% Save Simulation
if false
    args = ctrl_info.mpc_info.args;
    penalties = struct;
    penalties.Q = ctrl_info.mpc_info.Q;
    penalties.R = ctrl_info.mpc_info.R;
    if ctrl_info.IO_info.linear
        if ref_info.IC_disturbed
            save_name = "Stairs(" + ref_info.step_dir + ")_Ht(" + ref_info.step_height +...
                ")_N(0-IO)_DT(" + ctrl_info.mpc_info.DT +...
                ")_Vel(" + ref_info.step_vel + " sec)_IC-Disturbed.mat";
            save(fullfile('saved_results/IC_Disturbed/IO',save_name),'ref_info','traj_info','dyn_info','penalties','args');
            disp("Saved IO Trajectory! (Disturbed IC)");
        else
            save_name = "Stairs(" + ref_info.step_dir + ")_Ht(" + ref_info.step_height +...
                ")_N(0-IO)_DT(" + ctrl_info.mpc_info.DT +...
                ")_Vel(" + ref_info.step_vel + " sec).mat";
            save(fullfile('saved_results/Nominal/IO',save_name),'ref_info','traj_info','dyn_info','penalties','args');
            disp("Saved IO Trajectory!");
        end
    else
        if ref_info.IC_disturbed
            save_name = "Stairs(" + ref_info.step_dir + ")_Ht(" + ref_info.step_height +...
                ")_N(" + ctrl_info.mpc_info.N + ")_DT(" + ctrl_info.mpc_info.DT +...
                ")_Vel(" + ref_info.step_vel + " sec)_Disturbed.mat";
            save(fullfile('saved_results/Nominal/IO_NMPC',save_name),'ref_info','traj_info','dyn_info','penalties','args');
            disp("Saved IO-NMPC Trajectory! (Disturbed IC)");
        else
            save_name = "Stairs(" + ref_info.step_dir + ")_Ht(" + ref_info.step_height +...
                ")_N(" + ctrl_info.mpc_info.N + ")_DT(" + ctrl_info.mpc_info.DT +...
                ")_Vel(" + ref_info.step_vel + " sec)_GRF_torque.mat";
            save(fullfile('saved_results/Nominal/IO_NMPC',save_name),'ref_info','traj_info','dyn_info','penalties','args');
            disp("Saved IO-NMPC Trajectory!");
        end
    end
end

%% Extract Better Trajectory
% [alpha_h,alpha_dh,alpha_ddh,alpha_ddh_old,s_func,x_init_new,gait] = Generate_Better_Trajectory(dyn_info,ctrl_info,ref_info,traj_info);
% save('new_gait','gait');
% disp("Saved new gait");
% save('new_alphas','alpha_h','alpha_dh','alpha_ddh','alpha_ddh_old','s_func','x_init_new')
% disp("Saved new alphas");

%% Plot
close all;
plotSettings = struct('x',0,...
    'u',         1,...
    'w',         1,...
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
Plot_TrajectoryTracking(dyn_info,ctrl_info,ref_info,traj_info,constr_info,plotSettings);
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


