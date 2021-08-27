function [sym_info] = formulate_lip_fp_opt(sym_info,gait_info)
import casadi.*

%% Extract Inputs
% sym_info
g = sym_info.params.g;
m = sym_info.params.m;
n_x = 5;
n_ufp = 3;


% gait_info
t_step_period = gait_info.t_step_period;     % step period

% ctrl_info
dt_opt = sym_info.fp_opt.dt_opt;         % time interval
N_steps_ahead = sym_info.fp_opt.N_steps_ahead;
Q = sym_info.fp_opt.Q_avgvel;
sol_type = sym_info.fp_opt.qpsolver;

%% Dynamics
% Declare System Variables: constraint zc = kx*xc + ky*yc + z_H
xc = SX.sym('xc');  % relative position of center of mass w.r.t stance contact point
yc = SX.sym('yc');
Lx = SX.sym('Lx');
Ly = SX.sym('Ly');  % Angular momentum about contact point (stance foot)
Lz = SX.sym('Lz');
x = [xc; yc; Lx; Ly; Lz];

% params
z_H_sym = SX.sym('z_H_sym');
kx_sym = SX.sym('kx_sym');
ky_sym = SX.sym('ky_sym');
k_sym = [kx_sym;ky_sym];

xcdot = (Ly + ky_sym*Lz)/(m*z_H_sym);
ycdot = (-Lx - kx_sym*Lz)/(m*z_H_sym);
Lxdot = -m*g*yc;
Lydot = m*g*xc;     % lip model
Lzdot = 0;
xdot = [xcdot; ycdot; Lxdot; Lydot; Lzdot];

% Continuous time dynamics
fc = Function('fc',{x,k_sym,z_H_sym},{xdot});   % f = dx/dt

% Discrete time dynamics
opts_intg = struct(...
    'tf',                           dt_opt,...
    'simplify',                     true,...
    'number_of_finite_elements',    4);
dae = struct(...
    'x',    x,...
    'p',    [k_sym;z_H_sym],...
    'ode',  xdot);
intg = integrator('intg','rk',dae,opts_intg);
result = intg('x0',x,'p',[k_sym;z_H_sym]);
x_next = result.xf;
f_lip_rk = Function('f_lip_rk4',{x,k_sym,z_H_sym},{x_next});

%% Formulate Optimization Problem
% Intermediate optimization variables
N_fp = N_steps_ahead;
k_step = (t_step_period / dt_opt);
N_k = round((N_steps_ahead * k_step)+1);

% Opti Stack
opti = casadi.Opti();

% opt vars
X_traj = opti.variable(n_x,N_k);
Ufp_traj = opti.variable(n_ufp,N_fp);
slack_slip = opti.variable(1,1);
slack_mech = opti.variable(1,1);

% parameters
p_x_init = opti.parameter(n_x,1);
p_Lx_des = opti.parameter(1,1);
p_Ly_des = opti.parameter(1,1);
p_z_H = opti.parameter(1,1);        % nominal z height of com
p_ufp_stance_max = opti.parameter(n_ufp,1);
p_ufp_stance_min = opti.parameter(n_ufp,1);
p_k = opti.parameter(2,1); % [kx; ky]
p_mu = opti.parameter(1,1); % friction coefficient
p_kx = p_k(1);
p_ky = p_k(2);
p_ufp_init = opti.parameter(n_ufp,1);
p_cos_alpha_x = opti.parameter(1,1);

xcdot_des = p_Ly_des ./ (m*p_z_H);
ycdot_des = -p_Lx_des ./ (m*p_z_H);
% cost
opt_cost_L = {};
opt_cost_avgvel = {};

% initial conditions
X_k = X_traj(:,1);
n = 0;      % foot step iteration
xst_abs = 0;
yst_abs = 0;
x_eos = {};
x_bos = {};
k_pre_all = [];
k_post_all = [];

xc_slip_limit = (p_mu + p_kx)*p_z_H / (1 - p_mu*p_kx);
yc_slip_limit = (p_mu + p_ky)*p_z_H / (1 - p_mu*p_ky);

