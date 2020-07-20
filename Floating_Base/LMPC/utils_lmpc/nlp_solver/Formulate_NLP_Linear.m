function [ctrl_info] = Formulate_NLP_Linear(dyn_info,ctrl_info,ref_info,constr_info)
import casadi.*
% Formulate NLP
%   * Symbolically create the objective function and equality constraints
%   (dynamics)
%   * Set the settings for the IPOPT solver
%   * Set numerical bounds on the decision variables and equality
%   constraints

%% Extract input variables
% dyn_info
n_x = dyn_info.dim.n_x;
n_u = dyn_info.dim.n_u;
n_w = dyn_info.dim.n_w;

% mpc_info
lmpc_info = ctrl_info.lmpc_info;
N = lmpc_info.N;

%% IPOPT settings
lmpc_info.opts = struct;
lmpc_info.opts.ipopt.print_level = 0;
lmpc_info.opts.print_time = 0;
lmpc_info.opts.ipopt.acceptable_tol = 1e-8;
lmpc_info.opts.ipopt.acceptable_obj_change_tol = 1e-8;
lmpc_info.opts.ipopt.acceptable_constr_viol_tol = 1e-8;

% warm start
lmpc_info.opts.ipopt.warm_start_init_point = 'yes';
lmpc_info.opts.ipopt.warm_start_bound_push = 1e-6;
lmpc_info.opts.ipopt.warm_start_mult_bound_push = 1e-6;
lmpc_info.opts.ipopt.mu_init = 1e-6;

% Cost and constraint simplification options
% mpc_info.opts.ipopt.hessian_constant = 'yes';

% Iteration/time simplification
% mpc_info.opts.ipopt.max_cpu_time = 0.5;

%% Nonlinear Program Formulation
[nlp_info] = Objective_Constraints_Linear(dyn_info,ctrl_info,ref_info,constr_info,N);

% Extract nlp_info
dX_dec = nlp_info.dX_dec;
dU_dec = nlp_info.dU_dec;
dW_dec = nlp_info.dW_dec;
P_delta_xinit = nlp_info.P_delta_xinit;
P_xref = nlp_info.P_xref;
P_uref = nlp_info.P_uref;
P_wref = nlp_info.P_wref;
g_constraints = nlp_info.g_constraints;
cost_sum = nlp_info.cost_sum;
cost_running = nlp_info.cost_running;
cost_terminal = nlp_info.cost_terminal;

% Settings
% Decision variables to optimize
DEC_variables = [reshape(dX_dec,n_x*(N+1),1);
    reshape(dU_dec,n_u*(N+1),1);
    reshape(dW_dec,n_w*(N+1),1)];
P = [P_delta_xinit;
    reshape(P_xref,n_x*(N+1),1);
    reshape(P_uref,n_u*(N+1),1);
    reshape(P_wref,n_w*(N+1),1)];

% Formulate nlp
nlp_prob = struct('f',cost_sum,...
    'x',DEC_variables,...
    'g',g_constraints,...
    'p', P);

% Setup solver
solver_NL = nlpsol('solver', 'ipopt', nlp_prob, lmpc_info.opts);

% Update mpc_info
lmpc_info.dX_dec = dX_dec;
lmpc_info.dU_dec = dU_dec;
lmpc_info.dW_dec = dW_dec;
lmpc_info.P_delta_xinit = P_delta_xinit;
lmpc_info.P_xref = P_xref;
lmpc_info.P_uref = P_uref;
lmpc_info.P = P;
lmpc_info.obj = cost_sum;
lmpc_info.cost_running = cost_running;
lmpc_info.cost_terminal = cost_terminal;
lmpc_info.g_dec = g_constraints;
lmpc_info.solvers_NL = solver_NL;
lmpc_info.DEC_variables = DEC_variables;
lmpc_info.Q = nlp_info.Q_mat;
lmpc_info.R = nlp_info.R_mat;
lmpc_info.C = nlp_info.C_mat;
ctrl_info.lmpc_info = lmpc_info;

