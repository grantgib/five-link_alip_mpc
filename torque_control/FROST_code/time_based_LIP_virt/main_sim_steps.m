%% Setup
clear; clc;
cur = pwd;
addpath(genpath(cur));
addpath('../../Toolboxes/frost-dev-master');
frost_addpath;

% if load_path is empty, it will not load any expression.
% if non-empty and assigned valid directory, then symbolic expressions will
% be loaded  from the MX binary files from the given directory.
load_path = [];%fullfile(cur, 'gen/sym');
delay_set = false;
COMPILE = 1;

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
cur = pwd;
ht = 0.07;
avgvel = 0.3;

swingxmid = 0.2;
swingxvel = -0.1; % -0.1, -0.2, -0.3
swingzvel = -0.5; %-0.3; %free

comxvel = "free"; % free
comzvel = "free"; %free, -0.3, -0.35, -0.4

length = 0.2; %"free";
trajName = "Ascend_Ht(" + ht + ...
    ")_Vel(" + avgvel + ...
    ")_comxvel(" + comxvel + ...
    ")_comzvel(" + comzvel + ...
    ")_swingxmid(" + swingxmid + ...
    ")_swingxvel(" + swingxvel + ...
    ")_swingzvel(" + swingzvel + ...
    ")_stepLength(" + length + ").mat";
load_dir = fullfile(cur,'../../reference_trajectories/time_based_LIP_virts/');
param = load(fullfile(load_dir,trajName));
% param = load(trajName);
gait = param.gait;

% alphas = reshape(gait(1).params.atime,4,6);
% alphas(3,end) = alphas(3,end) - 0.0005;
% gait(1).params.atime = reshape(alphas,24,1);
%%
% Define domains
r_stance = RightStance_sim(rabbit, load_path);
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
params.ktime=[wn^2,2*wn*damp];

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
%     rabbit.ExportKinematics([export_path,'kinematics/']);
end
%% running the simulation
x_start = [gait(1).states.x(:,1);gait(1).states.dx(:,1)];
numcycle = 3;
logger = rabbit_1step.simulate(0,x_start,3, [],'NumCycle',numcycle);

%% stats
close all;
set(0,'DefaultFigureWindowStyle','docked')
% set(0,'DefaultFigureWindowStyle','normal')
t_end = 0;
bez_virts = reshape(gait(1).params.atime,4,8);

figure(1)
for i=1:size(x_start)/2
    subplot(3,3,i)
    plot(gait(1).tspan,gait(1).states.x(i,:),":"); hold on;
end

figure(2)
for i = 1:size(x_start)/2
    subplot(3,3,i)
    plot(gait(1).tspan,gait(1).states.dx(i,:),":"); hold on;
end

%
for i = 1:numcycle
    xsim_traj = logger(i).flow.states.x;
    dxsim_traj = logger(i).flow.states.dx;
    ya_traj = logger(i).flow.ya_time;
    yd_traj = logger(i).flow.yd_time;
    ye_traj = ya_traj - yd_traj;
    dya_traj = logger(i).flow.d1ya_time;
    dyd_traj = logger(i).flow.d1yd_time;
    dye_traj = dya_traj - dyd_traj;
    t_traj = logger(i).flow.t;
    
    % states
    figure(1)
    for k = 1:size(xsim_traj,1)
        subplot(3,3,k);
        hold on;
        plot(t_traj-t_end,xsim_traj(k,:));
        grid on;
        title("q_" + k);
    end
    legend
    sgtitle("q (Step # " + i + ")");
    
    figure(2)
    for k = 1:size(dxsim_traj,1)
        subplot(3,3,k);
        hold on;
        plot(t_traj-t_end,dxsim_traj(k,:));
        grid on;
        title("q_{dot}_" + k);
    end
    legend;
    sgtitle("q_{dot} (Step # " + i + ")");
    
    % output
    figure
    for k = 1:size(ya_traj,1)
        subplot(2,2,k);
        plot(t_traj,ya_traj(k,:));
        hold on; plot(t_traj,yd_traj(k,:));
        grid on;
        title("h_" + k);
    end
    legend('actual','desired','location','best');
    sgtitle("h (Step # " + i + ")");
    
%     figure
%     for k = 1:size(ya_traj,1)
%         subplot(2,2,k);
%         plot(t_traj,ye_traj(k,:));
%         grid on;
%     end
%     sgtitle("y error (Step # " + i + ")");
    
        figure
    for k = 1:size(dya_traj,1)
        subplot(2,2,k);
        plot(t_traj,dya_traj(k,:));
        hold on; plot(t_traj,dyd_traj(k,:));
        grid on;
        title("dhdt_" + k);
    end
    legend('actual','desired','location','best');
    sgtitle("dhdt (Step # " + i + ")");
    
%     figure
%     for k = 1:size(dya_traj,1)
%         subplot(2,2,k);
%         plot(t_traj,dye_traj(k,:));
%         grid on;
%     end
%     sgtitle("dydt error (Step # " + i + ")");
    t_end = t_traj(end);
end

%% animate
set(0,'DefaultFigureWindowStyle','normal')
if true
    q_log=[];
    t_log=[];
    for i=1:numcycle
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













