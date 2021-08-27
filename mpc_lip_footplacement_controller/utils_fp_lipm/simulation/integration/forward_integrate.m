function [x_next,t_next] = forward_integrate(int_info)
import casadi.*
%% Extract inputs
type = int_info.int_type;
f_eul = int_info.f_eul;
f_rk4 = int_info.f_rk4;
dt_sim = int_info.dt_sim;
t_init = int_info.t_init;
x_init = int_info.x_init;
u = int_info.u;

%% Forward Integration
if type == "Euler"
    % Forward Euler Integration
    t_next = t_init + dt_sim;
    x_next = full(f_eul(x_init,u,dt_sim));
elseif type == "RK4"
    % RK4 Integration
    t_next = t_init + dt_sim;
    x_next = full(f_rk4(x_init,u,dt_sim));
end
end