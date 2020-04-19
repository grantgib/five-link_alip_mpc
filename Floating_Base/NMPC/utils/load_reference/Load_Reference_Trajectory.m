function ref_info = Load_Reference_Trajectory(ctrl_info,ref_info)
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

%% Interpolate for Appropriate sized trajectory
if isequal(dir,"Ascend")
    full_ref = load(fullfile(pwd,'\..\reference_trajectories\ascend_gaits\',traj_name));
    %     full_ref = load(fullfile(pwd,'\..\reference_trajectories\ascend_gaits\Omar\',traj_name));
else
    full_ref = load(fullfile(pwd,'\..\reference_trajectories\descend_gaits\',traj_name));
end
if ref_info.better_traj
    new_gait = load('new_gait');
    full_ref.gait = new_gait.gait;
end
trajRef = Interpolate_Bezier_Trajectory(full_ref.gait,ctrl_info.DT);
Q_REF = trajRef{1}.q;
DQ_REF = trajRef{1}.dq;
DDQ_REF = trajRef{1}.ddq;
X_REF = [Q_REF; DQ_REF];
U_REF = trajRef{1}.u;

% Phase-based Virtual constraint IO variables
q_stance_abs = rotY + q1R + q2R/2;
s = (q_stance_abs - trajRef{1}.theta_begin) / (trajRef{1}.theta_end - trajRef{1}.theta_begin);
s_func = Function('s_func',{q},{s});
alpha_h = trajRef{1}.alpha_h;
alpha_dh = trajRef{1}.alpha_dh;
alpha_ddh = trajRef{1}.alpha_ddh;

% if ref_info.better_traj
%    traj_better = load('new_alphas.mat');
%    s_func = traj_better.s_func;
%    alpha_h = traj_better.alpha_h;
%    alpha_dh = traj_better.alpha_dh;
%    alpha_ddh = traj_better.alpha_ddh;
% %    alpha_ddh = traj_better.alpha_ddh_old;
% end


%% Return ref_info
ref_info.q_ref = Q_REF;
ref_info.dq_ref = DQ_REF;
ref_info.ddq_ref = DDQ_REF;
ref_info.x_ref = X_REF;
ref_info.u_ref = U_REF;
ref_info.phase_based.s_func = s_func;
ref_info.phase_based.alpha_h = alpha_h;
ref_info.phase_based.alpha_dh = alpha_dh;
ref_info.phase_based.alpha_ddh = alpha_ddh;
ref_info.full_ref = full_ref;

end