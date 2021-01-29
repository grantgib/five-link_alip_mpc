function G = GravityVector(q)
import casadi.*
% Fvec = -C(q,dq)*dq - G(q)
[xbar,zbar,rotY,q1R,q2R,q1L,q2L] = deal(q(1),q(2),q(3),q(4),q(5),q(6),q(7));

G = [0;(-0.31392E3);0.282528E2.*sin(rotY)+(-0.733788E1).*((-1).*cos( ...
  rotY).*sin(q1L)+(-1).*cos(q1L).*sin(rotY))+(-0.733788E1).*((-1) ...
  .*cos(rotY).*sin(q1R)+(-1).*cos(q1R).*sin(rotY))+(-0.31392E2).*( ...
  (2/5).*(1+(-1).*cos(q2L)).*((-1).*cos(rotY).*sin(q1L)+(-1).*cos( ...
  q1L).*sin(rotY))+(-2/5).*sin(q2L).*((-1).*cos(q1L).*cos(rotY)+ ...
  sin(q1L).*sin(rotY))+(16/25).*(cos(q2L).*((-1).*cos(rotY).*sin( ...
  q1L)+(-1).*cos(q1L).*sin(rotY))+sin(q2L).*((-1).*cos(q1L).*cos( ...
  rotY)+sin(q1L).*sin(rotY))))+(-0.31392E2).*((2/5).*(1+(-1).*cos( ...
  q2R)).*((-1).*cos(rotY).*sin(q1R)+(-1).*cos(q1R).*sin(rotY))+( ...
  -2/5).*sin(q2R).*((-1).*cos(q1R).*cos(rotY)+sin(q1R).*sin(rotY)) ...
  +(16/25).*(cos(q2R).*((-1).*cos(rotY).*sin(q1R)+(-1).*cos(q1R).* ...
  sin(rotY))+sin(q2R).*((-1).*cos(q1R).*cos(rotY)+sin(q1R).*sin( ...
  rotY))));(-0.733788E1).*((-1).*cos(rotY).*sin(q1R)+(-1).*cos( ...
  q1R).*sin(rotY))+(-0.31392E2).*((2/5).*(1+(-1).*cos(q2R)).*((-1) ...
  .*cos(rotY).*sin(q1R)+(-1).*cos(q1R).*sin(rotY))+(-2/5).*sin( ...
  q2R).*((-1).*cos(q1R).*cos(rotY)+sin(q1R).*sin(rotY))+(16/25).*( ...
  cos(q2R).*((-1).*cos(rotY).*sin(q1R)+(-1).*cos(q1R).*sin(rotY))+ ...
  sin(q2R).*((-1).*cos(q1R).*cos(rotY)+sin(q1R).*sin(rotY))));( ...
  -0.31392E2).*((-2/5).*cos(q2R).*((-1).*cos(rotY).*sin(q1R)+(-1).* ...
  cos(q1R).*sin(rotY))+(2/5).*sin(q2R).*(cos(q1R).*cos(rotY)+(-1) ...
  .*sin(q1R).*sin(rotY))+(16/25).*(cos(q2R).*((-1).*cos(rotY).* ...
  sin(q1R)+(-1).*cos(q1R).*sin(rotY))+(-1).*sin(q2R).*(cos(q1R).* ...
  cos(rotY)+(-1).*sin(q1R).*sin(rotY))));(-0.733788E1).*((-1).* ...
  cos(rotY).*sin(q1L)+(-1).*cos(q1L).*sin(rotY))+(-0.31392E2).*(( ...
  2/5).*(1+(-1).*cos(q2L)).*((-1).*cos(rotY).*sin(q1L)+(-1).*cos( ...
  q1L).*sin(rotY))+(-2/5).*sin(q2L).*((-1).*cos(q1L).*cos(rotY)+ ...
  sin(q1L).*sin(rotY))+(16/25).*(cos(q2L).*((-1).*cos(rotY).*sin( ...
  q1L)+(-1).*cos(q1L).*sin(rotY))+sin(q2L).*((-1).*cos(q1L).*cos( ...
  rotY)+sin(q1L).*sin(rotY))));(-0.31392E2).*((-2/5).*cos(q2L).*(( ...
  -1).*cos(rotY).*sin(q1L)+(-1).*cos(q1L).*sin(rotY))+(2/5).*sin( ...
  q2L).*(cos(q1L).*cos(rotY)+(-1).*sin(q1L).*sin(rotY))+(16/25).*( ...
  cos(q2L).*((-1).*cos(rotY).*sin(q1L)+(-1).*cos(q1L).*sin(rotY))+ ...
  (-1).*sin(q2L).*(cos(q1L).*cos(rotY)+(-1).*sin(q1L).*sin(rotY))) ...
  )];
return

end


