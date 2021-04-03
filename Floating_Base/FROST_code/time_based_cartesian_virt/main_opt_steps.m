%% Main FROST Optimization to generate reference trajectories
clear; clc;
system('freepdb.cmd');

%% Setup
restoredefaultpath;
cur = pwd;
addpath(genpath(cur));
addpath('../../Toolboxes/frost-dev-master');
frost_addpath();
export_path = fullfile(cur, 'gen/');
% if load_path is empty, it will not load any expression.
% if non-empty and assigned valid directory, then symbolic expressions will
% be loaded  from the MX binary files from the given directory.
load_path = [];%fullfile(cur, 'gen/sym');
delay_set = false;
COMPILE = true;

% Load model
rabbit = RABBIT('urdf/five_link_walker.urdf');
if isempty(load_path)
    rabbit.configureDynamics('DelayCoriolisSet',delay_set, 'OmitCoriolisSet', true);
    %     rabbit.configureDynamics('DelayCoriolisSet',delay_set);
else
    % load symbolic expression for the dynamics equations
    rabbit.loadDynamics(load_path, delay_set);
end

%% Define Domains and Hybrid System

% Define domains
r_stance = RightStance(rabbit, load_path);
% l_stance = LeftStance(rabbit, load_path);
r_impact = RightImpact(r_stance, load_path);
% l_impact = LeftImpact(l_stance, load_path);

% Define hybrid system
rabbit_1step = HybridSystem('Rabbit_1step');
rabbit_1step = addVertex(rabbit_1step, 'RightStance', 'Domain', r_stance);

srcs = {'RightStance'};
tars = {'RightStance'};

rabbit_1step = addEdge(rabbit_1step, srcs, tars);
rabbit_1step = setEdgeProperties(rabbit_1step,srcs,tars,'Guard', {r_impact});

%% Define User Constraints
r_stance.UserNlpConstraint = str2func('right_stance_constraints');
r_impact.UserNlpConstraint = str2func('right_impact_constraints');

%% Define User Costs
u = r_stance.Inputs.Control.u;
u2r = tovector(norm(u).^2);
u2r_fun = SymFunction(['torque_' r_stance.Name],u2r,{u});

%% Create optimization problem
num_grid.RightStance = 10;
num_grid.LeftStance = 10;
nlp = HybridTrajectoryOptimization('Rabbit_1step',rabbit_1step,num_grid,[],'EqualityConstraintBoundary',1e-4);

% Configure bounds
setBounds;

% load some optimization related expressions here
if ~isempty(load_path)
    nlp.configure(bounds, 'LoadPath',load_path);
else
    nlp.configure(bounds);
end

%% Add costs
addRunningCost(nlp.Phase(getPhaseIndex(nlp,'RightStance')),u2r_fun,'u');


%% Step Height
optparams = LoadParams();
step_height = optparams.ht;
for i = 1:(nlp.Phase(1).NumNode-1)
    nlp.Phase(1).ConstrTable.u_leftFootHeight_RightStance(i).setBoundary(-step_height, Inf);
end
nlp.Phase(1).ConstrTable.u_leftFootHeight_RightStance(end).setBoundary(step_height, step_height);
nlp.update;

%% save expressions after you run the optimization. It will save all required
% expressions
% do not need to save expressions if the model configuration is not
% changed. Adding custom constraints does not require saving any
% expressions.
% load_path = fullfile(cur, 'gen/sym');
% rabbit_1step.saveExpression(load_path);

%% Compile
if COMPILE
    if ~exist([export_path, 'opt/'])
        mkdir([export_path, 'opt/'])
    end
%     rabbit.ExportKinematics([export_path,'kinematics/']);
    compileConstraint(nlp,[],[],[export_path, 'opt/']);
    compileObjective(nlp,[],[],[export_path, 'opt/']);
end
% if COMPILE
%     if ~exist([export_path, 'opt/'])
%         mkdir([export_path, 'opt/'])
%     end
%     compKin = false;
%     while compKin
%         try
%             rabbit.ExportKinematics([export_path,'kinematics/']);
%             compKin = false;
%         catch
%             system('freepdb.cmd');
%         end
%     end
%     newcompile = true;
%     while newcompile
%         try
%             compileConstraint(nlp,[],[],[export_path, 'opt/']);
%             compileObjective(nlp,[],[],[export_path, 'opt/']);
%             newcompile = false;
%         catch
%             system('freepdb.cmd');
%         end
%     end
% end

%%
% Example constraint removal
% removeConstraint(nlp.Phase(1),'u_friction_cone_RightToe');
%     compileConstraint(nlp,[],'ddh_RightToe_RightStance',[export_path, 'opt/']);

%% Use IPOPT Solver
addpath(genpath(export_path));
nlp.update;
solver = IpoptApplication(nlp);
solver.Options.ipopt.max_iter = 500;
% Run Optimization
tic
% old = load('x0');
% [sol, info] = optimize(solver, sol);
[sol, info] = optimize(solver);
toc
[tspan, states, inputs, params] = exportSolution(nlp, sol);
gait = struct(...
    'tspan',tspan,...
    'states',states,...
    'inputs',inputs,...
    'params',params);

