function [dyn_info] = Generate_Dynamics_Nonlinear(ctrl_info)
import casadi.*
dyn_info = struct;
%% CasADi symbolics
% Symbolic state variables [x,z,roty,q1R,q2R,q1L,q2L]. y axis points into
% the page so positive theta of roty is ccw
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

% Symbolic Control variables
u_q1R = SX.sym('u_q1R');
u_q2R = SX.sym('u_q2R');
u_q1L = SX.sym('u_q1L');
u_q2L = SX.sym('u_q2L');
u = [u_q1R; u_q2R; u_q1L; u_q2L];
n_u = length(u);

% Symbolic Wrench variables
f_x = SX.sym('f_x');
f_z = SX.sym('f_z');
w = [f_x; f_z];
n_w = length(w);
w_ext = SX.sym('w_ext',n_w,1);

%% Euler-Lagrange ODE 
% old matrices
D_old = Mmat_notorso(xbar,zbar,rotY,q1R,q2R,q1L,q2L); % 7x7
G_old = -GravityVector_notorso(xbar,zbar,rotY,q1R,q2R,q1L,q2L); %7x1  %FROST gravity vector is -G
Jc_old = Jacobian_notorso(xbar,zbar,rotY,q1R,q2R,q1L,q2L);
Jc_dot_old = JacobianDot_notorso(xbar,zbar,rotY,q1R,q2R,q1L,q2L,dxbar,dzbar,drotY,dq1R,dq2R,dq1L,dq2L);

