function [JacHip] = ...
    Hip_Jacobian(xb,zb,rotYb,q1R,q2R,q1L,q2L)
import casadi.*
JacHip = [1,0,(63/100).*cos(rotYb),0,0,0,0;0,1,(-63/100).*sin(rotYb),0,0,0, ...
  0];

end

