function [xlip_eos,xlip_eos_est] = predict_lip_eos_state(p)
%% Extract
dt_opt = p.dt_opt;
g = p.g;
m = p.m;
kx = p.kx;
z_H = p.z_H;
x_init = p.x_init;
f_p_com_stance = p.f_p_com_stance;
f_v_com_stance = p.f_v_com_stance;
% f_L_stance = p.f_L_stance;
t_step_period = p.t_step_period;
s = p.s;
fd = p.f_lip_rk4;

%%
% Simplified state
pcom = full(f_p_com_stance(x_init));
vcom = full(f_v_com_stance(x_init));
% L_stance = full(f_L_stance(x_init));
L_stance = L_total_right_func_mex(x_init);


xc = pcom(1);
% xcdot = vcom(1);
% Ly = m * z_H * xcdot
Ly = L_stance;
xlip_init = [xc; 0; 0; Ly; 0];

t_remain = t_step_period * (1 - s);
int_cycles = uint8(t_remain / dt_opt);

if int_cycles == 0
    xsol{1} = xlip_init;
else
    for j = 1:int_cycles
        xsol{j} = full(fd(xlip_init,[kx;0],z_H));
        xlip_init = xsol{end};
    end
end
xlip_eos = xsol{end};

if t_remain > 0
    A = [0, 1/(m*z_H); m*g, 0];
    xlip_eos_est = full(expm(A*t_remain) * [xc; Ly]);
else
    xlip_eos_est = [xc; Ly];
end
% xlip_eos(1) = xlip_eos_est(1);
% xlip_eos(4) = xlip_eos_est(2);

% assert(xlip_eos(1) - xlip_eos_est(1) < 1e-8,"Wrong lip estimate at end of current step");
% assert(xlip_eos(4) - xlip_eos_est(2) < 1e-8,"Wrong lip estimate at end of current step");

