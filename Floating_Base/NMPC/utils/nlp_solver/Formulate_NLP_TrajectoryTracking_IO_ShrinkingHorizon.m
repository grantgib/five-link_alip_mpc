function [ctrl_info] = Formulate_NLP_TrajectoryTracking_IO_ShrinkingHorizon(dyn_info,ctrl_info,ref_info,constr_info)
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
% mpc_info.opts.ipopt.max_iter = 20000;
mpc_info.opts.ipopt.print_level = 0;
mpc_info.opts.print_time = 0;
mpc_info.opts.ipopt.acceptable_tol = 1e-8;
mpc_info.opts.ipopt.acceptable_obj_change_tol = 1e-8;
mpc_info.opts.ipopt.acceptable_constr_viol_tol = 1e-20;

%% Nonlinear Formulation

DEC_variables = cell(N,1);
X_dec_all = cell(N,1);
U_dec_all = cell(N,1);
W_dec_all = cell(N,1);
P_all = cell(N,1);
P_xinit_all = cell(N,1);
P_xref_all = cell(N,1);
P_uref_all = cell(N,1);
g_constraints_all = cell(N,1);
cost_sum_all = cell(N,1);
cost_running_all = cell(N,1);
cost_terminal_all = cell(N,1);
solver_NL_all = cell(N,1);

% Calculate all possible sizes for the decision variables and solvers so
% that we can implement a shrinking horizon so that the reference
% trajectory is not extrapolated (which would turn it to a regulator
% problem that we don't want)
for i = 1:1%mpc_info.N
    % Compute symbolic variables of quadratic program for N = 1:maxN.
    % stored in cells (used when implementing shrinking horizon
    [nlp_info] = Objective_Constraints_IO(dyn_info,ctrl_info,ref_info,constr_info,N);
    
    % Extract nlp_info
    X_dec_all{i} = nlp_info.X_dec;
    U_dec_all{i} = nlp_info.U_dec;
    W_dec_all{i} = nlp_info.W_dec;
    P_xinit_all{i} = nlp_info.P_xinit;
    P_xref_all{i} = nlp_info.P_xref;
    P_uref_all{i} = nlp_info.P_uref;
    g_constraints_all{i} = nlp_info.g_constraints;
    cost_sum_all{i} = nlp_info.cost_sum;
    cost_running_all{i} = nlp_info.cost_running;
    cost_terminal_all{i} = nlp_info.cost_terminal;

    % Settings
    % Decision variables to optimize
    DEC_variables{i} = [reshape(X_dec_all{i},n_x*(N+1),1);
        reshape(U_dec_all{i},n_u*(N+1),1);
        reshape(W_dec_all{i},n_w*(N+1),1)];
    P_all{i} = [P_xinit_all{i};
        reshape(P_xref_all{i},n_x*(N+1),1);
        reshape(P_uref_all{i},n_u*(N+1),1)];
    
    % Formulate nlp
    nlp_prob = struct('f',cost_sum_all{i},...
        'x',DEC_variables{i},...
        'g',g_constraints_all{i},...
        'p', P_all{i});
    
    % Setup solver
    solver_NL_all{i} = nlpsol('solver', 'ipopt', nlp_prob, mpc_info.opts);
    
    disp("N = " + N + " is done formulating");
    N = N - 1;
end

% Update mpc_info
mpc_info.X_dec = X_dec_all;
mpc_info.U_dec = U_dec_all;
mpc_info.P_xinit = P_xinit_all;
mpc_info.P_xref = P_xref_all;
mpc_info.P_uref = P_uref_all;
mpc_info.P = P_all;
mpc_info.obj = cost_sum_all;
mpc_info.cost_running = cost_running_all;
mpc_info.cost_terminal = cost_terminal_all;
mpc_info.g_dec = g_constraints_all;
mpc_info.solvers_NL = solver_NL_all;
mpc_info.DEC_variables = DEC_variables;
mpc_info.Q = nlp_info.Q_mat;
mpc_info.R = nlp_info.R_mat;
mpc_info.C = nlp_info.C_mat;
ctrl_info.mpc_info = mpc_info;

