function [sym_info] = formulate_lip_fp_opt(sym_info,gait_info)
import casadi.*

%% Extract Inputs
% sym_info
g = sym_info.params.g;
m = sym_info.params.m;
n_x = 4;
n_ufp = 2;
f_xc_slip = sym_info.func.f_xc_slip_limit;
f_yc_slip = sym_info.func.f_yc_slip_limit;

% gait_info
t_step_period = gait_info.t_step_period;     % step period
z_H = gait_info.z_H;

% fp_opt
dt_opt = sym_info.fp_opt.dt_opt;         % time interval
intg_opt = sym_info.fp_opt.intg_opt;
N_steps_ahead = sym_info.fp_opt.N_steps_ahead;
Q = sym_info.fp_opt.Q;
sol_type = sym_info.fp_opt.qpsolver;

%% Discrete Dynamics Derivation
% Declare System Variables: constraint zc = kx*xc + ky*yc + z_H
xc = SX.sym('xc');  % relative position of center of mass w.r.t stance contact point
yc = SX.sym('yc');
Lx = SX.sym('Lx');
Ly = SX.sym('Ly');  % Angular momentum about contact point (stance foot)
x = [xc; yc; Lx; Ly];

% params
z_H_sym = SX.sym('z_H_sym');

A = [...
    0,      0,      0,              1/(m*z_H_sym);  % xcdot
    0,      0,      -1/(m*z_H_sym), 0;          % ycdot
    0,      -m*g,   0,              0;              % Lxdot
    m*g,    0,      0,              0];             % Lydot
xdot = A * x;

% Discrete time dynamics
if intg_opt == "eul"
    x_next_eul = x + xdot*dt_opt;
    fd_lip = Function('f_lip',{x,z_H_sym},{x_next_eul});
elseif intg_opt == "rk4" % casadi rk4 integrator checked gives same results as my old one
    opts_intg = struct(...
        'tf',                           dt_opt,...
        'simplify',                     true,...
        'number_of_finite_elements',    4);
    dae = struct(...
        'x',    x,...
        'p',    z_H_sym,...
        'ode',  xdot);
    intg = integrator('intg','rk',dae,opts_intg);
    result = intg('x0',x,'p',z_H_sym);
    x_next = result.xf;
    fd_lip = Function('f_lip',{x,z_H_sym},{x_next});
end

%% Terminal Cost ~ Recursive Feasibility
term_cost_info = struct(...
    'm',        m,...
    'g',        g,...
    'z_H',      z_H,...
    'Ts',       t_step_period);
Pf = compute_terminal_costs(term_cost_info);
Pf = 100 * Pf;

%% Formulate Optimization Problem for Left Stance
% Intermediate optimization variables
N_fp = N_steps_ahead;                       % # of foot placements to compute
k_step = (t_step_period / dt_opt);          % # k iterations per step
N_k = round((N_steps_ahead * k_step)+1);    % total number of iters

% Opti Stack
opti_LS = casadi.Opti();

% opt vars
X_traj = opti_LS.variable(n_x,N_k);
Ufp_traj = opti_LS.variable(n_ufp,N_fp);

% parameters
p_x_init = opti_LS.parameter(n_x,1);
p_Ly_des = opti_LS.parameter(1,1);
p_z_H = opti_LS.parameter(1,1);        % nominal z height of com
p_ufp_stance_max = opti_LS.parameter(n_ufp,1);
p_ufp_stance_min = opti_LS.parameter(n_ufp,1);
p_k = opti_LS.parameter(2,1); % [kx; ky]
p_mu = opti_LS.parameter(1,1); % friction coefficient
p_stanceLeg = opti_LS.parameter(1,1); % left_stance = -1
p_leg_width = opti_LS.parameter(1,1);
p_Lx_offset = opti_LS.parameter(1,1);

% Intermediate parameters
l = sqrt(g/p_z_H);

% Compute xc_des
xc_des = (1/(m*p_z_H*l))*tanh(l*t_step_period/2)*p_Ly_des;

