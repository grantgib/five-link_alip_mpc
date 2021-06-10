function [traj_info,ctrl_info] = ...
    simulate(sym_info,gait_info,sim_info)
import casadi.*

%% Extract inputs
% sim_info
dt = sim_info.dt;
x_init = sim_info.x_init;
num_steps = sim_info.num_steps;
int_type = sim_info.int_type;

% gait_info
t_step_period = gait_info.t_step_period;
xcdot_des = gait_info.xcdot_des;
torso_pitch_des = gait_info.torso_pitch_des;
mu = gait_info.mu;
kx = atan(gait_info.angle_x);
p_st_com_des = gait_info.p_st_com_des;      % z_H
z_mid = 0.1;
step_height = 0;

% sym_info
m = sym_info.params.m;
n_q = sym_info.dim.n_q;
n_x = sym_info.dim.n_x;
n_u = sym_info.dim.n_u;
n_w = sym_info.dim.n_w;

opti = sym_info.fp_opt.opti;
ufp_min = sym_info.fp_opt.UFP_MIN;
ufp_max = sym_info.fp_opt.UFP_MAX;
N_steps_ahead = sym_info.fp_opt.N_steps_ahead;
p_x_init = sym_info.fp_opt.p_x_init;
p_xcdot_des = sym_info.fp_opt.p_xcdot_des;
p_ycdot_des = sym_info.fp_opt.p_ycdot_des;
p_z_H = sym_info.fp_opt.p_z_H;
p_ufp_max = sym_info.fp_opt.p_ufp_max;
p_ufp_min = sym_info.fp_opt.p_ufp_min;
p_k = sym_info.fp_opt.p_k;
p_mu = sym_info.fp_opt.p_mu;
f_lip_rk4 = sym_info.fp_opt.fd;


f_eul = sym_info.func.f_eul;
f_rk4 = sym_info.func.f_rk4;
f_impact = sym_info.func.f_impact;
f_relabel = sym_info.func.f_relabel;
f_p_com = sym_info.func.f_pos_COM;
f_v_com = sym_info.func.f_vel_COM;
f_p_sw = sym_info.func.f_pos_swing;
f_p_sw_z = sym_info.func.f_pos_swing_z;
f_v_sw = sym_info.func.f_vel_swing;
f_p_st = sym_info.func.f_pos_stance;
f_v_st = sym_info.func.f_vel_stance;
f_ha = sym_info.func.f_ha;
f_ha_dot = sym_info.func.f_ha_dot;
f_hd = sym_info.func.f_hd;
f_hd_dot = sym_info.func.f_hd_dot;
f_w = sym_info.func.f_w;
f_s = sym_info.func.f_s;
f_sdot = sym_info.func.f_sdot;
f_uIO = sym_info.func.f_uIO;
f_Lst = sym_info.func.f_Lst;
f_xlip = sym_info.func.f_xlip;

%% Initialize Variables
% Initialize variables
N_impacts = 0;
iter = 1;            % simulation iteration number (proportional to t_current)
max_iter = (num_steps+1) * (t_step_period/dt);
iter_impact = 1;
t_current = 0;
t_start = 0;
p_sw_com_init = full(f_p_com(x_init) - f_p_sw(x_init));
p_sw_com_des = full(f_p_com(x_init) - f_p_st(x_init));
new_step = true;
p_st_current = full(f_p_st(x_init))';
p_sw_current = full(f_p_sw(x_init))';

% Storage
time_traj(1) = t_current;
t_impact_traj = t_current;
s_traj = [];

p_sw_traj = [];
p_st_traj = [];

fp_prev = []; % swing location at beginning of step
ufp_next = []; % estimated swing location at end of current step
ufp_sol = []; % solution vector

impact_traj = [];
ufp_sol_traj = {};
xlip_sol_traj = {};
ufp_traj = [];
time_calc = [];
x_traj = [];
u_sol_traj = [];
w_sol_traj = [];

p_com_traj = [];
v_com_traj = [];
Lst_traj = [];

xlip_ideal_traj = [];

ha_traj = [];
ha_dot_traj = [];
ha_ddot_traj = [];
hd_traj = [];
hd_dot_traj = [];
hd_ddot_traj = [];
y_traj = [];
y_dot_traj = [];
y_ddot_traj = [];