% Dynamics (Mmat*ddq + G = B*u + Jc'*w)~ ignoring coriolis for now
D = Mass_Inertia_Matrix(xbar,zbar,rotY,q1R,q2R,q1L,q2L); % 7x7
G = -GravityVector(xbar,zbar,rotY,q1R,q2R,q1L,q2L); %7x1  %FROST gravity vector is -G
C = zeros(n_q,n_q);
B = 50*[zeros(3,4); eye(4)];    % Multiply by 50 b/c of gear reduction
pos_stance_foot = Right_Stance_Foot_Position(xbar,zbar,rotY,q1R,q2R,q1L,q2L)';
pos_stance_foot = pos_stance_foot([1,3],:);
Jc = jacobian(pos_stance_foot,q);
Jc_dot = jacobian(Jc*dq,q);     % move dq term inside of the jacobian to avoid tensor and dq not function of q
ddq = D\(-C*dq -G + B*u + Jc'*w);
rhs = [dq; ddq]; % omit Coriolis for now
f_ddq = Function('f_ddq',{q,dq,u,w},{ddq});
f_nonlinear = Function('f_nonlinear',{q,dq,u,w},{rhs});  % nonlinear mapping function f(x,u)

% Wrench as decision variable
lambda = ((Jc/D)*Jc') \ ((Jc/D)*(C*dq + G) - (Jc/D)*B*u -Jc_dot*dq);
f_lambda = Function('f_lambda',{q,dq,u},{lambda});

%% External Force @ Hip Functions
J_hip = Hip_Jacobian(xbar,zbar,rotY,q1R,q2R,q1L,q2L);
f_J_hip = Function('f_J_hip',{q},{J_hip});
ddq_ext = D\(-C*dq -G + B*u + Jc'*w + J_hip'*w_ext);
rhs_ext = [dq; ddq_ext];
f_nonlinear_ext = Function('f_nonlinear_ext',{q,dq,u,w,w_ext},{rhs_ext});
dyn_info.func.f_NL_ext = f_nonlinear_ext;


%% Generate I/O Controller Parameters
% Reference symbolics
q1R_ref = SX.sym('q1R_ref');
q2R_ref = SX.sym('q2R_ref');
q1L_ref = SX.sym('q1L_ref');
q2L_ref = SX.sym('q2L_ref');
dq1R_ref = SX.sym('dq1R_ref');
dq2R_ref = SX.sym('dq2R_ref');
dq1L_ref = SX.sym('dq1L_ref');
dq2L_ref = SX.sym('dq2L_ref');
ddq1R_ref = SX.sym('ddq1R_ref');
ddq2R_ref = SX.sym('ddq2R_ref');
ddq1L_ref = SX.sym('ddq1L_ref');
ddq2L_ref = SX.sym('ddq2L_ref');
Kp = SX.sym('Kp');
Kd = SX.sym('Kd');

% PD gains
% damp = 0.8;
% Ts = 0.3;
damp = 0.9;
Ts = 0.15;
wn = 3.9/(Ts*damp);
Kp_save = wn^2;
Kd_save = 2*damp*wn;
% Kp_save = 350;
% Kd_save = 26;
check_ZD = 0;    % if 0 then use Kp_save and Kd_save as gains

% Virtual constraints
h_q = [q1R; q2R ; q1L ; q2L];
h_d = [q1R_ref; q2R_ref; q1L_ref; q2L_ref];
dh_d = [dq1R_ref; dq2R_ref; dq1L_ref; dq2L_ref];
ddh_d = [ddq1R_ref; ddq2R_ref; ddq1L_ref; ddq2L_ref];
Jh = jacobian(h_q,q);
Jh_dot = jacobian(Jh*dq,q);
y = h_q - h_d;
dy =  jacobian(h_q,q)*dq - dh_d;
n_y = length(y);

%% I/O control law 
JcD = (Jc/D)*Jc';
Hu = (eye(n_q) - Jc'*(JcD\(Jc/D)))*B;
Hlambda = Jc'*(JcD\((Jc/D)*(C*dq+G)-Jc_dot*dq));
v = -Kd*dy - Kp*y;
u_IO_sym = ((Jh/D)*Hu) \ (-(Jh/D)*(-C*dq-G+Hlambda)-Jh_dot*dq+ddh_d+v);
u_IO = Function('u_IO',{q,dq,h_d,dh_d,ddh_d,Kp,Kd},{u_IO_sym});

%% I/O-NMPC control law (NMPC desired zero dynamics)
v_NMPC = SX.sym('v_NMPC',n_y,1);

%     u_IO_NMPC_sym = ((Jh/D)*Hu) \ (-(Jh/D)*(-C*dq-G+Hlambda)-Jh_dot*dq+ddh_d+v_NMPC);
%     u_IO_NMPC = Function('u_IO_NMPC',{q,dq,h_d,dh_d,ddh_d,Kp,Kd,v_NMPC},{u_IO_NMPC_sym});

    u_IO_NMPC_sym = ((Jh/D)*Hu) \ (-(Jh/D)*(-C*dq-G+Hlambda)- Jh_dot*dq + ddh_d + v + v_NMPC); % remove ddh_d term for simplicity
    u_IO_NMPC = Function('u_IO_NMPC',{q,dq,h_d,dh_d,ddh_d,Kp,Kd,v_NMPC},{u_IO_NMPC_sym});

%% Constraint Functions
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

% Output to dyn_info
dyn_info.func.f_pos_hip = f_pos_hip;
dyn_info.func.f_pos_COM = f_pos_COM;
dyn_info.func.f_pos_swing = f_pos_swing;
dyn_info.func.f_pos_stance = f_pos_stance;
dyn_info.func.f_J_hip = f_J_hip;
dyn_info.func.f_J_swing = f_J_swing;

%% Generate additional functions
f_D = Function('f_D',{q},{D});
f_G = Function('f_G',{q},{G});
f_B = Function('f_B',{},{B});
f_Jc = Function('f_Jc',{q},{Jc});
f_Jc_dot = Function('f_dJc',{q,dq},{Jc_dot});

% old
f_D_old = Function('f_D_old',{q},{D_old});
f_G_old = Function('f_G_old',{q},{G_old});
f_Jc_old = Function('f_Jc_old',{q},{Jc_old});
f_Jc_dot_old = Function('f_Jc_dot_old',{q,dq},{Jc_dot_old});

% for I/O
f_v = Function('f_v',{q,dq,h_d,dh_d,Kp,Kd},{v});
f_h = Function('f_h',{q,h_d},{y});
f_dh = Function('f_dh',{dq,dh_d},{dy});

%% Outputs
dyn_info.dim.n_q = n_q;
dyn_info.dim.n_x = n_x;
dyn_info.dim.n_u = n_u;
dyn_info.dim.n_w = n_w;
dyn_info.dim.n_y_sw = 2;   % swing foot position (x,z)
dyn_info.dim.n_y = n_y;
dyn_info.func.f_NL = f_nonlinear;
dyn_info.func.D = f_D ;
dyn_info.func.G = f_G ;
dyn_info.func.B = f_B ;
dyn_info.func.Jc = f_Jc ;
dyn_info.func.Jc_dot = f_Jc_dot ;
dyn_info.func.wrench = f_lambda;
dyn_info.func.f_ddq = f_ddq;
dyn_info.ctrl.Kp = Kp_save;
dyn_info.ctrl.Kd = Kd_save;
dyn_info.ctrl.check_ZD = check_ZD;
dyn_info.descriptor = 0;

% I/O
dyn_info.func.u_IO = u_IO;
dyn_info.func.u_IO_NMPC = u_IO_NMPC;
dyn_info.func.v = f_v;
dyn_info.func.h = f_h;
dyn_info.func.dh = f_dh;

% Test
dyn_info.test.f_NL = rhs;

%% Test functions
qrand = rand(n_q,1);
dqrand = rand(n_q,1);
% test D
Drand = f_D(qrand);
Doldrand = f_D_old(qrand);
err_D = Drand - Doldrand;

% test G
Grand = f_G(qrand);
Goldrand = f_G_old(qrand);
err_G = Grand - Goldrand;

% test Jc
Jc_test = f_Jc(qrand);
Jc_old_test = f_Jc_old(qrand);
err_Jc = Jc_old_test - Jc_test;

% test Jc_dot
Jc_dot_test = f_Jc_dot(qrand,dqrand);
Jc_dot_old_test = f_Jc_dot_old(qrand,dqrand);
err_Jc_dot = Jc_dot_old_test - Jc_dot_test;

end










