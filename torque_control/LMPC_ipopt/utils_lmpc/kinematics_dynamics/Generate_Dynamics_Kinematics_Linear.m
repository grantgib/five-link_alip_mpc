function [dyn_info] = Generate_Dynamics_Kinematics_Linear()
import casadi.*
dyn_info = struct;
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
dq = SX.sym('dq',n_q,1);
x = [q; dq];

% Control
u = SX.sym('u',n_u,1);

% Wrench
w = SX.sym('w',n_w,1);
w_ext = SX.sym('w_ext',n_w,1); % Additional External forces 

%% Linearization symbolics
% Delta State
delta_q = SX.sym('delta_q',n_q,1);
delta_dq = SX.sym('delta_dq',n_q,1);
delta_x = [delta_q; delta_dq];

% Delta Control
delta_u = SX.sym('delta_u',n_u,1);

% Delta Wrench
delta_w = SX.sym('delta_w',n_w,1);

%% Kinematic Functions for Constraints
% Hip 
pos_hip = Hip_Position(q);
J_hip = jacobian(pos_hip,q);

% Center of Mass
pos_COM = COM_Position(q);
J_COM = jacobian(pos_COM,q);

% swing foot 
pos_swing = Left_Swing_Foot_Position(q);
J_swing = jacobian(pos_swing,q);

% stance foot 
pos_stance = Right_Stance_Foot_Position(q);
J_stance = jacobian(pos_stance,q);
J_stance_dot = jacobian(J_stance*dq,q);

