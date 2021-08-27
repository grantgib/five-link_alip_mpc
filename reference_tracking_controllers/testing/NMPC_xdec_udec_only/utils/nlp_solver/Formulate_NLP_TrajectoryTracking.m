function [mpc_info] = Formulate_NLP_TrajectoryTracking(dyn_info,mpc_info,ref_info)
% Formulate NLP
%   * Symbolically create the objective function and equality constraints
%   (dynamics)
%   * Set the settings for the IPOPT solver
%   * Set numerical bounds on the decision variables and equality
%   constraints
import casadi.*

%% Extract
% dyn_info
n_q = dyn_info.dim.n_q;
n_x = dyn_info.dim.n_x;
n_u = dyn_info.dim.n_u;
f_nonlinear = dyn_info.func.f_NL;
E_nonlinear = dyn_info.func.E_NL;
H_nonlinear = dyn_info.func.H_NL;
use_descriptor = dyn_info.descriptor;

% ref_info
param = ref_info.full_ref;

%% IPOPT settings
mpc_info.opts = struct;
% opts.ipopt.max_iter = 2000;
mpc_info.opts.ipopt.print_level =0;%0,3
mpc_info.opts.print_time = 0;
% opts.ipopt.acceptable_tol =1e-8;
% opts.ipopt.acceptable_obj_change_tol = 1e-6;

%% Nonlinear Formulation
N = mpc_info.N;
DT = mpc_info.DT;
DEC_variables = cell(N,1);
X_dec_all = cell(N,1);
U_dec_all = cell(N,1);
P_dec_all = cell(N,1);
obj_all = cell(N,1);
g_dec_all = cell(N,1);
solver_NL_all = cell(N,1);

% Calculate all possible sizes for the decision variables and solvers so
% that we can implement a shrinking horizon so that the reference
% trajectory is not extrapolated (which would turn it to a regulator
% problem that we don't want)
for i = 1:mpc_info.N
    % Compute symbolic variables of quadratic program
    [X_dec_all{i},U_dec_all{i},P_dec_all{i},obj_all{i},g_dec_all{i}] = Objective_Constraints_Nonlinear(dyn_info,mpc_info,ref_info,N);
    
    % Settings
    % Decision variables to optimize
    DEC_variables{i} = [reshape(X_dec_all{i},n_x*(N+1),1);reshape(U_dec_all{i},n_u*(N+1),1)];
    
    % Formulate nlp
    nlp_prob = struct('f', obj_all{i}, 'x', DEC_variables{i}, 'g', g_dec_all{i}, 'p', P_dec_all{i});
    
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

