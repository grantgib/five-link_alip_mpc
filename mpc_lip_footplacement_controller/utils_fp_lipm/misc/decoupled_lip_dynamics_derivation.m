%% Decoupled LIP dynamics
clear; clc;
syms m g H Ts l real
Ax = [0, 1/(m*H); m*g, 0];
Ay = [0, -1/(m*H); -m*g, 0];

xT_LyT = simplify(expm(Ax*Ts),50)
yT_LxT = simplify(expm(Ay*Ts),50)

%% X_c des derivation
syms x0 xT Ly real
eqn1 = xT == cosh(l*Ts)*x0 + (1/(m*H*l))*sinh(l*Ts)*Ly;
eqn2 = Ly == m*H*l*sinh(l*Ts)*x0 + cosh(l*Ts)*Ly;
[A,B] = equationsToMatrix([eqn1,eqn2],[x0,xT]);
X_des = simplify(linsolve(A,B),'Steps',100)

%% Y_c des derivation
syms yT LxT y0 Lx0 real
y0 = -yT;
% LxT = -Lx0;
eq1 = yT == cosh(l*Ts)*y0 - (1/(m*H*l))*sinh(l*Ts)*Lx0;
eq2 = LxT == - m*H*l*sinh(l*Ts)*y0 + cosh(l*Ts)*Lx0;
[A,B] = equationsToMatrix([eq1,eq2],[yT,LxT]);
Y_des = simplify(linsolve(A,B),'Steps',100)