%% Main Loop
% args = Update_Args_Nonlinear(sym_info,ctrl_info,ref_info,constr_info,traj_info,x_init);
while(  ( N_impacts < num_steps && iter < max_iter ) ) %&& ctrl_info.iter < 500)
    %% phase variable
    s = full(f_s(t_current,t_start,t_step_period));
    sdot = full(f_sdot(t_step_period));
    
    %% foot placement
    % Predict state at end of step
    pred_info = struct(...
        'm',                m,...
        'z_H',              p_st_com_des,...
        'dt',               dt,...
        'x_init',           x_init,...
        'f_p_com',          f_p_com,...
        'f_v_com',          f_v_com,...
        's',                s,...
        't_step_period',    t_step_period,...
        'fd',               f_lip_rk4);
    xlip_eos = predict_lip_eos_state(pred_info);
    
    % lip optimization
    fp_info = struct(...
        'z_H',          p_st_com_des,...
        'x_init',       xlip_eos,...
        'xcdot_des',    xcdot_des,...
        'ycdot_des',    xcdot_des,...
        'ufp_max',      ufp_max,...
        'ufp_min',      ufp_min,...
        'k',            [0;0],...
        'mu',           mu,...
        'N_steps',      N_steps_ahead,...
        'n_xlip',       5,...
        'n_ufp',        3,...
        'opti',         opti,...
        'p_x_init',     p_x_init,...
        'p_xcdot_des',  p_xcdot_des,...
        'p_ycdot_des',  p_ycdot_des,...
        'p_z_H',        p_z_H,...
        'p_ufp_max',    p_ufp_max,...
        'p_ufp_min',    p_ufp_min,...
        'p_k',          p_k,...
        'p_mu',         p_mu);
    [ufp_sol,xlip_sol] = compute_fp(fp_info);
    ufp_next = ufp_sol(:,1);
    st_current = full(f_p_st(x_init));
    p_sw_com_des = full(f_p_com(x_init))' - [ufp_next(1); ufp_next(3)];
%     p_sw_com_des = full(f_p_com(x_init))' - [ufp_next(1)+st_current(1); ufp_next(3)];
    new_step = false;
    
    %% IO controller
    % Actual virtual outputs
    ha_current = full(f_ha(x_init));
    ha_dot_current = full(f_ha_dot(x_init));
    
    % Desired virtual outputs
    hd_current = full(f_hd(s,sdot,torso_pitch_des,p_st_com_des,p_sw_com_init,p_sw_com_des,z_mid));
    hd_dot_current = full(f_hd_dot(s,sdot,torso_pitch_des,p_st_com_des,p_sw_com_init,p_sw_com_des,z_mid));
    
    % Output
    y_current = ha_current - hd_current;
    y_dot_current = ha_dot_current - hd_dot_current;
    
    % input and wrench
    u_sol_io = full(f_uIO(x_init,s,sdot,torso_pitch_des,p_st_com_des,p_sw_com_init,p_sw_com_des,z_mid)); %
    w_sol_io = full(f_w(x_init,u_sol_io));
    
    %% Center of Mass / Angular Momentum Info
    p_com = full(f_p_com(x_init))';
    v_com = full(f_v_com(x_init));
    Lst = full(f_Lst(x_init));    
    
    %% Ideal LIP Info
%     xlip = f_xlip(x_init,p_st_com_des);    
    
    %% Store trajectory and time
    time_traj(iter) = t_current;
    s_traj = [s_traj, s];
    impact_traj = [impact_traj, N_impacts];
    
    x_traj = [x_traj, x_init];
    
    p_com_traj = [p_com_traj, p_com];
    v_com_traj = [v_com_traj, v_com];
    Lst_traj = [Lst_traj, Lst];
    
