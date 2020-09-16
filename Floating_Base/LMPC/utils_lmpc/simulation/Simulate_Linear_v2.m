function [traj_info,ctrl_info] = ...
    Simulate_Linear_v2(dyn_info,ctrl_info,ref_info,constr_info)
import casadi.*

%% Extract inputs
% dyn_info
n_q = dyn_info.dim.n_q;
n_x = dyn_info.dim.n_x;
n_u = dyn_info.dim.n_u;
n_w = dyn_info.dim.n_w;
f_pos_swingfoot = dyn_info.func.f_pos_swing;
f_pos_stancefoot = dyn_info.func.f_pos_stance;

% ctrl_info
DT = ctrl_info.DT;

% mpc_info
lmpc_info = ctrl_info.lmpc_info;
N = lmpc_info.N;
% solvers_linear = lmpc_info.solvers_linear;

% ref_info
delta_x_init = ref_info.delta_x_init;
X_REF_Original = ref_info.x_ref;
U_REF_Original = ref_info.u_ref;
W_REF_Original = ref_info.w_ref;
num_steps = ref_info.num_steps;
s_func = ref_info.phase_based.s_func;

%% Initialize Variables
% traj_info struct
traj_info.num_impacts = 0;

% reference trajectories
X_REF = X_REF_Original;
U_REF = U_REF_Original;
W_REF = W_REF_Original;
traj_info.idx_preimpact = size(X_REF,2);
for idx = 1:ctrl_info.step_look_ahead
    x_ref_temp = X_REF_Original + ...
        [(X_REF(1:2,end)-X_REF(1:2,1)).*(ones(2,size(X_REF_Original,2)));
        zeros(n_x-2,size(X_REF_Original,2))];
    u_ref_temp = U_REF_Original;
    w_ref_temp = W_REF_Original;
    X_REF = [X_REF, x_ref_temp];
    U_REF = [U_REF, u_ref_temp];
    W_REF = [W_REF, w_ref_temp];
    traj_info.idx_preimpact = [traj_info.idx_preimpact, size(X_REF,2)];
end
X_REF_FULL = X_REF;
U_REF_FULL = U_REF;
W_REF_FULL = W_REF;

% Initial conditions
x_init = X_REF(:,1) + delta_x_init;
ctrl_info.iter = 1;            % simulation iteration number (proportional to t_current)
traj_info.iter_impact = 1;
t_init = 0;
time_traj(1) = t_init;
traj_size = 1000;

% ref storage
x_ref_traj = [];
w_ref_traj = [];
u_ref_traj = [];

% Initialize storage variables
time_calc = [];

delta_x_traj = [];
delta_u_traj = [];
delta_w_traj = [];
delta_x_traj_all = zeros(n_x,N+1,traj_size);    % stores entire solution from IPOPT at each timestep
delta_u_traj_all = zeros(n_u,N,traj_size);
delta_w_traj_all = zeros(n_w,N,traj_size);

x_traj = [];
u_traj = [];
w_traj = [];
x_traj_all = zeros(n_x,N+1,traj_size);    % stores entire solution from IPOPT at each timestep
u_traj_all = zeros(n_u,N,traj_size);
w_traj_all = zeros(n_w,N,traj_size);

% bounds traj (the delta bounds are varying because of the linearization)
delta_x_lb_traj_all = zeros(n_x,N+1,traj_size);
delta_x_ub_traj_all = zeros(n_x,N+1,traj_size);
delta_u_lb_traj_all = zeros(n_u,N,traj_size);
delta_u_ub_traj_all = zeros(n_u,N,traj_size);
delta_w_lb_traj_all = zeros(n_w,N,traj_size);
delta_w_ub_traj_all = zeros(n_w,N,traj_size);

x_lb_traj_all = zeros(n_x,N+1,traj_size);
x_ub_traj_all = zeros(n_x,N+1,traj_size);
u_lb_traj_all = zeros(n_u,N,traj_size);
u_ub_traj_all = zeros(n_u,N,traj_size);
w_lb_traj_all = zeros(n_w,N,traj_size);
w_ub_traj_all = zeros(n_w,N,traj_size);

x_lb_traj_actual = zeros(n_x,N+1,traj_size);
x_ub_traj_actual = zeros(n_x,N+1,traj_size);
u_lb_traj_actual = zeros(n_u,N,traj_size);
u_ub_traj_actual = zeros(n_u,N,traj_size);
w_lb_traj_actual = zeros(n_w,N,traj_size);
w_ub_traj_actual = zeros(n_w,N,traj_size);

% phase storage
s_traj = full(s_func(x_init(1:n_q)));

% impact storage
impact_traj = [];

