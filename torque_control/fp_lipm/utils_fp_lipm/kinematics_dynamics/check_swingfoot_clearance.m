function [is_above_ground] = check_swingfoot_clearance(p_sw, kx, ground_height_current)

ground = kx * p_sw(1) + ground_height_current;

if p_sw(2) < ground
    is_above_ground = false;
else
    is_above_ground = true;
end

end