%% Euler-Lagrange ODE
% Dynamics (D*ddq + G = B*u + Jc'*w)~ ignoring coriolis for now
D = Mass_Inertia_Matrix(q);     % 7x7
C = zeros(n_q,n_q);             % omit Coriolis for now
G = -GravityVector(q);          %7x1  %FROST gravity vector is -G
B = 50*[zeros(3,4); eye(4)];    % Multiply by 50 b/c of gear reduction
ddq = D\(-C*dq -G + B*u + J_stance'*w);
xdot = [dq; ddq]; 

% Wrench as decision variable
w_sym = ((J_stance/D)*J_stance') \ ((J_stance/D)*(C*dq + G) - (J_stance/D)*B*u -J_stance_dot*dq);

% External Force @ Hip Functions
ddq_ext = D\(-C*dq -G + B*u + J_stance'*w + J_hip'*w_ext);
rhs_ext = [dq; ddq_ext];

% Impact Map
impact_map = [D -J_swing'; J_swing zeros(2,2)]\[D*dq;zeros(2,1)];
x_impact = [q; impact_map(1:n_q)];
Relabel = [eye(3), zeros(3,2), zeros(3,2);
    zeros(2,3), zeros(2,2), eye(2);
    zeros(2,3), eye(2), zeros(2,2)];
x_relabel = [Relabel*x_impact(1:n_q); Relabel*x_impact(n_q+1:end)];

% contact constraint: Jc*ddq + Jc_dot*dq = 0
contact_constraint = J_stance*ddq + J_stance_dot*dq;

%% Linearization EOM
Alin = jacobian(xdot,x);
Bulin = jacobian(xdot,u);
Bwlin = jacobian(xdot,w);
delta_xdot = Alin*delta_x + Bulin*delta_u + Bwlin*delta_w;

% Linearize wrench
Wx = jacobian(w_sym,x);
Wu = jacobian(w_sym,u);
w_sym_linear = Wx*delta_x + Wu*delta_u;

% Linearized Impact Map
%   J_impact_q = jacobian(x_impact,q);
%   J_impact_dq = jacobian(x_impact,dq);
%   delta_x_impact = J_impact_q*delta_q + J_impact_dq*delta_dq;
%   delta_x_relabel = [Relabel*delta_x_impact(1:n_q); Relabel*delta_x_impact(n_q+1:end)];
%   f_impact_relabel_linear = Function('f_impact_relabel_linear',{q,dq,delta_q,delta_dq},{delta_x_relabel});
%   dyn_info.func.f_impact_relabel_linear = f_impact_relabel_linear;
De = [D, -J_stance'; J_stance, zeros(n_w,n_w)];
Ce = [C; jacobian(J_stance*dq,q)];
Ge = [G; zeros(n_w,1)];
Be = [B; zeros(n_w,n_u)];
dq_plus = impact_map(1:n_q);
w_impulse = impact_map(n_q+1:end);

linear_impact_map = De\(jacobian([D*dq; zeros(n_w,1)] - De*[dq_plus; w_impulse],q)*delta_q + ...
    [D; zeros(n_w,n_q)]*delta_dq);
delta_x_impact = [delta_q; linear_impact_map(1:n_q)];
delta_w_impulse = linear_impact_map(n_q+1:end);

delta_x_relabel = [Relabel*delta_x_impact(1:n_q); Relabel*delta_x_impact(n_q+1:end)];


%% Generate functions
% Kinematic Functions
f_pos_hip = Function('f_pos_hip',{q},{pos_hip});
f_pos_COM = Function('f_pos_COM',{q},{pos_COM});
f_pos_swing = Function('f_pos_swing',{q},{pos_swing});
f_pos_stance = Function('f_pos_stance',{q},{pos_stance});
f_J_hip = Function('f_J_hip',{q},{J_hip});
f_J_COM = Function('f_J_COM',{q},{J_COM});
f_J_swing = Function('f_J_swing',{q},{J_swing});
f_J_stance = Function('f_J_stance',{q},{J_stance});
f_J_stance_dot = Function('f_J_stance_dot',{q,dq},{J_stance_dot});

% Dynamics Functions
f_ddq = Function('f_ddq',{x,u,w},{ddq});
f_nonlinear = Function('f_nonlinear',{x,u,w},{xdot});  % nonlinear mapping function f(x,u)
f_w = Function('f_w',{x,u},{w_sym});
f_D = Function('f_D',{q},{D});
f_C = Function('f_C',{q},{C});
f_G = Function('f_G',{q},{G});
f_B = Function('f_B',{},{B});
f_nonlinear_ext = Function('f_nonlinear_ext',{q,dq,u,w,w_ext},{rhs_ext});
f_impact_relabel = Function('f_impact_relabel',{x},{x_relabel});
f_contact = Function('f_contact',{x,u,w},{contact_constraint});

% Linearization Functions
f_linear = Function('f_linear',{x,u,w,delta_x,delta_u,delta_w},{delta_xdot});
f_Ax = Function('f_Ax',{x,u,w},{Alin});
f_Bu = Function('f_Bu',{x,u,w},{Bulin});
f_Bw = Function('f_Bw',{x,u,w},{Bwlin});
f_Wlinx = Function('f_Wlinx',{x,u},{Wx});
f_Wlinu = Function('f_Wlinu',{x,u},{Wu});
f_w_linear = Function('f_w_linear',{x,u,delta_x,delta_u},{w_sym_linear});
f_impact_relabel_linear = Function('f_impact_relabel_linear',{x,delta_x},{delta_x_relabel});

%% Outputs
% Dimensions
dyn_info.dim.n_q = n_q;
dyn_info.dim.n_x = n_x;
dyn_info.dim.n_u = n_u;
dyn_info.dim.n_w = n_w;

% Symbolics
dyn_info.sym.q = q;
dyn_info.sym.dq = dq;
dyn_info.sym.x = x;
dyn_info.sym.u = u;
dyn_info.sym.w = w;
dyn_info.sym.delta_q = delta_q;
dyn_info.sym.delta_dq = delta_dq;
dyn_info.sym.delta_x = delta_x;

% kinematics outputs
dyn_info.func.f_pos_hip = f_pos_hip;
dyn_info.func.f_pos_COM = f_pos_COM;
dyn_info.func.f_pos_swing = f_pos_swing;
dyn_info.func.f_pos_stance = f_pos_stance;
dyn_info.func.f_J_hip = f_J_hip;
dyn_info.func.f_J_COM = f_J_COM;
dyn_info.func.f_J_swing = f_J_swing;
dyn_info.func.f_J_stance = f_J_stance;
dyn_info.func.f_J_stance_dot = f_J_stance_dot;

% Dynamics
dyn_info.func.D = f_D;
dyn_info.func.C = f_C;
dyn_info.func.G = f_G;
dyn_info.func.B = f_B;
dyn_info.func.f_NL = f_nonlinear;
dyn_info.func.f_NL_ext = f_nonlinear_ext;
dyn_info.func.f_w = f_w;
dyn_info.func.f_ddq = f_ddq;
dyn_info.func.f_contact = f_contact;
dyn_info.func.f_impact_relabel = f_impact_relabel;

% Linearized Dynamics
dyn_info.func.f_L = f_linear;
dyn_info.func.f_Ax = f_Ax;
dyn_info.func.f_Bu = f_Bu;
dyn_info.func.f_Bw = f_Bw;
dyn_info.func.f_Wx = f_Wlinx;
dyn_info.func.f_Wu = f_Wlinu;
dyn_info.func.f_w_linear = f_w_linear;
dyn_info.func.f_impact_relabel_linear = f_impact_relabel_linear;

end