% foot positions
y_sw_init = full(f_pos_swingfoot(x_init(1:7)))';
y_sw_traj = y_sw_init;
y_st_traj = full(f_pos_stancefoot(x_init(1:7)))';
y_sw_normal = [0;0];

%% Main Loop
while(traj_info.num_impacts < num_steps && ctrl_info.iter < num_steps*size(X_REF_Original,2))
    index_impact = traj_info.idx_preimpact(1) + 1;     % index of X_REF where new ref begins and impact has just occurred
    
    %% qpSWIFT solver
%     [P,c,alpha,beta,G,H] = Build_QP_Matrices(dyn_info,ctrl_info,delta_x_init,X_REF,U_REF,W_REF);
%     [P,c,alpha,beta,G,H] = Build_QP_Matrices(dyn_info,ctrl_info,randn(n_x,1),X_REF,U_REF,W_REF);
% 
%     p = size(alpha,1);
%     m = size(G,1);
%     Phi = [P alpha' G'; alpha zeros(p ,m + p);G zeros(m,p) -eye(m,m)];
%     Permut = amd(Phi);
%     opts.MAXITER = 200;
%     opts.ABSTOL = 1e-6;
%     opts.RELTOL = 1e-6;
%     opts.PERMUT = Permut;
%     [sol,basic_info,adv_info] = qpSWIFT(sparse(P),c,sparse(alpha),beta,sparse(G),H,opts)
%     
    
    %% Quadprog solver
    args = Update_Args_Linear(dyn_info,ctrl_info,ref_info,constr_info,traj_info,delta_x_init,X_REF,U_REF,W_REF,X_REF_FULL);
%     args = Update_Args_Linear_v2(dyn_info,ctrl_info,ref_info,constr_info,traj_info,delta_x_init,X_REF,U_REF,W_REF,X_REF_FULL);

    
    [P,c,Aeq,beq,A,B] = Build_QP_Matrices(dyn_info,ctrl_info,randn(n_x,1),X_REF,U_REF,W_REF);
