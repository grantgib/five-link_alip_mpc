function [is_above_ground] = check_swingfoot_clearance(p_sw_world, kx, p_st_z_init)

ground = kx * p_sw_world(1) + p_st_z_init;

if p_sw_world(2) < ground
    is_above_ground = false;
else
    is_above_ground = true;
end

end

