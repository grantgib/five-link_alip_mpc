% External Formulate Opt
% addpath('casadi');
clear; clc;
import casadi.*

if ~exist('gen/opt_solvers','dir')
    mkdir('gen/opt_solvers')
end

%% Initialize variables
compile = true;

% sym_info
g = 9.81;
m = 32;
n_x = 4;
n_ufp = 3;

% gait_info
t_step_period = 0.4;     % step period

% fp_opt info
ufp_stance_max = 0.5;
sym_info.fp_opt = struct(...
    'qpsolver',         "osqp",...     % ipopt, ipopt_ma57, qrqp
    'dt_opt',           0.001,...
    'intg_opt',         "eul",...       % rk4, eul
    'N_steps_ahead',    1,...
    'ufp_stance_max',   [ufp_stance_max; 0; 0],...
    'ufp_stance_min',   [-ufp_stance_max; 0; 0],...
    'Q',                eye(1));

dt_opt = sym_info.fp_opt.dt_opt;         % time interval
intg_opt = sym_info.fp_opt.intg_opt;
N_steps_ahead = sym_info.fp_opt.N_steps_ahead;
Q = sym_info.fp_opt.Q;
sol_type = sym_info.fp_opt.qpsolver;

%% Dynamics
% Declare System Variables: constraint zc = kx*xc + ky*yc + z_H
xc = MX.sym('xc');  % relative position of center of mass w.r.t stance contact point
yc = MX.sym('yc');
Lx = MX.sym('Lx');
Ly = MX.sym('Ly');  % Angular momentum about contact point (stance foot)
x = [xc; yc; Lx; Ly];

% params
z_H_sym = MX.sym('z_H_sym');
kx_sym = MX.sym('kx_sym');
ky_sym = MX.sym('ky_sym');
k_sym = [kx_sym;ky_sym];
Lz_sym = MX.sym('Lz_sym');

% xcdot = (Ly + ky_sym*Lz_sym)/(m*z_H_sym);
% ycdot = (-Lx - kx_sym*Lz_sym)/(m*z_H_sym);
% Lxdot = -m*g*yc;
% Lydot = m*g*xc;     % lip model
% xdot = [xcdot; ycdot; Lxdot; Lydot];
A = [...
    0,      0,      0,          1/(m*z_H_sym);
    0,      0,      -1/(m*z_H_sym), 0;
    0,      -m*g,   0,          0;
    m*g,    0,      0,          0];
Kaff = [(ky_sym*Lz_sym)/(m*z_H_sym); -(kx_sym*Lz_sym)/(m*z_H_sym); 0; 0];
xdot = A * x + Kaff;


% Discrete time dynamics
if intg_opt == "eul"
    x_next_eul = x + xdot*dt_opt;
    fd_lip = Function('f_lip',{x,k_sym,z_H_sym,Lz_sym},{x_next_eul});
elseif intg_opt == "rk4"
    opts_intg = struct(...
        'tf',                           dt_opt,...
        'simplify',                     true,...
        'number_of_finite_elements',    4);
    dae = struct(...
        'x',    x,...
        'p',    [k_sym;z_H_sym;Lz_sym],...
        'ode',  xdot);
    intg = integrator('intg','rk',dae,opts_intg);
    result = intg('x0',x,'p',[k_sym;z_H_sym;Lz_sym]);
    x_next = result.xf;
    fd_lip = Function('f_lip',{x,k_sym,z_H_sym,Lz_sym},{x_next});
end
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
% slack_slip = opti.variable(1,1);
% slack_mech = opti.variable(1,1);

% parameters
p_x_init = opti.parameter(n_x,1);
p_Lx_des = opti.parameter(1,1);
p_Ly_des = opti.parameter(1,1);
p_z_H = opti.parameter(1,1);        % nominal z height of com
p_ufp_stance_max = opti.parameter(n_ufp,1);
p_ufp_stance_min = opti.parameter(n_ufp,1);
p_k = opti.parameter(2,1); % [kx; ky]
p_mu = opti.parameter(1,1); % friction coefficient
p_Lz_est = opti.parameter(1,1);
% p_ufp_init = opti.parameter(n_ufp,1);
% p_cos_alpha_x = opti.parameter(1,1);

% cost
opt_cost_L = {};

% initial conditions
X_k = X_traj(:,1);
n = 0;      % foot step iteration
x_eos = {};
x_bos = {};
k_pre_all = [];
k_post_all = [];
% xst_abs = 0;
% yst_abs = 0;

