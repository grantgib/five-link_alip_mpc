function ref_info = Load_Reference_Trajectory(mpc_info,dir,traj_name)
% Locate directory
if isequal(dir,'ascend')
    full_ref = load(fullfile(pwd,'reference_trajectories\variousStepHeightsAscend\',traj_name));
else
    full_ref = load(fullfile(pwd,'reference_trajectories\variousStepHeightsDescend\',traj_name));
end

% Interpolate trajectory (*** This could be a problem ****)
trajRef = calculations.referenceTrajBez(full_ref.gait,mpc_info.DT);
X_REF_Original = [trajRef.x; trajRef.dx];
U_REF_Original = trajRef.u;

Y_REF_Original = 0*zeros(3,size(trajRef.x,2));
for i = 1:size(trajRef.x,2)
   Y_REF_Original(:,i) = leftToePos(trajRef.x(:,i))'; 
end

% Return struct
ref_info = struct;
ref_info.x_ref = X_REF_Original;
ref_info.u_ref = U_REF_Original;
ref_info.full_ref = full_ref;
ref_info.y_ref.p_left_toe = Y_REF_Original;

end