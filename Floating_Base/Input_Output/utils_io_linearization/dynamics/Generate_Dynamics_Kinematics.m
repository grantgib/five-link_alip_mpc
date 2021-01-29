function [dyn_info] = Generate_Dynamics_Kinematics()
import casadi.*
dyn_info = struct;
%% CasADi symbolics
%   state:      [x,z,roty,q1R,q2R,q1L,q2L],
%   control:    [u_q1R,u_q2R,u_q1L,u_q2L], (R is stance leg)
%   wrench:     [f_x,f_z] 
%   y axis points into the page so positive theta of roty is ccw

% Dimensions
n_q = 7;
n_x = 2*n_q;
n_u = 4;
n_w = 2;
n_h = n_u;

% Symbolics
q = SX.sym('q',n_q,1);
q_dot = SX.sym('dq',n_q,1);
x = [q; q_dot];                    % states
u = SX.sym('u',n_u,1);          % control
w = SX.sym('w',n_w,1);          % stance contact wrench
w_ext = SX.sym('w_ext',n_w,1);  % additional external wrenches

%% Kinematic Functions for Constraints
% Hip
pos_hip = Hip_Position(q); % position
J_hip = jacobian(pos_hip,q); % jacobian

% Center of Mass
pos_COM = COM_Position(q);
J_COM = jacobian(pos_COM,q);

% Swing Foot
pos_swing = Left_Swing_Foot_Position(q);
J_swing = jacobian(pos_swing,q);
vel_swing = J_swing*q_dot;

% stance foot
pos_stance = Right_Stance_Foot_Position(q);
J_stance = jacobian(pos_stance,q);
J_stance_dot = jacobian(J_stance*q_dot,q);     % move dq term inside of the jacobian to avoid tensor and dq not function of q

% Functions
f_pos_hip = Function('f_pos_hip',{q},{pos_hip});
f_pos_COM = Function('f_pos_COM',{q},{pos_COM});
f_pos_swing = Function('f_pos_swing',{q},{pos_swing});
f_pos_stance = Function('f_pos_stance',{q},{pos_stance});
f_J_hip = Function('f_J_hip',{q},{J_hip});
f_J_COM = Function('f_J_COM',{q},{J_COM});
f_J_swing = Function('f_J_swing',{q},{J_swing});
f_J_stance = Function('f_J_stance',{q},{J_stance});
f_J_stance_dot = Function('f_dJc',{q,q_dot},{J_stance_dot});
f_vel_swing = Function('f_vel_swing',{q,q_dot},{vel_swing});

