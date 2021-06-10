function [t_next,delta_x_next] = Forward_Integrate_Linear(params)

%% Extract inputs
f_linear = params.f;
t_init = params.t_init;

delta_q_init = params.delta_q_init;
delta_dq_init = params.delta_dq_init;
delta_x_init = params.delta_x_init;
delta_u = params.delta_u;
delta_w = params.delta_w;

q_init = params.q_init;
dq_init = params.dq_init;
x_init = params.x_init;
u = params.u;
w = params.w;

DT = params.DT;

w_ext = params.w_ext;
n_x = length(x_init);
n_q = n_x / 2;

%% Forward Integration
if params.type == "Euler"
    %% Forward Euler Integration
    delta_xdot = full(f_linear(q_init,dq_init,u,w,delta_q_init,delta_dq_init,delta_u,delta_w));
    delta_x_next = delta_x_init + DT*delta_xdot;
    t_next = t_init + DT;
else
    disp("Wrong Integration Type")
end

end