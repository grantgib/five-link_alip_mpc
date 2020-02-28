function ref_info = Load_Reference_Trajectory(mpc_info,dir,traj_name)
% Locate directory
if isequal(dir,'ascend')
    full_ref = load(fullfile(pwd,'Reference_Trajectories\variousStepHeightsAscend\',traj_name));
else
    full_ref = load(fullfile(pwd,'Reference_Trajectories\variousStepHeightsDescend\',traj_name));
end

% Interpolate trajectory (*** This could be a problem ****)
trajRef = calculations.referenceTrajBez(full_ref.gait,mpc_info.DT);
X_REF_Original = [trajRef.x; trajRef.dx];
U_REF_Original = trajRef.u;

% Return struct
ref_info = struct;
ref_info.x_ref = X_REF_Original;
ref_info.u_ref = U_REF_Original;
ref_info.full_ref = full_ref;

end