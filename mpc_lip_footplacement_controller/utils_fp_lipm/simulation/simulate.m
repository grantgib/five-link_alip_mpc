function [traj_info] = simulate(sym_info,gait_info,sim_info)
import casadi.*

%% Extract inputs
% sim_info
dt_sim = sim_info.dt_sim;
dt_opt = sym_info.fp_opt.dt_opt;
x_init = sim_info.x_init;
num_steps = sim_info.num_steps;
num_steps_fast = sim_info.num_steps_fast;
num_steps_stop = sim_info.num_steps_stop;
int_type = sim_info.int_type;

% gait_info
t_step_period = gait_info.t_step_period;
Lx_des = gait_info.Lx_des;
Ly_des = gait_info.Ly_des;
torso_pitch_des = gait_info.torso_pitch_des;
mu = gait_info.mu;
p_st_com_des = gait_info.p_st_com_des;      % z_H
z_mid = gait_info.z_mid;

% sym_info
g = sym_info.params.g;
m = sym_info.params.m;
l = sqrt(g/p_st_com_des);
n_q = sym_info.dim.n_q;
n_x = sym_info.dim.n_x;
n_u = sym_info.dim.n_u;
n_w = sym_info.dim.n_w;

opti = sym_info.fp_opt.opti;
ufp_stance_max = sym_info.fp_opt.ufp_stance_max;
ufp_stance_min = sym_info.fp_opt.ufp_stance_min;
N_fp = sym_info.fp_opt.N_fp;
N_k = sym_info.fp_opt.N_k;
N_steps_ahead = sym_info.fp_opt.N_steps_ahead;
p_x_init = sym_info.fp_opt.p_x_init;
p_Lx_des = sym_info.fp_opt.p_Lx_des;
p_Ly_des = sym_info.fp_opt.p_Ly_des;
p_z_H = sym_info.fp_opt.p_z_H;
p_ufp_stance_max = sym_info.fp_opt.p_ufp_max;
p_ufp_stance_min = sym_info.fp_opt.p_ufp_min;
p_k = sym_info.fp_opt.p_k;
p_mu = sym_info.fp_opt.p_mu;
p_ufp_init = sym_info.fp_opt.p_ufp_init;
p_cos_alpha_x = sym_info.fp_opt.p_cos_alpha_x;

f_lip_rk4 = sym_info.fp_opt.f_lip_rk;
k_pre_all = sym_info.fp_opt.k_pre_all;
k_post_all = sym_info.fp_opt.k_post_all;

f_eul = sym_info.func.f_eul;
f_rk4 = sym_info.func.f_rk4;
f_impact = sym_info.func.f_impact;
f_relabel = sym_info.func.f_relabel;

f_p_sw = sym_info.func.f_pos_swing;
f_p_sw_x = sym_info.func.f_pos_swing_x;
f_p_sw_z = sym_info.func.f_pos_swing_z;
f_v_sw = sym_info.func.f_vel_swing;
f_p_st = sym_info.func.f_pos_stance;
f_v_st = sym_info.func.f_vel_stance;
f_p_com_world = sym_info.func.f_pos_com_world;
f_v_com_world = sym_info.func.f_vel_com_world;
f_p_com_stance = sym_info.func.f_pos_com_stance;
f_v_com_stance = sym_info.func.f_vel_com_stance;
% f_L_stance = sym_info.func.f_L_stance;
% f_L_stance = L_total_right_func_mex;

f_ha = sym_info.func.f_ha;
f_ha_dot = sym_info.func.f_ha_dot;
f_hd = sym_info.func.f_hd;
f_hd_dot = sym_info.func.f_hd_dot;
f_w = sym_info.func.f_w;
f_s = sym_info.func.f_s;
f_sdot = sym_info.func.f_sdot;
f_uIO = sym_info.func.f_uIO;

f_xc_slip_limit = sym_info.func.f_xc_slip_limit;
f_yc_slip_limit = sym_info.func.f_yc_slip_limit;


%% Initialize Variables
% Initialize variables
N_impacts = 0;
iter = 1;            % simulation iteration number (proportional to t_current)
max_iter = (num_steps+1) * (t_step_period/dt_sim);
iter_impact = 1;
t_current = 0;
t_start = 0;
ground_height_current = 0;
kx = atan(gait_info.angle_x);
cos_alpha_x = cos(gait_info.angle_x);

% ufp_init = zeros(3,1);

p_sw_com_init = full(f_p_com_world(x_init) - f_p_sw(x_init));
p_st_abs_current = full(f_p_st(x_init))';
p_sw_abs_current = full(f_p_sw(x_init))';
v_st_abs_current = full(f_v_st(x_init));
v_sw_abs_current = full(f_v_sw(x_init));