% Compute yc, Lx desired
stance_sign = p_stanceLeg;
for i = 1:N_fp
    % start with the desired values at next step so if in left stance then the first des
    % should correspond to those of right stance
    % Left Stance: yc = -W/2, Lx = + 0.5*m*H*W*l*tanh(Ts*l/2)
    % Right Stance: yc = W/2, Ly = - 0.5*m*H*W*l*tanh(Ts*l/2)
    yc_des_traj{i} = stance_sign * (-p_leg_width / 2);
    Lx_des_traj{i} = p_Lx_offset + stance_sign * (0.5*m*p_z_H*p_leg_width*l*tanh(0.5*t_step_period*l));
    stance_sign = -stance_sign;
end

% cost
opt_cost_L = {};

% initial conditions
X_k = X_traj(:,1);
n = 0;              % foot step iteration
x_eos = {};         % cell of states at end of each step
x_bos = {};         % cell of states at beginning of each step
k_pre_all = [];     % iteration indices for all states "pre" impact
k_post_all = [];    % iteratoin indices for all states "post" impact

% constraint parameters
xc_mech_limit = p_ufp_stance_max(1) / 2;
xc_slip_limit = f_xc_slip(p_z_H,p_mu,p_k(1));
yc_slip_limit = f_yc_slip(p_z_H,p_mu,p_k(2));

%% Inital Condition constraints
% Initial condition constraint
opti_LS.subject_to(X_traj(:,1) == p_x_init);

