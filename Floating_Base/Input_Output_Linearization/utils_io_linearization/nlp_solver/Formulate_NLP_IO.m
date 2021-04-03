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
[nlp_info,g_constraints] = Objective_Constraints_IO(dyn_info,ctrl_info,ref_info,constr_info,N);

% Decision variables and reference data
DEC_variables = [reshape(nlp_info.X_dec,n_x*(N+1),1);
    reshape(nlp_info.U_dec,n_u*(N+1),1);
    reshape(nlp_info.W_dec,n_w*(N+1),1)];

P = [nlp_info.P_xinit;
    reshape(nlp_info.P_xref,n_x*(N+1),1);
    reshape(nlp_info.P_uref,n_u*(N+1),1)];

% Setup solver
nlp_prob = cell(N+1,1);
solvers_NLP = cell(N+1,1);
for imp = 1:N+1
    nlp_prob{imp} = struct('f',  nlp_info.cost_sum,...
                      'x',  DEC_variables,...
                      'g',  g_constraints{imp},...
                      'p',  P);
    solvers_NLP{imp} = nlpsol('solver', 'ipopt', nlp_prob{imp}, mpc_info.opts);
end



% Update mpc_info
mpc_info.nlp_info = nlp_info;
mpc_info.Q = nlp_info.Q_mat;
mpc_info.R = nlp_info.R_mat;
mpc_info.C = nlp_info.C_mat;
mpc_info.DEC_variables = DEC_variables;
mpc_info.P = P;
mpc_info.solvers_NLP = solvers_NLP;
ctrl_info.mpc_info = mpc_info;

