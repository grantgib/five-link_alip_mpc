%% Setup
clear; clc;
restoredefaultpath;
cur = pwd;
addpath([cur, '/../../../../external_packages/frost-dev']);
frost_addpath;
if isunix
    export_path = fullfile(cur, 'gen_unix/');
else
    export_path = fullfile(cur, 'gen_win/');
end

%% Load model
rabbit = RABBIT('urdf/five_link_walker.urdf');

% Dynamics
% if isempty(load_path)
%     rabbit.configureDynamics('DelayCoriolisSet',delay_set);
% else
%     % load symbolic expression for the dynamics equations
%     rabbit.loadDynamics(load_path, delay_set);
% end

%% Kinematics
rabbit.ExportKinematics([export_path,'kin/']);

%%
X = SymVariable('x',[7,1]);
dX = SymVariable('dx',[7,1]);
Compute_L_World_Reference_Point(rabbit,export_path,X,dX);

disp("--------------------- !Finished Kinematics Code Generation! ---------------------");

%% Functions
function Compute_L_World_Reference_Point(robot,export_path,X,dX)
pA = SymVariable('p',[3,1]);
Jq_pA = SymVariable('jqp',[3,7]);
Jdq_pA = SymVariable('jdqp',[3,7]);
% get terms relatedf to total angular momentum
AMworld_about_pA = SymExpression(zeros(3,1));

for i = 1:length(robot.Links)
    frame = robot.Links(i);
    p = frame.computeCartesianPosition;
    J_p = jacobian(p,X);
    Jb = frame.computeBodyJacobian(length(X));
    T = frame.computeForwardKinematics;
    
    v = J_p*dX;
    
    twist_body = Jb*dX;
    w_body =  (tomatrix(twist_body(4:6)));
    AMbody = frame.Inertia*w_body;
    AMworld = T(1:3,1:3)*AMbody;
    
    AMworld_about_pA = AMworld_about_pA + AMworld + frame.Mass*cross(p-pA,v);
end

Jq_AMworld_about_pA = jacobian(AMworld_about_pA,X) ;
Jdq_AMworld_about_pA = jacobian(AMworld_about_pA,dX);

Jq_linear = SymExpression(zeros(3,7));
Jdq_linear = SymExpression(zeros(3,7));
for i = 1:length(X)
    Jq_linear(:,i) = frame.Mass*cross(-Jq_pA(:,i),v);
    Jdq_linear(:,i) = frame.Mass*cross(-Jdq_pA(:,i),v);
end
Jq_AMworld_about_pA = Jq_AMworld_about_pA + Jq_linear;
Jdq_AMworld_about_pA = Jdq_AMworld_about_pA + Jdq_linear;

export_simulation(AMworld_about_pA,'L_world_reference_point',export_path, {X,dX,pA});
export_simulation(Jq_AMworld_about_pA,'J_L_world_about_contact_point',export_path, {X,dX,pA,Jq_pA});
export_simulation(Jdq_AMworld_about_pA,'dLdqdot_world_reference_point',export_path, {X,dX,pA,Jdq_pA});

% notice: Angular Momentum = f(q)*dq;
end


function [ ] = export_simulation( exprs, name, path, vars )
current_dir = pwd;
cd(path);
if ~exist('src/','dir')
    mkdir('src');
end
if ~exist('mex/','dir')
    mkdir('mex');
end
if ~exist('m/','dir')
    mkdir('m');
end
cd(current_dir);

if ~iscell(exprs)
    exprs = {exprs};
end

if ~iscell(vars)
    vars = {vars};
end

% Generate mex file
export(exprs{:}, 'File', [path,name,'_mex'], 'Vars', vars, 'ForceExport', true);
cd(path);
movefile *mex* mex
delete *.cc
delete *.hh
cd(current_dir);

% Generate c code
export(exprs{:}, 'File', [path,name,'_src'], 'Vars', vars, 'BuildMex', false, 'ForceExport', true);
cd(path);
!ren *.cc *.c
!ren *.hh *.h
movefile *.c* src
movefile *.h* src
cd(current_dir);

% Generate Matlab wrapper function
export(exprs{:}, 'File', [path,name], 'Vars', vars, 'BuildMex', false, 'ForceExport', true);
cd(path);
!ren *.cc *.m
!ren *.hh *.garbage
movefile *.m* m
delete *.garbage
cd(current_dir);


end