%     [P,c,Aeq,beq,A,B] = Build_QP_Matrices_v2(dyn_info,ctrl_info,randn(n_x,1),X_REF,U_REF,W_REF);
    
    solver_comp_time = tic;    % Start solver computation timer
    [sol,FVAL,EXITFLAG,output] = quadprog(2*P,c,A,B,Aeq,beq)
    time_calc = [time_calc, toc(solver_comp_time)];           % Store solver time
    
    % Extract solution
    delta_x_sol_mpc = reshape(sol(1:(N+1)*n_x,1),n_x,N+1);
    delta_u_sol_mpc = reshape(sol((N+1)*n_x+1:(N+1)*n_x+N*n_u,1),n_u,N);
    delta_w_sol_mpc = reshape(sol((N+1)*n_x+N*n_u+1:end,1),n_w,N);
    u_sol_mpc = U_REF(:,1:N) + delta_u_sol_mpc;
    w_sol_mpc = W_REF(:,1:N) + delta_w_sol_mpc;
    
    sol_info = struct('t_init',             t_init,...
        'delta_x_init',       delta_x_init,...
        'delta_x_sol_mpc',    delta_x_sol_mpc,...
        'delta_u_sol_mpc',    delta_u_sol_mpc,...
        'delta_w_sol_mpc',    delta_w_sol_mpc,...
        'x_init',             x_init,...
        'u_sol_mpc',          u_sol_mpc,...
        'w_sol_mpc',          w_sol_mpc,...
        'X_REF',              X_REF,...
        'U_REF',              U_REF,...
        'W_REF',              W_REF);

    
    %% Apply control & Update state (includes check/update for impacts)
    params = struct('y_sw_traj', y_sw_traj);
    [t_next,x_next,impact_occurred] = Update_State(dyn_info,ctrl_info,ref_info,constr_info,sol_info,traj_info,params);
    %     [t_next,x_next,impact_occurred] = Update_State_Linear(dyn_info,ctrl_info,ref_info,constr_info,sol_info,traj_info,params);
    delta_x_next = x_next - X_REF(:,2);
    u_sol = U_REF(:,1) + delta_u_sol_mpc(:,1);
    w_sol = W_REF(:,1) + delta_w_sol_mpc(:,1);
    y_sw_next = full(f_pos_swingfoot(x_next(1:7)))';
    y_st_next = full(f_pos_stancefoot(x_next(1:7)))';
    
    if impact_occurred
        % Update impact counter
        traj_info.num_impacts = traj_info.num_impacts + 1;
        traj_info.iter_impact = 0;
        disp("-> Step # " + traj_info.num_impacts);
    end
    
    %% Store trajectory and time
    % reference traj
    x_ref_traj = [x_ref_traj, X_REF(:,1)];
    u_ref_traj = [u_ref_traj, U_REF(:,1)];
    w_ref_traj = [w_ref_traj, W_REF(:,1)];
    
    % delta and actual traj
    delta_x_traj = [delta_x_traj, delta_x_init];
    delta_u_traj = [delta_u_traj, delta_u_sol_mpc(:,1)];
    delta_w_traj = [delta_w_traj, delta_w_sol_mpc(:,1)];
    delta_x_traj_all(:,:,ctrl_info.iter) = delta_x_sol_mpc;
    delta_u_traj_all(:,:,ctrl_info.iter) = delta_u_sol_mpc;
    delta_w_traj_all(:,:,ctrl_info.iter) = delta_w_sol_mpc;
    
    x_traj = [x_traj, x_init];
    u_traj = [u_traj, u_sol];
    w_traj = [w_traj, w_sol];
    x_traj_all(:,:,ctrl_info.iter) = X_REF(:,1:N+1) + delta_x_traj_all(:,:,ctrl_info.iter);
    u_traj_all(:,:,ctrl_info.iter) = U_REF(:,1:N) + delta_u_traj_all(:,:,ctrl_info.iter);
    w_traj_all(:,:,ctrl_info.iter) = W_REF(:,1:N) + delta_w_traj_all(:,:,ctrl_info.iter);
    
    % bound traj
    delta_x_lb_traj_all(:,:,ctrl_info.iter) = args.delta_x_lb;
    delta_x_ub_traj_all(:,:,ctrl_info.iter) = args.delta_x_ub;
    delta_u_lb_traj_all(:,:,ctrl_info.iter) = args.delta_u_lb;
    delta_u_ub_traj_all(:,:,ctrl_info.iter) = args.delta_u_ub;
    delta_w_lb_traj_all(:,:,ctrl_info.iter) = args.delta_w_lb;
    delta_w_ub_traj_all(:,:,ctrl_info.iter) = args.delta_w_ub;
    
    x_lb_traj_all(:,:,ctrl_info.iter) = X_REF(:,1:N+1) + delta_x_lb_traj_all(:,:,ctrl_info.iter);
    x_ub_traj_all(:,:,ctrl_info.iter) = X_REF(:,1:N+1) + delta_x_ub_traj_all(:,:,ctrl_info.iter);
    u_lb_traj_all(:,:,ctrl_info.iter) = U_REF(:,1:N) + delta_u_lb_traj_all(:,:,ctrl_info.iter);
    u_ub_traj_all(:,:,ctrl_info.iter) = U_REF(:,1:N) + delta_u_ub_traj_all(:,:,ctrl_info.iter);
    w_lb_traj_all(:,:,ctrl_info.iter) = W_REF(:,1:N) + delta_w_lb_traj_all(:,:,ctrl_info.iter);
    w_ub_traj_all(:,:,ctrl_info.iter) = W_REF(:,1:N) + delta_w_ub_traj_all(:,:,ctrl_info.iter);
    
    x_lb_traj_actual(:,:,ctrl_info.iter) = repmat(ref_info.x_lb,1,N+1);
    x_ub_traj_actual(:,:,ctrl_info.iter) = repmat(ref_info.x_ub,1,N+1);
    u_lb_traj_actual(:,:,ctrl_info.iter) = repmat(ref_info.u_lb,1,N);
    u_ub_traj_actual(:,:,ctrl_info.iter) = repmat(ref_info.u_ub,1,N);
    w_lb_traj_actual(:,:,ctrl_info.iter) = repmat(ref_info.w_lb,1,N);
    w_ub_traj_actual(:,:,ctrl_info.iter) = repmat(ref_info.w_ub,1,N);
    
    %     disp(x_lb_traj_actual(:,:,ctrl_info.iter) - x_lb_traj_all(:,:,ctrl_info.iter))
    
    % Time traj
    time_traj(ctrl_info.iter) = t_init;
    
    % # of impacts traj
    impact_traj = [impact_traj, traj_info.num_impacts];
    
    % store foot positions
    y_sw_traj = [y_sw_traj, y_sw_next];
    y_st_traj = [y_st_traj, y_st_next];
    
    % store phasing variable  (WRONG)
    s_traj = [s_traj, 0];
    
    %% Update state and time, warm start, shift reference
    t_init = t_next;
    delta_x_init = delta_x_next;
    x_init = x_next;
    
    ctrl_info.iter = ctrl_info.iter + 1;  % update iteration counter
    traj_info.iter_impact = traj_info.iter_impact + 1;
    
    % Update solver guess
    delta_X_guess = [delta_x_sol_mpc(:,2:N+1), delta_x_sol_mpc(:,N+1)];
    delta_U_guess = [delta_u_sol_mpc(:,2:end), delta_u_sol_mpc(:,end)];
    delta_W_guess = [delta_w_sol_mpc(:,2:end), delta_w_sol_mpc(:,end)];
    
    % Change reference if impact occurred
    if impact_occurred
        %         X_REF_FULL = X_REF_FULL + ...
        %             [(X_REF(1:2,1) - X_REF_FULL(1:2,1)).*ones(2,size(X_REF_FULL,2));
        %             zeros(12,size(X_REF_FULL,2))];
        X_REF_FULL = X_REF_FULL + ...
            [(x_next(1:2,1) - X_REF_FULL(1:2,1)).*ones(2,size(X_REF_FULL,2));
            zeros(12,size(X_REF_FULL,2))];
        X_REF = X_REF_FULL;
        U_REF = U_REF_FULL;
        W_REF = W_REF_FULL;
    end
    
    % Shift X_REF and U_REF to account for updated reference trajectory
    X_REF = X_REF(:,2:end);
    U_REF = U_REF(:,2:end);
    W_REF = W_REF(:,2:end);
    
    % Print every n iterations
    if mod(ctrl_info.iter-1,10) == 0
        if constr_info.torque.sat
            disp("Iteration = " + (ctrl_info.iter-1) + " (Torque Saturated at " + constr_info.torque.sat + " N-m)");
        else
            disp("Iteration = " + (ctrl_info.iter-1));
        end
    end
