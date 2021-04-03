function ref_info = Load_Reference_Trajectory(ctrl_info,dyn_info,ref_info)
import casadi.*
%% Extract inputs

n_w = dyn_info.dim.n_w;
f_w = dyn_info.func.f_w;

% ref_info
dir = ref_info.step_dir;
if ref_info.step_dir == "Descend"
    ref_info.step_height_dbl = -double(ref_info.step_height);
else
    ref_info.step_height_dbl = double(ref_info.step_height);
end
ref_info.traj_name = ref_info.step_dir + "_Ht(" + ref_info.step_height + ')_Vel(' + ref_info.step_vel + ").mat";
% ref_info.traj_name = ref_info.step_dir + "_Ht(" + ref_info.step_height + ')_Lgth(' + ref_info.step_length + ')_Vel(' + ref_info.step_vel + ").mat";

%% Interpolate for Appropriate sized trajectory
full_ref = load(fullfile(pwd,'\..\reference_trajectories\time_based_cartesian_virts',ref_info.traj_name));
% full_ref = load(fullfile(pwd,'\..\reference_trajectories\time_based_angle_virts',ref_info.traj_name));

traj_ref = Interpolate_Bezier_Trajectory(full_ref.gait,ctrl_info,dyn_info);
Q_REF = traj_ref{1}.q;
Q_DOT_REF = traj_ref{1}.q_dot;
X_REF = [Q_REF; Q_DOT_REF];
Q_DDOT_REF = traj_ref{1}.q_ddot;
U_REF = traj_ref{1}.u;
W_REF = traj_ref{1}.w;
HD_REF = traj_ref{1}.hd;
HD_DOT_REF = traj_ref{1}.hd_dot;
HD_DDOT_REF = traj_ref{1}.hd_ddot;

%% Set Bounds
relax_percent = 0.10;
x_lb = [full_ref.bounds.RightStance.states.x.lb - relax_percent*abs(full_ref.bounds.RightStance.states.x.lb),...
    full_ref.bounds.RightStance.states.dx.lb - relax_percent*abs(full_ref.bounds.RightStance.states.dx.lb)];
x_ub = [full_ref.bounds.RightStance.states.x.ub + relax_percent*abs(full_ref.bounds.RightStance.states.x.ub),...
    full_ref.bounds.RightStance.states.dx.ub + relax_percent*abs(full_ref.bounds.RightStance.states.dx.ub)];

x_lb(1:2) = [-inf, -inf];   % bound should not exist for climbing up steps or should at minimum update with each impact (not done yet)
x_ub(1:2) = [inf, inf];     % condition shouldnt exist for step climbing

% Set control bounds
u_lb = full_ref.bounds.RightStance.inputs.Control.u.lb;
u_ub = full_ref.bounds.RightStance.inputs.Control.u.ub;

% Set Wrench bounds
w_lb = [-inf; 1e-5];
w_ub = [inf; inf];

%% Return ref_info
ref_info.q_ref = Q_REF;
ref_info.q_dot_ref = Q_DOT_REF;
ref_info.x_ref = X_REF;
ref_info.q_ddot_ref = Q_DDOT_REF;
ref_info.u_ref = U_REF;
ref_info.w_ref = W_REF;
ref_info.hd_ref = HD_REF;
ref_info.hd_dot_ref = HD_DOT_REF;
ref_info.hd_ddot_ref = HD_DDOT_REF;
ref_info.full_ref = full_ref;
ref_info.x_lb = x_lb;
ref_info.x_ub = x_ub;
ref_info.u_lb = u_lb;
ref_info.u_ub = u_ub;
ref_info.w_lb = w_lb;
ref_info.w_ub = w_ub;

end