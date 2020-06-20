function args = Update_Args_Nonlinear(dyn_info,ctrl_info,ref_info,constr_info,traj_info,x_init,N,X_REF,U_REF,X_REF_FULL)
%% Extract variables
n_q = dyn_info.dim.n_q;
n_x = dyn_info.dim.n_x;
n_u = dyn_info.dim.n_u;
n_w = dyn_info.dim.n_w;
full_ref = ref_info.full_ref;
s_func = ref_info.phase_based.s_func;

index_impact = traj_info.idx_preimpact(1) + 1;     % index of X_REF where new ref begins and impact has just occurred

%% Bounds
% Relax bounds from trajectory generation for control
relax_percent = 0.50;
x_lb = [full_ref.bounds.RightStance.states.x.lb - relax_percent*abs(full_ref.bounds.RightStance.states.x.lb),...
    full_ref.bounds.RightStance.states.dx.lb - relax_percent*abs(full_ref.bounds.RightStance.states.dx.lb)];
x_ub = [full_ref.bounds.RightStance.states.x.ub + relax_percent*abs(full_ref.bounds.RightStance.states.x.ub),...
    full_ref.bounds.RightStance.states.dx.ub + relax_percent*abs(full_ref.bounds.RightStance.states.dx.ub)]; 

x_lb(1:2) = [-inf, -inf];   % bound should not exist for climbing up steps or should at minimum update with each impact (not done yet)
x_ub(1:2) = [inf, inf];     % condition shouldnt exist for step climbing

% Set control bounds
if ~ctrl_info.IO_info.linear
    u_percent = 10;
    u_lb = u_percent*full_ref.bounds.RightStance.inputs.Control.u.lb;
    u_ub = u_percent*full_ref.bounds.RightStance.inputs.Control.u.ub;
else
    u_lb = full_ref.bounds.RightStance.inputs.Control.u.lb;
    u_ub = full_ref.bounds.RightStance.inputs.Control.u.ub;
end

% Set Wrench bounds
w_lb = [-inf; 0.01];
w_ub = [1e15; 1e15];

%% Compute full_refeters vector
args = struct;
X_REF_vect = reshape(X_REF,n_x*size(X_REF,2),1);
U_REF_vect = reshape(U_REF,n_u*size(U_REF,2),1);
args.p = [x_init;
    X_REF_vect(1:n_x*(N+1),1);
    U_REF_vect(1:n_u*(N+1),1)];
% args.p(1:n_x) = x_init; % initial condition of the robot posture
% for k = 1:N+1 %   
%     args.p((k-1)*(n_x+n_u)+(n_x+1):(k-1)*(n_x+n_u)+(n_x+n_x)) = ...
%         X_REF(:,k);
%     args.p((k-1)*(n_x+n_u)+(n_x+n_x+1):(k-1)*(n_x+n_u)+(n_x+n_x+n_u)) =...
%         U_REF(:,k);
% end

%% Equality Constraints
g_equality = zeros(n_x,1); % initial condition equality constraint
for k = 1:N+1
    g_equality = [g_equality; zeros(n_w,1)];
    if k < N+1
        if k+(traj_info.iter_impact) == index_impact
            x_impact = X_REF_FULL(:,index_impact);
            x_forward_euler = X_REF_FULL(:,index_impact-1);
            impact_offset = x_impact - x_forward_euler;
            g_equality = [g_equality; impact_offset];
        elseif k == 1 && traj_info.iter_impact >= index_impact
            x_impact = X_REF_FULL(:,index_impact);
            x_forward_euler = X_REF_FULL(:,index_impact-1);
            impact_offset = x_impact - x_forward_euler;
            g_equality = [g_equality; impact_offset];
        else
            g_equality = [g_equality; zeros(n_x,1)];
        end
    end
end
args.lbg = g_equality;
args.ubg = g_equality;

% args.lbg(1:(n_x)*(N+1)+n_w*(N+1),1) = 0; % Equality constraints
% args.ubg(1:(n_x)*(N+1)+n_w*(N+1),1) = 0; % Equality constraints

% Modify bound if impact is present 
%   x(k+1) - x(k) = f(x(k)) - f'(x(k)) = bg(idx_preimpact+1)
%   f  ~ continuous dynamics
%   f' ~ impact map and relabel
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
    ds = 1.3033; % got from experiment
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


