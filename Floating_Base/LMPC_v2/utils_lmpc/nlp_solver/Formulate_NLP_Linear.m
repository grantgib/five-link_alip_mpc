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
% mpc_info.opts.ipopt.jac_c_constant = 'yes';  %Indicates whether all equality constraints are linear
% mpc_info.opts.ipopt.jac_d_constant = 'yes';  % Indicates whether all inequality constraints are linear
% linear equality constraints option

% Iteration/time simplification
% mpc_info.opts.ipopt.max_cpu_time = 0.5;

%% Nonlinear Program Formulation
[program_info,g_constraints] = Objective_Constraints_Linear(dyn_info,ctrl_info,ref_info,constr_info,N);

% Decision variables and reference data
DEC_variables = [reshape(program_info.dX_dec,n_x*(N+1),1);
    reshape(program_info.dU_dec,n_u*(N+1),1);
    reshape(program_info.dW_dec,n_w*(N+1),1)];

P = [program_info.P_delta_xinit;
    reshape(program_info.P_xref,n_x*(N+1),1);
    reshape(program_info.P_uref,n_u*(N+1),1);
    reshape(program_info.P_wref,n_w*(N+1),1)];

% Setup solver
nlp_prob = cell(N+1,1);
solvers_linear = cell(N+1,1);
disp("CREATING SOLVERS...");
for imp = 1:N+1
    nlp_prob{imp} = struct('f',  program_info.cost_sum,...
                      'x',  DEC_variables,...
                      'g',  g_constraints{imp},...
                      'p',  P);
    solvers_linear{imp} = nlpsol('solver', 'ipopt', nlp_prob{imp}, lmpc_info.opts);
    disp("Solver made for Impact in Prediction Horizon at N = " + (imp-1));
end

% Update mpc_info
lmpc_info.nlp_info = program_info;
lmpc_info.Q = program_info.Q_mat;
lmpc_info.R = program_info.R_mat;
lmpc_info.C = program_info.C_mat;
lmpc_info.DEC_variables = DEC_variables;
lmpc_info.P = P;
lmpc_info.solvers_linear = solvers_linear;
ctrl_info.lmpc_info = lmpc_info;

