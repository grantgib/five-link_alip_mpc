function [dyn_info] = Generate_Dynamics_Kinematics()
import casadi.*
dyn_info = struct;
%% CasADi symbolics
% Symbolic state variables 
% [xbar,zbar,roty,q1R,q2R,q1L,q2L]
%    * y axis points into the page -> positive theta of roty is ccw

% Dimensions
n_q = 7;
n_x = 2*n_q;
n_u = 4;
n_w = 2;
n_h = 4;

% Symbolics
q = SX.sym('q',n_q,1);          % Generalized Coord.
dq = SX.sym('dq',n_q,1);
x = [q; dq];                    % Symbolic States
u = SX.sym('u',n_u,1);          % Symbolic Controls
w = SX.sym('w',n_w,1);          % Symbolic Contact Wrench
w_ext = SX.sym('w_ext',n_w,1);  % Additional External Contact Wrench

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

% stance foot position
pos_stance = Right_Stance_Foot_Position(q);
J_stance = jacobian(pos_stance,q);
J_stance_dot = jacobian(J_stance*dq,q);     % move dq term inside of the jacobian to avoid tensor and dq not function of q

% Functions
f_pos_hip = Function('f_pos_hip',{q},{pos_hip});
f_pos_COM = Function('f_pos_COM',{q},{pos_COM});
f_pos_swing = Function('f_pos_swing',{q},{pos_swing});
f_pos_stance = Function('f_pos_stance',{q},{pos_stance});
f_J_hip = Function('f_J_hip',{q},{J_hip});
f_J_COM = Function('f_J_COM',{q},{J_COM});
f_J_swing = Function('f_J_swing',{q},{J_swing});
f_J_stance = Function('f_J_stance',{q},{J_stance});
f_J_stance_dot = Function('f_dJc',{q,dq},{J_stance_dot});

%% Euler-Lagrange ODE
% Dynamics (Mmat*ddq + G = B*u + Jc'*w)~ ignoring coriolis for now
D = Mass_Inertia_Matrix(q);     % 7x7
C = zeros(n_q,n_q);             % omit Coriolis for now
G = -GravityVector(q);          % 7x1  %FROST gravity vector is -G
B = 50*[zeros(3,4); eye(4)];                % Multiply by 50 b/c of gear reduction
ddq = D\(-C*dq -G + B*u + J_stance'*w);
rhs = [dq; ddq]; 

% Wrench as decision variable
w_explicit = ((J_stance/D)*J_stance') \ ((J_stance/D)*(C*dq + G) - (J_stance/D)*B*u -J_stance_dot*dq);

% External Force @ Hip Functions
ddq_ext = D\(-C*dq -G + B*u + J_stance'*w + J_hip'*w_ext);
rhs_ext = [dq; ddq_ext];

% Impact Map
dq_plus = [D -J_swing'; J_swing zeros(2,2)]\[D*dq;zeros(2,1)];
x_impact = [q; dq_plus(1:n_q)];
Relabel = [eye(3), zeros(3,2), zeros(3,2);
           zeros(2,3), zeros(2,2), eye(2);
           zeros(2,3), eye(2), zeros(2,2)];
x_relabel = [Relabel*x_impact(1:n_q); Relabel*x_impact(n_q+1:end)];

%% Generate additional functions
f_D = Function('f_D',{q},{D});
f_C = Function('f_C',{q},{C});
f_G = Function('f_G',{q},{G});
f_B = Function('f_B',{},{B});
f_ddq = Function('f_ddq',{x,u,w},{ddq});
f_nonlinear = Function('f_nonlinear',{x,u,w},{rhs});  % nonlinear mapping function f(x,u)
f_w = Function('f_w',{x,u},{w_explicit});
f_nonlinear_ext = Function('f_nonlinear_ext',{x,u,w,w_ext},{rhs_ext});
f_impact_relabel = Function('f_impact_relabel',{x},{x_relabel});

%% Outputs
% Dimensions
dyn_info.dim.n_q = n_q;
dyn_info.dim.n_x = n_x;
dyn_info.dim.n_u = n_u;
dyn_info.dim.n_w = n_w;
dyn_info.dim.n_y_sw = 2;   % swing foot position (x,z)
dyn_info.dim.n_h = n_h;

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

% Symbolics
dyn_info.sym.q = q;
dyn_info.sym.dq = dq;
dyn_info.sym.x = x;

% Dynamics
dyn_info.func.f_NL = f_nonlinear;
dyn_info.func.D = f_D;
dyn_info.func.C = f_C;
dyn_info.func.G = f_G;
dyn_info.func.B = f_B;
dyn_info.func.f_w = f_w;
dyn_info.func.f_ddq = f_ddq;
dyn_info.func.f_NL_ext = f_nonlinear_ext;
dyn_info.func.f_impact_relabel = f_impact_relabel;

dyn_info.descriptor = 0;


end