p_st_rel_current = zeros(2,1);
p_sw_rel_current = full(f_p_sw(x_init) - f_p_st(x_init))';
v_st_rel_current = zeros(2,1);
v_sw_rel_current = full(f_v_sw(x_init) - f_v_st(x_init));

% Storage
time_traj(1) = t_current;
t_impact_traj = t_current;
s_traj = [];

p_sw_abs_traj = [];
p_st_abs_traj = [];
v_sw_abs_traj = [];
v_st_abs_traj = [];
p_sw_rel_traj = [];
p_st_rel_traj = [];
v_sw_rel_traj = [];
v_st_rel_traj = [];

fp_prev = []; % swing location at beginning of step
ufp_next = []; % estimated swing location at end of current step
ufp_sol = []; % solution vector
xlip_sol = [];

impact_traj = [];
ufp_sol_traj = {};
xlip_sol_traj = {};
ufp_rel_traj = [];
ufp_abs_traj = [];
time_calc = [];
x_traj = [];
u_sol_traj = [];
w_sol_traj = [];

p_com_world_traj = [];
v_com_world_traj = [];
p_com_stance_traj = [];
v_com_stance_traj = [];
L_stance_traj = [];

Ly_des_traj = [];

ha_traj = [];
ha_dot_traj = [];
ha_ddot_traj = [];
hd_traj = [];
hd_dot_traj = [];
hd_ddot_traj = [];
y_traj = [];
y_dot_traj = [];
y_ddot_traj = [];

p_sw_com_grant_traj = [];
p_sw_com_yukai_traj = [];

ufp_stance_max_traj = [];
ufp_stance_min_traj = [];
xc_slip_limit_traj = [];
xc_mech_hip_limit_traj = [];

%% Main Loop

% max_iter = 720;
while(  ( N_impacts < num_steps && iter < max_iter ) ) %&& ctrl_info.iter < 500)
    %% limits
    ufp_stance_max_traj = [ufp_stance_max_traj, ufp_stance_max];
    ufp_stance_min_traj = [ufp_stance_min_traj, ufp_stance_min];
    
    xc_slip_limit = full(f_xc_slip_limit(p_st_com_des,mu,kx));
    xc_slip_limit_traj = [xc_slip_limit_traj, xc_slip_limit];
    
    xc_mech_hip_limit = 0.5 * (ufp_stance_max * cos_alpha_x);
    xc_mech_hip_limit_traj = [xc_mech_hip_limit_traj, xc_mech_hip_limit];
    
    if N_impacts >= num_steps_fast && N_impacts < num_steps_stop
        xcdot_des = 2.0;
        Ly_des = m * p_st_com_des * xcdot_des;
    elseif N_impacts >= num_steps_stop
        Ly_des = 0;
    end
    Ly_des_traj = [Ly_des_traj, Ly_des];
    %% phase variable
    s = full(f_s(t_current,t_start,t_step_period));
    sdot = full(f_sdot(t_step_period));
    
    %% Predict state at end of step
        pred_info = struct(...
            'kx',               kx,...
            'g',                g,...
            'm',                m,...
            'z_H',              p_st_com_des,...
            'dt_opt',           dt_opt,...
            'x_init',           x_init,...
            'f_p_com_stance',   f_p_com_stance,...
            'f_v_com_stance',   f_v_com_stance,...
            's',                s,...
            't_step_period',    t_step_period,...
            'f_lip_rk4',        f_lip_rk4);
        [xlip_eos] = predict_lip_eos_state(pred_info);
        
    %% Foot placement calc
%     if isequal(sim_info.method,'grant')
        % MPC method
        fp_info = struct(...
            'g',                    g,...
            'm',                    m,...
            'z_H',                  p_st_com_des,...
            'x_init',               xlip_eos,...
            'Lx_des',               Lx_des,...
            'Ly_des',               Ly_des,...
            'ufp_stance_max',       ufp_stance_max,...
            'ufp_stance_min',       ufp_stance_min,...
            'k',                    [kx;0],...
            'mu',                   mu,...
            'ufp_init',             zeros(3,1),...
            'cos_alpha_x',          cos_alpha_x,...
            'N_steps',              N_steps_ahead,...
            'N_fp',                 N_fp,...
            'N_k',                  N_k,...
            'n_xlip',               5,...
            'n_ufp',                3,...
            'opti',                 opti,...
            'p_x_init',             p_x_init,...
            'p_Lx_des',             p_Lx_des,...
            'p_Ly_des',             p_Ly_des,...
            'p_z_H',                p_z_H,...
            'p_ufp_stance_max',     p_ufp_stance_max,...
            'p_ufp_stance_min',     p_ufp_stance_min,...
            'p_k',                  p_k,...
            'p_mu',                 p_mu,...
            'p_ufp_init',           p_ufp_init,...
            'p_cos_alpha_x',        p_cos_alpha_x);
        [ufp_sol,xlip_sol] = compute_fp(fp_info);
        p_sw_com_des_grant = xlip_sol(1,k_pre_all(1)) - ufp_sol(1,1);
        p_sw_com_grant_traj = [p_sw_com_grant_traj, p_sw_com_des_grant];
        
