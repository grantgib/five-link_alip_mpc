clear; clc; close all;

%% Setup
restoredefaultpath;
cur = pwd;
addpath(genpath(cur));
addpath('/home/grantgib/workspace/toolbox/frost-dev');  % make sure you are using master branch
frost_addpath();
export_path = fullfile(cur, 'gen/');
PATH_newgen = [cur '/newgen/'];
% if load_path is empty, it will not load any expression.
% if non-empty and assigned valid directory, then symbolic expressions will
% be loaded  from the MX binary files from the given directory.
load_path = [];%fullfile(cur, 'gen/sym');
delay_set = false;
COMPILE = 1;

%% Rabbit Model
rabbit = RABBIT('urdf/five_link_walker.urdf');

X = SymVariable('x',[7,1]); 
Xdot = SymVariable('xdot',[7,1]);

%% Kinematics
p_left_foot_3D = rabbit.ContactPoints.LeftToe.computeCartesianPosition;
p_right_foot_3D = rabbit.ContactPoints.RightToe.computeCartesianPosition;

%% Angular Momentum

[L_total_left, L_total_right] = AngularMomentumCalculation(rabbit, p_left_foot_3D, p_right_foot_3D, X, Xdot);

export_function(L_total_left(2),'L_total_left_func',PATH_newgen, {[X;Xdot]})
export_function(L_total_right(2),'L_total_right_func',PATH_newgen, {[X;Xdot]})


%%
function [L_total_left, L_total_right] = AngularMomentumCalculation(robot, p_left_foot_world, p_right_foot_world, X, dX)

% m_torso = 12; % mass of torso [kg]
% m_LT = 6.8; % mass of left thigh [kg]
% m_LS = 3.2; % mass of left shin [kg]
% m_RT = 6.8; % mass of right thigh [kg]
% m_RS = 3.2; % mass of right shin [kg]
% m = [m_torso, m_LT, m_LS, m_RT, m_RS]; % Robot mass

L_total_left = 0;
L_total_right = 0;

for i = 1:length(robot.Links) % for each link in robot
    mi = robot.Links(1,i).Mass;
      
    Jb = robot.Links(i).computeBodyJacobian(length(X)); % Body Jacobian
    Vb = Jb * dX; % Big Vb body velocity, V = [v; omega];
    omega = Vb((4:6),:); % Angular Velocity (of body)
    
    Ii = robot.Links(i).Inertia; % Inertia of current link
    Ii = SymExpression(Ii);
    
    Lci = Ii * omega; % momentum of current link about its COM
    
    p_COM_link = robot.Links(i).computeCartesianPosition; % position of COM of current link
    p_left_foot_COM = p_COM_link - p_left_foot_world; % vector from left foot to link COM
    p_right_foot_COM = p_COM_link - p_right_foot_world; % vector from right foot to link COM
    
    % Velocity of COM for link
    Jp_COM_link = jacobian(p_COM_link,X);
    v_COM_link = Jp_COM_link*dX;
    
    % skew symmetric matrices for foot vectors
    p_left_skew = [0, -p_left_foot_COM(3), p_left_foot_COM(2);...
        p_left_foot_COM(3),0,-p_left_foot_COM(1);...
        -p_left_foot_COM(2),p_left_foot_COM(1),0];
    p_right_skew = [0, -p_right_foot_COM(3), p_right_foot_COM(2);...
        p_right_foot_COM(3),0,-p_right_foot_COM(1);...
        -p_right_foot_COM(2),p_right_foot_COM(1),0];
    
    % Momentum of Links about Contact Point
    Lil = Lci + mi*(p_left_skew*v_COM_link); % left foot contact point
    Lir = Lci + mi*(p_right_skew*v_COM_link); % right foot contact point
    
    L_total_left = L_total_left + Lil;
    L_total_right = L_total_right + Lir;
end
end