% xc_slip_limit = (p_mu + p_kx)*p_z_H / (1 - p_mu*p_kx);
% yc_slip_limit = (p_mu + p_ky)*p_z_H / (1 - p_mu*p_ky);

% pos_hip_to_com = [0;0];     % assume hip and com are same
% xc_mech_limit = 0.5 * (p_ufp_stance_max * p_cos_alpha_x) + pos_hip_to_com(1);

%% Inital Condition constraints
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
    
    % Mechanical constraint
    %     opti.subject_to(-xc_mech_limit - slack_mech <= X_k(1) <= xc_mech_limit + slack_mech);
    
    if (k == k_pre)
        x_eos = [x_eos, {X_k}];
        
        % Foot placement impact
        if k < N_k
            Xk_impact = [...
                X_k(1)-Ufp_traj(1,n+1);
                X_k(2)-Ufp_traj(2,n+1);
                X_k(3);
                X_k(4)];
            
            % GRF constraint
            %             opti.subject_to(-xc_slip_limit - slack_slip <= Xk_impact(1) <= xc_slip_limit + slack_slip);
            % Mechanical constraint
            %             opti.subject_to(-xc_mech_limit - slack_mech <= Xk_impact(1) <= xc_mech_limit + slack_mech);
            
            Xk_end = fd_lip(Xk_impact,p_k,p_z_H,p_Lz_est);
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
        end
        
        if k < N_k
            X_k = X_traj(:,k+1); % update state
        end
        k_pre_all = [k_pre_all, k_pre];  % store index
        
    elseif (k == k_post)
        x_bos = [x_bos, {X_k}];     % init state of n-th step
        Xk_end = fd_lip(X_k,p_k,p_z_H,p_Lz_est); % forward integrate to end of step
        X_k = X_traj(:,k+1);        % update state
        n = n + 1;                  % increase step counter
        k_post_all = [k_post_all, k_post];  % store index
    else
        Xk_end = fd_lip(X_k,p_k,p_z_H,p_Lz_est);
        X_k = X_traj(:,k+1);
    end
    
    if k < N_k
        opti.subject_to(X_k == Xk_end); % Dynamics equality constraint
    end
end

%% Foot Placement Constraints
% for n = 1:N_fp
%     % Foot placement constraint
%     opti.subject_to(p_ufp_stance_min(1:2) <= Ufp_traj(1:2,n) <= p_ufp_stance_max(1:2))
% end

%% Cost
yukai_method = true;
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
    opti.minimize(opt_cost_L_total);
    %     opti.minimize(opt_cost_L_total + 1e5.*slack_mech.^2);
    %     opti.minimize(opt_cost_L_total + opt_cost_stab);
    %     opti.minimize(opt_cost_avgvel_total + opt_cost_stab);
    
else % Yukai Method
    opti.subject_to(X_k(4) == p_Ly_des);
    opti.minimize(1);
end

%% Create an OPT solver
if sol_type == "qrqp"
    %% QRQP
    % C++ Code Generation
    opts = struct(...
        'qpsol',            'qrqp',...
        'print_iteration',  false,...
        'print_header',     false,...
        'print_time',       false);
    opts.qpsol_options = struct(...
        'error_on_fail',    false,...
        'print_iter',       false,...
        'print_header',     false,...
        'print_info',       false);
    opti.solver('sqpmethod',opts);
    
    if compile
        % code generation
        if yukai_method
            method = "y";
        else
            method = "g";
        end
        name_cg = char("fp_" + method + ...
            "_" + string(1000*t_step_period) + "ms" + ...
            "_" + sol_type +...
            "_" + intg_opt +...
            "_" + "dt" + extractAfter(string(dt_opt),"."));
        
        optvars = [reshape(X_traj,n_x*N_k,1); reshape(Ufp_traj,n_ufp*N_fp,1)];
        f_opti = opti.to_function(name_cg,{p_x_init,p_Lx_des,p_Ly_des,p_z_H,p_ufp_stance_max,p_ufp_stance_min,p_k,p_mu,p_Lz_est},{optvars});
        %     sqp_qrqp_solver.save('sqp_qrqp_solver.casadi');
        
        cg_options = struct();
        cg = CodeGenerator(name_cg,cg_options);
        cg.add(f_opti);
        disp('Generating C code...');
        tic
        cg.generate()
        movefile([name_cg '.c'],['gen/opt_solvers/' name_cg '.c'])
        disp("Generation time = " + toc);
        
