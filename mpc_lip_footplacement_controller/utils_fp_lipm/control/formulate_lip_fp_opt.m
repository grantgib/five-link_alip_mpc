function [sym_info] = formulate_lip_fp_opt(sym_info,gait_info,compile)
import casadi.*

%% Extract Inputs
% sym_info
g = sym_info.params.g;
m = sym_info.params.m;

n_x = 4;
n_ufp = 2;

% gait_info
t_step_period = gait_info.t_step_period;     % step period

% ctrl_info
dt_opt = sym_info.fp_opt.dt_opt;         % time interval
intg_opt = sym_info.fp_opt.intg_opt;
N_steps_ahead = sym_info.fp_opt.N_steps_ahead;
Q = sym_info.fp_opt.Q;
sol_type = sym_info.fp_opt.qpsolver;

%% Dynamics
% Declare System Variables: constraint zc = kx*xc + ky*yc + z_H
xc = SX.sym('xc');  % relative position of center of mass w.r.t stance contact point
yc = SX.sym('yc');
Lx = SX.sym('Lx');
Ly = SX.sym('Ly');  % Angular momentum about contact point (stance foot)
x = [xc; yc; Lx; Ly];

% params
z_H_sym = SX.sym('z_H_sym');
kx_sym = SX.sym('kx_sym');
ky_sym = SX.sym('ky_sym');
k_sym = [kx_sym;ky_sym];
Lz_sym = SX.sym('Lz_sym');

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

%% Terminal Cost ~ Recursive Feasibility
term_cost_info = struct(...
    'm',        m,...
    'g',        g,...
    'z_H',      0.6,...
    'Ts',       t_step_period);
Pf = compute_terminal_costs(term_cost_info);
Pf = 100 * Pf;

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

% Intermediate parameters
l = sqrt(g/p_z_H);
p_xc_des = (1/(m*p_z_H*l))*tanh(l*t_step_period/2)*p_Ly_des;
%     yc_des = compute_yc_des(p_Lx_des);
%     xc_des = 0;
p_yc_des = 0;
p_x_des = [p_xc_des; p_yc_des; p_Lx_des; p_Ly_des];

% cost
opt_cost_L = {};

% initial conditions
X_k = X_traj(:,1);
n = 0;      % foot step iteration
x_eos = {};     % cell of states at end of each step
x_bos = {};         % cell of states at beginning of each step
k_pre_all = [];     % iteration indices for all states "pre" impact
k_post_all = [];    % iteratoin indices for all states "post" impact

%% Inital Condition constraints
% Initial condition constraint
opti.subject_to(X_traj(:,1) == p_x_init);

%% Dynamics
for k = 1:N_k
    k_pre = round(n*(k_step)+1); % iterate pre-impact
    k_post = k_pre + 1;     % iterate post-impact
    
    if (k == k_pre)
        x_eos = [x_eos, {X_k}];
        
        % Foot placement impact
        if k < N_k
            Xk_impact = [...
                X_k(1)-Ufp_traj(1,n+1);
                X_k(2)-Ufp_traj(2,n+1);
                X_k(3);
                X_k(4)];
            Xk_end = fd_lip(Xk_impact,p_k,p_z_H,p_Lz_est); % update
            
            % Constraints
%             opti.subject_to(-xc_slip_limit - slack_slip <= Xk_impact(1) <= xc_slip_limit + slack_slip);   % GRF
%             opti.subject_to(-xc_mech_limit - slack_mech <= Xk_impact(1) <= xc_mech_limit + slack_mech); % mech
        end
        
        % Cost
        if n > 0 && n < N_fp
            % L cost
            L_error = X_k - p_x_des;
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
yukai_method = false;
if ~yukai_method   
    % sum running costs
    opt_cost_L_total = sum(vertcat(opt_cost_L{:}));
    
    % terminal cost

    X_error_terminal = X_traj(:,end) - [p_xc_des; p_yc_des; p_Lx_des; p_Ly_des];
    opt_cost_terminal = X_error_terminal' * Pf * X_error_terminal;
    
    % cost function
    opti.minimize(opt_cost_L_total + opt_cost_terminal);
%     opti.minimize(opt_cost_terminal);

    % archive costs
%     opti.minimize(opt_cost_L_total + 1e6.*slack_slip.^2 + 1e6.*slack_mech.^2);
%     opti.minimize(opt_cost_L_total + 1e5.*slack_mech.^2);
    
else % Yukai Method
    opti.subject_to(X_traj(3,end) == p_Lx_des);
    opti.subject_to(X_traj(4,end) == p_Ly_des);
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
        'print_iter',       false,...
        'print_header',     false,...
        'print_info',       false);
    opti.solver('sqpmethod',opts);
    
    if compile
        % code generation
        if yukai_method
            method = "Y";
        else
            method = "G";
        end
        name_cg = char("qrqptest" + method);
%         name_cg = char("fp_" + method + ...
%             "_" + string(1000*t_step_period) + "ms" + ...
%             "_" + sol_type +...
%             "_" + intg_opt +...
%             "_" + "dt" + extractAfter(string(dt_opt),"."));
        
        optvars = [reshape(X_traj,n_x*N_k,1); reshape(Ufp_traj,n_ufp*N_fp,1)];
        f_opti = opti.to_function(name_cg,{p_x_init,p_Lx_des,p_Ly_des,p_z_H,p_ufp_stance_max,p_ufp_stance_min,p_k,p_mu,p_Lz_est},{optvars});
        cg_options = struct();
        cg = CodeGenerator(name_cg,cg_options);
        cg.add(f_opti);
        disp('Generating C code...');
        tic
        cg.generate()
        movefile([name_cg '.c'],['gen/opt_solvers/' name_cg '.c'])
        disp("Generation time = " + toc);
              
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
        if yukai_method
            method = "Y";
        else
            method = "G";
        end
        name_cg = char("osqpest" + method);
%         name_cg = char("fp_" + method + ...
%             "_" + string(1000*t_step_period) + "ms" + ...
%             "_" + sol_type +...
%             "_" + intg_opt +...
%             "_" + "dt" + extractAfter(string(dt_opt),"."));
        
        optvars = [reshape(X_traj,n_x*N_k,1); reshape(Ufp_traj,n_ufp*N_fp,1)];
        f_opti = opti.to_function(name_cg,{p_x_init,p_Lx_des,p_Ly_des,p_z_H,p_ufp_stance_max,p_ufp_stance_min,p_k,p_mu,p_Lz_est},{optvars});
        cg_options = struct();
        cg = CodeGenerator(name_cg,cg_options);
        cg.add(f_opti);
        disp('Generating C code...');
        tic
        cg.generate()
        movefile([name_cg '.c'],['gen/opt_solvers/' name_cg '.c'])
        disp("Generation time = " + toc);
              
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
end

%% Return symbolics and solver
sym_info.fp_opt.N_fp = N_fp;
sym_info.fp_opt.N_k = N_k;
sym_info.fp_opt.fd_lip = fd_lip;
sym_info.fp_opt.opti = opti;
sym_info.fp_opt.opt_X_traj = X_traj;
sym_info.fp_opt.opt_Ufp_traj = Ufp_traj;
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

