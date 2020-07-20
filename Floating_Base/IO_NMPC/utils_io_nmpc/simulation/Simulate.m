function [traj_info,ctrl_info] = Simulate(dyn_info,ctrl_info,ref_info,constr_info)

if ctrl_info.type == "IO"
    [traj_info,ctrl_info] = Simulate_IO(dyn_info,ctrl_info,ref_info,constr_info);
end

end