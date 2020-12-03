function [posHip] = ...
    Hip_Position(xb,zb,rotYb,q1R,q2R,q1L,q2L)

import casadi.*
posHip = [xb+(63/100).*sin(rotYb),zb+(63/100).*cos(rotYb)];

end

