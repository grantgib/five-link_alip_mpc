function Mmat = Mmat_notorso(x_b,z_b,rotY_b,q1R,q2R,q1L,q2L)
import casadi.*


Mmat11 = 12*cos(rotY_b)^2 + 12*sin(rotY_b)^2 + (34*(cos(q1R)*sin(rotY_b) + cos(rotY_b)*sin(q1R))^2)/5 + (34*(cos(rotY_b)*cos(q1R) - sin(rotY_b)*sin(q1R))^2)/5 + (16*(sin(rotY_b)*(-(cos(q2R)*sin(q1R)) - cos(q1R)*sin(q2R)) + cos(rotY_b)*(cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R)))^2)/5 + (16*(cos(rotY_b)*(cos(q2R)*sin(q1R) + cos(q1R)*sin(q2R)) + sin(rotY_b)*(cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R)))^2)/5 + (34*(cos(q1L)*sin(rotY_b) + cos(rotY_b)*sin(q1L))^2)/5 + (34*(cos(rotY_b)*cos(q1L) - sin(rotY_b)*sin(q1L))^2)/5 + (16*(sin(rotY_b)*(-(cos(q2L)*sin(q1L)) - cos(q1L)*sin(q2L)) + cos(rotY_b)*(cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L)))^2)/5 + (16*(cos(rotY_b)*(cos(q2L)*sin(q1L) + cos(q1L)*sin(q2L)) + sin(rotY_b)*(cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L)))^2)/5;
Mmat12 = (34*(-(cos(q1R)*sin(rotY_b)) - cos(rotY_b)*sin(q1R))*(cos(rotY_b)*cos(q1R) - sin(rotY_b)*sin(q1R)))/5 + (34*(cos(q1R)*sin(rotY_b) + cos(rotY_b)*sin(q1R))*(cos(rotY_b)*cos(q1R) - sin(rotY_b)*sin(q1R)))/5 + (16*(sin(rotY_b)*(-(cos(q2R)*sin(q1R)) - cos(q1R)*sin(q2R)) + cos(rotY_b)*(cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R)))*(cos(rotY_b)*(-(cos(q2R)*sin(q1R)) - cos(q1R)*sin(q2R)) - sin(rotY_b)*(cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R))))/5 + (16*(-(sin(rotY_b)*(cos(q2R)*sin(q1R) + cos(q1R)*sin(q2R))) + cos(rotY_b)*(cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R)))*(cos(rotY_b)*(cos(q2R)*sin(q1R) + cos(q1R)*sin(q2R)) + sin(rotY_b)*(cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R))))/5 + (34*(-(cos(q1L)*sin(rotY_b)) - cos(rotY_b)*sin(q1L))*(cos(rotY_b)*cos(q1L) - sin(rotY_b)*sin(q1L)))/5 + (34*(cos(q1L)*sin(rotY_b) + cos(rotY_b)*sin(q1L))*(cos(rotY_b)*cos(q1L) - sin(rotY_b)*sin(q1L)))/5 + (16*(sin(rotY_b)*(-(cos(q2L)*sin(q1L)) - cos(q1L)*sin(q2L)) + cos(rotY_b)*(cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L)))*(cos(rotY_b)*(-(cos(q2L)*sin(q1L)) - cos(q1L)*sin(q2L)) - sin(rotY_b)*(cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L))))/5 + (16*(-(sin(rotY_b)*(cos(q2L)*sin(q1L) + cos(q1L)*sin(q2L))) + cos(rotY_b)*(cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L)))*(cos(rotY_b)*(cos(q2L)*sin(q1L) + cos(q1L)*sin(q2L)) + sin(rotY_b)*(cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L))))/5; 
Mmat13 = (72*cos(rotY_b))/25 + (34*(cos(rotY_b)*cos(q1R) - sin(rotY_b)*sin(q1R))*((11*cos(q1R)^2)/100 + (11*sin(q1R)^2)/100))/5 + (16*(cos(rotY_b)*(cos(q2R)*sin(q1R) + cos(q1R)*sin(q2R)) + sin(rotY_b)*(cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R)))*(-((((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25)*sin(q1R) + (6*cos(q1R)*sin(q2R))/25)*(cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R))) - (-(cos(q2R)*sin(q1R)) - cos(q1R)*sin(q2R))*(cos(q1R)*((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25) - (6*sin(q1R)*sin(q2R))/25)))/5 + (16*(sin(rotY_b)*(-(cos(q2R)*sin(q1R)) - cos(q1R)*sin(q2R)) + cos(rotY_b)*(cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R)))*((((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25)*sin(q1R) + (6*cos(q1R)*sin(q2R))/25)*(cos(q2R)*sin(q1R) + cos(q1R)*sin(q2R)) + (cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R))*(cos(q1R)*((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25) - (6*sin(q1R)*sin(q2R))/25)))/5 + (34*(cos(rotY_b)*cos(q1L) - sin(rotY_b)*sin(q1L))*((11*cos(q1L)^2)/100 + (11*sin(q1L)^2)/100))/5 + (16*(cos(rotY_b)*(cos(q2L)*sin(q1L) + cos(q1L)*sin(q2L)) + sin(rotY_b)*(cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L)))*(-((((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25)*sin(q1L) + (6*cos(q1L)*sin(q2L))/25)*(cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L))) - (-(cos(q2L)*sin(q1L)) - cos(q1L)*sin(q2L))*(cos(q1L)*((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25) - (6*sin(q1L)*sin(q2L))/25)))/5 + (16*(sin(rotY_b)*(-(cos(q2L)*sin(q1L)) - cos(q1L)*sin(q2L)) + cos(rotY_b)*(cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L)))*((((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25)*sin(q1L) + (6*cos(q1L)*sin(q2L))/25)*(cos(q2L)*sin(q1L) + cos(q1L)*sin(q2L)) + (cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L))*(cos(q1L)*((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25) - (6*sin(q1L)*sin(q2L))/25)))/5 ;
Mmat14 = (187*(cos(rotY_b)*cos(q1R) - sin(rotY_b)*sin(q1R)))/250 + (16*(((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25)*cos(q2R) + (6*sin(q2R)^2)/25)*(sin(rotY_b)*(-(cos(q2R)*sin(q1R)) - cos(q1R)*sin(q2R)) + cos(rotY_b)*(cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R))))/5 + (16*(((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25)*sin(q2R) - (6*cos(q2R)*sin(q2R))/25)*(cos(rotY_b)*(cos(q2R)*sin(q1R) + cos(q1R)*sin(q2R)) + sin(rotY_b)*(cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R))))/5 ;
Mmat15 = (96*(sin(rotY_b)*(-(cos(q2R)*sin(q1R)) - cos(q1R)*sin(q2R)) + cos(rotY_b)*(cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R))))/125 ;
Mmat16 = (187*(cos(rotY_b)*cos(q1L) - sin(rotY_b)*sin(q1L)))/250 + (16*(((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25)*cos(q2L) + (6*sin(q2L)^2)/25)*(sin(rotY_b)*(-(cos(q2L)*sin(q1L)) - cos(q1L)*sin(q2L)) + cos(rotY_b)*(cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L))))/5 + (16*(((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25)*sin(q2L) - (6*cos(q2L)*sin(q2L))/25)*(cos(rotY_b)*(cos(q2L)*sin(q1L) + cos(q1L)*sin(q2L)) + sin(rotY_b)*(cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L))))/5 ;
Mmat17 = (96*(sin(rotY_b)*(-(cos(q2L)*sin(q1L)) - cos(q1L)*sin(q2L)) + cos(rotY_b)*(cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L))))/125 ;

