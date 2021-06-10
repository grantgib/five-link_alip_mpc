function args = Update_Args_Nonlinear(dyn_info,ctrl_info,ref_info,constr_info,traj_info,x_init)
%% Extract variables
n_q = dyn_info.dim.n_q;
n_x = dyn_info.dim.n_x;
n_u = dyn_info.dim.n_u;
n_w = dyn_info.dim.n_w;

N = ctrl_info.N;
full_ref = ref_info.full_ref;

%% Bounds
x_lb = ref_info.x_lb;
x_ub = ref_info.x_ub;
u_lb = ref_info.u_lb;
u_ub = ref_info.u_ub;
w_lb = ref_info.w_lb;
w_ub = ref_info.w_ub;

%% State and control bounds
% state
for i = 1:n_x
    args.lbx(i:n_x:n_x*(N+1),1) = x_lb(i);
    args.ubx(i:n_x:n_x*(N+1),1) = x_ub(i);
end
% control
for i = 1:n_u
    args.lbx(n_x*(N+1)+i:n_u:n_x*(N+1)+n_u*(N+1),1) = u_lb(i);
    args.ubx(n_x*(N+1)+i:n_u:n_x*(N+1)+n_u*(N+1),1) = u_ub(i);
end
% wrench
for i = 1:n_w
    args.lbx((n_x+n_u)*(N+1)+i:n_w:(n_x+n_u+n_w)*(N+1)) = w_lb(i);
    args.ubx((n_x+n_u)*(N+1)+i:n_w:(n_x+n_u+n_w)*(N+1)) = w_ub(i);
end

%% Add additional Inequality constraints to g   %% NOT WORKING
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
    for k = 1:N+1
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
    for k = 1:N+1
        args.lbg = [args.lbg; u_min];
        args.ubg = [args.ubg; u_max];
    end
end


