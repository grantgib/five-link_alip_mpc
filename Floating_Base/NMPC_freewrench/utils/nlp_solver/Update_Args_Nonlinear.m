function args = Update_Args_Nonlinear(x_init,w_init,N,dyn_info,ref_info)

%% Extract variables
n_x = dyn_info.dim.n_x;
n_u = dyn_info.dim.n_u;
n_w = dyn_info.dim.n_w;
X_REF = ref_info.x_ref;
U_REF = ref_info.u_ref;
full_ref = ref_info.full_ref;

%% Bounds
% Relax bounds from trajectory generation for control
x_lb = [full_ref.bounds.RightStance.states.x.lb - 0.5*full_ref.bounds.RightStance.states.x.lb,...
    full_ref.bounds.RightStance.states.dx.lb - 0.5*full_ref.bounds.RightStance.states.dx.lb];
x_ub = [full_ref.bounds.RightStance.states.x.ub + 0.5*full_ref.bounds.RightStance.states.x.ub,...
    full_ref.bounds.RightStance.states.dx.ub + 0.5*full_ref.bounds.RightStance.states.dx.ub];

% Set control bounds
u_lb = full_ref.bounds.RightStance.inputs.Control.u.lb;
u_ub = full_ref.bounds.RightStance.inputs.Control.u.ub;

% Set Wrench bounds
w_lb = [-inf; -inf];
w_ub = [inf; inf];

%% Compute parameters vector
args = struct;
args.p(1:n_x) = x_init; % initial condition of the robot posture
args.p(n_x+1:n_x+n_w) = w_init;
for k = 1:N+1 %new - set the reference to          track
    args.p((k-1)*(n_x+n_u)+(n_x+n_w+1):(k-1)*(n_x+n_u)+(n_x+n_w+n_x)) = ...
        X_REF(:,k);
    args.p((k-1)*(n_x+n_u)+(n_x+n_x+n_w+1):(k-1)*(n_x+n_u)+(n_x+n_w+n_x+n_u)) =...
        U_REF(:,k);
end

%% Equality Constraints
% simulation later so it is an output of this function]
args.lbg(1:(n_x+n_w)*(N+1)+n_w) = 0; % Equality constraints
args.ubg(1:(n_x+n_w)*(N+1)+n_w) = 0; % Equality constraints

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







