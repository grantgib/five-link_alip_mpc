clear; clc;
restoredefaultpath;
addpath(genpath('Reference_Trajectories/'));
addpath(genpath('utils/'));
addpath(genpath('../FROST_code'));

%% Load Desired Reference Trajectory
mpc_info = struct;
mpc_info.DT = 0.005;
mpc_info.N = 10;
mpc_info.sim_time = 1;
mpc_info.iter = 1;
stpheight = 0.05;
dir = "ascend";
traj_name = string(stpheight) + "_" + dir + ".mat";
ref_info = Load_Reference_Trajectory(mpc_info,dir,traj_name);
ref_info.x_init = [ref_info.full_ref.gait(1).states.x(:,1); ref_info.full_ref.gait(1).states.dx(:,1)];

%% Load first iteration solutions
sol_xu = load('../NMPC/NMPC_firstiter.mat');
sol_xuw = load('../NMPC_freewrench/NMPC_wrench_firstiter.mat');

%% Analysis
x_ref = ref_info.x_ref;
u_ref = ref_info.u_ref;

x_sol = sol_xu.x_sol;
u_sol = sol_xu.u_sol;

x_sol_w = sol_xuw.x_sol;
u_sol_w = sol_xuw.u_sol;
w_sol_w = sol_xuw.w_sol;

% errors
disp('***** X sols **********')
disp(x_sol_w - x_sol)
disp('****** U sols *******');
disp(u_sol_w - u_sol)













