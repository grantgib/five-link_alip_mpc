%% Generate Folders and Add Path
addpath(genpath(pwd));
rootdir = pwd;
TEMPLATE_PATH = [rootdir '\res\'];
PATH_dyn = [rootdir '\dyn\'];
PATH_kin = [rootdir '\kin\'];
if exist(PATH_kin,'dir')~=7
    mkdir(PATH_kin);
end
if exist(PATH_dyn,'dir')~=7
    mkdir(PATH_dyn);
end

FROST_PATH = 'C:\Users\wogun\Box\UMich_Classes\Research\Frost\frost-dev-master';
addpath(FROST_PATH)
frost_addpath;

%% Create 5 link model

FLW = FiveLink_GenModel('five_link_walker.urdf')

X = SymVariable('x',[7,1]); % note 5-link has 2 more coords than 3-link
dX = SymVariable('dx',[7,1]);

%% Kinematics
% torso
p_torso_COM = FLW.Links(1).computeCartesianPosition;
p_torso_COM= [p_torso_COM(1);p_torso_COM(3)]; % just keep x and z dir since y is all 0's
Jp_torso_COM = jacobian(p_torso_COM,X);
v_torso_COM = Jp_torso_COM*dX;

export_simulation(p_torso_COM,'p_torso_func',PATH_kin, {X}, TEMPLATE_PATH);
export_simulation(v_torso_COM,'v_torso_func',PATH_kin, {X,dX}, TEMPLATE_PATH);
export_simulation(Jp_torso_COM,'Jp_torso_func',PATH_kin, {X}, TEMPLATE_PATH);

% head
p_head = FLW.ContactPoints.Head.computeCartesianPosition;
p_head = [p_head(1); p_head(3)];
Jp_head = jacobian(p_head,X);
v_head = Jp_head*dX;

export_simulation(p_head,'p_head_func',PATH_kin, {X}, TEMPLATE_PATH);
export_simulation(v_head,'v_head_func',PATH_kin, {X,dX}, TEMPLATE_PATH);
export_simulation(Jp_head,'Jp_head_func',PATH_kin, {X}, TEMPLATE_PATH);

% left hip
p_left_hip = FLW.ContactPoints.LeftHip.computeCartesianPosition;
p_left_hip = [p_left_hip(1); p_left_hip(3)];
Jp_left_hip = jacobian(p_left_hip,X);
v_left_hip = Jp_left_hip*dX;

export_simulation(p_left_hip,'p_left_hip_func',PATH_kin, {X}, TEMPLATE_PATH);
export_simulation(v_left_hip,'v_left_hip_func',PATH_kin, {X,dX}, TEMPLATE_PATH);
export_simulation(Jp_left_hip,'Jp_left_hip_func',PATH_kin, {X}, TEMPLATE_PATH);

% right hip
p_right_hip = FLW.ContactPoints.RightHip.computeCartesianPosition;
p_right_hip = [p_right_hip(1); p_right_hip(3)];
Jp_right_hip = jacobian(p_right_hip,X);
v_right_hip = Jp_right_hip*dX;

temp1 = jacobian(Jp_right_hip(1,:),X)*dX;
temp2 = jacobian(Jp_right_hip(2,:),X)*dX;
dJp_right_hip = [temp1 temp2]';

export_simulation(p_right_hip,'p_right_hip_func',PATH_kin, {X}, TEMPLATE_PATH);
export_simulation(v_right_hip,'v_right_hip_func',PATH_kin, {X,dX}, TEMPLATE_PATH);
export_simulation(Jp_right_hip,'Jp_right_hip_func',PATH_kin, {X}, TEMPLATE_PATH);
export_simulation(dJp_right_hip,'dJp_right_hip_func',PATH_kin, {X, dX}, TEMPLATE_PATH);

% left foot
p_left_foot = FLW.ContactPoints.LeftFoot.computeCartesianPosition;
p_left_foot_3D = p_left_foot;
p_left_foot = [p_left_foot(1); p_left_foot(3)];
Jp_left_foot = jacobian(p_left_foot,X);
v_left_foot = Jp_left_foot*dX;

temp1 = jacobian(Jp_left_foot(1,:),X)*dX;
temp2 = jacobian(Jp_left_foot(2,:),X)*dX;
dJp_left_foot = [temp1 temp2]';

export_simulation(p_left_foot,'p_left_foot_func',PATH_kin, {X}, TEMPLATE_PATH);
export_simulation(v_left_foot,'v_left_foot_func',PATH_kin, {X,dX}, TEMPLATE_PATH);
export_simulation(Jp_left_foot,'Jp_left_foot_func',PATH_kin, {X}, TEMPLATE_PATH);
export_simulation(dJp_left_foot,'dJp_left_foot_func',PATH_kin, {X,dX}, TEMPLATE_PATH);

% right foot
p_right_foot = FLW.ContactPoints.RightFoot.computeCartesianPosition;
p_right_foot_3D = p_right_foot;
p_right_foot = [p_right_foot(1); p_right_foot(3)];
Jp_right_foot = jacobian(p_right_foot,X);
v_right_foot = Jp_right_foot*dX;

temp1 = jacobian(Jp_right_foot(1,:),X)*dX;
temp2 = jacobian(Jp_right_foot(2,:),X)*dX;
dJp_right_foot = [temp1 temp2]';

export_simulation(p_right_foot,'p_right_foot_func',PATH_kin, {X}, TEMPLATE_PATH);
export_simulation(v_right_foot,'v_right_foot_func',PATH_kin, {X,dX}, TEMPLATE_PATH);
export_simulation(Jp_right_foot,'Jp_right_foot_func',PATH_kin, {X}, TEMPLATE_PATH);
export_simulation(dJp_right_foot,'dJp_right_foot_func',PATH_kin, {X, dX}, TEMPLATE_PATH);

% left knee
p_left_knee = FLW.ContactPoints.LeftKnee.computeCartesianPosition;
p_left_knee = [p_left_knee(1); p_left_knee(3)];
Jp_left_knee = jacobian(p_left_knee,X);
v_left_knee = Jp_left_knee*dX;

temp1 = jacobian(Jp_left_knee(1,:),X)*dX;
temp2 = jacobian(Jp_left_knee(2,:),X)*dX;
dJp_left_knee = [temp1 temp2]';

export_simulation(p_left_knee,'p_left_knee_func',PATH_kin, {X}, TEMPLATE_PATH);
export_simulation(v_left_knee,'v_left_knee_func',PATH_kin, {X,dX}, TEMPLATE_PATH);
export_simulation(Jp_left_knee,'Jp_left_knee_func',PATH_kin, {X}, TEMPLATE_PATH);
export_simulation(dJp_left_knee,'dJp_left_knee_func',PATH_kin, {X,dX}, TEMPLATE_PATH);

% right knee
p_right_knee = FLW.ContactPoints.RightKnee.computeCartesianPosition;
p_right_knee = [p_right_knee(1); p_right_knee(3)];
Jp_right_knee = jacobian(p_right_knee,X);
v_right_knee = Jp_right_knee*dX;

temp1 = jacobian(Jp_right_knee(1,:),X)*dX;
temp2 = jacobian(Jp_right_knee(2,:),X)*dX;
dJp_right_knee = [temp1 temp2]';

export_simulation(p_right_knee,'p_right_knee_func',PATH_kin, {X}, TEMPLATE_PATH);
export_simulation(v_right_knee,'v_right_knee_func',PATH_kin, {X,dX}, TEMPLATE_PATH);
export_simulation(Jp_right_knee,'Jp_right_knee_func',PATH_kin, {X}, TEMPLATE_PATH);
export_simulation(dJp_right_knee,'dJp_right_knee_func',PATH_kin, {X,dX}, TEMPLATE_PATH);

% Example:
% 		1. cassie.Joints(20).computeCartesianPosition
% 		2. cassie.ContactPoints.LeftToeBottom.computeCartesianPosition
% Functions:
% 		1. computeCartesianPosition
% 		2. computeBodyJacobian (output: [vx,vy,vz,wx,wy,wz])
% 		3. computeSpatialJacobian
% 		4. computeForwardKinematics get Homogeneous Transformation Matrix
% 		5. computeHomogeneousTransformation calculate the transformation at zero position (q = 0)
% 		6. computeEulerAngle

%% COM

% world coords
p_COM = FLW.getComPosition()'; % COM in world coords
p_COM_3D = p_COM;
p_COM = [p_COM(1); p_COM(3)]; % just take x and z coords
Jp_COM = jacobian(p_COM,X);
Jp_COM_3D = jacobian(p_COM_3D,X);
v_COM = Jp_COM * dX;
v_COM_3D = Jp_COM_3D * dX;

% w.r.t. left foot
p_COM_left_foot = p_COM - p_left_foot; % COM coord w.r.t. left foot
Jp_COM_left_foot = jacobian(p_COM_left_foot,X);
v_COM_left_foot = Jp_COM_left_foot * dX;

% w.r.t. right foot
p_COM_right_foot = p_COM - p_right_foot; % COM coord w.r.t. right foot
Jp_COM_right_foot = jacobian(p_COM_right_foot,X);
v_COM_right_foot = Jp_COM_right_foot * dX;

% 3D vectors
p_COM_left_foot_3D = p_COM_3D - p_left_foot_3D;
p_COM_right_foot_3D = p_COM_3D - p_right_foot_3D;

export_simulation(p_COM,'p_COM_func',PATH_kin, {X}, TEMPLATE_PATH);
export_simulation(p_COM_left_foot,'p_COM_left_foot_func',PATH_kin, {X}, TEMPLATE_PATH);
export_simulation(p_COM_right_foot,'p_COM_right_foot_func',PATH_kin, {X}, TEMPLATE_PATH);
export_simulation(p_COM_left_foot_3D,'p_COM_left_foot_3D_func',PATH_kin, {X}, TEMPLATE_PATH);
export_simulation(p_COM_right_foot_3D,'p_COM_right_foot_3D_func',PATH_kin, {X}, TEMPLATE_PATH);
export_simulation(v_COM,'v_COM_func',PATH_kin, {X,dX}, TEMPLATE_PATH);
export_simulation(Jp_COM,'Jp_COM_func',PATH_kin, {X}, TEMPLATE_PATH);
export_simulation(v_COM_left_foot,'v_COM_left_foot_func',PATH_kin, {X,dX}, TEMPLATE_PATH);
export_simulation(Jp_COM_left_foot,'Jp_COM_left_foot_func',PATH_kin, {X}, TEMPLATE_PATH);
export_simulation(v_COM_right_foot,'v_COM_right_foot_func',PATH_kin, {X,dX}, TEMPLATE_PATH);
export_simulation(Jp_COM_right_foot,'Jp_COM_right_foot_func',PATH_kin, {X}, TEMPLATE_PATH);

%% constraint vector
% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% hip constraints
% if left swing
p_left_foot_hip = p_left_foot - p_left_hip; % w.r.t. hip coord
h0_left = [X(3); X(2); p_left_foot_hip(1); p_left_foot_hip(2)];
Jh_left = jacobian(h0_left,X); % jacobian of h0
dJh_left = [(jacobian(Jh_left(:,1),X)*dX), (jacobian(Jh_left(:,2),X)*dX), (jacobian(Jh_left(:,3),X)*dX),...
    (jacobian(Jh_left(:,4),X)*dX), (jacobian(Jh_left(:,5),X)*dX), (jacobian(Jh_left(:,6),X)*dX),...
    (jacobian(Jh_left(:,7),X)*dX)];

export_simulation(h0_left,'h0_left_func',PATH_kin, {X}, TEMPLATE_PATH);
export_simulation(Jh_left,'Jh_left_func',PATH_kin, {X,dX}, TEMPLATE_PATH);
export_simulation(dJh_left,'dJh_left_func',PATH_kin, {X,dX}, TEMPLATE_PATH);

% if right swing
p_right_foot_hip = p_right_foot - p_right_hip;
h0_right = [X(3); X(2); p_right_foot_hip(1); p_right_foot_hip(2)];
Jh_right = jacobian(h0_right,X); % jacobian of h0
dJh_right = [(jacobian(Jh_right(:,1),X)*dX), (jacobian(Jh_right(:,2),X)*dX), (jacobian(Jh_right(:,3),X)*dX),...
    (jacobian(Jh_right(:,4),X)*dX), (jacobian(Jh_right(:,5),X)*dX), (jacobian(Jh_right(:,6),X)*dX),...
    (jacobian(Jh_right(:,7),X)*dX)];

export_simulation(h0_right,'h0_right_func',PATH_kin, {X}, TEMPLATE_PATH);
export_simulation(Jh_right,'Jh_right_func',PATH_kin, {X,dX}, TEMPLATE_PATH);
export_simulation(dJh_right,'dJh_right_func',PATH_kin, {X,dX}, TEMPLATE_PATH);

% %%%%%%%%%%%%%%%%%%%%%%%%%%%%%
% CoM constraints/impelenting LIP COM model
% if left swing
p_left_foot_com = p_left_foot - p_COM; % w.r.t. COM coord
h0_left_com = [X(3); p_COM(2); p_left_foot_com(1); p_left_foot_com(2)];
Jh_left_com = jacobian(h0_left_com,X); % jacobian of h0
dJh_left_com = [(jacobian(Jh_left_com(:,1),X)*dX), (jacobian(Jh_left_com(:,2),X)*dX), (jacobian(Jh_left_com(:,3),X)*dX),...
    (jacobian(Jh_left_com(:,4),X)*dX), (jacobian(Jh_left_com(:,5),X)*dX), (jacobian(Jh_left_com(:,6),X)*dX),...
    (jacobian(Jh_left_com(:,7),X)*dX)];

export_simulation(h0_left_com,'h0_left_com_func',PATH_kin, {X}, TEMPLATE_PATH);
export_simulation(Jh_left_com,'Jh_left_com_func',PATH_kin, {X,dX}, TEMPLATE_PATH);
export_simulation(dJh_left_com,'dJh_left_com_func',PATH_kin, {X,dX}, TEMPLATE_PATH);

% if right swing
p_right_foot_com = p_right_foot - p_COM;
h0_right_com = [X(3); p_COM(2); p_right_foot_com(1); p_right_foot_com(2)];
Jh_right_com = jacobian(h0_right_com,X); % jacobian of h0
dJh_right_com = [(jacobian(Jh_right_com(:,1),X)*dX), (jacobian(Jh_right_com(:,2),X)*dX), (jacobian(Jh_right_com(:,3),X)*dX),...
    (jacobian(Jh_right_com(:,4),X)*dX), (jacobian(Jh_right_com(:,5),X)*dX), (jacobian(Jh_right_com(:,6),X)*dX),...
    (jacobian(Jh_right_com(:,7),X)*dX)];

export_simulation(h0_right_com,'h0_right_com_func',PATH_kin, {X}, TEMPLATE_PATH);
export_simulation(Jh_right_com,'Jh_right_com_func',PATH_kin, {X,dX}, TEMPLATE_PATH);
export_simulation(dJh_right_com,'dJh_right_com_func',PATH_kin, {X,dX}, TEMPLATE_PATH);

%% Angular Momentum
[L_total_left, L_total_right] = AngularMomentumCalculation(FLW, p_left_foot_3D, p_right_foot_3D, X, dX);

export_simulation(L_total_left,'L_total_left_func',PATH_kin, {X,dX}, TEMPLATE_PATH);
export_simulation(L_total_right,'L_total_right_func',PATH_kin, {X,dX}, TEMPLATE_PATH);

%% Generate Dynamics
FLW.configureDynamics();
M = FLW.Mmat;
F = FLW.getDriftVector; % F is coriolis + gravity
G = -FLW.Fvec{end}; % G is gravity
M = SymExpression(M);
G = SymExpression(G);
C = -(F + G); % this C is actually C*dq, not just C
B = FLW.Gmap.Control.u;

export_simulation(M,'InertiaMatrix',PATH_dyn, X, TEMPLATE_PATH);
export_simulation(G,'GravityVector',PATH_dyn, X, TEMPLATE_PATH);
export_simulation(C,'CoriolisTerm',PATH_dyn, {X,dX}, TEMPLATE_PATH);

function [L_total_left, L_total_right] = AngularMomentumCalculation(robot, p_left_foot_world, p_right_foot_world, X, dX)

m_torso = 12; % mass of torso [kg]
m_LT = 6.8; % mass of left thigh [kg]
m_LS = 3.2; % mass of left shin [kg]
m_RT = 6.8; % mass of right thigh [kg]
m_RS = 3.2; % mass of right shin [kg]
m = [m_torso, m_LT, m_LS, m_RT, m_RS]; % Robot mass

L_total_left = 0;
L_total_right = 0;

for i = 1:length(robot.Links) % for each link in robot
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
    Lil = Lci + m(i)*(p_left_skew*v_COM_link); % left foot contact point
    Lir = Lci + m(i)*(p_right_skew*v_COM_link); % right foot contact point
    
    L_total_left = L_total_left + Lil;
    L_total_right = L_total_right + Lir;
end
end