%     xlip_traj = [xlip_traj, xlip];
    
    ha_traj = [ha_traj, ha_current];
    ha_dot_traj = [ha_dot_traj, ha_dot_current];
    hd_traj = [hd_traj, hd_current];
    hd_dot_traj = [hd_dot_traj, hd_dot_current];
    y_traj = [y_traj, y_current];
    y_dot_traj = [y_dot_traj, y_dot_current];
    
    u_sol_traj = [u_sol_traj , u_sol_io];
    w_sol_traj = [w_sol_traj , w_sol_io];
    
    ufp_sol_traj = [ufp_sol_traj, {ufp_sol}];
    xlip_sol_traj = [xlip_sol_traj, {xlip_sol}];
    ufp_traj = [ufp_traj, ufp_next];
    
    p_sw_traj = [p_sw_traj, p_sw_current];
    p_st_traj = [p_st_traj, p_st_current];
    
    update_info = struct(...
        'int_type', int_type,...
        'f_eul',    f_eul,...
        'f_rk4',    f_rk4,...
        'dt',       dt,...
        't_init',   t_current,...
        'x_init',   x_init,...
        'u',        u_sol_io);
    
    %% Apply the control and forward integrate dynamics
    [t_next,x_next] = update_state(update_info);
    
    %% Check for Impact and Update
    p_sw_current = full(f_p_sw(x_next))';
    p_st_current = full(f_p_st(x_next))';
    v_sw_current = full(f_v_sw(x_next))';
    v_st_current = full(f_v_st(x_next))';
    if      p_sw_current(2) < step_height &&...     % height at stairs
            v_sw_current(2) < -0.2                    % velocity is negative
        
        disp("-> Impact occured, find when it happened!");
        
        % Forward Integrate until Impact, Apply Impact, Integrate until t_current + DT has been reached
        impact_info = struct(...
            't_init',       t_current,...
            'x_init',       x_init,...
            'u',            u_sol_io,...
            'dt',           dt,...
            'f_rk4',        f_rk4,...
            'f_p_sw_z',     f_p_sw_z,...
            'f_impact',     f_impact,...
            'f_relabel',    f_relabel,...
            'step_height',  step_height);
        
        [t_next,x_next,t_impact] = impact_update(impact_info);
        
        % Update initial swing foot pos
        p_sw_com_init = full(f_p_com(x_next) - f_p_sw(x_next));
        
        % Update time
        t_start = t_current;
        t_impact_traj = [t_impact_traj, t_impact];
        
        % Update impact counter
        N_impacts = N_impacts + 1;
        iter_impact = 0;
        disp("-> Step # " + N_impacts);
        new_step = true;
        
        % Update stance foot position with previous swing foot impact pos
        p_sw_current = full(f_p_sw(x_next))';
        p_st_current = full(f_p_st(x_next))';
        v_sw_current = full(f_v_sw(x_next))';
        v_st_current = full(f_v_st(x_next))';
        
    end

    
    %% Update state and time, warm start, shift reference
    t_current = t_next;
    x_init = x_next;
    iter = iter + 1;  % update iteration counter
    iter_impact = iter_impact + 1;
    
    % Print every n iterations
    if mod(iter-1,10) == 0
        disp("Iteration = " + (iter-1));
    end
end

%% Return Trajectory info
% time
traj_info.time_traj = time_traj;
traj_info.t_impact_traj = t_impact_traj;
traj_info.s_traj = s_traj;

% states, control, wrench
traj_info.x_traj = x_traj;
traj_info.u_io_traj = u_sol_traj;
traj_info.w_io_traj = w_sol_traj;

% com
traj_info.p_com_traj = p_com_traj;
traj_info.v_com_traj = v_com_traj;
traj_info.Lst_traj = Lst_traj;

% lip sol
% traj_info.xlip_ideal_traj = xlip_ideal_traj;

% foot placement
traj_info.ufp_sol_traj = ufp_sol_traj;
traj_info.xlip_sol_traj = xlip_sol_traj;
traj_info.ufp_traj = ufp_traj;

% virtual constraints and outputs
traj_info.ha_traj = ha_traj;
traj_info.ha_dot_traj = ha_dot_traj;
traj_info.ha_ddot_traj = ha_ddot_traj;
traj_info.hd_traj = hd_traj;
traj_info.hd_dot_traj = hd_dot_traj;
traj_info.hd_ddot_traj = hd_ddot_traj;
traj_info.y_traj = y_traj;
traj_info.y_dot_traj = y_dot_traj;
traj_info.y_ddot_traj = y_ddot_traj;

% Foot positions
traj_info.pos_sw_traj = p_sw_traj;
traj_info.pos_st_traj = p_st_traj;

% Impact
traj_info.impact_traj = impact_traj;

% Statistics
traj_info.stats.time_calc = time_calc;

traj_info.num_impacts = N_impacts;
traj_info.iter_impact = iter_impact;
traj_info.iter = iter;

end