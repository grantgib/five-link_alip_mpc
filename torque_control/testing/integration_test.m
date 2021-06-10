%% Test Casadi Forward Integration
clear; clc;

%% Path setup
restoredefaultpath;
if isunix
    addpath('../../casadi-linux-matlabR2014b-v3.5.1');
    import casadi.*
else
    addpath('../Toolboxes/casadi-windows-matlabR2014b-3.5.1');
    import casadi.*
end

%% Integration Test
x = SX.sym('x'); z = SX.sym('z'); p = SX.sym('p');
dae = struct('x',x,'z',z,'p',p,'ode',z+p,'alg',z*cos(z)-x);
F = integrator('F', 'idas', dae);
disp(F)

r = F('x0',0,'z0',0,'p',0.1);
disp(r.xf)

%% Only ode
dae = struct('x',x,'z',z,'p',p,'ode',z+p,'alg',p);
F = integrator('F', 'idas', dae);
disp(F)

r = F('x0',0,'z0',0,'p',0.1);
disp(r.xf)

