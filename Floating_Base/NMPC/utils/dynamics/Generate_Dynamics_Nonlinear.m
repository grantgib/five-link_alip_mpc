function [dyn_info] = Generate_Dynamics_Nonlinear()
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

%% ODE Formualation
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
Jc_dot = jacobian(Jc,q)*dq;
Jc_dot = reshape(Jc_dot,n_w,n_q);
ddq = D\(-C*dq -G + B*u + Jc'*w);
rhs = [dq; ddq]; % omit Coriolis for now
f_nonlinear = Function('f_nonlinear',{q,dq,u,w},{rhs});  % nonlinear mapping function f(x,u)

% Wrench as decision variable
lambda = -Jc*(D\Jc') \ (Jc_dot*dq + Jc*(D\(-C*dq -G + B*u)));
f_lambda = Function('f_lambda',{q,dq,u},{lambda});

% Descriptor System
E_nonlinear = 0;
H_nonlinear = 0;

%% Generate I/O Controller function
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
% damp = 0.9;
% Ts = 0.1;
damp = 0.9;
Ts = 0.1;
wn = 3.9/(Ts*damp);
Kp_save = wn^2;
Kd_save = 2*damp*wn;
check_ZD = 0;    % if 0 then use Kp_save and Kd_save as gains


% Virtual constraints
y_actual = [q1R; q2R ; q1L ; q2L];
dy_actual = [dq1R; dq2R; dq1L; dq2L];
y_des = [q1R_ref; q2R_ref; q1L_ref; q2L_ref];
dy_des = [dq1R_ref; dq2R_ref; dq1L_ref; dq2L_ref];
ddy_des = [ddq1R_ref; ddq2R_ref; ddq1L_ref; ddq2L_ref];
h = y_actual - y_des;
dh = dy_actual - dy_des;
n_h = size(h,1);
Jh = jacobian(h,q);
Jh_dot = jacobian(Jh,q)*dq;
Jh_dot = reshape(Jh_dot,n_h,n_q);

% I/O control law (time-based)
% Derived From:
%       D*ddq + C*dq + G = B*u + J'*w   (Euler-Lagrange)
%       Jc*ddq + dJc*dq = 0             (Foot contact accleration is zero)
v = - Kd*dh - Kp*h;
Xinv = eye(size(Jc,1))/((Jc/D)*Jc');
F = Jc'*(Xinv*(Jc/D)*(C*dq+G)-Jc_dot*dq); % ...G - Jc_dot*dq but Jc_dot = 0
H = (eye(n_q) - Jc'*Xinv*(Jc/D))*B;
Aleft = ((Jh/D)*H);
Bright = -(Jh/D)*(-C*dq-G + F) - Jh_dot*dq + ddy_des + v;
u_IO = Aleft\Bright;
u_IO_time = Function('u_IO',{q,dq,y_des,dy_des,ddy_des,Kp,Kd},{u_IO});

% I/O control law (time-based) QP
% Derived From:
%       D*ddq + C*dq + G = B*u + J'*w   (Euler-Lagrange)
%       Jc*ddq + dJc*dq = 0             (Foot contact accleration is zero)
% [J*D^{-1}*B   J*D^{-1}*J' ] * [ u ] = [            J*D^{-1}*(C*dq + G)             ]% 
% [Jh*D^{-1}*B  Jh*D^{-1}*J'] * [ w ] = [Jh*D^{-1}*(C*dq + G) - dJh*dq + ddy_des - v ]% 
% v = - Kd*dh - Kp*h;
% Aleft = [(Jc/D)*B,(Jc/D)*Jc';
%          (Jh/D)*B,(Jh/D)*Jc'];
% Bright = [(Jc/D)*(C*dq + G);
%           (Jh/D)*(C*dq + G) -Jh_dot*dq + ddy_des + v];    % Jh constant --> Jh_dot = 0
% u_lambda = Aleft \ Bright;
% u_IO = u_lambda(1:n_h);
% w_IO = u_lambda(end-1:end);
% u_IO_time = Function('u_IO',{q,dq,y_des,dy_des,ddy_des,Kp,Kd},{u_IO});
% w_IO_time = Function('w_IO_time',{q,dq,y_des,dy_des,ddy_des,Kp,Kd},{w_IO});

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
f_v = Function('f_v',{q,dq,y_des,dy_des,Kp,Kd},{v});
f_h = Function('f_h',{q,y_des},{h});
f_dh = Function('f_dh',{dq,dy_des},{dh});

%% Outputs
dyn_info.dim.n_q = n_q;
dyn_info.dim.n_x = n_x;
dyn_info.dim.n_u = n_u;
dyn_info.dim.n_w = n_w;
dyn_info.dim.n_y = 2;   % swing foot position (x,z)
dyn_info.func.f_NL = f_nonlinear;
dyn_info.func.E_NL = E_nonlinear;
dyn_info.func.H_NL = H_nonlinear;
dyn_info.func.D = f_D ;
dyn_info.func.G = f_G ;
dyn_info.func.B = f_B ;
dyn_info.func.Jc = f_Jc ;
dyn_info.func.Jc_dot = f_Jc_dot ;
dyn_info.func.wrench = f_lambda;
dyn_info.ctrl.Kp = Kp_save;
dyn_info.ctrl.Kd = Kd_save;
dyn_info.ctrl.check_ZD = check_ZD;
dyn_info.descriptor = 0;

% I/O
dyn_info.func.u_IO_time = u_IO_time;
% dyn_info.func.w_IO_time = w_IO_time;
dyn_info.IO_type = "time";
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










