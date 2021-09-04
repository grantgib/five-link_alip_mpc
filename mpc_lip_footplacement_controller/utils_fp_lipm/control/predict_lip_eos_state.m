function [xlip_eos,xlip_eos_est] = predict_lip_eos_state(p)
%% Extract
dt_opt = p.dt_opt;
intg_opt = p.intg_opt;
g = p.g;
m = p.m;
kx = p.kx;
z_H = p.z_H;
Lz_est = p.Lz_est;
x_init = p.x_init;
f_p_st = p.f_p_st;
f_p_com_stance = p.f_p_com_stance;
f_v_com_stance = p.f_v_com_stance;
% f_L_stance = p.f_L_stance;
t_step_period = p.t_step_period;
s = p.s;
fd_lip = p.fd_lip;

%%
% Simplified state
p_st = full(f_p_st(x_init));
p_st_3d = [p_st(1); 0; p_st(2)];
pcom = full(f_p_com_stance(x_init));
vcom = full(f_v_com_stance(x_init));
% L_stance = full(f_L_stance(x_init));
L_stance = L_world_reference_point_mex(x_init(1:7), x_init(8:end),p_st_3d);


xc = pcom(1);
% xcdot = vcom(1);
% Ly = m * z_H * xcdot
Ly = L_stance(2);
xlip_init = [xc; 0; 0; Ly];

t_remain = t_step_period * (1 - s);
int_cycles = uint8(t_remain / dt_opt);

xsol = cell(int_cycles,1);
if int_cycles == 0
    xsol{1} = xlip_init;
else
    xsol{1} = xlip_init;
    for j = 1:int_cycles-1
        xsol{j+1} = full(fd_lip(xsol{j},[kx;0],z_H,Lz_est));
    end
end
xlip_eos = xsol{end,1};

if t_remain > 0
    A = [...
        0,      0,      0,          1/(m*z_H);
        0,      0,      -1/(m*z_H), 0;
        0,      -m*g,   0,          0;
        m*g,    0,      0,          0];
    xlip_eos_est = full(expm(A*t_remain) * xlip_init);
else
    xlip_eos_est = xlip_init;
end
% xlip_eos(1) = xlip_eos_est(1);
% xlip_eos(4) = xlip_eos_est(2);

% assert(xlip_eos(1) - xlip_eos_est(1) < 1e-8,"Wrong lip estimate at end of current step");
% assert(xlip_eos(4) - xlip_eos_est(2) < 1e-8,"Wrong lip estimate at end of current step");