%     elseif isequal(sim_info.method,'yukai')
        %% Yukai method
        t_remain = t_step_period * (1 - s);
        H = p_st_com_des;
        T = t_step_period;
        p_com_stance_est = full(f_p_com_stance(x_init));
        xc_est = p_com_stance_est(1);
        Ly_est = L_total_right_func_mex(x_init);
        Ly_eos_est = m*H*l*sinh(l*t_remain)*xc_est + cosh(l*t_remain)*Ly_est;
        p_sw_com_des_yukai = (1 / (m * H * l * sinh(l*T))) * (Ly_des - cosh(l*T) * Ly_eos_est);
        p_sw_com_yukai_traj = [p_sw_com_yukai_traj, p_sw_com_des_yukai];
%     end
    %% Choose method
    if isequal(sim_info.method,'grant')
        p_sw_com_des = p_sw_com_des_grant;
    elseif isequal(sim_info.method,'yukai')
        p_sw_com_des = p_sw_com_des_yukai;
    end
    %% IO controller
    % Actual virtual outputs
    ha_current = full(f_ha(x_init,kx,ground_height_current));
    ha_dot_current = full(f_ha_dot(x_init,kx,ground_height_current));
    
    % Desired virtual outputs
    hd_current = full(f_hd(s,sdot,torso_pitch_des,p_st_com_des,p_sw_com_init,p_sw_com_des,z_mid));
    hd_dot_current = full(f_hd_dot(s,sdot,torso_pitch_des,p_st_com_des,p_sw_com_init,p_sw_com_des,z_mid));
    
    % Output
    y_current = ha_current - hd_current;
    y_dot_current = ha_dot_current - hd_dot_current;
    
    % input and wrench
    u_sol_io = full(f_uIO(x_init,s,sdot,torso_pitch_des,p_st_com_des,p_sw_com_init,p_sw_com_des,z_mid,kx,ground_height_current)); %
    w_sol_io = full(f_w(x_init,u_sol_io));
    
    %% Center of Mass / Angular Momentum Info
    p_com_world = full(f_p_com_world(x_init))';
    v_com_world = full(f_v_com_world(x_init));
    p_com_stance = full(f_p_com_stance(x_init))';
    v_com_stance = full(f_v_com_stance(x_init));
    %     L_stance = full(f_L_stance(x_init));
    L_stance = L_total_right_func_mex(x_init);
    
    %% Store trajectory and time
    time_traj(iter) = t_current;
    s_traj = [s_traj, s];
    impact_traj = [impact_traj, N_impacts];
    
    x_traj = [x_traj, x_init];
    
    p_com_world_traj = [p_com_world_traj, p_com_world];
    v_com_world_traj = [v_com_world_traj, v_com_world];
    p_com_stance_traj = [p_com_stance_traj, p_com_stance];
    v_com_stance_traj = [v_com_stance_traj, v_com_stance];
    L_stance_traj = [L_stance_traj, L_stance];
    
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
    ufp_rel_traj = [ufp_rel_traj, ufp_sol(:,1)];
    ufp_abs_traj = [ufp_abs_traj, [ufp_sol(1,1)+p_st_abs_current(1); ufp_sol(3,1)+p_st_abs_current(2)]];
    
    p_sw_abs_traj = [p_sw_abs_traj, p_sw_abs_current];
    p_st_abs_traj = [p_st_abs_traj, p_st_abs_current];
    v_sw_abs_traj = [v_sw_abs_traj, v_sw_abs_current];
    v_st_abs_traj = [v_st_abs_traj, v_st_abs_current];
    p_sw_rel_traj = [p_sw_rel_traj, p_sw_rel_current];
    p_st_rel_traj = [p_st_rel_traj, p_st_rel_current];
    v_sw_rel_traj = [v_sw_rel_traj, v_sw_rel_current];
    v_st_rel_traj = [v_st_rel_traj, v_st_rel_current];
    
    update_info = struct(...
        'int_type', int_type,...
        'f_eul',    f_eul,...
        'f_rk4',    f_rk4,...
        'dt_sim',   dt_sim,...
        't_init',   t_current,...
        'x_init',   x_init,...
        'u',        u_sol_io);
    
    %% Apply the control and forward integrate dynamics
    [t_next,x_next] = update_state(update_info);
    
    %% Check for Impact and Update
    p_sw_abs_current = full(f_p_sw(x_next))';
    p_st_abs_current = full(f_p_st(x_next))';
    v_sw_abs_current = full(f_v_sw(x_next));
    v_st_abs_current = full(f_v_st(x_next));
    p_st_rel_current = zeros(2,1);
    p_sw_rel_current = full(f_p_sw(x_next) - f_p_st(x_next))';
    v_st_rel_current = zeros(2,1);
    v_sw_rel_current = full(f_v_sw(x_next) - f_v_st(x_next));
    
    sw_above_ground = check_swingfoot_clearance(p_sw_abs_current, kx, ground_height_current);
    
    %     if      p_sw_abs_current(2) < step_height &&...     % height at stairs
    %             v_sw_abs_current(2) < -0.05                    % velocity is negative
    if  ~sw_above_ground && v_sw_abs_current(2) < -0.05
        
        disp("-> Impact occured, find when it happened!");
        
        % Forward Integrate until Impact, Apply Impact, Integrate until t_current + DT has been reached
        impact_info = struct(...
            't_init',                   t_current,...
            'x_init',                   x_init,...
            'u',                        u_sol_io,...
            'dt',                       dt_sim,...
            'kx',                       kx,...
            'f_rk4',                    f_rk4,...
            'f_p_sw_x',                 f_p_sw_x,...
            'f_p_sw_z',                 f_p_sw_z,...
            'f_impact',                 f_impact,...
            'f_relabel',                f_relabel,...
            'ground_height_current',    ground_height_current);
        
        [t_next,x_next,t_impact] = impact_update(impact_info);
        
        % Update initial swing foot pos
        p_sw_com_init = full(f_p_com_world(x_next) - f_p_sw(x_next));
        
        % Update
        %         ufp_init = ufp_sol(:,2);
        
        % Update time
        t_start = t_current;
        t_impact_traj = [t_impact_traj, t_impact];
        
        % Update impact counter
        N_impacts = N_impacts + 1;
        iter_impact = 0;
        disp("-> Step # " + N_impacts);
        new_step = true;
        
        % Update stance foot position with previous swing foot impact pos
        p_sw_abs_current = full(f_p_sw(x_next))';
        p_st_abs_current = full(f_p_st(x_next))';
        v_sw_abs_current = full(f_v_sw(x_next));
        v_st_abs_current = full(f_v_st(x_next));
        p_st_rel_current = zeros(2,1);
        p_sw_rel_current = full(f_p_sw(x_next) - f_p_st(x_next))';
        v_st_rel_current = zeros(2,1);
        v_sw_rel_current = full(f_v_sw(x_next) - f_v_st(x_next));
        
        %         ground_height_current = p_st_abs_current(end);
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
    %     disp('=======================================');
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
traj_info.p_com_world_traj = p_com_world_traj;
traj_info.v_com_world_traj = v_com_world_traj;
traj_info.p_com_stance_traj = p_com_stance_traj;
traj_info.v_com_stance_traj = v_com_stance_traj;
traj_info.L_stance_traj = L_stance_traj;

