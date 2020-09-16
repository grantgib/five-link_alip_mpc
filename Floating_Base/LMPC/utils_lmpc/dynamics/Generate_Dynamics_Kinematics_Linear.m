function [dyn_info] = Generate_Dynamics_Kinematics_Linear()
import casadi.*
dyn_info = struct;
%% Symbolic state, control, and wrench variables
%   state:      [x,z,roty,q1R,q2R,q1L,q2L],
%   control:    [u_q1R,u_q2R,u_q1L,u_q2L], (R is stance leg)
%   wrench:     [f_x,f_z]

% State
xbar = SX.sym('xbar');
zbar = SX.sym('zbar');
rotY = SX.sym('rotY');
q1R = SX.sym('q1R');
q2R = SX.sym('q2R');
q1L = SX.sym('q1L');
q2L = SX.sym('q2L');
dxbar = SX.sym('dxbar');
dzbar = SX.sym('dzbar');
drotY = SX.sym('drotY');
dq1R = SX.sym('dq1R');
dq2R = SX.sym('dq2R');
dq1L = SX.sym('dq1L');
dq2L = SX.sym('dq2L');
q = [xbar; zbar; rotY; q1R; q2R; q1L; q2L];
dq = [dxbar; dzbar; drotY; dq1R; dq2R; dq1L; dq2L];
x = [q; dq];
n_q = length(q);
n_x = length(x);

% Control
u_q1R = SX.sym('u_q1R');
u_q2R = SX.sym('u_q2R');
u_q1L = SX.sym('u_q1L');
u_q2L = SX.sym('u_q2L');
u = [u_q1R; u_q2R; u_q1L; u_q2L];
n_u = length(u);

% Wrench
f_x = SX.sym('f_x');
f_z = SX.sym('f_z');
w = [f_x; f_z];
n_w = length(w);

%% Linearization symbolics
% Delta State
delta_xbar = SX.sym('delta_xbar');
delta_zbar = SX.sym('delta_zbar');
delta_rotY = SX.sym('delta_rotY');
delta_q1R = SX.sym('delta_q1R');
delta_q2R = SX.sym('delta_q2R');
delta_q1L = SX.sym('delta_q1L');
delta_q2L = SX.sym('delta_q2L');
delta_dxbar = SX.sym('delta_dxbar');
delta_dzbar = SX.sym('delta_dzbar');
delta_drotY = SX.sym('delta_drotY');
delta_dq1R = SX.sym('delta_dq1R');
delta_dq2R = SX.sym('delta_dq2R');
delta_dq1L = SX.sym('delta_dq1L');
delta_dq2L = SX.sym('delta_dq2L');
delta_q = [delta_xbar; delta_zbar; delta_rotY; delta_q1R; delta_q2R; delta_q1L; delta_q2L];
delta_dq = [delta_dxbar; delta_dzbar; delta_drotY;delta_dq1R; delta_dq2R; delta_dq1L; delta_dq2L];
delta_x = [delta_q; delta_dq];

% Delta Control
delta_u_q1R = SX.sym('delta_u_q1R');
delta_u_q2R = SX.sym('delta_u_q2R');
delta_u_q1L = SX.sym('delta_u_q1L');
delta_u_q2L = SX.sym('delta_u_q2L');
delta_u = [delta_u_q1R; delta_u_q2R; delta_u_q1L; delta_u_q2L];

% Delta Wrench
delta_f_x = SX.sym('delta_f_x');
delta_f_z = SX.sym('delta_f_z');
delta_w = [delta_f_x; delta_f_z];

