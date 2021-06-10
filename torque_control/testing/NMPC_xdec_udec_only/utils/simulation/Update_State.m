function [t_next, x_next, u_next_guess] = Update_State(dyn_info,mpc_info,t_current,x_init,u_init)
import casadi.*
%% Extract inputs
% dyn_info
f_nonlinear = dyn_info.func.f_NL;
% mpc_info 
DT = mpc_info.DT;

%% Forward Euler
x_current = x_init;
u_current = u_init(:,1);
f_value = full(f_nonlinear(x_current,u_current));
x_next = x_current + (DT*f_value);
t_next = t_current + DT;
u_next_guess = [u_init(:,2:end), u_init(:,end)];


% ode45
% tspan = [t_current t_current+DT];
% z_init = [x_init; u_init(:,1)];
% ode = @(t,x) odefunc(t,x,u_init(:,1));
% [t,x] = ode45(@(t,x) odefunc(t,x,u_init(:,1)),tspan,x_init);


end

function dxdt = odefunc(t,x_init,u_init)
import casadi.*
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
u_q1R = SX.sym('u_q1R');
u_q2R = SX.sym('u_q2R');
u_q1L = SX.sym('u_q1L');
u_q2L = SX.sym('u_q2L');
u = [u_q1R; u_q2R; u_q1L; u_q2L];
n_u = length(u);
D = Mmat_notorso(x,z,rotY,q1R,q2R,q1L,q2L); % 7x7
G = -GravityVector_notorso(x,z,rotY,q1R,q2R,q1L,q2L); %7x1
B = 50*[zeros(3,4); eye(4)];    % Multiply by 50 b/c of gear reduction
Jc = Jacobian_notorso(x,z,rotY,q1R,q2R,q1L,q2L);
dJc = JacobianDot_notorso(x,z,rotY,q1R,q2R,q1L,q2L,dx,dz,drotY,dq1R,dq2R,dq1L,dq2L);
lambda = -Jc*(D\Jc') \ (dJc*dq + Jc*(D\(-G + B*u)));
rhs = [dq; D\(-G + B*u + Jc'*lambda)]; % system r.h.s
f_nonlinear = Function('f',{x,u},{rhs});  % nonlinear mapping function f(x,u)

dxdt = full(f_nonlinear(x_init,u_init));
end


