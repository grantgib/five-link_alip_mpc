function [f_nonlinear_partial,ddq_func,J_c,dJ_c,E_nonlinear,H_nonlinear,n_q,n_x,n_u] = Generate_Dynamics_Nonlinear_FreeWrench()
import casadi.*
%% CasADi symbolic setup
% Symbolic state variables [x,z,roty,q1R,q2R,q1L,q2L,fx,fz,my]. y axis points into
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

% Symbolic wrench
fx = SX.sym('fx'); % linear force x
fz = SX.sym('fz'); % linear force z
my = SX.sym('my'); % moment y
w = [fx; fz; my];

% Generalized coordinates
q = [x; z; rotY; q1R; q2R; q1L; q2L];
dq = [dx; dz; drotY; dq1R; dq2R; dq1L; dq2L];
x = [q; dq; w];
n_q = length(q);
n_x = length(x);

% Symbolic Control variables
u_q1R = SX.sym('u_q1R');
u_q2R = SX.sym('u_q2R');
u_q1L = SX.sym('u_q1L');
u_q2L = SX.sym('u_q2L');
u = [u_q1R; u_q2R; u_q1L; u_q2L];
n_u = length(u);

%% ODE Formualation
% Dynamics (Mmat*ddq + G = B*u)~ ignoring coriolis for now
D = Mmat_notorso(x,z,rotY,q1R,q2R,q1L,q2L); % 7x7
G = GravityVector_notorso(x,z,rotY,q1R,q2R,q1L,q2L); %7x1
B = 50*[zeros(3,4); eye(4)];    % Multiply by 50 b/c of gear reduction
J_c = Jacobian_notorso(x,z,rotY,q1R,q2R,q1L,q2L);  % contact jacobian
dJ_c = JacobianDot_notorso(x,z,rotY,q1R,q2R,q1L,q2L,dx,dz,drotY,dq1R,dq2R,dq1L,dq2L);

ddq_sym = D\(-G + B*u + J_c'*w);
rhs_par = [dq; ddq_sym]; % system r.h.s
f_nonlinear_partial = Function('f',{x,u},{rhs_par});  % nonlinear mapping function f(x,u)
ddq_func = Function('ddq_func',{x,u},{ddq_sym});
% Descriptor System
E_nonlinear = 0;
H_nonlinear = 0;


end