pos_hip_to_com = [0;0];     % assume hip and com are same
xc_mech_limit = 0.5 * (p_ufp_stance_max * p_cos_alpha_x) + pos_hip_to_com(1);

% Initial condition constraint
opti.subject_to(X_traj(:,1) == p_x_init);

% Initial foot placement constraint
% opti.subject_to(Ufp_traj(:,1) == p_ufp_init);

%% Dynamics
for k = 1:N_k
    k_pre = round(n*(k_step)+1); % iterate pre-impact
    k_post = k_pre + 1;     % iterate post-impact
    
    % GRF constraint
%     opti.subject_to(-xc_slip_limit - slack_slip <= X_k(1) <= xc_slip_limit + slack_slip);
    
    %Mechanical constraint
    opti.subject_to(-xc_mech_limit - slack_mech <= X_k(1) <= xc_mech_limit + slack_mech);
    
    if (k == k_pre)
        x_eos = [x_eos, {X_k}];
        
        % Foot placement impact
        if k < N_k
            Xk_impact = [...
                X_k(1)-Ufp_traj(1,n+1);
                X_k(2)-Ufp_traj(2,n+1);
                X_k(3);
                X_k(4);
                X_k(5)];
%             opti.subject_to(-xc_slip_limit - slack_slip <= Xk_impact(1) <= xc_slip_limit + slack_slip);
            opti.subject_to(-xc_mech_limit - slack_mech <= Xk_impact(1) <= xc_mech_limit + slack_mech);
            
            Xk_end = f_lip_rk(Xk_impact,p_k,p_z_H);
            opti.subject_to(Ufp_traj(3,n+1) == 0)   % z height foot placement
        end
        
        % Foot placement Height from slope
