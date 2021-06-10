function [posHip] = Hip_Position(q)
import casadi.*
[xbar,zbar,rotY,q1R,q2R,q1L,q2L] = deal(q(1),q(2),q(3),q(4),q(5),q(6),q(7));

posHip = [xbar+(63/100).*sin(rotY),zbar+(63/100).*cos(rotY)];

end

