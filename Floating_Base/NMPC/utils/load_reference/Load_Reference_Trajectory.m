function ref_info = Load_Reference_Trajectory(mpc_info,ref_info)
%% Extract inputs
dir = ref_info.step_dir;
traj_name = ref_info.traj_name;
DT = mpc_info.DT;

%%
if isequal(dir,"Ascend")
    full_ref = load(fullfile(pwd,'\..\reference_trajectories\ascend_gaits\',traj_name));
%     full_ref = load(fullfile(pwd,'\..\reference_trajectories\ascend_gaits\Omar\',traj_name));
else
    full_ref = load(fullfile(pwd,'\..\reference_trajectories\descend_gaits\',traj_name));
end
% Interpolate trajectory (*** This could be a problem ****)
if 0%DT == 0.05
    X_REF_Original = [full_ref.gait(1).states.x; full_ref.gait(1).states.dx];
    U_REF_Original = full_ref.gait(1).inputs.u;
else
    trajRef = Inter
    32++polate_Bezier_Trajectory(full_ref.gait,mpc_info.DT);
    X_REF_Original = [trajRef{1}.x; trajRef{1}.dx];
    U_REF_Original = trajRef{1}.u;
    DDQ_REF_Original = trajRef{1}.ddx;
end
%% Return ref_info
ref_info.x_ref = X_REF_Original;
ref_info.u_ref = U_REF_Original;
ref_info.ddq_ref = DDQ_REF_Original;
ref_info.full_ref = full_ref;
ref_info.dtau = trajRef{1}.ds;

end