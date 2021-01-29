function ref_info = Load_Reference_Trajectory(ctrl_info,dyn_info,ref_info)
import casadi.*
%% Extract inputs
dir = ref_info.step_dir;
traj_name = ref_info.traj_name;
q = dyn_info.sym.q;
n_w = dyn_info.dim.n_w;
f_w = dyn_info.func.f_w;

%% Interpolate for Appropriate sized trajectory
if isequal(dir,"Ascend")
    full_ref = load(fullfile(pwd,'\..\reference_trajectories\ascend_gaits\old_virts',traj_name));
else
    full_ref = load(fullfile(pwd,'\..\reference_trajectories\descend_gaits\',traj_name));
end
trajRef = Interpolate_Bezier_Trajectory(full_ref.gait,ctrl_info.DT);
Q_REF = trajRef{1}.q;
DQ_REF = trajRef{1}.dq;
DDQ_REF = trajRef{1}.ddq;
X_REF = [Q_REF; DQ_REF];
U_REF = trajRef{1}.u;
W_REF = zeros(n_w,size(Q_REF,2));
for i = 1:size(Q_REF,2)
    W_REF(:,i) = full(f_w(X_REF(:,i),U_REF(:,i)));
end

%% Set Bounds
x_percent = 0.10;
x_lb = [full_ref.bounds.RightStance.states.x.lb - x_percent*abs(full_ref.bounds.RightStance.states.x.lb),...
    full_ref.bounds.RightStance.states.dx.lb - x_percent*abs(full_ref.bounds.RightStance.states.dx.lb)]';
x_ub = [full_ref.bounds.RightStance.states.x.ub + x_percent*abs(full_ref.bounds.RightStance.states.x.ub),...
    full_ref.bounds.RightStance.states.dx.ub + x_percent*abs(full_ref.bounds.RightStance.states.dx.ub)]'; 

x_lb(1:2) = [-inf, -inf];   % bound should not exist for climbing up steps or should at minimum update with each impact (not done yet)
x_ub(1:2) = [inf, inf];     % condition shouldnt exist for step climbing

% Set control bounds
u_percent = 1.10;
u_lb = u_percent*full_ref.bounds.RightStance.inputs.Control.u.lb;
u_ub = u_percent*full_ref.bounds.RightStance.inputs.Control.u.ub;

% Set Wrench bounds
w_lb = [-inf; 0.01];
w_ub = [1e15; 1e15];

%% Return ref_info
ref_info.q_ref = Q_REF;
ref_info.dq_ref = DQ_REF;
ref_info.ddq_ref = DDQ_REF;
ref_info.x_ref = X_REF;
ref_info.u_ref = U_REF;
ref_info.w_ref = W_REF;
ref_info.time_based.f_s_time = trajRef{1}.f_s_time;
ref_info.time_based.alpha_q = trajRef{1}.alpha_q;
ref_info.time_based.alpha_dq = trajRef{1}.alpha_dq;
ref_info.time_based.alpha_ddq = trajRef{1}.alpha_ddq;
ref_info.time_based.alpha_u = trajRef{1}.alpha_u;
ref_info.full_ref = full_ref;
ref_info.x_lb = x_lb;
ref_info.x_ub = x_ub;
ref_info.u_lb = u_lb;
ref_info.u_ub = u_ub;
ref_info.w_lb = w_lb;
ref_info.w_ub = w_ub;

end