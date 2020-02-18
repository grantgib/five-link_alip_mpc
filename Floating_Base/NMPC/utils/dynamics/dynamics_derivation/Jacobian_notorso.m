function J = Jacobian_notorso(x,z,rotY,q1R,q2R,q1L,q2L)

Jr1 = [1, 0, (2*(1 - cos(q2R))*(cos(rotY)*cos(q1R) - sin(rotY)*sin(q1R)))/5 - (2*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R))*sin(q2R))/5 + (4*(cos(q2R)*(cos(rotY)*cos(q1R) - sin(rotY)*sin(q1R)) + (-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R))*sin(q2R)))/5, (2*(1 - cos(q2R))*(cos(rotY)*cos(q1R) - sin(rotY)*sin(q1R)))/5 - (2*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R))*sin(q2R))/5 + (4*(cos(q2R)*(cos(rotY)*cos(q1R) - sin(rotY)*sin(q1R)) + (-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R))*sin(q2R)))/5, (-2*cos(q2R)*(cos(rotY)*cos(q1R) - sin(rotY)*sin(q1R)))/5 + (2*(cos(q1R)*sin(rotY) + cos(rotY)*sin(q1R))*sin(q2R))/5 + (4*(cos(q2R)*(cos(rotY)*cos(q1R) - sin(rotY)*sin(q1R)) - (cos(q1R)*sin(rotY) + cos(rotY)*sin(q1R))*sin(q2R)))/5, 0, 0];
% Jr2 = [0, 0, 0, 0, 0, 0, 0];
Jr3 = [0, 1, (2*(1 - cos(q2R))*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)))/5 - (2*(-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R))*sin(q2R))/5 + (4*(cos(q2R)*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)) + (-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R))*sin(q2R)))/5, (2*(1 - cos(q2R))*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)))/5 - (2*(-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R))*sin(q2R))/5 + (4*(cos(q2R)*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)) + (-(cos(rotY)*cos(q1R)) + sin(rotY)*sin(q1R))*sin(q2R)))/5, (-2*cos(q2R)*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)))/5 + (2*(cos(rotY)*cos(q1R) - sin(rotY)*sin(q1R))*sin(q2R))/5 + (4*(cos(q2R)*(-(cos(q1R)*sin(rotY)) - cos(rotY)*sin(q1R)) - (cos(rotY)*cos(q1R) - sin(rotY)*sin(q1R))*sin(q2R)))/5, 0, 0];

J = [Jr1; Jr3];

end