% lip sol
% traj_info.xlip_ideal_traj = xlip_ideal_traj;

% foot placement
traj_info.ufp_sol_traj = ufp_sol_traj;
traj_info.xlip_sol_traj = xlip_sol_traj;
traj_info.ufp_rel_traj = ufp_rel_traj;
traj_info.ufp_abs_traj = ufp_abs_traj;

% limits
traj_info.ufp_stance_max_traj = ufp_stance_max_traj;
traj_info.ufp_stance_min_traj = ufp_stance_min_traj;
traj_info.xc_slip_limit_traj = xc_slip_limit_traj;
traj_info.xc_mech_hip_limit_traj = xc_mech_hip_limit_traj;

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

% Foot positions & velocities
traj_info.pos_sw_abs_traj = p_sw_abs_traj;
traj_info.pos_st_abs_traj = p_st_abs_traj;
traj_info.vel_sw_abs_traj = v_sw_abs_traj;
traj_info.vel_st_abs_traj = v_st_abs_traj;
traj_info.pos_sw_rel_traj = p_sw_rel_traj;
traj_info.pos_st_rel_traj = p_st_rel_traj;
traj_info.vel_sw_rel_traj = v_sw_rel_traj;
traj_info.vel_st_rel_traj = v_st_rel_traj;

% Foot placement computations
traj_info.p_sw_com_yukai_traj = p_sw_com_yukai_traj;
traj_info.p_sw_com_grant_traj = p_sw_com_grant_traj;

% Impact
traj_info.impact_traj = impact_traj;

% Statistics
traj_info.stats.time_calc = time_calc;

traj_info.num_impacts = N_impacts;
traj_info.iter_impact = iter_impact;
traj_info.iter = iter;

% Params
traj_info.params.kx = kx;
% traj_info.params.max_step_flat = ufp_max_hip;

% Desired
traj_info.Ly_des_traj = Ly_des_traj;
end