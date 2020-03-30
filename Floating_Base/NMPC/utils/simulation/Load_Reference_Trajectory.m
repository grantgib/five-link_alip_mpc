function ref_info = Load_Reference_Trajectory(mpc_info,ref_info)
%% Extract inputs
dir = ref_info.step_dir;
traj_name = ref_info.traj_name;

%%
if isequal(dir,"Ascend")
    full_ref = load(fullfile(pwd,'\..\reference_trajectories\ascend_gaits\',traj_name));
else
    full_ref = load(fullfile(pwd,'\..\reference_trajectories\descend_gaits\',traj_name));
end
% Interpolate trajectory (*** This could be a problem ****)
trajRef = calculations.referenceTrajBez(full_ref.gait,mpc_info.DT);
X_REF_Original = [trajRef{1}.x; trajRef{1}.dx];
U_REF_Original = trajRef{1}.u;

%% Return ref_info
ref_info.x_ref = X_REF_Original;
ref_info.u_ref = U_REF_Original;
ref_info.full_ref = full_ref;

end