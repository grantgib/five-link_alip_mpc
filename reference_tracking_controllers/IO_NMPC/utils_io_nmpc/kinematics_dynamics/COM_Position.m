function [posCOM] = ...
    COM_Position(xb,zb,rotYb,q1R,q2R,q1L,q2L)
import casadi.*

posCOM = [(1/32).*(12.*(xb+(6/25).*sin(rotYb))+(34/5).*(xb+(11/100).*(cos( ...
  rotYb).*sin(q1L)+cos(q1L).*sin(rotYb)))+(34/5).*(xb+(11/100).*( ...
  cos(rotYb).*sin(q1R)+cos(q1R).*sin(rotYb)))+(16/5).*(xb+(2/5).*(1+ ...
  (-1).*cos(q2L)).*(cos(rotYb).*sin(q1L)+cos(q1L).*sin(rotYb))+( ...
  -2/5).*sin(q2L).*(cos(q1L).*cos(rotYb)+(-1).*sin(q1L).*sin(rotYb)) ...
  +(16/25).*(cos(q2L).*(cos(rotYb).*sin(q1L)+cos(q1L).*sin(rotYb))+ ...
  sin(q2L).*(cos(q1L).*cos(rotYb)+(-1).*sin(q1L).*sin(rotYb))))+( ...
  16/5).*(xb+(2/5).*(1+(-1).*cos(q2R)).*(cos(rotYb).*sin(q1R)+cos( ...
  q1R).*sin(rotYb))+(-2/5).*sin(q2R).*(cos(q1R).*cos(rotYb)+(-1).* ...
  sin(q1R).*sin(rotYb))+(16/25).*(cos(q2R).*(cos(rotYb).*sin(q1R)+ ...
  cos(q1R).*sin(rotYb))+sin(q2R).*(cos(q1R).*cos(rotYb)+(-1).*sin( ...
  q1R).*sin(rotYb))))),(1/32).*(12.*(zb+(6/25).*cos(rotYb))+(34/5).* ...
  (zb+(11/100).*(cos(q1L).*cos(rotYb)+(-1).*sin(q1L).*sin(rotYb)))+( ...
  34/5).*(zb+(11/100).*(cos(q1R).*cos(rotYb)+(-1).*sin(q1R).*sin( ...
  rotYb)))+(16/5).*(zb+(-2/5).*sin(q2L).*((-1).*cos(rotYb).*sin(q1L) ...
  +(-1).*cos(q1L).*sin(rotYb))+(2/5).*(1+(-1).*cos(q2L)).*(cos(q1L) ...
  .*cos(rotYb)+(-1).*sin(q1L).*sin(rotYb))+(16/25).*(sin(q2L).*((-1) ...
  .*cos(rotYb).*sin(q1L)+(-1).*cos(q1L).*sin(rotYb))+cos(q2L).*(cos( ...
  q1L).*cos(rotYb)+(-1).*sin(q1L).*sin(rotYb))))+(16/5).*(zb+(-2/5) ...
  .*sin(q2R).*((-1).*cos(rotYb).*sin(q1R)+(-1).*cos(q1R).*sin(rotYb) ...
  )+(2/5).*(1+(-1).*cos(q2R)).*(cos(q1R).*cos(rotYb)+(-1).*sin(q1R) ...
  .*sin(rotYb))+(16/25).*(sin(q2R).*((-1).*cos(rotYb).*sin(q1R)+(-1) ...
  .*cos(q1R).*sin(rotYb))+cos(q2R).*(cos(q1R).*cos(rotYb)+(-1).*sin( ...
  q1R).*sin(rotYb)))))];

end

