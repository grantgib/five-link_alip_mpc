function args = Update_Args_Nonlinear_FreeWrench(x_init,N,n_x,n_u,X_REF,U_REF,param)
% Relax bounds from trajectory generation for control
x_lb = [param.bounds.RightStance.states.x.lb - 0.5*param.bounds.RightStance.states.x.lb,...
    param.bounds.RightStance.states.dx.lb - 0.5*param.bounds.RightStance.states.dx.lb,...
    -inf,-inf,-inf];
x_ub = [param.bounds.RightStance.states.x.ub + 0.5*param.bounds.RightStance.states.x.ub,...
    param.bounds.RightStance.states.dx.ub + 0.5*param.bounds.RightStance.states.dx.ub,...
    inf,inf,inf];


% Set control bounds
u_lb = param.bounds.RightStance.inputs.Control.u.lb;
u_ub = param.bounds.RightStance.inputs.Control.u.ub;

%% Compute parameters vector
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
args.lbg(1:2*n_x*(N+1)) = 0; % Equality constraints
args.ubg(1:2*n_x*(N+1)) = 0; % Equality constraints

%% State and control bounds
for i = 1:n_x
    args.lbx(i:n_x:n_x*(N+1),1) = x_lb(i);              %state y lower bound
    args.ubx(i:n_x:n_x*(N+1),1) = x_ub(i);
end
for i = 1:n_u
    args.lbx(n_x*(N+1)+i:n_u:n_x*(N+1)+n_u*(N+1),1) = u_lb(i);   % u lower bound
    args.ubx(n_x*(N+1)+i:n_u:n_x*(N+1)+n_u*(N+1),1) = u_ub(i);    % u upper bound
end
end