Mmat22 = 12*cos(rotY_b)^2 + 12*sin(rotY_b)^2 + (34*(-(cos(q1R)*sin(rotY_b)) - cos(rotY_b)*sin(q1R))^2)/5 + (34*(cos(rotY_b)*cos(q1R) - sin(rotY_b)*sin(q1R))^2)/5 + (16*(-(sin(rotY_b)*(cos(q2R)*sin(q1R) + cos(q1R)*sin(q2R))) + cos(rotY_b)*(cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R)))^2)/5 + (16*(cos(rotY_b)*(-(cos(q2R)*sin(q1R)) - cos(q1R)*sin(q2R)) - sin(rotY_b)*(cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R)))^2)/5 + (34*(-(cos(q1L)*sin(rotY_b)) - cos(rotY_b)*sin(q1L))^2)/5 + (34*(cos(rotY_b)*cos(q1L) - sin(rotY_b)*sin(q1L))^2)/5 + (16*(-(sin(rotY_b)*(cos(q2L)*sin(q1L) + cos(q1L)*sin(q2L))) + cos(rotY_b)*(cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L)))^2)/5 + (16*(cos(rotY_b)*(-(cos(q2L)*sin(q1L)) - cos(q1L)*sin(q2L)) - sin(rotY_b)*(cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L)))^2)/5 ;
Mmat23 = (-72*sin(rotY_b))/25 + (34*(-(cos(q1R)*sin(rotY_b)) - cos(rotY_b)*sin(q1R))*((11*cos(q1R)^2)/100 + (11*sin(q1R)^2)/100))/5 + (16*(-(sin(rotY_b)*(cos(q2R)*sin(q1R) + cos(q1R)*sin(q2R))) + cos(rotY_b)*(cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R)))*(-((((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25)*sin(q1R) + (6*cos(q1R)*sin(q2R))/25)*(cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R))) - (-(cos(q2R)*sin(q1R)) - cos(q1R)*sin(q2R))*(cos(q1R)*((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25) - (6*sin(q1R)*sin(q2R))/25)))/5 + (16*(cos(rotY_b)*(-(cos(q2R)*sin(q1R)) - cos(q1R)*sin(q2R)) - sin(rotY_b)*(cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R)))*((((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25)*sin(q1R) + (6*cos(q1R)*sin(q2R))/25)*(cos(q2R)*sin(q1R) + cos(q1R)*sin(q2R)) + (cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R))*(cos(q1R)*((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25) - (6*sin(q1R)*sin(q2R))/25)))/5 + (34*(-(cos(q1L)*sin(rotY_b)) - cos(rotY_b)*sin(q1L))*((11*cos(q1L)^2)/100 + (11*sin(q1L)^2)/100))/5 + (16*(-(sin(rotY_b)*(cos(q2L)*sin(q1L) + cos(q1L)*sin(q2L))) + cos(rotY_b)*(cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L)))*(-((((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25)*sin(q1L) + (6*cos(q1L)*sin(q2L))/25)*(cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L))) - (-(cos(q2L)*sin(q1L)) - cos(q1L)*sin(q2L))*(cos(q1L)*((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25) - (6*sin(q1L)*sin(q2L))/25)))/5 + (16*(cos(rotY_b)*(-(cos(q2L)*sin(q1L)) - cos(q1L)*sin(q2L)) - sin(rotY_b)*(cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L)))*((((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25)*sin(q1L) + (6*cos(q1L)*sin(q2L))/25)*(cos(q2L)*sin(q1L) + cos(q1L)*sin(q2L)) + (cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L))*(cos(q1L)*((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25) - (6*sin(q1L)*sin(q2L))/25)))/5 ;
Mmat24 = (187*(-(cos(q1R)*sin(rotY_b)) - cos(rotY_b)*sin(q1R)))/250 + (16*(((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25)*sin(q2R) - (6*cos(q2R)*sin(q2R))/25)*(-(sin(rotY_b)*(cos(q2R)*sin(q1R) + cos(q1R)*sin(q2R))) + cos(rotY_b)*(cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R))))/5 + (16*(((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25)*cos(q2R) + (6*sin(q2R)^2)/25)*(cos(rotY_b)*(-(cos(q2R)*sin(q1R)) - cos(q1R)*sin(q2R)) - sin(rotY_b)*(cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R))))/5 ;
Mmat25 = (96*(cos(rotY_b)*(-(cos(q2R)*sin(q1R)) - cos(q1R)*sin(q2R)) - sin(rotY_b)*(cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R))))/125 ;
Mmat26 = (187*(-(cos(q1L)*sin(rotY_b)) - cos(rotY_b)*sin(q1L)))/250 + (16*(((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25)*sin(q2L) - (6*cos(q2L)*sin(q2L))/25)*(-(sin(rotY_b)*(cos(q2L)*sin(q1L) + cos(q1L)*sin(q2L))) + cos(rotY_b)*(cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L))))/5 + (16*(((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25)*cos(q2L) + (6*sin(q2L)^2)/25)*(cos(rotY_b)*(-(cos(q2L)*sin(q1L)) - cos(q1L)*sin(q2L)) - sin(rotY_b)*(cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L))))/5 ;
Mmat27 = (96*(cos(rotY_b)*(-(cos(q2L)*sin(q1L)) - cos(q1L)*sin(q2L)) - sin(rotY_b)*(cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L))))/125 ;

