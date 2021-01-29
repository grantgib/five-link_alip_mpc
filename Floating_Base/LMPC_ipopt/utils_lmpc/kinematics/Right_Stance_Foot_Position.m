function [posR] = Right_Stance_Foot_Position(q)
import casadi.*
[xbar,zbar,rotY,q1R,q2R,q1L,q2L] = deal(q(1),q(2),q(3),q(4),q(5),q(6),q(7));

posR = [xbar+(2/5).*(1+(-1).*cos(q2R)).*(cos(rotY).*sin(q1R)+cos(q1R).* ...
  sin(rotY))+(-2/5).*sin(q2R).*(cos(q1R).*cos(rotY)+(-1).*sin(q1R) ...
  .*sin(rotY))+(4/5).*(cos(q2R).*(cos(rotY).*sin(q1R)+cos(q1R).* ...
  sin(rotY))+sin(q2R).*(cos(q1R).*cos(rotY)+(-1).*sin(q1R).*sin( ...
  rotY))),0,zbar+(-2/5).*sin(q2R).*((-1).*cos(rotY).*sin(q1R)+(-1).* ...
  cos(q1R).*sin(rotY))+(2/5).*(1+(-1).*cos(q2R)).*(cos(q1R).*cos( ...
  rotY)+(-1).*sin(q1R).*sin(rotY))+(4/5).*(sin(q2R).*((-1).*cos( ...
  rotY).*sin(q1R)+(-1).*cos(q1R).*sin(rotY))+cos(q2R).*(cos(q1R).* ...
  cos(rotY)+(-1).*sin(q1R).*sin(rotY)))];

posR = posR([1,3]);
end
