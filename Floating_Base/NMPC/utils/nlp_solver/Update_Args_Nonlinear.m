function args = Update_Args_Nonlinear(dyn_info,ref_info,x_init,N,X_REF,U_REF)
%% Extract variables
n_x = dyn_info.dim.n_x;
n_u = dyn_info.dim.n_u;
n_w = dyn_info.dim.n_w;
full_ref = ref_info.full_ref;

%% Bounds
% Relax bounds from trajectory generation for control
relax_percent = 0.05;
x_lb = [full_ref.bounds.RightStance.states.x.lb - relax_percent*abs(full_ref.bounds.RightStance.states.x.lb),...
    full_ref.bounds.RightStance.states.dx.lb - relax_percent*abs(full_ref.bounds.RightStance.states.dx.lb)];
x_ub = [full_ref.bounds.RightStance.states.x.ub + relax_percent*abs(full_ref.bounds.RightStance.states.x.ub),...
    full_ref.bounds.RightStance.states.dx.ub + relax_percent*abs(full_ref.bounds.RightStance.states.dx.ub)]; 

% Set control bounds
u_lb = full_ref.bounds.RightStance.inputs.Control.u.lb/10;
u_ub = full_ref.bounds.RightStance.inputs.Control.u.ub/10;

% Set Wrench bounds
w_lb = [-inf; -inf];
w_ub = [inf; inf];

%% Compute full_refeters vector
args = struct;
args.p(1:n_x) = x_init; % initial condition of the robot posture
for k = 1:N+1 %new - set the reference to          track
    args.p((k-1)*(n_x+n_u)+(n_x+1):(k-1)*(n_x+n_u)+(n_x+n_x)) = ...
        X_REF(:,k);
    args.p((k-1)*(n_x+n_u)+(n_x+n_x+1):(k-1)*(n_x+n_u)+(n_x+n_x+n_u)) =...
        U_REF(:,k);
end

%% Equality Constraints
% simulation later so it is an output of this function]
args.lbg(1:(n_x)*(N+1)+n_w*(N+1)) = 0; % Equality constraints
args.ubg(1:(n_x)*(N+1)+n_w*(N+1)) = 0; % Equality constraints

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







