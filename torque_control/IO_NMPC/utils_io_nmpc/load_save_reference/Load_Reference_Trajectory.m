function ref_info = Load_Reference_Trajectory(ctrl_info,dyn_info,ref_info)
import casadi.*
%% Extract inputs
dir = ref_info.step_dir;
traj_name = ref_info.traj_name;
xbar = SX.sym('xbar');
zbar = SX.sym('zbar');
rotY = SX.sym('rotY');
q1R = SX.sym('q1R');
q2R = SX.sym('q2R');
q1L = SX.sym('q1L');
q2L = SX.sym('q2L');
q = [xbar; zbar; rotY; q1R; q2R; q1L; q2L];
n_w = dyn_info.dim.n_w;
f_w = dyn_info.func.wrench;

%% Interpolate for Appropriate sized trajectory
if isequal(dir,"Ascend")
    full_ref = load(fullfile(pwd,'/../reference_trajectories/time_based_trivial_virts/ascend_gaits',traj_name));
else
    full_ref = load(fullfile(pwd,'\..\reference_trajectories\descend_gaits\old_virts',traj_name));
end
trajRef = Interpolate_Bezier_Trajectory(full_ref.gait,ctrl_info.DT);
Q_REF = trajRef{1}.q;
DQ_REF = trajRef{1}.dq;
DDQ_REF = trajRef{1}.ddq;
X_REF = [Q_REF; DQ_REF];
U_REF = trajRef{1}.u;
W_REF = zeros(n_w,size(Q_REF,2));
for i = 1:size(Q_REF,2)
    W_REF(:,i) = full(f_w(Q_REF(:,i),DQ_REF(:,i),U_REF(:,i)));
end

% Phase-based Virtual constraint IO variables
q_stance_abs = rotY + q1R + q2R/2;
s = (q_stance_abs - trajRef{1}.theta_begin) / (trajRef{1}.theta_end - trajRef{1}.theta_begin);
s_func = Function('s_func',{q},{s});
alpha_h = trajRef{1}.alpha_h;
alpha_dh = trajRef{1}.alpha_dh;
alpha_ddh = trajRef{1}.alpha_ddh;

%% Set Bounds
relax_percent = 0.10;
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
w_lb = [-inf; 1e-5];
w_ub = [inf; inf];

%% Return ref_info
ref_info.q_ref = Q_REF;
ref_info.dq_ref = DQ_REF;
ref_info.ddq_ref = DDQ_REF;
ref_info.x_ref = X_REF;
ref_info.u_ref = U_REF;
ref_info.w_ref = W_REF;
ref_info.phase_based.s_func = s_func;
ref_info.phase_based.alpha_h = alpha_h;
ref_info.phase_based.alpha_dh = alpha_dh;
ref_info.phase_based.alpha_ddh = alpha_ddh;
ref_info.full_ref = full_ref;
ref_info.x_lb = x_lb;
ref_info.x_ub = x_ub;
ref_info.u_lb = u_lb;
ref_info.u_ub = u_ub;
ref_info.w_lb = w_lb;
ref_info.w_ub = w_ub;


end