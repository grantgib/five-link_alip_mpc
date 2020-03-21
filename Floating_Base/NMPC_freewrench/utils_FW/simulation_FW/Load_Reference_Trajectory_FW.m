function ref_info = Load_Reference_Trajectory_FW(mpc_info,dir,traj_name)

if isequal(dir,'ascend')
    full_ref = load(fullfile('Reference_Trajectories\variousStepHeightsAscend\',traj_name));
else
    full_ref = load(fullfile('Reference_Trajectories\variousStepHeightsDescend\',traj_name));
end
% Interpolate trajectory (*** This could be a problem ****)
trajRef = calculations.referenceTrajBez(full_ref.gait,mpc_info.DT);
X_REF_Original = [trajRef.x; trajRef.dx];
U_REF_Original = trajRef.u;

ref_info = struct;
ref_info.x_ref = X_REF_Original;
ref_info.u_ref = U_REF_Original;
ref_info.full_ref = full_ref;

end