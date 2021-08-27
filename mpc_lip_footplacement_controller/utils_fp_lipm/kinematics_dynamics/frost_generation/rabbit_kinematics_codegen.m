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


%% Kinematics
rabbit.ExportKinematics([export_path,'kin/']);


%% Dynamics
% if isempty(load_path)
%     rabbit.configureDynamics('DelayCoriolisSet',delay_set);
% else
%     % load symbolic expression for the dynamics equations
%     rabbit.loadDynamics(load_path, delay_set);
% end










    






