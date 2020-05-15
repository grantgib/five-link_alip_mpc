function [x_next, t_next] = Forward_Euler_Integrate(params)
% Extract inputs
f = params.f;
t_init = params.t_init;
q_init = params.q_init;
dq_init = params.dq_init;
x_init = params.x_init;
DT = params.DT;
u = params.u;
w = params.w;
w_ext = params.w_ext;

% Compute integration
if w_ext
    f_value = full(f(q_init,dq_init,u,w,[w_ext;0]));
else
    f_value = full(f(q_init,dq_init,u,w));
end
x_next = x_init + DT*f_value;
t_next = t_init + DT;

end