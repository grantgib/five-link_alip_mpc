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

% Center of Mass
pos_COM = COM_Position(q);
J_COM = jacobian(pos_COM,q);
vel_COM = J_COM * qdot;

% swing foot 
pos_swing = Left_Swing_Foot_Position(q);
pos_swing_z = pos_swing(end);
J_swing = jacobian(pos_swing,q);
vel_swing = J_swing * qdot;

% stance foot 
pos_stance = Right_Stance_Foot_Position(q);
J_stance = jacobian(pos_stance,q);
vel_stance = J_stance * qdot;
J_stance_dot = jacobian(J_stance*qdot,q);

%% Floating Base Dynamics
% Dynamics (D*qddot + G = B*u + Jc'*w)~ ignoring coriolis for now
D = Mass_Inertia_Matrix(q);     % 7x7
C = zeros(n_q,n_q);             % omit Coriolis for now
G = -GravityVector(q);          %7x1  %FROST gravity vector is -G
B = 50*[zeros(3,4); eye(4)];    % Multiply by 50 b/c of gear reduction

De = [D, -J_stance'; J_stance, zeros(n_w,n_w)];
Ce = [C; J_stance_dot];
Ge = [G; zeros(n_w,1)];
Be = [B; zeros(n_w,n_u)];

qddot_wrench = De \ (-Ce*qdot - Ge + Be*u);
qddot = qddot_wrench(1:n_q);
w_sym = qddot_wrench(n_q+1:end);

contact_constraint = J_stance*qddot + J_stance_dot*qdot;

xdot = [qdot; qddot]; 

% Impact Map
impact_map = [D -J_swing'; J_swing zeros(2,2)]\[D*qdot;zeros(2,1)];
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
vec_sw_com = pos_COM - pos_stance;
Lst_rel = (skewxz(vec_sw_com) * m * [vel_COM(1); 0; vel_COM(2)])' * [0; 1; 0];
Lst = Lst_rel + L_motors;

%% Generate functions
% Kinematic Functions
f_pos_hip = Function('f_pos_hip',{x},{pos_hip});
f_pos_COM = Function('f_pos_COM',{x},{pos_COM});
f_pos_swing = Function('f_pos_swing',{x},{pos_swing});
f_pos_swing_z = Function('f_pos_swing_z',{x},{pos_swing_z});
f_vel_swing = Function('f_vel_swing',{x},{vel_swing});
f_pos_stance = Function('f_pos_stance',{x},{pos_stance});
f_vel_stance = Function('f_vel_stance',{x},{vel_stance});
f_J_hip = Function('f_J_hip',{x},{J_hip});
f_J_COM = Function('f_J_COM',{x},{J_COM});
f_J_swing = Function('f_J_swing',{x},{J_swing});
f_J_stance = Function('f_J_stance',{x},{J_stance});
f_J_stance_dot = Function('f_J_stance_dot',{x},{J_stance_dot});
f_vel_COM = Function('f_vel_COM',{x},{vel_COM});

% Dynamics Functions
f_qddot = Function('f_qddot',{x,u},{qddot});
f_w = Function('f_w',{x,u},{w_sym});
f_NL = Function('f_NL',{x,u},{xdot});  % nonlinear mapping function f(x,u)
f_impact = Function('f_impact',{x},{x_impact});
f_relabel = Function('f_relabel',{x},{x_relabel});
f_contact = Function('f_contact',{x,u,w},{contact_constraint});
f_Lst = Function('f_Lst',{x},{Lst});

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
f_rk4 = Function('fd',{x,u,dt},{x_rk4});

%% 2D LIP dynamics
z_H = SX.sym('z_H',1,1); 

xc = pos_COM(1);
xcdot = vel_COM(1);
Ly = m * z_H * xcdot;
xlip = [xc; xcdot; Ly];
f_xlip = Function('f_xlip',{x,z_H},{xlip});

%% Outputs
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
sym_info.sym.Jst = J_stance;
sym_info.sym.Jstdot = J_stance_dot;

% kinematics outputs
sym_info.func.f_pos_hip = f_pos_hip;
sym_info.func.f_pos_COM = f_pos_COM;
sym_info.func.f_pos_swing = f_pos_swing;
sym_info.func.f_pos_swing_z = f_pos_swing_z;
sym_info.func.f_vel_swing = f_vel_swing;
sym_info.func.f_pos_stance = f_pos_stance;
sym_info.func.f_vel_stance = f_vel_stance;
sym_info.func.f_J_hip = f_J_hip;
sym_info.func.f_J_COM = f_J_COM;
sym_info.func.f_J_swing = f_J_swing;
sym_info.func.f_J_stance = f_J_stance;
sym_info.func.f_J_stance_dot = f_J_stance_dot;
sym_info.func.f_vel_COM = f_vel_COM;

% LIP
sym_info.func.f_xlip = f_xlip;

% Dynamics
sym_info.func.f_NL = f_NL;
sym_info.func.f_w = f_w;
sym_info.func.f_qddot = f_qddot;
sym_info.func.f_contact = f_contact;
sym_info.func.f_impact = f_impact;
sym_info.func.f_relabel = f_relabel;
sym_info.func.f_Lst = f_Lst;
sym_info.func.f_eul = f_eul;
sym_info.func.f_rk4 = f_rk4;

end










