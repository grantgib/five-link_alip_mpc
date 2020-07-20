function [] = Save_Trajectory_Info(ctrl_info,ref_info,constr_info,dyn_info,traj_info)

% Specify if extra constraints were used
extra_settings = "";
if constr_info.grf.active
    extra_settings = extra_settings + "_GRF(mu = " + constr_info.grf.mu + ")";
    save_dir = "GRF/";
    disp("GRF constraint active");
end
if constr_info.torque.sat
    extra_settings = extra_settings + "_TorqueSaturate(" + constr_info.torque.sat + ")";
    save_dir = "GRF_Torques/";
    disp("GRF and torque constraints active");
end
if constr_info.obstacle.isObstacle
    extra_settings = extra_settings + "_Obstacle";
    save_dir = "GRF_Torques_Obstacle/";
    disp("GRF, torque and obstacle constraints activated");
end

if ~constr_info.grf.active && ~constr_info.torque.sat && ~constr_info.obstacle.isObstacle
    save_dir = "Unconstrained/";
end
    
% Save to specific directory. Delineate between IO-L and IO-NMPC
if ctrl_info.IO_info.linear
    save_name = "Stairs(" + ref_info.step_dir + ...
        ")_Ht(" + string(ref_info.step_height_dbl) + ...
        " m)_N(0-IO)_DT(" + ctrl_info.DT + ...
        " s)_Vel(" + ref_info.step_vel + " mps)" + ...
        extra_settings + ".mat";
    save(fullfile('saved_results/IO/',save_dir,save_name),...
        'ctrl_info','ref_info','constr_info','dyn_info','traj_info');
    disp("Saved IO Trajectory!");
else  
    save_name = "Stairs(" + ref_info.step_dir + ...
        ")_Ht(" + string(ref_info.step_height_dbl) + ...
        " m)_N(" + ctrl_info.mpc_info.N + ...
        ")_DT(" + ctrl_info.DT + ...
        " s)_Vel(" + ref_info.step_vel + " mps)_" + ...
        extra_settings + ".mat";
    save(fullfile('saved_results/IO_NMPC/',save_dir,save_name),...
        'ctrl_info','ref_info','constr_info','dyn_info','traj_info');
    disp("Saved IO-NMPC Trajectory!");
end
end