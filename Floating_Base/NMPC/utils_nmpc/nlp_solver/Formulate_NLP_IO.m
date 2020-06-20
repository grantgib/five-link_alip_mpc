function [ctrl_info] = Formulate_NLP_IO(dyn_info,ctrl_info,ref_info,constr_info)
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
mpc_info = ctrl_info.mpc_info;
N = mpc_info.N;

% IO_info
IO_info = ctrl_info.IO_info;
if IO_info.linear
    N = 0;
end

%% IPOPT settings
mpc_info.opts = struct;
mpc_info.opts.ipopt.print_level = 0;
mpc_info.opts.print_time = 0;
mpc_info.opts.ipopt.acceptable_tol = 1e-8;
mpc_info.opts.ipopt.acceptable_obj_change_tol = 1e-8;
mpc_info.opts.ipopt.acceptable_constr_viol_tol = 1e-8;
% warm start
mpc_info.opts.ipopt.warm_start_init_point = 'yes';
mpc_info.opts.ipopt.warm_start_bound_push = 1e-6;
mpc_info.opts.ipopt.warm_start_mult_bound_push = 1e-6;
mpc_info.opts.ipopt.mu_init = 1e-6;

mpc_info.opts.ipopt.hessian_constant = 'yes';
% mpc_info.opts.ipopt.max_cpu_time = 0.5;

%% Nonlinear Program Formulation
[nlp_info] = Objective_Constraints_IO(dyn_info,ctrl_info,ref_info,constr_info,N);

% Extract nlp_info
X_dec = nlp_info.X_dec;
U_dec = nlp_info.U_dec;
W_dec = nlp_info.W_dec;
P_xinit = nlp_info.P_xinit;
P_xref = nlp_info.P_xref;
P_uref = nlp_info.P_uref;
g_constraints = nlp_info.g_constraints;
cost_sum = nlp_info.cost_sum;
cost_running = nlp_info.cost_running;
cost_terminal = nlp_info.cost_terminal;

% Settings
% Decision variables to optimize
DEC_variables = [reshape(X_dec,n_x*(N+1),1);
    reshape(U_dec,n_u*(N+1),1);
    reshape(W_dec,n_w*(N+1),1)];
P = [P_xinit;
    reshape(P_xref,n_x*(N+1),1);
    reshape(P_uref,n_u*(N+1),1)];

% Formulate nlp
nlp_prob = struct('f',cost_sum,...
    'x',DEC_variables,...
    'g',g_constraints,...
    'p', P);

% Setup solver
solver_NL = nlpsol('solver', 'ipopt', nlp_prob, mpc_info.opts);

% Update mpc_info
mpc_info.X_dec = X_dec;
mpc_info.U_dec = U_dec;
mpc_info.P_xinit = P_xinit;
mpc_info.P_xref = P_xref;
mpc_info.P_uref = P_uref;
mpc_info.P = P;
mpc_info.obj = cost_sum;
mpc_info.cost_running = cost_running;
mpc_info.cost_terminal = cost_terminal;
mpc_info.g_dec = g_constraints;
mpc_info.solvers_NL = solver_NL;
mpc_info.DEC_variables = DEC_variables;
mpc_info.Q = nlp_info.Q_mat;
mpc_info.R = nlp_info.R_mat;
mpc_info.C = nlp_info.C_mat;
ctrl_info.mpc_info = mpc_info;
