%% Decoupled LIP dynamics
clear; clc;
syms m g H Ts real
Ax = [0, 1/(m*H); m*g, 0];
Ay = [0, -1/(m*H); -m*g, 0];

xT_LyT = simplify(expm(Ax*Ts))
yT_LxT = simplify(expm(Ax*Ts))

%% X_c des derivation
clear; clc;
syms l T m H real
syms x0 xT Ly real
eqn1 = xT == cosh(l*T)*x0 + (1/(m*H*l))*sinh(l*T)*Ly;
eqn2 = Ly == m*H*l*sinh(l*T)*x0 + cosh(l*T)*Ly;

[A,B] = equationsToMatrix([eqn1,eqn2],[x0,xT])

X_des = simplify(linsolve(A,B),'Steps',50)


