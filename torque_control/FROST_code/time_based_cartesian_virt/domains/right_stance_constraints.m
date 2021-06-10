function right_stance_constraints(nlp, bounds, varargin)
%%
domain = nlp.Plant;

p = inputParser;
addParameter(p, 'LoadPath', '');
parse(p, varargin{:});
load_path = p.Results.LoadPath;
% relative degree 2 outputs
domain.VirtualConstraints.time.imposeNLPConstraint(nlp, [bounds.time.kp, bounds.time.kd], [1,1], load_path);

params = LoadParams();
avgvel = params.avgvel;
comxvel = params.comxvel;
comzvel = params.comzvel;
swingxmid = params.swingxmid;
swingxvel = params.swingxvel;
swingzvel = params.swingzvel;
length = params.length;

%% tau boundary [0,1]
T_name = nlp.OptVarTable.T(1).Name;
T  = SymVariable(lower(T_name),[nlp.OptVarTable.T(1).Dimension,1]);
p_name = nlp.OptVarTable.ptime(1).Name;
p  = SymVariable(lower(p_name),[nlp.OptVarTable.ptime(1).Dimension,1]);
tau_0 = SymFunction(['tau_0_',domain.Name], T(1) - p(2), {T,p});
tau_F = SymFunction(['tau_F_',domain.Name], T(2) - p(1), {T,p});
addNodeConstraint(nlp, tau_0, {T_name,p_name}, 'first', 0, 0, 'Linear');
addNodeConstraint(nlp, tau_F, {T_name,p_name}, 'last', 0, 0, 'Linear');

%% output boundary
y_pos = domain.VirtualConstraints.time;
y_bound_idx = str_indices({'torso_angle','hip_height','pos_swing_x','pos_swing_z'},y_pos.OutputLabel);

y_bound = y_pos.ActualOutput(y_bound_idx);
lb = [-2*pi,0,-1,-1]';
ub = [2*pi,2,1,1]';
y_bound_fun = SymFunction(['output_boundary_',domain.Name], y_bound, {domain.States.x});
addNodeConstraint(nlp, y_bound_fun, {'x'}, 'all', lb, ub,'Linear');

%% average velocity
velocity_desired = avgvel;
DOF = 7;
T  = SymVariable('t',[2,1]);
X0  = SymVariable('x0',[DOF,1]);
XF  = SymVariable('xF',[DOF,1]);
avg_vel = (XF(1) - X0(1)) / (T(2) - T(1));
avg_vel_fun = SymFunction('average_velocity', avg_vel, {T,X0,XF});
avg_vel_cstr = NlpFunction(...
    'Name',         'average_velocity',...
    'Dimension',    1,...
    'lb',           velocity_desired,...
    'ub',           velocity_desired,...
    'Type',         'Nonlinear',...
    'SymFun',       avg_vel_fun,...
    'DepVariables', [nlp.OptVarTable.T(1); nlp.OptVarTable.x(1); nlp.OptVarTable.x(end)]);
addConstraint(nlp, 'average_velocity', 'last', avg_vel_cstr);


%% Swing Foot Constraints
DOF = 7;
X  = SymVariable('x',[DOF,1]);
DX = SymVariable('dx',[DOF,1]);
p_swing = getCartesianPosition(domain, domain.ContactPoints.LeftToe);
J_swing = jacobian(p_swing,domain.States.x);
vel_swing = J_swing*domain.States.dx;

% Swing Foot Clearance
swing_foot_height = SymFunction('swing_foot_height', nlp.Plant.EventFuncs.leftFootHeight.ConstrExpr, {X});
addNodeConstraint(nlp, swing_foot_height, {'x'}, floor(nlp.NumNode/2), swingxmid, 0.3,'Linear');

% Swing Foot Length
pos_swing_x = SymFunction('pos_swing_x',p_swing(1),{X});
addNodeConstraint(nlp,pos_swing_x,{'x'},'last',0.05,length,'Linear');

% foot x impact velocity
vel_swing_x = SymFunction('vel_swing_x',vel_swing(1),{X,DX});
addNodeConstraint(nlp, vel_swing_x, {'x','dx'},'last',-Inf,swingxvel,'Linear');

% foot impact z impact
vel_swing_z = SymFunction('vel_swing_z',vel_swing(3),{X,DX});
addNodeConstraint(nlp,vel_swing_z,{'x','dx'},'last',swingzvel,0,'Linear');


%% COM velocity constraint
pos_com = domain.getComPosition;
J_com = jacobian(pos_com,domain.States.x);
vel_com = J_com*domain.States.dx;

vel_com_x = SymFunction('vel_com_x',vel_com(1),{X,DX});
addNodeConstraint(nlp,vel_com_x,{'x','dx'},'last',0,comxvel,'Linear');

vel_com_z = SymFunction('vel_com_z',vel_com(3),{X,DX});
addNodeConstraint(nlp,vel_com_z,{'x','dx'},'last',-Inf,comzvel,'Linear');

end