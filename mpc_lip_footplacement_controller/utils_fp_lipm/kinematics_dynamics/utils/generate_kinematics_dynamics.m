function [sym_info] = generate_kinematics_dynamics(sym_info)
import casadi.*
%% Extract
m = sym_info.params.m;

%% Symbolic state, control, and wrench variables
%   state:      [x,z,roty,q1R,q2R,q1L,q2L],
%   control:    [u_q1R,u_q2R,u_q1L,u_q2L], (R is stance leg)
%   wrench:     [f_x,f_z]

% Dimensions
n_q = 7;
n_x = 2*n_q;
n_u = 4;
n_w = 2;

% State
q = SX.sym('q',n_q,1);
qdot = SX.sym('qdot',n_q,1);
x = [q; qdot];

% Control
u = SX.sym('u',n_u,1);

% Wrench
w = SX.sym('w',n_w,1);

%% Kinematic Functions for Constraints
% Hip 
pos_hip = Hip_Position(q);
J_hip = jacobian(pos_hip,q);

% left foot 
pos_left_foot = Left_Swing_Foot_Position(q);
pos_left_foot_x = pos_left_foot(1);
pos_left_foot_z = pos_left_foot(end);
J_left_foot = jacobian(pos_left_foot,q);
vel_left_foot = J_left_foot * qdot;
Jdot_left_foot = jacobian(J_left_foot*qdot,q);

% right foot 
pos_right_foot = Right_Stance_Foot_Position(q);
J_right_foot = jacobian(pos_right_foot,q);
vel_right_foot = J_right_foot * qdot;
Jdot_right_foot = jacobian(J_right_foot*qdot,q);

% Center of Mass
pos_com_world = COM_Position(q);
J_com_world = jacobian(pos_com_world,q);
vel_com_world = J_com_world * qdot;

pos_com_right_foot = pos_com_world - pos_right_foot;
J_com_right_foot = jacobian(pos_com_right_foot,q);
vel_com_right_foot = J_com_right_foot * qdot;

