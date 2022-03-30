%% Slip Constraint for 3D-LIP
clear; clc;

syms xc; assume(xc,'real')
syms yc; assume(yc,'real')
syms kx; assume(kx,{'real'})
syms ky; assume(ky,{'real'})
syms zH; assume(zH,{'positive','real'} )
syms mu; assume(mu,{'positive','real'}) 

zc = kx*xc + ky*yc + zH;
Fx_by_Fz = xc/zc;
Fy_by_Fz = yc/zc;


% Fx - Fz*kx <= mu*kx*Fx + mu*Fz
% Fx/Fz - kx <= mu*kx*Fx/Fz + mu
% (1-mu*kx)*(Fx/Fz) - kx - mu <= 0


eq1 = simplify((1-mu*kx-kx^2)*xc-kx*ky*yc-kx*zH <= 0,100)
eq2 = simplify((1-mu*ky-ky^2)*yc-kx*ky*xc-ky*zH <= 0,100)

sol = solve(eq1,eq2,xc,yc,'ReturnConditions',true)
pretty(sol.conditions)


%% 
a1 = 1-mu*kx-kx^2;
a2 = -kx*ky;
a3 = -kx*zH;
a4 = 1-mu*ky-ky^2;
A = [a1, a2; a2, a4];
simplify(eig(A))


% eq1 = simplify((1-mu <= 0)