%% SAVE
SAVE_SOLUTION = 1;
name_save = "Ascend_Ht(" + optparams.ht + ...
    ")_Vel(" + optparams.avgvel + ...
    ")_comxvel(" + optparams.comxvel + ...
    ")_comzvel(" + optparams.comzvel + ...
    ")_swingxmid(" + optparams.swingxmid + ...
    ")_swingxvel(" + optparams.swingxvel + ...
    ")_swingzvel(" + optparams.swingzvel + ...
    ")_stepLength(" + optparams.length + ")";
if SAVE_SOLUTION
    %     data_name = string(datetime('now','TimeZone','local','Format','d-MMM-y-HH-mm-ssZ'));  %'local/longer_double_support_wider_step_dummy';
    %     name_save = [CHARACTER_NAME, '_', data_name];
    
    save_dir = fullfile(cur,'../../reference_trajectories/time_based_cartesian_virts/');
    file_name = name_save + ".mat";
    fprintf('Saving gait %s\n', file_name);
    save(fullfile(save_dir, file_name), 'gait', 'sol', 'info', 'bounds');
    disp("Saved!");
    %     save_dir = fullfile(cur,'trajectories/ascend_gaits');
    %     file_name =  name_save + ".mat";
    %     fprintf('Saving gait %s\n', file_name);
    %     save(fullfile(save_dir, file_name), 'gait', 'sol', 'info', 'bounds');
end

%% Check Constraints
% checkConstraints(nlp, sol, 1e-3, 'constraintCheck.txt');
% checkVariables(nlp, sol, 1e-1, 'variableCheck.txt');
% open('constraintCheck.txt')
% open('variableCheck.txt')

%% Plot virtual constraints
t_init = params{1}.ptime(2);
t_end = params{1}.ptime(1);
alpha_virt = reshape(params{1}.atime,4,6);

delta_time = 0.005;
tdes = t_init:delta_time:t_end;
for k = 1:length(tdes)
    s = (tdes(k)-t_init)/(t_end-t_init);
    q_virt(:,k) = bezier(alpha_virt,s);
end

figure; 
virt_headers={'Torso Angle','Hip Height','Swing Foot X','Swing Foot Z'};
for j = 1:4
    subplot(1,4,j);
    hold on;
    plot(tdes,q_virt(j,:));
    title(virt_headers(j));
    xlabel('time');
    grid on;
end


%% Animation
q_log_R = gait(1).states.x; % Right stance
q_log_L = q_log_R([1:3,6:7,4:5],:); % symmetric Left stance
q_log_L(1:3,:) = q_log_L(1:3,:) + repmat((q_log_R(1:3,end)-q_log_R(1:3,1)),1,length(q_log_R));

t_log_R = tspan{1};
t_log_L = t_log_R + t_log_R(end);

q_log = [q_log_R, q_log_L];
t_log = [t_log_R, t_log_L];

%
anim = Animator.FiveLinkAnimator(t_log, q_log);
anim.pov = Animator.AnimatorPointOfView.West;
anim.Animate(true);
anim.isLooping = false;
anim.updateWorldPosition = true;
% anim.endTime = 20;
conGUI = Animator.AnimatorControls();
conGUI.anim = anim;


%% Compute Jacobian of swing foot
% rabbit_1step.Gamma.Nodes(1,:).Domain{1}.HolonomicConstraints.RightToe
% RightFootPos = getCartesianPosition(rabbit,rabbit.ContactPoints.RightToe);
% J_rightfoot = jacobian(RightFootPos,rabbit.States.x);
% J_rightfoot = J_rightfoot([1,3],:);
% 
swingPos = getCartesianPosition(rabbit,rabbit.ContactPoints.LeftToe);
J_swing = jacobian(swingPos,rabbit.States.x);
J_swing = J_swing([1,3],:);
SwingVelocity = J_swing*rabbit.States.dx;
swingvel_traj = [];

disp("Swing Foot Position @ EOs");
swingpos_end = subs(swingPos,rabbit.States.x,SymExpression(gait(1).states.x(:,end)))
for i = 1:21
    swingvel_traj = [swingvel_traj; subs(SwingVelocity,[rabbit.States.x,rabbit.States.dx],[SymExpression(gait(1).states.x(:,i)),SymExpression(gait(1).states.dx(:,i))])];
end
disp("Swing Foot Velocity @ EOS");
swingvel_traj(end-1:end)

pos_com = rabbit.getComPosition;
J_com = jacobian(pos_com,rabbit.States.x);
J_com = J_com([1,3],:);
vel_com = J_com*rabbit.States.dx;
velcom_traj = [];
for i = 1:21
    velcom_traj = [velcom_traj; subs(vel_com,[rabbit.States.x,rabbit.States.dx],[SymExpression(gait(1).states.x(:,i)),SymExpression(gait(1).states.dx(:,i))])];
end
disp("COM Velocity @ EOS");
velcom_traj(end-1:end)

% p_hip = getCartesianPosition(rabbit,rabbit.OtherPoints.Torso);
% J_hip = ;
% 
% p_st_knee = ;
% J_st_knee = ;
% 
% p_torso = ;
% J_torso = ;
% 
% p_sw_knee = 
% J_sw_knee = 


%exporting to mex
% if true
%     export(J_leftfoot,'Vars',rabbit.States.x,'File','J_leftFoot')
% end