%% Dynamics
for k = 1:N_k
    k_pre = round(n*(k_step)+1); % iterate pre-impact
    k_post = k_pre + 1;     % iterate post-impact
    
    if (k == k_pre)
        x_eos = [x_eos, {X_k}];
        k_pre_all = [k_pre_all, k_pre];  % store index
        
        if n > 0 % only consider constraint at end or impact since ufp is uncontrollable during step
            opti_LS.subject_to(-xc_mech_limit <= X_traj(1,k) <= xc_mech_limit);
            opti_LS.subject_to(-xc_slip_limit <= X_traj(1,k) <= xc_slip_limit);   % GRF
            opti_LS.subject_to(-yc_slip_limit <= X_traj(2,k) <= yc_slip_limit);
        end
        
        % Foot placement impact
        if k < N_k
            Xk_impact = [...
                X_k(1)-Ufp_traj(1,n+1);
                X_k(2)-Ufp_traj(2,n+1);
                X_k(3);
                X_k(4)];
            Xk_end = fd_lip(Xk_impact,p_z_H); % update
            
            % Apply constraints at impact (assume instantaneousely)
            opti_LS.subject_to(-xc_slip_limit <= Xk_impact(1) <= xc_slip_limit);   % GRF
            opti_LS.subject_to(-yc_slip_limit <= Xk_impact(2) <= yc_slip_limit);   % GRF
            opti_LS.subject_to(-xc_mech_limit <= Xk_impact(1) <= xc_mech_limit);   % mech
        end
        
        % Running cost (do not include initial/final state)
        if n > 0 && n < N_fp
            % L cost
            p_yc_des = yc_des_traj{n};
            p_Lx_des = Lx_des_traj{n};
            L_error = X_k - [xc_des; p_yc_des; p_Lx_des; p_Ly_des];
            opt_cost_L = [opt_cost_L, {L_error'*Q(n)*L_error}];
        end
        
        % Do not update the state on the last loop
        if k < N_k
            X_k = X_traj(:,k+1); % update state
        end
    elseif (k == k_post)
        x_bos = [x_bos, {X_k}];     % init state of n-th step
        Xk_end = fd_lip(X_k,p_z_H); % forward integrate to end of step
        X_k = X_traj(:,k+1);        % update state
        n = n + 1;                  % increase step counter
        k_post_all = [k_post_all, k_post];  % store index
    else
        Xk_end = fd_lip(X_k,p_z_H);
        X_k = X_traj(:,k+1);
    end
    if k < N_k
        opti_LS.subject_to(X_k == Xk_end); % Dynamics equality constraint
    end
end

%% COM Position Constraints 
% removed and added constraints only at the end and impact of each step to
% eliminate constraints. ufp is uncontrollable during step so these are the
% only constraints needed in the QP. For nonlinear solvers in the future it
% might be useful to include some of these at increments throughout the
% step to help the solver from deviating too much
% for k = 1:N_k
%     if k > 1    % dont constrain initial condition
%         opti_LS.subject_to(-xc_mech_limit <= X_traj(1,k) <= xc_mech_limit);
%         opti_LS.subject_to(-xc_slip_limit <= X_traj(1,k) <= xc_slip_limit);   % GRF
%         opti_LS.subject_to(-yc_slip_limit <= X_traj(2,k) <= yc_slip_limit);   % GRF
%     end
% end

%% Cost
mpc_method = true;
if mpc_method
    % sum running costs
    opt_cost_L_total = sum(vertcat(opt_cost_L{:}));
    
    % terminal cost
    p_yc_des = yc_des_traj{n};
    p_Lx_des = Lx_des_traj{n};
    X_error_terminal = X_traj(:,end) - [xc_des; p_yc_des; p_Lx_des; p_Ly_des];
    opt_cost_terminal = X_error_terminal' * Pf * X_error_terminal;
    
    % cost function
    %     opti.minimize(opt_cost_L_total);  % Fails without terminal cost since
    %     the final value is omitted
    opti_LS.minimize(opt_cost_L_total + opt_cost_terminal);
    
else % Yukai Method ( requires 1-step prediction horizon which is currently broken due to FP constraints and lateral desired trajectory generation at the beginning)
    %     opti_LS.subject_to(X_traj(3,end) == Lx_des_traj{end});
    %     opti_LS.subject_to(X_traj(4,end) == p_Ly_des);
    %     opti_LS.minimize(1);
end

%% Copy Opti for both LS and RS. Different fp constraints next...
opti_RS = opti_LS.copy();

%% Foot Placement Constraints
% Ufp x foot placement constraint
for n = 1:N_fp
    opti_LS.subject_to(p_ufp_stance_min(1) <= Ufp_traj(1,n) <= p_ufp_stance_max(1))
    opti_RS.subject_to(p_ufp_stance_min(1) <= Ufp_traj(1,n) <= p_ufp_stance_max(1))
end

% Ufp y foot placement constraints... need to correct for signage depending
% on stance foot
% if in LS next fp constr is -ufpy_max <= ufpy <= -ufpy_min
% if in RS next fp constr is ufpy_min <= ufpy <= ufpy_max
ufp_y_max = p_ufp_stance_max(2); % absolute values
ufp_y_min = p_ufp_stance_min(2); % absolute value (always positive)
% Left Stance
for n = 1:2:N_fp
    % y foot placement constraint (don't allow crossover)
    opti_LS.subject_to(-ufp_y_max <= Ufp_traj(2,n) <= -ufp_y_min);
    opti_LS.subject_to(ufp_y_min <= Ufp_traj(2,n+1) <= ufp_y_max);
end
% Right Stance
for n = 1:2:N_fp
    opti_RS.subject_to(ufp_y_min <= Ufp_traj(2,n) <= ufp_y_max);
    opti_RS.subject_to(-ufp_y_max <= Ufp_traj(2,n+1) <= -ufp_y_min);
end

%% Choose Opti solver
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
    opti_LS.solver('sqpmethod',opts);
    opti_RS.solver('sqpmethod',opts);
    
    % code generation
    if sym_info.fp_opt.for_cassie
        if sym_info.fp_opt.with_torso
            robot_name = "CassieTorso";
        else
            robot_name = "Cassie";
        end
    else
        robot_name = "Rabbit";
    end
    name_cg_LS = char("fp_LS_" + "N" + N_steps_ahead + ...
        "_" + string(1000*t_step_period) + "ms" + ...
        "_" + sol_type +...
        "_" + intg_opt +...
        "_dt" + string(1000*dt_opt) + "ms" + ...
        "_" + robot_name);
    f_opti_LS = opti_LS.to_function(name_cg_LS,{X_traj,Ufp_traj,p_x_init,p_Ly_des,p_z_H,p_ufp_stance_max,p_ufp_stance_min,p_k,p_mu,p_stanceLeg,p_leg_width,p_Lx_offset},{X_traj,Ufp_traj});
    
    name_cg_RS = char("fp_RS_" + "N" + N_steps_ahead + ...
        "_" + string(1000*t_step_period) + "ms" + ...
        "_" + sol_type +...
        "_" + intg_opt +...
        "_dt" + string(1000*dt_opt) + "ms" + ...
        "_" + robot_name);
    f_opti_RS = opti_RS.to_function(name_cg_RS,{X_traj,Ufp_traj,p_x_init,p_Ly_des,p_z_H,p_ufp_stance_max,p_ufp_stance_min,p_k,p_mu,p_stanceLeg,p_leg_width,p_Lx_offset},{X_traj,Ufp_traj});
    
    if sym_info.fp_opt.compile_src
        cg_options = struct();
        cg = CodeGenerator(name_cg_LS,cg_options);
        cg.add(f_opti_LS);
        disp('Generating C code...');
        tic
        cg.generate()
        movefile([name_cg_LS '.c'],['gen/opt_solvers/' name_cg_LS '.c'])
        disp("Generation time = " + toc);
        
        % Right stance solver
        cg_options = struct();
        cg = CodeGenerator(name_cg_RS,cg_options);
        cg.add(f_opti_RS);
        disp('Generating C code...');
        tic
        cg.generate()
        movefile([name_cg_RS '.c'],['gen/opt_solvers/' name_cg_RS '.c'])
        disp("Generation time = " + toc);
    end
    
    if sym_info.fp_opt.compile_mex
%         optvars = [reshape(X_traj,n_x*N_k,1); reshape(Ufp_traj,n_ufp*N_fp,1)];
%         f_opti_LS = opti_LS.to_function(name_cg_LS,{p_x_init,p_Ly_des,p_z_H,p_ufp_stance_max,p_ufp_stance_min,p_k,p_mu,p_stanceLeg,p_leg_width,p_Lx_offset},{optvars});
%         cg_options = struct();
%         cg_options.mex = true; % must add!!!
%         cg = CodeGenerator(name_cg_LS,cg_options);
%         cg.add(f_opti_LS);
%         disp('Generating c code...');
%         tic
%         cg.generate()
%         movefile([name_cg_LS '.c'],['gen/opt_solvers/' name_cg_LS '.c'])
%         disp("Generation time = " + toc);
%         disp('Generating mex code...');
%         tic
%         cd gen/opt_solvers
%         mex [name_cg_LS '.c'] -largeArrayDims
%         disp("Generation time = " + toc);
%         
%         % Right stance solver
%         optvars = [reshape(X_traj,n_x*N_k,1); reshape(Ufp_traj,n_ufp*N_fp,1)];
%         f_opti_RS = opti_RS.to_function(name_cg_RS,{p_x_init,p_Ly_des,p_z_H,p_ufp_stance_max,p_ufp_stance_min,p_k,p_mu,p_stanceLeg,p_leg_width,p_Lx_offset},{optvars});
%         cg_options = struct();
%         cg_options.mex = true;
%         cg = CodeGenerator(name_cg_RS,cg_options);
%         cg.add(f_opti_RS);
%         disp('Generating mex code...');
%         tic
%         cg.generate()
%         movefile([name_cg_RS '.c'],['gen/opt_solvers/' name_cg_RS '.c'])
%         disp("Generation time = " + toc);
%         disp('Generating mex code...');
%         tic
%         mex [name_cg_RS '.c'] -largeArrayDims
%         disp("Generation time = " + toc);
%         
%         cd ../../
    end
    
elseif sol_type == "osqp"
    %% OSQP
    opts = struct(...
        'qpsol',            'osqp',...
        'print_iteration',  false,...
        'print_header',     false,...
        'print_time',       false);    % osqp, qrqp (not as robust joris says on google groups)
    opti_LS.solver('sqpmethod',opts);
    opti_RS.solver('sqpmethod',opts);
    %     if compile
    %         % code generation
    %         if yukai_method
    %             method = "Y";
    %         else
    %             method = "G";
    %         end
    %         name_cg_LS = char("osqptest" + method);
    % %         name_cg = char("fp_" + method + ...
    % %             "_" + string(1000*t_step_period) + "ms" + ...
    % %             "_" + sol_type +...
    % %             "_" + intg_opt +...
    % %             "_" + "dt" + extractAfter(string(dt_opt),"."));
    %
    %         optvars = [reshape(X_traj,n_x*N_k,1); reshape(Ufp_traj,n_ufp*N_fp,1)];
    %         f_opti_LS = opti_LS.to_function(name_cg_LS,{p_x_init,p_Lx_des,p_Ly_des,p_z_H,p_ufp_stance_max,p_ufp_stance_min,p_k,p_mu,p_Lz_est},{optvars});
    %         cg_options = struct();
    %         cg = CodeGenerator(name_cg_LS,cg_options);
    %         cg.add(f_opti_LS);
    %         disp('Generating C code...');
    %         tic
    %         cg.generate()
    %         movefile([name_cg_LS '.c'],['gen/opt_solvers/' name_cg_LS '.c'])
    %         disp("Generation time = " + toc);
    %
    %     end
    
elseif sol_type == "ipopt"
    %% IPOPT (default)
    p_opts = struct(...
        'print_time',   0);
    s_opts = struct(...
        'print_level',              0,...
        'print_timing_statistics',  'no',...
        'print_info_string',        'no');
    opti_LS.solver('ipopt',p_opts,s_opts);
    opti_RS.solver('ipopt',p_opts,s_opts);
elseif sol_type == "ipopt_ma57"
    %% IPOPT with ma57 linear solver
    p_opts = struct(...
        'print_time',   0);
    s_opts = struct(...
        'linear_solver',            'ma57',...
        'print_level',              0,...
        'print_timing_statistics',  'no',...
        'print_info_string',        'no');
    opti_LS.solver('ipopt',p_opts,s_opts);
    opti_RS.solver('ipopt',p_opts,s_opts);
end

%% Return symbolics and solver
sym_info.fp_opt.N_fp = N_fp;
sym_info.fp_opt.N_k = N_k;
sym_info.fp_opt.fd_lip = fd_lip;

sym_info.fp_opt.f_opti_LS = f_opti_LS;
sym_info.fp_opt.f_opti_RS = f_opti_RS;
sym_info.fp_opt.opti_LS = opti_LS;
sym_info.fp_opt.opti_RS = opti_RS;
sym_info.fp_opt.opt_X_traj = X_traj;
sym_info.fp_opt.opt_Ufp_traj = Ufp_traj;

sym_info.fp_opt.p_x_init = p_x_init;
sym_info.fp_opt.p_Ly_des = p_Ly_des;
sym_info.fp_opt.p_z_H = p_z_H;
sym_info.fp_opt.p_ufp_max = p_ufp_stance_max;
sym_info.fp_opt.p_ufp_min = p_ufp_stance_min;
sym_info.fp_opt.p_k = p_k;
sym_info.fp_opt.p_mu = p_mu;
sym_info.fp_opt.p_stanceLeg = p_stanceLeg;
sym_info.fp_opt.p_leg_width = p_leg_width;
sym_info.fp_opt.p_Lx_offset = p_Lx_offset;

sym_info.fp_opt.k_pre_all = k_pre_all;
sym_info.fp_opt.k_post_all = k_post_all;

