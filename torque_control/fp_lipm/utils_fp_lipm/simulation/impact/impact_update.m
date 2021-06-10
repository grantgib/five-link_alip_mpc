function [t_next, x_next, t_minus] = impact_update(impact_info)
%% Extract inputs
% impact_info
t_init = impact_info.t_init;
x_init = impact_info.x_init;
u = impact_info.u;
dt = impact_info.dt;
f_rk4 = impact_info.f_rk4;
f_p_sw_z = impact_info.f_p_sw_z;
f_impact = impact_info.f_impact;
f_relabel = impact_info.f_relabel;
step_height = impact_info.step_height;

%% Root finding impact time
swingheight_error = @(delta_time) full(f_p_sw_z(f_rk4(x_init,u,delta_time))) - step_height;
dt_impact = fzero(swingheight_error, dt/2);     % Matlab root finding funcion
if dt_impact > dt
    disp("wrong impact time");
    pause
end

%% Forward Integrate until update
t_minus = t_init + dt_impact;
x_minus = f_rk4(x_init,u,dt_impact);
% Check impact
height_impact = full(f_p_sw_z(x_minus));
disp("-> Swing foot impacts step (" + height_impact + " m) at " + t_minus + " sec");

%% Impact Map
x_impact = f_impact(x_minus);

%% Relabel Map
x_plus = f_relabel(x_impact);

%% Forward Integrate until t0 + DT has been reached
t_next = t_init + dt;
x_next = full(f_rk4(x_plus,u,dt-dt_impact));

end