%% Euler-Lagrange ODE
% Dynamics (D*ddq + G = B*u + Jc'*w)~ ignoring coriolis for now
D = Mass_Inertia_Matrix(xbar,zbar,rotY,q1R,q2R,q1L,q2L); % 7x7
G = -GravityVector(xbar,zbar,rotY,q1R,q2R,q1L,q2L); %7x1  %FROST gravity vector is -G
C = zeros(n_q,n_q);
B = 50*[zeros(3,4); eye(4)];    % Multiply by 50 b/c of gear reduction
pos_stance_foot = Right_Stance_Foot_Position(xbar,zbar,rotY,q1R,q2R,q1L,q2L)';
Jc = jacobian(pos_stance_foot,q);
Jc_dot = jacobian(Jc*dq,q);     % move dq term inside of the jacobian to avoid tensor and dq not function of q
ddq = D\(-C*dq -G + B*u + Jc'*w);
xdot = [dq; ddq]; % omit Coriolis for now
f_ddq = Function('f_ddq',{q,dq,u,w},{ddq});
f_nonlinear = Function('f_nonlinear',{q,dq,u,w},{xdot});  % nonlinear mapping function f(x,u)

% Wrench as decision variable
lambda = ((Jc/D)*Jc') \ ((Jc/D)*(C*dq + G) - (Jc/D)*B*u -Jc_dot*dq);
f_lambda = Function('f_lambda',{q,dq,u},{lambda});

% Linearization EOM
Alin = jacobian(xdot,x);
Bulin = jacobian(xdot,u);
Bwlin = jacobian(xdot,w);
delta_xdot = Alin*delta_x + Bulin*delta_u + Bwlin*delta_w;
f_linear = Function('f_linear',{q,dq,u,w,delta_q,delta_dq,delta_u,delta_w},{delta_xdot});
f_Ax = Function('f_Ax',{x,u,w},{Alin});
f_Bu = Function('f_Bu',{x,u,w},{Bulin});
f_Bw = Function('f_Bw',{x,u,w},{Bwlin});

% Linearize wrench
Wx = jacobian(lambda,x);
Wu = jacobian(lambda,u);
f_Wx = Function('f_Wx',{x,u},{Wx});
f_Wu = Function('f_Wu',{x,u},{Wu});

% contact constraint: Jc*ddq + Jc_dot*dq = 0
contact_constraint = Jc*ddq + Jc_dot*dq;
f_contact = Function('f_contact',{q,dq,u,w},{contact_constraint});

%% External Force @ Hip Functions
w_ext = SX.sym('w_ext',n_w,1);
J_hip = Hip_Jacobian(xbar,zbar,rotY,q1R,q2R,q1L,q2L);
f_J_hip = Function('f_J_hip',{q},{J_hip});
ddq_ext = D\(-C*dq -G + B*u + Jc'*w + J_hip'*w_ext);
rhs_ext = [dq; ddq_ext];
f_nonlinear_ext = Function('f_nonlinear_ext',{q,dq,u,w,w_ext},{rhs_ext});
dyn_info.func.f_NL_ext = f_nonlinear_ext;

%% Kinematic Functions for Constraints
% Hip position
pos_hip = Hip_Position(xbar,zbar,rotY,q1R,q2R,q1L,q2L);
f_pos_hip = Function('f_pos_hip',{q},{pos_hip});

% Jacobian at hip (already defined)

% center of mass position
pos_COM = COM_Position(xbar,zbar,rotY,q1R,q2R,q1L,q2L);
f_pos_COM = Function('f_pos_COM',{q},{pos_COM});

% swing foot position
pos_swing = Left_Swing_Foot_Position(xbar,zbar,rotY,q1R,q2R,q1L,q2L);
f_pos_swing = Function('f_pos_swing',{q},{pos_swing});

% swing foot Jacobian
J_swing = jacobian(pos_swing,q);
f_J_swing = Function('f_J_swing',{q},{J_swing});

% stance foot position
pos_stance = Right_Stance_Foot_Position(xbar,zbar,rotY,q1R,q2R,q1L,q2L);
f_pos_stance = Function('f_pos_stance',{q},{pos_stance});

% stance foot Jacobian - equivalent to Jc already defined as Jc

%% Impact Map
impact_map = [D -J_swing'; J_swing zeros(2,2)]\[D*dq;zeros(2,1)];
x_impact = [q; impact_map(1:n_q)];
Relabel = [eye(3), zeros(3,2), zeros(3,2);
    zeros(2,3), zeros(2,2), eye(2);
    zeros(2,3), eye(2), zeros(2,2)];

x_relabel = [Relabel*x_impact(1:n_q); Relabel*x_impact(n_q+1:end)];
f_impact_relabel = Function('f_impact_relabel',{q,dq},{x_relabel});
dyn_info.func.f_impact_relabel = f_impact_relabel;

%% Linearized Impact Map
% J_impact_q = jacobian(x_impact,q);
% J_impact_dq = jacobian(x_impact,dq);
% delta_x_impact = J_impact_q*delta_q + J_impact_dq*delta_dq;
% delta_x_relabel = [Relabel*delta_x_impact(1:n_q); Relabel*delta_x_impact(n_q+1:end)];
% f_impact_relabel_linear = Function('f_impact_relabel_linear',{q,dq,delta_q,delta_dq},{delta_x_relabel});
% dyn_info.func.f_impact_relabel_linear = f_impact_relabel_linear;

De = [D, -Jc'; Jc, zeros(n_w,n_w)];
Ce = [C; jacobian(Jc*dq,q)];
Ge = [G; zeros(n_w,1)];
Be = [B; zeros(n_w,n_u)];
dq_plus = impact_map(1:n_q);
w_impulse = impact_map(n_q+1:end);

linear_impact_map = De\(jacobian([D*dq; zeros(n_w,1)] - De*[dq_plus; w_impulse],q)*delta_q + ...
    [D; zeros(n_w,n_q)]*delta_dq);
delta_x_impact = [delta_q; linear_impact_map(1:n_q)];
delta_w_impulse = linear_impact_map(n_q+1:end);

delta_x_relabel = [Relabel*delta_x_impact(1:n_q); Relabel*delta_x_impact(n_q+1:end)];
f_impact_relabel_linear = Function('f_impact_relabel_linear',{q,dq,delta_q,delta_dq},{delta_x_relabel});
dyn_info.func.f_impact_relabel_linear = f_impact_relabel_linear;


%% Generate additional functions
f_D = Function('f_D',{q},{D});
f_G = Function('f_G',{q},{G});
f_B = Function('f_B',{},{B});
f_Jc = Function('f_Jc',{q},{Jc});
f_Jc_dot = Function('f_dJc',{q,dq},{Jc_dot});

%% Outputs
dyn_info.dim.n_q = n_q;
dyn_info.dim.n_x = n_x;
dyn_info.dim.n_u = n_u;
dyn_info.dim.n_w = n_w;
dyn_info.func.f_NL = f_nonlinear;
dyn_info.func.f_L = f_linear;
dyn_info.func.f_Ax = f_Ax;
dyn_info.func.f_Bu = f_Bu;
dyn_info.func.f_Bw = f_Bw;
dyn_info.func.f_Wx = f_Wx;
dyn_info.func.f_Wu = f_Wu;
dyn_info.func.D = f_D ;
dyn_info.func.G = f_G ;
dyn_info.func.B = f_B ;
dyn_info.func.Jc = f_Jc ;
dyn_info.func.Jc_dot = f_Jc_dot ;
dyn_info.func.wrench = f_lambda;
dyn_info.func.f_ddq = f_ddq;
dyn_info.func.f_contact = f_contact;

% kinematics outputs
dyn_info.func.f_pos_hip = f_pos_hip;
dyn_info.func.f_pos_COM = f_pos_COM;
dyn_info.func.f_pos_swing = f_pos_swing;
dyn_info.func.f_pos_stance = f_pos_stance;
dyn_info.func.f_J_hip = f_J_hip;
dyn_info.func.f_J_swing = f_J_swing;

end










