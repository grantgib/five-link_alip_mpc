function [sym_info] = formulate_vc_io_slope_corrected(sym_info)
import casadi.*
%% Extract Input
n_q = sym_info.dim.n_q;

q = sym_info.sym.q;
qdot = sym_info.sym.qdot;
x = sym_info.sym.x;
u = sym_info.sym.u;
w = sym_info.sym.w;
qddot = sym_info.sym.qddot;

D = sym_info.sym.D;
C = sym_info.sym.C;
G = sym_info.sym.G;
B = sym_info.sym.B;
J_stance = sym_info.sym.J_stance;
Jdot_stance = sym_info.sym.Jdot_stance;

f_pos_com_world = sym_info.func.f_pos_com_world;
f_pos_st = sym_info.func.f_pos_stance;
f_pos_sw = sym_info.func.f_pos_swing;

%% Symbolic Variables
% Timing Phase variable
s = SX.sym('s');
sdot = SX.sym('sdot');

t_now = SX.sym('t_now');
t_start = SX.sym('t_start');
t_period = SX.sym('t_end');
s_func = (t_now - t_start) / t_period;
sdot_func = 1/t_period;

%
kx = SX.sym('kx');

%% Intermediate Functions
pos_com_world = f_pos_com_world(x)';
pos_st_world = f_pos_st(x)';
pos_sw_world = f_pos_sw(x)';
pos_com_proj = [...
    pos_com_world(1);
    pos_st_world(2) + kx*(pos_com_world(1)-pos_st_world(1))];

pos_st_com = pos_com_world - pos_st_world;
pos_sw_com = pos_com_world - pos_sw_world;

pos_ground_com = pos_com_world - pos_com_proj;

%% Actual output

ha = [...
    q(3);
    pos_ground_com(2);
    pos_sw_com(1);
    pos_sw_world(2) - pos_st_world(2)];

J_ha = jacobian(ha,q);
ha_dot = J_ha*qdot;
J_ha_dot = jacobian(J_ha*qdot,q);
ha_ddot = J_ha*qddot + J_ha_dot*qdot;

%% Desired output    
torso_pitch_des = SX.sym('torso_pitch_des');
p_ground_com_des = SX.sym('p_ground_com_des');
p_sw_com_init = SX.sym('px_sw_com_init',2,1);
p_sw_com_des = SX.sym('px_sw_com_des',2,1);
s_cl = SX.sym('s_cl');  % time during step phase to apply clearance
z_cl = SX.sym('z_cl');  % clearance above final height
p_st_to_sw_z_init = SX.sym('p_st_to_sw_z_init',1,1);    % initial world location of x swing foot
ufp_sol_x = SX.sym('ufp_sol_x',1,1);        % absolute distance from stance to next stance solution

a = z_cl/(s_cl - 1) - (z_cl - p_st_to_sw_z_init + kx*ufp_sol_x)/s_cl;
b =  -(z_cl - p_st_to_sw_z_init + kx*ufp_sol_x + p_st_to_sw_z_init*s_cl^2 - kx*s_cl^2*ufp_sol_x)/(s_cl*(s_cl - 1));
c = p_st_to_sw_z_init;
hd = [...
    torso_pitch_des;
    p_ground_com_des;
    (1/2)*((1+cos(pi*s))*p_sw_com_init(1) + (1-cos(pi*s))*p_sw_com_des(1));
    a*s^2 + b*s + c];

J_hd = jacobian(hd,s);
hd_dot = J_hd * sdot;
J_hd_dot = jacobian(J_hd*sdot,s);
hd_ddot = J_hd_dot*sdot; % J_hd*sddot = 0 (sddot = 0)

%% IO Controller
% gains
damp = 1;
Ts = 0.1;
wn = 4/(damp*Ts);
Kp = wn^2;
Kd = 2*damp*wn;

