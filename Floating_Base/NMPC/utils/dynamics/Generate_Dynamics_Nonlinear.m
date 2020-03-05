function [dyn_info] = Generate_Dynamics_Nonlinear()
import casadi.*
%% CasADi symbolic setup
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

%% ODE Formualation
% Dynamics (Mmat*ddq + G = B*u)~ ignoring coriolis for now
D = Mmat_notorso(x,z,rotY,q1R,q2R,q1L,q2L); % 7x7
G = -GravityVector_notorso(x,z,rotY,q1R,q2R,q1L,q2L); %7x1
B = 50*[zeros(3,4); eye(4)];    % Multiply by 50 b/c of gear reduction
Jac = Jacobian_notorso(x,z,rotY,q1R,q2R,q1L,q2L);
dJac = JacobianDot_notorso(x,z,rotY,q1R,q2R,q1L,q2L,dx,dz,drotY,dq1R,dq2R,dq1L,dq2L);

lambda = -Jac*(D\Jac') \ (dJac*dq + Jac*(D\(-G + B*u)));
rhs = [dq; D\(-G + B*u + Jac'*lambda)]; % system r.h.s

f_nonlinear = Function('f',{x,u},{rhs});  % nonlinear mapping function f(x,u)

% Descriptor System
E_nonlinear = 0;
H_nonlinear = 0;

%% Return
dyn_info = struct;
dyn_info.dim.n_q = n_q;
dyn_info.dim.n_x = n_x;
dyn_info.dim.n_u = n_u;
dyn_info.func.f_NL = f_nonlinear;
dyn_info.func.E_NL = E_nonlinear;
dyn_info.func.H_NL = H_nonlinear;
dyn_info.descriptor = 0;

end










