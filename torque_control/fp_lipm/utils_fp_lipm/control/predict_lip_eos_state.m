function [xlip_eos] = predict_lip_eos_state(p)
%% Extract
dt = p.dt;
m = p.m;
z_H = p.z_H;
x_init = p.x_init;
f_p_com = p.f_p_com;
f_v_com = p.f_v_com;
t_step_period = p.t_step_period;
s = p.s;
fd = p.fd;

%%
% Simplified state
pcom = f_p_com(x_init);
vcom = f_v_com(x_init);

xc = pcom(1);
xcdot = vcom(1);
Ly = m * z_H * xcdot;
xlip_init = [xc; 0; 0; Ly; 0];

t_remain = t_step_period * (1 - s);
int_cycles = uint8(t_remain / dt);

if int_cycles == 0
    xsol = xlip_init;
else
    for j = 1:int_cycles
        xsol{j} = full(fd(xlip_init,[0;0],z_H));
        xlip_init = xsol{end};
    end
end
xlip_eos = xsol{end};

% xsol = cell2mat(xsol)
% plot(xsol(1,:))