%% Floating Base Dynamics
% Dynamics (D*qddot + G = B*u + Jc'*w)~ ignoring coriolis for now
D = Mass_Inertia_Matrix(q);     % 7x7
C = zeros(n_q,n_q);             % omit Coriolis for now
G = -GravityVector(q);          %7x1  %FROST gravity vector is -G
B = 50*[zeros(3,4); eye(4)];    % Multiply by 50 b/c of gear reduction

De = [D, -J_right_foot'; J_right_foot, zeros(n_w,n_w)];
Ce = [C; Jdot_right_foot];
Ge = [G; zeros(n_w,1)];
Be = [B; zeros(n_w,n_u)];

qddot_wrench = De \ (-Ce*qdot - Ge + Be*u);
qddot = qddot_wrench(1:n_q);
w_sym = qddot_wrench(n_q+1:end);

contact_constraint = J_right_foot*qddot + Jdot_right_foot*qdot;
pos_com_world = COM_Position(q);
xdot = [qdot; qddot]; 

% Impact Map
impact_map = [D -J_left_foot'; J_left_foot zeros(2,2)]\[D*qdot;zeros(2,1)];
x_impact = [q; impact_map(1:n_q)];

% Relabel Map
Relabel = [eye(3), zeros(3,2), zeros(3,2);
    zeros(2,3), zeros(2,2), eye(2);
    zeros(2,3), eye(2), zeros(2,2)];
x_relabel = [Relabel*x(1:n_q); Relabel*x(n_q+1:end)];

% Angular Momentum about stance foot
L_motors = 0;
for i = 1:n_u
    L_motors = L_motors + 0.000332*qdot(i+3);
end
vec_sw_com = pos_com_world - pos_right_foot;
L_stance_rel = (skewxz(pos_com_right_foot) * m * [vel_com_right_foot(1); 0; vel_com_world(2)])' * [0; 1; 0];
L_stance = L_stance_rel + L_motors;
L_stance = L_stance_rel;

%% Generate functions
% Kinematic Functions
f_pos_hip = Function('f_pos_hip',{x},{pos_hip});
f_pos_com_world = Function('f_pos_com_world',{x},{pos_com_world});
f_pos_com_stance = Function('f_pos_com_stance',{x},{pos_com_right_foot});
f_pos_swing = Function('f_pos_swing',{x},{pos_left_foot});
f_pos_swing_x = Function('f_pos_swing_x',{x},{pos_left_foot_x});
f_pos_swing_z = Function('f_pos_swing_z',{x},{pos_left_foot_z});
f_vel_swing = Function('f_vel_swing',{x},{vel_left_foot});
f_pos_stance = Function('f_pos_stance',{x},{pos_right_foot});
f_vel_stance = Function('f_vel_stance',{x},{vel_right_foot});
f_J_hip = Function('f_J_hip',{x},{J_hip});
f_J_com = Function('f_J_com',{x},{J_com_world});
f_J_swing = Function('f_J_swing',{x},{J_left_foot});
f_J_stance = Function('f_J_stance',{x},{J_right_foot});
f_J_stance_dot = Function('f_Jdot_stance',{x},{Jdot_right_foot});
f_vel_com_world = Function('f_vel_com_world',{x},{vel_com_world});
f_vel_com_stance = Function('f_vel_com_stance',{x},{vel_com_right_foot});

% Dynamics Functions
f_qddot = Function('f_qddot',{x,u},{qddot});
f_w = Function('f_w',{x,u},{w_sym});
f_NL = Function('f_NL',{x,u},{xdot});  % nonlinear mapping function f(x,u)
f_impact = Function('f_impact',{x},{x_impact});
f_relabel = Function('f_relabel',{x},{x_relabel});
f_contact = Function('f_contact',{x,u,w},{contact_constraint});
f_L_stance = Function('f_L_stance',{x},{L_stance});

%% Discretize Dynamics
dt = SX.sym('dt');

% Forward euler
xnext = x + f_NL(x,u)*dt;
f_eul = Function('f_eul',{x,u,dt},{xnext});

% Runge Kutta
M = 4;
dt_rk = dt / M;
x_rk4 = x;
for j = 1:M
    k1 = f_NL(x_rk4,u);
    k2 = f_NL(x_rk4 + (dt_rk/2)*k1,u);
    k3 = f_NL(x_rk4 + (dt_rk/2)*k2,u);
    k4 = f_NL(x_rk4 + dt_rk*k3,u);
    x_rk4 = x_rk4 + (dt_rk/6) * (k1 + 2*k2 + 2*k3 + k4);
end
f_rk4 = Function('f_rk4',{x,u,dt},{x_rk4});


%% LIP Slip limit constraint
mu = SX.sym('mu');
kx = SX.sym('kx');
ky = SX.sym('ky');
z_H = SX.sym('z_H');

xc_slip_limit = (mu + kx)*z_H / (1 - mu*kx);
yc_slip_limit = (mu + ky)*z_H / (1 - mu*ky);

f_xc_slip_limit = Function('f_xc_slip_limit',{z_H,mu,kx},{xc_slip_limit});
f_yc_slip_limit = Function('f_yc_slip_limit',{z_H,mu,ky},{yc_slip_limit});

%% Outputs
sym_info.params.length_thigh = 0.4;
sym_info.params.length_shin = 0.4;
sym_info.params.length_leg = sym_info.params.length_thigh + sym_info.params.length_shin;

% Dimensions
sym_info.dim.n_q = n_q;
sym_info.dim.n_x = n_x;
sym_info.dim.n_u = n_u;
sym_info.dim.n_w = n_w;

% Symbolics
sym_info.sym.q = q;
sym_info.sym.qdot = qdot;
sym_info.sym.x = x;
sym_info.sym.u = u;
sym_info.sym.w = w;
sym_info.sym.D = D;
sym_info.sym.C = C;
sym_info.sym.G = G;
sym_info.sym.B = B;
sym_info.sym.qddot = qddot;
sym_info.sym.J_stance = J_right_foot;
sym_info.sym.Jdot_stance = Jdot_right_foot;

% kinematics outputs
sym_info.func.f_pos_hip = f_pos_hip;
sym_info.func.f_pos_swing = f_pos_swing;
sym_info.func.f_pos_swing_x = f_pos_swing_x;
sym_info.func.f_pos_swing_z = f_pos_swing_z;
sym_info.func.f_vel_swing = f_vel_swing;
sym_info.func.f_pos_stance = f_pos_stance;
sym_info.func.f_vel_stance = f_vel_stance;
sym_info.func.f_pos_com_world = f_pos_com_world;
sym_info.func.f_pos_com_stance = f_pos_com_stance;

sym_info.func.f_J_hip = f_J_hip;
sym_info.func.f_J_com = f_J_com;
sym_info.func.f_J_swing = f_J_swing;
sym_info.func.f_J_stance = f_J_stance;
sym_info.func.f_Jdot_stance = f_J_stance_dot;

sym_info.func.f_vel_com_world = f_vel_com_world;
sym_info.func.f_vel_com_stance = f_vel_com_stance;

sym_info.func.f_xc_slip_limit = f_xc_slip_limit;
sym_info.func.f_yc_slip_limit = f_yc_slip_limit;

% Dynamics
sym_info.func.f_NL = f_NL;
sym_info.func.f_w = f_w;
sym_info.func.f_qddot = f_qddot;
sym_info.func.f_contact = f_contact;
sym_info.func.f_impact = f_impact;
sym_info.func.f_relabel = f_relabel;
sym_info.func.f_L_stance = f_L_stance;
sym_info.func.f_eul = f_eul;
sym_info.func.f_rk4 = f_rk4;

end