Mmat33 = 8403/2500 + (34*((11*cos(q1R)^2)/100 + (11*sin(q1R)^2)/100)^2)/5 + (16*(-((((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25)*sin(q1R) + (6*cos(q1R)*sin(q2R))/25)*(cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R))) - (-(cos(q2R)*sin(q1R)) - cos(q1R)*sin(q2R))*(cos(q1R)*((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25) - (6*sin(q1R)*sin(q2R))/25))^2)/5 + (16*((((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25)*sin(q1R) + (6*cos(q1R)*sin(q2R))/25)*(cos(q2R)*sin(q1R) + cos(q1R)*sin(q2R)) + (cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R))*(cos(q1R)*((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25) - (6*sin(q1R)*sin(q2R))/25))^2)/5 + (34*((11*cos(q1L)^2)/100 + (11*sin(q1L)^2)/100)^2)/5 + (16*(-((((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25)*sin(q1L) + (6*cos(q1L)*sin(q2L))/25)*(cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L))) - (-(cos(q2L)*sin(q1L)) - cos(q1L)*sin(q2L))*(cos(q1L)*((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25) - (6*sin(q1L)*sin(q2L))/25))^2)/5 + (16*((((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25)*sin(q1L) + (6*cos(q1L)*sin(q2L))/25)*(cos(q2L)*sin(q1L) + cos(q1L)*sin(q2L)) + (cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L))*(cos(q1L)*((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25) - (6*sin(q1L)*sin(q2L))/25))^2)/5 ;
Mmat34 = 67/100 + (187*((11*cos(q1R)^2)/100 + (11*sin(q1R)^2)/100))/250 + (16*(((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25)*sin(q2R) - (6*cos(q2R)*sin(q2R))/25)*(-((((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25)*sin(q1R) + (6*cos(q1R)*sin(q2R))/25)*(cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R))) - (-(cos(q2R)*sin(q1R)) - cos(q1R)*sin(q2R))*(cos(q1R)*((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25) - (6*sin(q1R)*sin(q2R))/25)))/5 + (16*(((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25)*cos(q2R) + (6*sin(q2R)^2)/25)*((((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25)*sin(q1R) + (6*cos(q1R)*sin(q2R))/25)*(cos(q2R)*sin(q1R) + cos(q1R)*sin(q2R)) + (cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R))*(cos(q1R)*((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25) - (6*sin(q1R)*sin(q2R))/25)))/5 ;
Mmat35 = 1/5 + (96*((((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25)*sin(q1R) + (6*cos(q1R)*sin(q2R))/25)*(cos(q2R)*sin(q1R) + cos(q1R)*sin(q2R)) + (cos(q1R)*cos(q2R) - sin(q1R)*sin(q2R))*(cos(q1R)*((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25) - (6*sin(q1R)*sin(q2R))/25)))/125 ;
Mmat36 = 67/100 + (187*((11*cos(q1L)^2)/100 + (11*sin(q1L)^2)/100))/250 + (16*(((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25)*sin(q2L) - (6*cos(q2L)*sin(q2L))/25)*(-((((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25)*sin(q1L) + (6*cos(q1L)*sin(q2L))/25)*(cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L))) - (-(cos(q2L)*sin(q1L)) - cos(q1L)*sin(q2L))*(cos(q1L)*((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25) - (6*sin(q1L)*sin(q2L))/25)))/5 + (16*(((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25)*cos(q2L) + (6*sin(q2L)^2)/25)*((((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25)*sin(q1L) + (6*cos(q1L)*sin(q2L))/25)*(cos(q2L)*sin(q1L) + cos(q1L)*sin(q2L)) + (cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L))*(cos(q1L)*((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25) - (6*sin(q1L)*sin(q2L))/25)))/5 ;
Mmat37 = 1/5 + (96*((((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25)*sin(q1L) + (6*cos(q1L)*sin(q2L))/25)*(cos(q2L)*sin(q1L) + cos(q1L)*sin(q2L)) + (cos(q1L)*cos(q2L) - sin(q1L)*sin(q2L))*(cos(q1L)*((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25) - (6*sin(q1L)*sin(q2L))/25)))/125 ;

Mmat44 = 1.58228 + (16*(((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25)*sin(q2R) - (6*cos(q2R)*sin(q2R))/25)^2)/5 + (16*(((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25)*cos(q2R) + (6*sin(q2R)^2)/25)^2)/5 ;
Mmat45 = 1/5 + (96*(((2*(1 - cos(q2R)))/5 + (16*cos(q2R))/25)*cos(q2R) + (6*sin(q2R)^2)/25))/125 ;
Mmat46 = 0;
Mmat47 = 0;

Mmat55 = 1.2143199999999998 ;
Mmat56 = 0;
Mmat57 = 0;

Mmat66 = 1.58228 + (16*(((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25)*sin(q2L) - (6*cos(q2L)*sin(q2L))/25)^2)/5 + (16*(((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25)*cos(q2L) + (6*sin(q2L)^2)/25)^2)/5 ;
Mmat67 = 1/5 + (96*(((2*(1 - cos(q2L)))/5 + (16*cos(q2L))/25)*cos(q2L) + (6*sin(q2L)^2)/25))/125 ;

Mmat77 =  1.2143199999999998;

% Symmetric elements
Mmat21 = Mmat12;
Mmat31 = Mmat13;
Mmat41 = Mmat14;
Mmat51 = Mmat15;
Mmat61 = Mmat16;
Mmat71 = Mmat17;

Mmat32 = Mmat23;
Mmat42 = Mmat24;
Mmat52 = Mmat25;
Mmat62 = Mmat26;
Mmat72 = Mmat27;

Mmat43 = Mmat34;
Mmat53 = Mmat35;
Mmat63 = Mmat36;
Mmat73 = Mmat37;

Mmat54 = Mmat45;
Mmat64 = Mmat46;
Mmat74 = Mmat47;

Mmat65 = Mmat56;
Mmat75 = Mmat57;

Mmat76 = Mmat67;

Mmat = [Mmat11 Mmat12 Mmat13 Mmat14 Mmat15 Mmat16 Mmat17;
        Mmat21 Mmat22 Mmat23 Mmat24 Mmat25 Mmat26 Mmat27;
        Mmat31 Mmat32 Mmat33 Mmat34 Mmat35 Mmat36 Mmat37;
        Mmat41 Mmat42 Mmat43 Mmat44 Mmat45 Mmat46 Mmat47;
        Mmat51 Mmat52 Mmat53 Mmat54 Mmat55 Mmat56 Mmat57;
        Mmat61 Mmat62 Mmat63 Mmat64 Mmat65 Mmat66 Mmat67;
        Mmat71 Mmat72 Mmat73 Mmat74 Mmat75 Mmat76 Mmat77];

return

end