%         disp("Compiling mex ...");
%         lib_path = GlobalOptions.getCasadiPath();
%         inc_path = GlobalOptions.getCasadiIncludePath();
%         tic
%         mex('-v',['-I' inc_path],['-L' lib_path],'-lcasadi', 'sqp_qrqp_solver.c')
%         disp("Compilation time = " + toc);
%         movefile('sqp_qrqp_solver.mexw64','gen/opt_solvers/sqp_qrqp_solver.mexw64')

        % clean up
        
    end
    
elseif sol_type == "osqp"
    %% OSQP
    opts = struct(...
        'qpsol',            'osqp',...
        'print_iteration',  false,...
        'print_header',     false,...
        'print_time',       false);    % osqp, qrqp (not as robust joris says on google groups)
    %     opts.qpsol_options.max_iter= 100;
    opti.solver('sqpmethod',opts);
    
    if compile
        % code generation
        optvars = [reshape(X_traj,n_x*N_k,1); reshape(Ufp_traj,n_ufp*N_fp,1)];
        f_opti = opti.to_function('sqp_osqp_solver',{p_x_init,p_Lx_des,p_Ly_des,p_z_H,p_ufp_stance_max,p_ufp_stance_min,p_k,p_mu,p_Lz_est},{optvars});
        
        if yukai_method
            method = "y";
        else
            method = "g";
        end
        name_cg = char("fp_" + method + ...
            "_" + string(1000*t_step_period) + "ms" + ...
            "_" + sol_type +...
            "_" + intg_opt +...
            "_" + "dt" + extractAfter(string(dt_opt),"."));
        cg_options = struct();
        cg = CodeGenerator(name_cg,cg_options);
        cg.add(f_opti);
        disp('Generating C code...');
        tic
        cg.generate()
        movefile([name_cg '.c'],['gen/opt_solvers/' name_cg '.c'])
        disp("Generation time = " + toc);
        
%         disp("Compiling mex ...");
%         lib_path = GlobalOptions.getCasadiPath();
%         inc_path = GlobalOptions.getCasadiIncludePath();
%         tic
%         mex('-v',['-I' inc_path],['-L' lib_path],'-lcasadi', 'sqp_osqp_solver.c')
%         disp("Compilation time = " + toc);
%         movefile('sqp_osqp_solver.mexw64','gen/opt_solvers/sqp_osqp_solver.mexw64')
    end
elseif sol_type == "ipopt"
    %% IPOPT (default)
    p_opts = struct(...
        'print_time',   0);
    s_opts = struct(...
        'print_level',              0,...
        'print_timing_statistics',  'no',...
        'print_info_string',        'no');
    opti.solver('ipopt',p_opts,s_opts);
%     f_opti = opti.to_function('F_sqp',{p_x_init,p_Lx_des,p_Ly_des,p_z_H,p_ufp_stance_max,p_ufp_stance_min,p_k,p_mu},{Ufp_traj});
elseif sol_type == "ipopt_ma57"
    %% IPOPT with ma57 linear solver
    p_opts = struct(...
        'print_time',   0);
    s_opts = struct(...
        'linear_solver',            'ma57',...
        'print_level',              0,...
        'print_timing_statistics',  'no',...
        'print_info_string',        'no');
    opti.solver('ipopt',p_opts,s_opts);
%     f_opti = opti.to_function('F_sqp',{p_x_init,p_Lx_des,p_Ly_des,p_z_H,p_ufp_stance_max,p_ufp_stance_min,p_k,p_mu},{Ufp_traj});
end

%% Return symbolics and solver
sym_info.fp_opt.N_fp = N_fp;
sym_info.fp_opt.N_k = N_k;
sym_info.fp_opt.fd_lip = fd_lip;
sym_info.fp_opt.opti = opti;
% sym_info.fp_opt.f_opti = f_opti;
sym_info.fp_opt.p_x_init = p_x_init;
sym_info.fp_opt.p_Lx_des = p_Lx_des;
sym_info.fp_opt.p_Ly_des = p_Ly_des;
sym_info.fp_opt.p_z_H = p_z_H;
sym_info.fp_opt.p_ufp_max = p_ufp_stance_max;
sym_info.fp_opt.p_ufp_min = p_ufp_stance_min;
sym_info.fp_opt.p_k = p_k;
sym_info.fp_opt.p_mu = p_mu;
sym_info.fp_opt.p_Lz_est = p_Lz_est;
% sym_info.fp_opt.p_ufp_init = p_ufp_init;
% sym_info.fp_opt.p_cos_alpha_x = p_cos_alpha_x;

sym_info.fp_opt.k_pre_all = k_pre_all;
sym_info.fp_opt.k_post_all = k_post_all;