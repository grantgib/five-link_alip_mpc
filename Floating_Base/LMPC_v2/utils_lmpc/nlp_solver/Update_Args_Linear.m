function args = Update_Args_Linear(dyn_info,ctrl_info,ref_info,constr_info,traj_info,delta_x_init,X_REF,U_REF,W_REF,X_REF_FULL)
%% Extract variables
n_q = dyn_info.dim.n_q;
n_x = dyn_info.dim.n_x;
n_u = dyn_info.dim.n_u;
n_w = dyn_info.dim.n_w;

full_ref = ref_info.full_ref;
s_func = ref_info.phase_based.s_func;
N = ctrl_info.lmpc_info.N;

index_impact = traj_info.idx_preimpact(1) + 1;     % index of X_REF where new ref begins and impact has just occurred

%% Bounds
x_lb = ref_info.x_lb;
x_ub = ref_info.x_ub;
u_lb = ref_info.u_lb;
u_ub = ref_info.u_ub;
w_lb = ref_info.w_lb;
w_ub = ref_info.w_ub;

%% Compute full_refeters vector
args = struct;
X_REF_vect = reshape(X_REF,n_x*size(X_REF,2),1);
U_REF_vect = reshape(U_REF,n_u*size(U_REF,2),1);
W_REF_vect = reshape(W_REF,n_w*size(W_REF,2),1);
args.p = [delta_x_init;
    X_REF_vect(1:n_x*(N+1),1);
    U_REF_vect(1:n_u*(N),1);
    W_REF_vect(1:n_w*(N),1)];

%% Equality Constraints
% Modify bound if impact is present
%   x(k+1) - x(k) = 0
%   x(k+1) can either be forward euler or impact map update. The solver implements the specific version

% initial condition
g_equality = zeros(n_x,1); % initial condition equality constraint

% euler/impact dynamics
for k = 1:N
        g_equality = [g_equality; zeros(n_x,1)];
end

% wrench
for k = 1:N
    g_equality = [g_equality; zeros(n_w,1)];
end

args.lbg = g_equality;
args.ubg = g_equality;

%% State and control bounds
delta_x_lb = repmat(x_lb,1,N+1) - X_REF(:,1:N+1);
delta_x_ub = repmat(x_ub,1,N+1) - X_REF(:,1:N+1);

delta_u_lb = repmat(u_lb,1,N) - U_REF(:,1:N);
delta_u_ub = repmat(u_ub,1,N) - U_REF(:,1:N);

delta_w_lb = repmat(w_lb,1,N) - W_REF(:,1:N);
delta_w_ub = repmat(w_ub,1,N) - W_REF(:,1:N);

args.delta_x_lb = delta_x_lb;
args.delta_x_ub = delta_x_ub;
args.delta_u_lb = delta_u_lb;
args.delta_u_ub = delta_u_ub;
args.delta_w_lb = delta_w_lb;
args.delta_w_ub = delta_w_ub;

args.lbx = [reshape(delta_x_lb,n_x*(N+1),1);
    reshape(delta_u_lb,n_u*(N),1);
    reshape(delta_w_lb,n_w*(N),1)];

args.ubx = [reshape(delta_x_ub,n_x*(N+1),1);
    reshape(delta_u_ub,n_u*(N),1);
    reshape(delta_w_ub,n_w*(N),1)];

%% Add additional Inequality constraints to g
if constr_info.obstacle.isObstacle
    lbg_sw = zeros(N+1,1);
    ubg_sw = zeros(N+1,1);
    obs_start = constr_info.obstacle.width(1);
    obs_end = constr_info.obstacle.width(2);
    obs_height = constr_info.obstacle.height;
    t_step = 0:ctrl_info.DT:N;
    s_init = full(s_func(x_init(1:n_q)));
    ds = 1.3033; % got from experiment (not sure what i meant here)
    for i = 1:N+1
        s_k(i) = s_init + ds*t_step(i);
        if s_k(i) > obs_start && s_k(i) < obs_end && traj_info.num_impacts == 0
            lbg_sw(i,1) = obs_height + traj_info.num_impacts*ref_info.step_height_dbl;
            ubg_sw(i,1) = inf;
        else
            lbg_sw(i,1) = -inf;
            ubg_sw(i,1) = inf;
        end
    end
    args.lbg = [args.lbg; lbg_sw];
    args.ubg = [args.ubg; ubg_sw];
end

%% Friction Cone Inequality
if constr_info.grf.active
    for k = 1:N
        mu = constr_info.grf.mu;
        lbg_fric = -mu;
        ubg_fric = mu;
        args.lbg = [args.lbg; lbg_fric];
        args.ubg = [args.ubg; ubg_fric];
    end
end

%% Torque Saturation
if constr_info.torque.sat
    u_max = constr_info.torque.sat*ones(n_u,1);
    u_min = -u_max;
    for k = 1:N
        args.lbg = [args.lbg; u_min];
        args.ubg = [args.ubg; u_max];
    end
end


