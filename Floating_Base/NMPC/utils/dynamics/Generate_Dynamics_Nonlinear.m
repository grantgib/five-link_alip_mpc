function [dyn_info] = Generate_Dynamics_Nonlinear()
import casadi.*
dyn_info = struct;
%% CasADi symbolics
% Symbolic state variables [x,z,roty,q1R,q2R,q1L,q2L]. y axis points into
% the page so positive theta of roty is ccw
x = SX.sym('x');
z = SX.sym('z');
rotY = SX.sym('rotY');
q1R = SX.sym('q1R');
q2R = SX.sym('q2R');
q1L = SX.sym('q1L');
q2L = SX.sym('q2L');
dx = SX.sym('dx');
dz = SX.sym('dz');
drotY = SX.sym('drotY');
dq1R = SX.sym('dq1R');
dq2R = SX.sym('dq2R');
dq1L = SX.sym('dq1L');
dq2L = SX.sym('dq2L');

q = [x; z; rotY; q1R; q2R; q1L; q2L];
dq = [dx; dz; drotY; dq1R; dq2R; dq1L; dq2L];
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
% Dynamics (Mmat*ddq + G = B*u + Jc'*w)~ ignoring coriolis for now
D = Mmat_notorso(x,z,rotY,q1R,q2R,q1L,q2L); % 7x7
G = -GravityVector_notorso(x,z,rotY,q1R,q2R,q1L,q2L); %7x1  %FROST gravity vector is -G
% C = Coriolis(D,q,dq);
B = 50*[zeros(3,4); eye(4)];    % Multiply by 50 b/c of gear reduction
Jc = Jacobian_notorso(x,z,rotY,q1R,q2R,q1L,q2L);
dJc = JacobianDot_notorso(x,z,rotY,q1R,q2R,q1L,q2L,dx,dz,drotY,dq1R,dq2R,dq1L,dq2L);
rhs = [dq; D\(-G + B*u + Jc'*w)]; % omit Coriolis for now
f_nonlinear = Function('f_nonlinear',{q,dq,u,w},{rhs});  % nonlinear mapping function f(x,u)

% Wrench as decision variable
lambda = -Jc*(D\Jc') \ (dJc*dq + Jc*(D\(-G + B*u)));
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
Kp = SX.sym('Kp');
Kd = SX.sym('Kd');

% Control-affine form (pinned)
f_drift = [dq; -D\G];
% g_map = [zeros(n_q,n_u), zeros(n_q,n_w); D\B, D\Jc'];
% rhs_check = f_drift + g_map*[u;w];
g_map = [zeros(n_q,n_u); D\B];
rhs_check = f_drift + g_map*u;
% f_NL_check = Function('f_NL_check',{q,dq,u,w},{rhs_check});

% PD gains
damp = 1.0;
Ts = 0.1;
wn = 3.9/(Ts*damp);
Kp_save = wn^2;
Kd_save = 2*damp*wn;

% Virtual constraints
y_actual = [q1R; q2R ; q1L ; q2L];
dy_actual = [dq1R; dq2R; dq1L; dq2L];
y_des = [q1R_ref; q2R_ref; q1L_ref; q2L_ref];
dy_des = [dq1R_ref; dq2R_ref; dq1L_ref; dq2L_ref];
h = y_actual - y_des;
dh = dy_actual - dy_des;

% lie derivatives
% LgLfh = Lie_Derivative(Lie_Derivative(h,f_drift,x),g_map,x);
% L2fh = Lie_Derivative(Lie_Derivative(h,f_drift,x),f_drift,x);
% LgLfh = jacobian(jacobian(h,x)*f_drift,x)*g_map;
% L2fh = jacobian(jacobian(h,x)*f_drift,x)*f_drift;
LgLfh = (jacobian(h,q)/D)*B;
L2fh = [jacobian(jacobian(h,q)*dq,q), jacobian(h,q)]*[dq; -D\G];

v = - Kd*dh - Kp*h;

% I/O control law
%   u = (LgLfh)^{-1} * (v - L2fh);    v = - Kd*dy - Kp*y;   s^2 + (2*xi*wn)*s + (wn^2) = 0
u_IO_sym = LgLfh\(v - L2fh);
u_IO = Function('u_IO',{q,dq,y_des,dy_des,Kp,Kd},{u_IO_sym});

%% Generate additional functions
f_D = Function('f_D',{q},{D});
f_G = Function('f_G',{q},{G});
f_B = Function('f_B',{},{B});
f_Jc = Function('f_Jc',{q},{Jc});
f_dJc = Function('f_dJc',{q,dq},{dJc});

% for I/O
f_L2fh = Function('f_L2fh',{q,dq,y_des},{L2fh});
f_LgLfh = Function('f_LgLfh',{q,dq,y_des},{LgLfh});
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
dyn_info.func.dJc = f_dJc ;
dyn_info.func.wrench = f_lambda;
dyn_info.ctrl.Kp = Kp_save;
dyn_info.ctrl.Kd = Kd_save;
dyn_info.descriptor = 0;

% I/O
dyn_info.func.u_IO = u_IO;
dyn_info.func.L2fh = f_L2fh;
dyn_info.func.LgLfh = f_LgLfh;
dyn_info.func.v = f_v;
dyn_info.func.h = f_h;
dyn_info.func.dh = f_dh;
end










