%% Setup
clear; clc;
cur = pwd;
addpath(genpath(cur));

addpath('../Toolboxes/frost-dev-master');
frost_addpath;

% if load_path is empty, it will not load any expression.
% if non-empty and assigned valid directory, then symbolic expressions will
% be loaded  from the MX binary files from the given directory.
load_path = [];%fullfile(cur, 'gen/sym');
delay_set = false;
COMPILE = false;
SAVE_SOLUTION=0;


% Load model
rabbit = RABBIT('urdf/five_link_walker.urdf');
if isempty(load_path)
    rabbit.configureDynamics('DelayCoriolisSet',delay_set, 'OmitCoriolisSet', true);
else
    % load symbolic expression for the dynamics equations
    rabbit.loadDynamics(load_path, delay_set);
end


export_path = fullfile(cur, 'gen/sim/');

%% loading the trajectory
cur=pwd;

trajName='Ascend_Ht(0.05)_Vel(0.75).mat';
param=load(fullfile(cur,'..\reference_trajectories\ascend_gaits\omar',trajName));
gait=param.gait;

% trajName='Ascend_Ht(0.05)_Vel(0.20)_DT(0.05).mat';
% param=load(fullfile(cur,'..\reference_trajectories\ascend_gaits\interpolated_trajectories',trajName));
% gait=param.gait_interp;
% gait(1).params.ptime(1)=gait(1).tspan(end);

%%
info.hgt = 0.05;
% Define domains
r_stance = RightStance_sim(rabbit,info, load_path);
% l_stance = LeftStance(rabbit, load_path);
r_impact = RightImpact_sim(r_stance, load_path);
% l_impact = LeftImpact(l_stance, load_path);

% Define hybrid system
rabbit_1step = HybridSystem('Rabbit_1step');
io_control  = IOFeedback('IO');
params = struct;
params.atime = gait(1).params.atime;
params.ptime = gait(1).params.ptime;
params.pRightToe = gait(1).params.pRightToe;
% params.ktime = [100,20];
damp = 1;
Ts=0.1;
wn = 4/(damp*Ts);
params.ktime=[wn^2,2*wn*damp]

r_stance.PreProcess = @sim.resetTau;

rabbit_1step = addVertex(rabbit_1step, 'RightStance', 'Domain', r_stance,'Control', io_control);
rabbit_1step = setVertexProperties(rabbit_1step,'RightStance','Param',params);


srcs = {'RightStance'};
tars = {'RightStance'};

rabbit_1step = addEdge(rabbit_1step, srcs, tars);
rabbit_1step = setEdgeProperties(rabbit_1step, srcs, tars, ...
    'Guard', {r_impact});
%%
if COMPILE
    rabbit_1step.compile(export_path);
    rabbit.ExportKinematics([export_path,'kinematics/']);
    rightToepos=getCartesianPosition(r_stance, r_stance.ContactPoints.RightToe);
    export(rightToepos, 'Vars',r_stance.States.x, 'File', [export_path,'stanceFootPos']);
end
%% running the simulation
x_start = [gait(1).states.x(:,1);gait(1).states.dx(:,1)];
% x_start(2) = x_start(2) + 3;
logger=rabbit_1step.simulate(0,x_start,3, [],'NumCycle',5);

%% traj MPC
% MPC=load('../mpc_code/Results/IOComparisons/0.45TorqueSaturation_MPCTrajectory.mat');


%% stats



%close all;
for i = 1:2
    xsim_traj = logger(i).flow.states.x;
    dxsim_traj = logger(i).flow.states.dx;
    ya_traj = logger(i).flow.ya_time;
    yd_traj = logger(i).flow.yd_time;
    ye_traj = ya_traj - yd_traj;
    dya_traj = logger(i).flow.d1ya_time;
    dyd_traj = logger(i).flow.d1yd_time;
    dye_traj = dya_traj - dyd_traj;
    t_traj = logger(i).flow.t;
    
    figure(2*i-1)
    clf;
    for k = 1:size(ya_traj,1)
        subplot(2,2,k);
        plot(t_traj,ye_traj(k,:)); hold on
        legend('error');
    end
    sgtitle("y error (Step # " + i + ")");
    
    figure(2*i)
    clf;
    for k = 1:size(dya_traj,1)
        subplot(2,2,k);
        plot(t_traj,dye_traj(k,:));
        legend('error');
    end
    sgtitle("dy error (Step # " + i + ")");
    
%     figure
%     for k = 1:size(xsim_traj,1)
%         subplot(3,3,k);
%         plot(t_traj,xsim_traj(k,:));
%         legend('error'); title("x_" + k);
%     end
%     sgtitle("States at step # " + i);
end

%% graphs
% addpath('../mpc_code/utils/');
% plot_q = true;
% plot_dq = false;
% plot_u = true;
% Time=logger(1).flow.t;
% x_traj=[logger(1).flow.ya_time;logger(1).flow.d1ya_time];
% X_REF_Original=[logger(1).flow.yd_time;logger(1).flow.d1yd_time];
% u_cl=logger(1).flow.inputs.Control.u;
% U_REF_Original=u_cl;
% args.lbx=[-10, 0.5, -1, 2, 0.5, 2, 0.5]'.*ones(7,length(logger(1).flow.t));
% args.ubx= [10, 2, 1, 5, 2, 5, 2]'.*ones(7,length(logger(1).flow.t));
% args.lbu=-0.35.*ones(4,1).*ones(4,length(logger(1).flow.t));
% args.ubu=0.35.*ones(4,1).*ones(4,length(logger(1).flow.t));
% traj ="I/O Controller 0.45Nm Torque Saturation 0.05m ascend";
% save=0;
% error=0;
% save_dir=[];
% file_title="I/O_Controller_0.05m_ascend";
% % Plot_IO_Traj(Time,logger(1).flow.states.x,X_REF_Original,u_cl,plot_q,plot_dq,plot_u,traj,args,save,save_dir,file_title,error)
% %plotting the error
% traj ="I/O Controller 0.45Nm Torque Saturation 0.05m ascend";
% error=1;
% file_title="I/O_Controller_0.05m_ascend";
% satVal=0.45.*ones(4,1).*ones(4,length(MPC.u_cl));
% Plot_IO_MPC_Traj(Time,MPC.Time,x_traj-X_REF_Original,MPC.x_traj-MPC.X_REF_Original,u_cl,MPC.u_cl',plot_q,plot_dq,plot_u,traj,satVal)

% Plot_MPC_Traj(Time,x_traj,X_REF_Original,u_cl,plot_q,plot_dq,plot_u,traj,args,save,save_dir,file_title,error)

%% animate

if true
    q_log=[];
    t_log=[];
    for i=1:length(logger)
    q_log=[q_log,logger(i).flow.states.x];
    t_log=[t_log,logger(i).flow.t];
    end
    anim = Animator.FiveLinkAnimator(t_log, q_log);
    anim.pov = Animator.AnimatorPointOfView.West;
    anim.Animate(true);
    anim.isLooping = false;
    anim.updateWorldPosition = true;
%     anim.endTime = 20;
    conGUI = Animator.AnimatorControls();
    conGUI.anim = anim;
end

%%