%         if n < N_fp
%             xst_abs = xst_abs + Ufp_traj(1,n+1);
%             yst_abs = yst_abs + Ufp_traj(2,n+1);
%             opti.subject_to(Ufp_traj(3,n+1) == p_kx*xst_abs + p_ky*yst_abs)
%         end
        
        % Cost
        if n > 0
            % L cost
            L_error = [X_k(3) - p_Lx_des; X_k(4) - p_Ly_des];
            opt_cost_L = [opt_cost_L, {L_error'*Q(n)*L_error}];
            if k < N_k
                % average vel cost
                avgxvel_k = Ufp_traj(1,n+1)/t_step_period;
                avgyvel_k = Ufp_traj(2,n+1)/t_step_period;
                avgvel_error = [avgxvel_k-xcdot_des; avgyvel_k-ycdot_des];
                opt_cost_avgvel = [opt_cost_avgvel, {avgvel_error'*Q(n)*avgvel_error}];
            end
        end
        
        if k < N_k
            X_k = X_traj(:,k+1); % update state
        end
        k_pre_all = [k_pre_all, k_pre];  % store index
        
    elseif (k == k_post)
        x_bos = [x_bos, {X_k}];     % init state of n-th step
        Xk_end = f_lip_rk(X_k,p_k,p_z_H); % forward integrate to end of step
        X_k = X_traj(:,k+1);        % update state
        n = n + 1;                  % increase step counter
        k_post_all = [k_post_all, k_post];  % store index
    else
        Xk_end = f_lip_rk(X_k,p_k,p_z_H);
        X_k = X_traj(:,k+1);
    end
    
    if k < N_k
        opti.subject_to(X_k == Xk_end); % Dynamics equality constraint
    end

    
end

%% Foot Placement Constraints
for n = 1:N_fp
    % Foot placement constraint
    opti.subject_to(p_ufp_stance_min(1:2) <= Ufp_traj(1:2,n) <= p_ufp_stance_max(1:2))
end


%% Cost
yukai_method = false;
if ~yukai_method    
    % terminal cost
    try
        final_angmom_error = x_eos{end}(3:end) - x_eos{end-1}(3:end);
        opt_cost_stab = final_angmom_error' * 10*Q(n) * final_angmom_error;
    catch
        opt_cost_stab = 0; % in case of only 1 step prediction
    end
    
    % sum costs
    opt_cost_L_total = sum(vertcat(opt_cost_L{:}));
    opt_cost_avgvel_total = sum(vertcat(opt_cost_avgvel{:}));
    
    % cost function
%     % opti.minimize(opt_cost_avgvel_total);
%     opti.minimize(opt_cost_L_total);
%     opti.minimize(opt_cost_L_total + 1e6.*slack_slip.^2 + 1e6.*slack_mech.^2);
    opti.minimize(opt_cost_L_total + 1e5.*slack_mech.^2);
%     opti.minimize(opt_cost_L_total + opt_cost_stab);
%     opti.minimize(opt_cost_avgvel_total + opt_cost_stab);
    
else % Yukai Method
    opti.subject_to(X_k(4) == p_Ly_des);
    opti.minimize(1);
end

%% Create an OPT solver
if sol_type == "qrqp"
    % C++ Code Generation
    opts = struct(...
        'qpsol',            'qrqp',...
        'print_iteration',  false,...
        'print_header',     false,...
        'print_time',       false);    % osqp, qrqp (not as robust joris says on google groups)
    opts.qpsol_options = struct(...
        'print_iter',       false,...
        'print_header',     false,...
        'print_info',       false);
    opti.solver('sqpmethod',opts);
    f_opti = [];
%     f_opti = opti.to_function('F_sqp',{p_x_init,p_xcdot_des,p_Lx_des,p_z_H,p_ufp_stance_max,p_ufp_stance_min,p_k,p_mu},{Ufp_traj});
    
    % code generation
    %     F_sqp.save('F_sqp.casadi');
    %     F_sqp.generate('sqptest',struct('mex',true))
    %     disp('Compiling...')
    %     mex sqptest.c -DMATLAB_MEX_FILE
    %     disp('done')
    %     format long
elseif sol_type == "ipopt"
    p_opts = struct(...
        'print_time',   0);    
    s_opts = struct(...
        'print_level',              0,...
        'print_timing_statistics',  'no',...
        'print_info_string',        'no');
    opti.solver('ipopt',p_opts,s_opts);
    f_opti = opti.to_function('F_sqp',{p_x_init,p_Lx_des,p_Ly_des,p_z_H,p_ufp_stance_max,p_ufp_stance_min,p_k,p_mu},{Ufp_traj});
elseif sol_type == "ipopt_ma57"
    p_opts = struct(...
        'print_time',   0);
    s_opts = struct(...
        'linear_solver',            'ma57',...
        'print_level',              0,...
        'print_timing_statistics',  'no',...
        'print_info_string',        'no');
    opti.solver('ipopt',p_opts,s_opts);
    f_opti = opti.to_function('F_sqp',{p_x_init,p_Lx_des,p_Ly_des,p_z_H,p_ufp_stance_max,p_ufp_stance_min,p_k,p_mu},{Ufp_traj});

end

%% Return symbolics and solver
sym_info.fp_opt.N_fp = N_fp;
sym_info.fp_opt.N_k = N_k;
sym_info.fp_opt.f_lip_rk = f_lip_rk;
sym_info.fp_opt.opti = opti;
sym_info.fp_opt.f_opti = f_opti;
sym_info.fp_opt.p_x_init = p_x_init;
sym_info.fp_opt.p_Lx_des = p_Lx_des;
sym_info.fp_opt.p_Ly_des = p_Ly_des;
sym_info.fp_opt.p_z_H = p_z_H;
sym_info.fp_opt.p_ufp_max = p_ufp_stance_max;
sym_info.fp_opt.p_ufp_min = p_ufp_stance_min;
sym_info.fp_opt.p_k = p_k;
sym_info.fp_opt.p_mu = p_mu;
sym_info.fp_opt.p_ufp_init = p_ufp_init;
sym_info.fp_opt.p_cos_alpha_x = p_cos_alpha_x;

sym_info.fp_opt.k_pre_all = k_pre_all;
sym_info.fp_opt.k_post_all = k_post_all;

