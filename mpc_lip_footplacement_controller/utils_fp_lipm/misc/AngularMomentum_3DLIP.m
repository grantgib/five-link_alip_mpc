%% Angular Momentum for 3D LIP
syms xc yc zc real
syms xcdot ycdot zcdot real
syms m g kx ky zH real

p = [xc; yc; zc];
pdot = [xcdot; ycdot; zcdot];

L = simplify(cross(p,m*pdot),100)


L = subs(L,zc,kx*xc+ky*yc+zH);
L = simplify(expand(subs(L,zcdot,kx*xcdot+ky*ycdot)),10)