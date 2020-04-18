function [mpc_info] = Formulate_NLP_TrajectoryTracking_IO(dyn_info,mpc_info,ref_info)
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
N = mpc_info.N;

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
P_dec_all = cell(N,1);
obj_all = cell(N,1);
obj_vector_all = cell(N,1);
g_dec_all = cell(N,1);
solver_NL_all = cell(N,1);

% Calculate all possible sizes for the decision variables and solvers so
% that we can implement a shrinking horizon so that the reference
% trajectory is not extrapolated (which would turn it to a regulator
% problem that we don't want)
for i = 1:1%mpc_info.N
    % Compute symbolic variables of quadratic program for N = 1:maxN.
    % stored in cells (used when implementing shrinking horizon
    
    [X_dec_all{i},U_dec_all{i},W_dec_all{i},P_dec_all{i},obj_all{i},g_dec_all{i},obj_vector_all{i},Q,R,C] = ...
        Objective_Constraints_IO(dyn_info,mpc_info,ref_info,N);
    
    % Settings
    % Decision variables to optimize
    DEC_variables{i} = [reshape(X_dec_all{i},n_x*(N+1),1);
        reshape(U_dec_all{i},n_u*(N+1),1);
        reshape(W_dec_all{i},n_w*(N+1),1)];
    
    % Formulate nlp
    nlp_prob = struct('f', obj_all{i},'x',DEC_variables{i},...
        'g',g_dec_all{i},'p', P_dec_all{i});
    
    % Setup solver
    solver_NL_all{i} = nlpsol('solver', 'ipopt', nlp_prob, mpc_info.opts);
    
    N = N - 1;
end

% Update mpc_info
mpc_info.X_dec = X_dec_all;
mpc_info.U_dec = U_dec_all;
mpc_info.P_dec = P_dec_all;
mpc_info.obj = obj_all;
mpc_info.g_dec = g_dec_all;
mpc_info.solvers_NL = solver_NL_all;
mpc_info.DEC_variables = DEC_variables;
mpc_info.Q = Q;
mpc_info.R = R;
mpc_info.C = C;


