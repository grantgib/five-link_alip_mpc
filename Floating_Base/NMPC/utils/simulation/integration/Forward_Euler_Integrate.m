function [x_next, t_next] = Forward_Euler_Integrate(f,x_init,t_init,params)
% Extract inputs
q_init = params.q_init;
dq_init = params.dq_init;
DT = params.DT;
u = params.u;
w = params.w;

% Compute integration
f_value = full(f(q_init,dq_init,u,w));
x_next = x_init + DT*f_value;
t_next = t_init + DT;

end