%% Nonlinear Dynamics
% Dynamics (D*ddq + G = B*u + Jc'*w)~ ignoring coriolis for now
D = Mass_Inertia_Matrix(q); % 7x7
G = -GravityVector(q); %7x1  %FROST gravity vector is -G
C = zeros(n_q,n_q); % omit Coriolis for now
B = 50*[zeros(3,4); eye(4)];    % Multiply by 50 b/c of gear reduction
q_ddot = D\(-C*q_dot -G + B*u + J_stance'*w);
rhs = [q_dot; q_ddot]; 

% Wrench as decision variable
w_sym = ((J_stance/D)*J_stance') \ ((J_stance/D)*(C*q_dot + G) - (J_stance/D)*B*u -J_stance_dot*q_dot);

% External Force @ Hip Functions
ddq_ext = D\(-C*q_dot -G + B*u + J_stance'*w + J_hip'*w_ext);
rhs_ext = [q_dot; ddq_ext];

% Impact Map
q_dot_plus = [D -J_swing'; J_swing zeros(2,2)]\[D*q_dot;zeros(2,1)];
x_impact = [q; q_dot_plus(1:n_q)];
Relabel = [eye(3), zeros(3,2), zeros(3,2);
    zeros(2,3), zeros(2,2), eye(2);
    zeros(2,3), eye(2), zeros(2,2)];
x_relabel = [Relabel*x_impact(1:n_q); Relabel*x_impact(n_q+1:end)];

% Extras
J_swing_dot = jacobian(J_swing*q_dot,q);
acc_swing = J_swing*q_ddot + J_swing_dot*q_dot;

% Functions
f_D = Function('f_D',{q},{D});
f_C = Function('f_C',{q},{C});
f_G = Function('f_G',{q},{G});
f_B = Function('f_B',{},{B});
f_q_ddot = Function('f_ddq',{x,u,w},{q_ddot});
f_nonlinear = Function('f_nonlinear',{x,u,w},{rhs});  % nonlinear mapping function f(x,u)
f_w = Function('f_w',{x,u},{w_sym});
f_nonlinear_ext = Function('f_nonlinear_ext',{x,u,w,w_ext},{rhs_ext});
f_impact_relabel = Function('f_impact_relabel',{x},{x_relabel});
f_acc_swing = Function('f_accel_swing',{q,q_dot,u,w},{acc_swing});

%% Generate I/O Controller Parameters
% Virtual Constriant symbolics
%       ha = [torso angle, hip height, swing foot x pos, swing foot z pos]'
%       y = actual output - desired output;
% Virtual constraints
ha = [q(3); q(2); pos_swing(1); pos_swing(2)];  % actual virtual constraint output
J_ha = jacobian(ha,q);
ha_dot = J_ha*q_dot;
J_ha_dot = jacobian(J_ha*q_dot,q);
ha_ddot = J_ha*q_ddot + J_ha_dot*q_dot;

hd = SX.sym('hd',n_h,1);                        % desired virtual constraint output
hd_dot = SX.sym('hd_dot',n_h,1);                % "" velocity
hd_ddot = SX.sym('hd_ddot',n_h,1);              % "" acceleration

y = ha - hd;                        % output y
y_dot =  ha_dot - hd_dot;
y_ddot = ha_ddot - hd_ddot;

% PD gains
Kp = SX.sym('Kp');
Kd = SX.sym('Kd');
Kp_save = 100;
Kd_save = 20;

% I/O control law
JcD = (J_stance/D)*J_stance';
Hu = (eye(n_q) - J_stance'*(JcD\(J_stance/D)))*B;
Hw = J_stance'*(JcD\((J_stance/D)*(C*q_dot+G)-J_stance_dot*q_dot));
v = -Kd*y_dot - Kp*y;
u_IO_sym = ((J_ha/D)*Hu) \ (-(J_ha/D)*(-C*q_dot-G+Hw) - J_ha_dot*q_dot + hd_ddot + v);

% Functions
f_ha = Function('f_ha',{q},{ha});
f_ha_dot = Function('f_ha_dot',{x},{ha_dot});
f_ha_ddot = Function('f_ha_ddot',{x,u,w},{ha_ddot});
f_y = Function('f_y',{q,hd},{y});
f_y_dot = Function('f_y_dot',{x,hd_dot},{y_dot});
f_y_ddot = Function('f_y_ddot',{x,u,w,hd_ddot},{y_ddot});
f_v = Function('f_v',{x,hd,hd_dot,Kp,Kd},{v});
f_u_IO = Function('f_u_IO',{x,hd,hd_dot,hd_ddot,Kp,Kd},{u_IO_sym});

%% Outputs
% Dimensions
dyn_info.dim.n_q = n_q;
dyn_info.dim.n_x = n_x;
dyn_info.dim.n_u = n_u;
dyn_info.dim.n_w = n_w;
dyn_info.dim.n_h = n_h;
dyn_info.dim.n_y = n_h;

% Kinematics
dyn_info.func.f_pos_hip = f_pos_hip;
dyn_info.func.f_pos_COM = f_pos_COM;
dyn_info.func.f_pos_swing = f_pos_swing;
dyn_info.func.f_pos_stance = f_pos_stance;
dyn_info.func.f_J_hip = f_J_hip;
dyn_info.func.f_J_COM = f_J_COM;
dyn_info.func.f_J_swing = f_J_swing;
dyn_info.func.f_J_stance = f_J_stance;
dyn_info.func.f_J_stance_dot = f_J_stance_dot;
dyn_info.func.f_vel_swing = f_vel_swing;

% Nonlinear Dynamics
dyn_info.func.f_D = f_D;
dyn_info.func.f_C = f_C;
dyn_info.func.f_G = f_G;
dyn_info.func.f_B = f_B;
dyn_info.func.f_q_ddot = f_q_ddot;
dyn_info.func.f_NL = f_nonlinear;
dyn_info.func.f_w = f_w;
dyn_info.func.f_NL_ext = f_nonlinear_ext;
dyn_info.func.f_impact_relabel = f_impact_relabel;
dyn_info.func.f_acc_swing = f_acc_swing;

% Input-Output Linearization
dyn_info.ctrl.Kp = Kp_save;
dyn_info.ctrl.Kd = Kd_save;
dyn_info.func.f_ha = f_ha;
dyn_info.func.f_ha_dot = f_ha_dot;
dyn_info.func.f_ha_ddot = f_ha_ddot;
dyn_info.func.f_v = f_v;
dyn_info.func.f_y = f_y;
dyn_info.func.f_y_dot = f_y_dot;
dyn_info.func.f_y_ddot = f_y_ddot;
dyn_info.func.f_u_IO = f_u_IO;

dyn_info.descriptor = 0;
end










