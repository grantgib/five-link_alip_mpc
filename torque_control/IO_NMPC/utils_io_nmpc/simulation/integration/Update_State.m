function [t_next,x_next,u_sol,w_sol,ddq_sol] = ...
    Update_State(dyn_info,ctrl_info,ref_info,constr_info,sol_info)

if ctrl_info.type == "IO"
    [t_next,x_next,u_sol,w_sol,ddq_sol] = ...
        Update_State_IO(dyn_info,ctrl_info,ref_info,constr_info,sol_info);
end

end