damp = 1;
Ts = 0.05;
wn = 4/(damp*Ts);
Kpstrong = wn^2;
Kdstrong = 2*damp*wn;

Kp_mat = [Kp, Kp, Kpstrong, Kp]';
Kd_mat = [Kd, Kd, Kdstrong, Kd]';
% Kp = 100;
% Kd = 20;

% control calculation
JcD = (J_stance/D)*J_stance';
Hu = (eye(n_q) - J_stance'*(JcD\(J_stance/D)))*B;
Hw = J_stance'*(JcD\((J_stance/D)*(C*qdot+G)-Jdot_stance*qdot));

y = ha - hd;
ydot = ha_dot - hd_dot;
v = -Kp_mat.*y - Kd_mat.*ydot;
uIO = ((J_ha/D)*Hu) \ (-(J_ha/D)*(-C*qdot-G+Hw) - J_ha_dot*qdot + hd_ddot + v);

%% Generate Functions
% virtual constraints
f_s = Function('f_s',{t_now,t_start,t_period},{s_func});
f_sdot = Function('f_sdot',{t_period},{sdot_func});
f_ha = Function('f_ha',{x,kx},{ha});
f_ha_dot = Function('f_ha_dot',{x,kx},{ha_dot});
f_ha_ddot = Function('f_ha_ddot',{x,u,w,kx},{ha_ddot});
f_hd = Function('f_hd',{s,sdot,torso_pitch_des,p_ground_com_des,p_sw_com_init,p_sw_com_des,kx,s_cl,z_cl,p_st_to_sw_z_init,ufp_sol_x},{hd});
f_hd_dot = Function('f_hd_dot',{s,sdot,torso_pitch_des,p_ground_com_des,p_sw_com_init,p_sw_com_des,kx,s_cl,z_cl,p_st_to_sw_z_init,ufp_sol_x},{hd_dot});
f_hd_ddot = Function('f_hd_ddot',{s,sdot,torso_pitch_des,p_ground_com_des,p_sw_com_init,p_sw_com_des,kx,s_cl,z_cl,p_st_to_sw_z_init,ufp_sol_x},{hd_ddot});

% IO controller
f_uIO = Function('f_uIO',{x,s,sdot,torso_pitch_des,p_ground_com_des,p_sw_com_init,p_sw_com_des,kx,s_cl,z_cl,p_st_to_sw_z_init,ufp_sol_x},{uIO});

%% Return struct
sym_info.dim.n_h = sym_info.dim.n_u;

sym_info.func.f_s = f_s;
sym_info.func.f_sdot = f_sdot;
sym_info.func.f_ha = f_ha;
sym_info.func.f_ha_dot = f_ha_dot;
sym_info.func.f_ha_ddot = f_ha_ddot;
sym_info.func.f_hd = f_hd;
sym_info.func.f_hd_dot = f_hd_dot;
sym_info.func.f_hd_ddot = f_hd_ddot;
sym_info.func.f_uIO = f_uIO;

%% Test
% qt = [0; 0.5; pi/20; 3*pi/4; pi/4; pi/2; pi/2];
% qtdot = zeros(n_q,1);
% ut = randn(4,1);
% wt = zeros(2,1);
% s = 0.5;
% sdot = 1/0.4;
% pitch = pi/12;
% zc = 1;
% zmid = 0.5;
% psw_init = [-0.2;0];
% psw_des = [0.2;0];
% 
% f_ha(qt)
% f_ha_dot(qt,qtdot)
% f_ha_ddot(qt,qtdot,ut,wt)
% 
% f_hd(s,sdot,pitch,zc,psw_init,psw_des,zmid)
% f_hd_dot(s,sdot,pitch,zc,psw_init,psw_des,zmid)
% f_hd_ddot(s,sdot,pitch,zc,psw_init,psw_des,zmid)
% 
% f_uIO([qt;qtdot],s,sdot,pitch,zc,psw_init,psw_des,zmid)


end