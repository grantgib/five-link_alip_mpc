function G = GravityVector_notorso(x_b,z_b,rotY_b,q1R,q2R,q1L,q2L)
import casadi.*
% Fvec = -C(q,dq)*dq - G(q)
G11 = 0;
G21 =  -313.92  ;
G31 =  28.252799999999997*sin(rotY_b) - 7.33788*(-(cos(q1R)*sin(rotY_b)) - cos(rotY_b)*sin(q1R)) - 31.392000000000003*((2*(1 - cos(q2R))*(-(cos(q1R)*sin(rotY_b)) - cos(rotY_b)*sin(q1R)))/5 - (2*(-(cos(rotY_b)*cos(q1R)) + sin(rotY_b)*sin(q1R))*sin(q2R))/5 + (16*(cos(q2R)*(-(cos(q1R)*sin(rotY_b)) - cos(rotY_b)*sin(q1R)) + (-(cos(rotY_b)*cos(q1R)) + sin(rotY_b)*sin(q1R))*sin(q2R)))/25) - 7.33788*(-(cos(q1L)*sin(rotY_b)) - cos(rotY_b)*sin(q1L)) - 31.392000000000003*((2*(1 - cos(q2L))*(-(cos(q1L)*sin(rotY_b)) - cos(rotY_b)*sin(q1L)))/5 - (2*(-(cos(rotY_b)*cos(q1L)) + sin(rotY_b)*sin(q1L))*sin(q2L))/5 + (16*(cos(q2L)*(-(cos(q1L)*sin(rotY_b)) - cos(rotY_b)*sin(q1L)) + (-(cos(rotY_b)*cos(q1L)) + sin(rotY_b)*sin(q1L))*sin(q2L)))/25)  ;
G41 =  -7.33788*(-(cos(q1R)*sin(rotY_b)) - cos(rotY_b)*sin(q1R)) - 31.392000000000003*((2*(1 - cos(q2R))*(-(cos(q1R)*sin(rotY_b)) - cos(rotY_b)*sin(q1R)))/5 - (2*(-(cos(rotY_b)*cos(q1R)) + sin(rotY_b)*sin(q1R))*sin(q2R))/5 + (16*(cos(q2R)*(-(cos(q1R)*sin(rotY_b)) - cos(rotY_b)*sin(q1R)) + (-(cos(rotY_b)*cos(q1R)) + sin(rotY_b)*sin(q1R))*sin(q2R)))/25)  ;
G51 =  -31.392000000000003*((-2*cos(q2R)*(-(cos(q1R)*sin(rotY_b)) - cos(rotY_b)*sin(q1R)))/5 + (2*(cos(rotY_b)*cos(q1R) - sin(rotY_b)*sin(q1R))*sin(q2R))/5 + (16*(cos(q2R)*(-(cos(q1R)*sin(rotY_b)) - cos(rotY_b)*sin(q1R)) - (cos(rotY_b)*cos(q1R) - sin(rotY_b)*sin(q1R))*sin(q2R)))/25)  ;
G61 =  -7.33788*(-(cos(q1L)*sin(rotY_b)) - cos(rotY_b)*sin(q1L)) - 31.392000000000003*((2*(1 - cos(q2L))*(-(cos(q1L)*sin(rotY_b)) - cos(rotY_b)*sin(q1L)))/5 - (2*(-(cos(rotY_b)*cos(q1L)) + sin(rotY_b)*sin(q1L))*sin(q2L))/5 + (16*(cos(q2L)*(-(cos(q1L)*sin(rotY_b)) - cos(rotY_b)*sin(q1L)) + (-(cos(rotY_b)*cos(q1L)) + sin(rotY_b)*sin(q1L))*sin(q2L)))/25)  ;
G71 =  -31.392000000000003*((-2*cos(q2L)*(-(cos(q1L)*sin(rotY_b)) - cos(rotY_b)*sin(q1L)))/5 + (2*(cos(rotY_b)*cos(q1L) - sin(rotY_b)*sin(q1L))*sin(q2L))/5 + (16*(cos(q2L)*(-(cos(q1L)*sin(rotY_b)) - cos(rotY_b)*sin(q1L)) - (cos(rotY_b)*cos(q1L) - sin(rotY_b)*sin(q1L))*sin(q2L)))/25)  ;

G = [G11; G21; G31; G41; G51; G61; G71]; % Fvec = -C(q,dq)*dq - G(q)

return

end