end
% Finish updating trajectory and time after loop finishes
delta_x_traj = [delta_x_traj, delta_x_next];
x_traj = [x_traj, x_next];
x_ref_traj = [x_ref_traj, X_REF(:,1)]; % X_REF has been shifted so the next reference is the first column
time_traj(end+1) = time_traj(end) + DT;
impact_traj = [impact_traj, traj_info.num_impacts];

%% End of Simulation Calculations
x_traj_final_error = x_traj(:,end) - x_ref_traj(:,end);
x_traj_final_error_norm = norm(x_traj_final_error,2);
avg_calc_time = mean(time_calc);
x_traj_error = vecnorm((x_traj - x_ref_traj)')';

disp('************** Trajectory Statistics **************')
disp("Trajectory error (2-norm) = ")
disp(x_traj_error);

disp("-> Final trajectory error (2-norm) = " + x_traj_final_error_norm);
disp("-> Average MPC Calculation Time = " + avg_calc_time);

% disp("State Penalty (Q)"); disp(mpc_info.Q);
% disp("Control Inputs Penalty (R)"); disp(mpc_info.R);


%% Update function outputs
traj_info.time_traj = time_traj;

traj_info.x_ref_traj = x_ref_traj;
traj_info.u_ref_traj = u_ref_traj;
traj_info.w_ref_traj = w_ref_traj;

traj_info.delta_x_traj = delta_x_traj;
traj_info.delta_u_traj = delta_u_traj;
traj_info.delta_w_traj = delta_w_traj;
traj_info.delta_x_traj_all = delta_x_traj_all;
traj_info.delta_u_traj_all = delta_u_traj_all;
traj_info.delta_w_traj_all = delta_w_traj_all;
traj_info.delta_x_lb_traj = delta_x_lb_traj_all;
traj_info.delta_x_ub_traj = delta_x_ub_traj_all;
traj_info.delta_u_lb_traj = delta_u_lb_traj_all;
traj_info.delta_u_ub_traj = delta_u_ub_traj_all;
traj_info.delta_w_lb_traj = delta_w_lb_traj_all;
traj_info.delta_w_ub_traj = delta_w_ub_traj_all;

traj_info.x_traj = x_traj;
traj_info.u_traj = u_traj;
traj_info.w_traj = w_traj;
traj_info.x_traj_all = x_traj_all;
traj_info.u_traj_all = u_traj_all;
traj_info.w_traj_all = w_traj_all;
traj_info.x_lb_traj = delta_x_lb_traj_all;
traj_info.x_ub_traj = delta_x_ub_traj_all;
traj_info.u_lb_traj = delta_u_lb_traj_all;
traj_info.u_ub_traj = delta_u_ub_traj_all;
traj_info.w_lb_traj = delta_w_lb_traj_all;
traj_info.w_ub_traj = delta_w_ub_traj_all;

traj_info.y_sw = y_sw_traj;
traj_info.y_st = y_st_traj;
traj_info.y_sw_normal = y_sw_normal;

traj_info.s_traj = s_traj;
traj_info.impact_traj = impact_traj;

traj_info.stats.time_calc = time_calc;
traj_info.stats.x_traj_final_error = x_traj_final_error;
traj_info.stats.avg_calc_time = avg_calc_time;
traj_info.stats.x_traj_error = x_traj_error;

lmpc_info.args = args;
ctrl_info.lmpc_info = lmpc_info;

end