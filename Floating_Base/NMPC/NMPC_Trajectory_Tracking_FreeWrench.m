%% Nonlinear Model Predictive Control for Rabbit (planar 5-link walker)
%   Trajectory Tracking
%   Floating Base
%   Continuous Dynamics ~ no impact considered
clear; clc;

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
addpath(genpath('Reference_Trajectories'));
addpath(genpath('../FROST_code'))

%% Time Step, Prediction Horizon, Simulation Time
mpc_info = struct;
mpc_info.DT = 0.005;
mpc_info.N = 1;
mpc_info.sim_time = 1;

%% Load Desired Reference Trajectory
cur = pwd;
stpheight = 0.05;
dir = 'ascend';
trajName = string(stpheight) + '_' + dir + '.mat';
if isequal(dir,'ascend')
    param = load(fullfile('Reference_Trajectories\variousStepHeightsAscend\',trajName));
else
    param = load(fullfile('Reference_Trajectories\variousStepHeightsDescend\',trajName));
end
% Interpolate trajectory (*** This could be a problem ****)
trajRef = calculations.referenceTrajBez(param.gait,mpc_info.DT);
X_REF_Original = [trajRef.x; trajRef.dx; zeros(2,size(trajRef.x,2))]; % traj of forces unknown and not used
U_REF_Original = trajRef.u;
X_REF = X_REF_Original;
U_REF = U_REF_Original;

% x_ref_init = [param.gait(1).states.x(:,1); param.gait(1).states.dx(:,1)];
% delta_x_init = 0.02*x_ref_init; % initial condition. 14X1
x_init = [param.gait(1).states.x(:,1); param.gait(1).states.dx(:,1); param.gait(1).inputs.fRightToe([1,3],1)];

disp("Reference Trajectory Loaded and Initial Condition Set!");

%% Generate Dynamics Functions
free_wrench = 1;    % Equals 1 if wrench vector is decision variable
tic
[f_nonlinear_partial,ddq_func,lambda_func,J_c,dJ_c,E_nonlinear,H_nonlinear,n_q,n_x,n_u] = Generate_Dynamics_Nonlinear_FreeWrench();
disp("Dynamic Functions Created!  (" + toc + " sec)");

%% Build Nonlinear Program
use_descriptor = 0;     % Equals 1 if using descriptor ODE form for dynamics equality propogation
disp("Begin NLP formulation...");
tic
[mpc_info] = Formulate_NLP_TrajectoryTracking_FreeWrench(mpc_info,n_q,n_x,n_u,f_nonlinear_partial,ddq_func,lambda_func,J_c,dJ_c,E_nonlinear,H_nonlinear,use_descriptor,param);
disp("Finished formulating NLP!  (" + toc + " sec)");

%% ***********************************************************************
%       Run Simulation
%*************************************************************************
disp("Begin simulation...");
[x_traj,u_traj,x_traj_all,t_all,mpciter,args] = ...
    Simulate_Nonlinear_TrajectoryTracking_FreeWrench(x_init,X_REF_Original,U_REF_Original,param,...
    f_nonlinear_partial,lambda_func,n_q,n_x,n_u,mpc_info);
disp("Finished simulation!");

%% Save Simulation


%% Plot
plotSettings = struct;
plotSettings.q = 1;
plotSettings.dq = 1;
plotSettings.u = 1;

traj = string(stpheight)+'m '+dir;
if (true)
    Plot_TrajectoryTracking(t_all,x_traj,u_traj,X_REF_Original(:,1:end-1),U_REF_Original(:,1:end-1),plotSettings,traj,args);
end

%% Animate
animateSettings = struct;
animateSettings.traj = 1;
animateSettings.ref = 0;
Animate_MPC_Traj(t_all,X_REF_Original,x_traj,animateSettings)

%% Animate single optimization solution
% animateSettings.traj = 1;
% animateSettings.ref = 0;
% x_traj_single = x_traj_all(:,:,1)';
% x_traj_single = x_traj_single(1:n_x,:);
% t_all_single = linspace(0,(mpc_info.N+1)*0.005,mpc_info.N);
% Animate_MPC_Traj(t_all_single,randn,x_traj_single,animateSettings);






