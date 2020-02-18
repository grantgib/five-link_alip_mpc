%% Test Casadi Linearization versus Analytical Derivation for Rabbit
% CONCLUSION
% Casadi jacobian is equivalent to more tedious analytical pinned
% linearization. Can also used for floating base model.
clear; clc; close all;

%% Path setup
restoredefaultpath;
if isunix
    %     addpath('../../casadi-linux-matlabR2014b-v3.5.1');
    import casadi.*
else
    addpath('../Toolboxes/casadi-windows-matlabR2014b-3.5.1');
    import casadi.*
end
addpath(genpath('../utils/'));

%% Original Symbolics
% Symbolic variables
x_b = SX.sym('x_b');
z_b = SX.sym('z_b');
rotY_b = SX.sym('rotY_b');
q1R = SX.sym('q1R');
q2R = SX.sym('q2R');
q1L = SX.sym('q1L');
q2L = SX.sym('q2L');
dx_b = SX.sym('dx_b');
dz_b = SX.sym('dz_b');
drotY_b = SX.sym('drotY_b');
dq1R = SX.sym('dq1R');
dq2R = SX.sym('dq2R');
dq1L = SX.sym('dq1L');
dq2L = SX.sym('dq2L');
q = [x_b; z_b; rotY_b; q1R; q2R; q1L; q2L];
dq = [dx_b; dz_b; drotY_b; dq1R; dq2R; dq1L; dq2L];
x = [q; dq];
n_q = length(q);
n_x = length(x);

u_q1R = SX.sym('u_q1R');
u_q2R = SX.sym('u_q2R');
u_q1L = SX.sym('u_q1L');
u_q2L = SX.sym('u_q2L');
u = [u_q1R; u_q2R; u_q1L; u_q2L];
n_u = length(u);

%% Euler-Lagrange Dynamics: Pinned model
coriolis = 1;
if coriolis == 1
    D = Mmat_notorso(x_b,z_b,rotY_b,q1R,q2R,q1L,q2L); % 7x7
    C = Coriolis(D,q,dq); % should be a function from FROST
%     C = ones(n_q,n_q);
    G = GravityVector_notorso(x_b,z_b,rotY_b,q1R,q2R,q1L,q2L); %7x1
    B = 50*[zeros(3,4); eye(4)];    % Multiply by 50 b/c of gear reduction
else
    % Dynamics (Mmat*ddq + G = B*u)~ ignoring coriolis
    D = Mmat_notorso(x_b,z_b,rotY_b,q1R,q2R,q1L,q2L); % 7x7
    C = zeros(7,7);
    G = GravityVector_notorso(x_b,z_b,rotY_b,q1R,q2R,q1L,q2L); %7x1
    B = 50*[zeros(3,4); eye(4)];    % Multiply by 50 b/c of gear reduction
end

f_D = Function('f_D',{x},{D});
f_C = Function('f_C',{x},{C});
f_G = Function('f_G',{x},{G});
f_B = Function('f_B',{x},{B});

%% Linearize Cartpole


% Create delta symbolic state and control variables
delta_x_b = SX.sym('delta_x_b');
delta_z_b = SX.sym('delta_z_b');
delta_rotY_b = SX.sym('delta_rotY_b');
delta_q1R = SX.sym('delta_q1R');
delta_q2R = SX.sym('delta_q2R');
delta_q1L = SX.sym('delta_q1L');
delta_q2L = SX.sym('delta_q2L');
delta_dx_b = SX.sym('delta_dx_b');
delta_dz_b = SX.sym('delta_dz_b');
delta_drotY_b = SX.sym('delta_drotY_b');
delta_dq1R = SX.sym('delta_dq1R');
delta_dq2R = SX.sym('delta_dq2R');
delta_dq1L = SX.sym('delta_dq1L');
delta_dq2L = SX.sym('delta_dq2L');

delta_q = [delta_x_b; delta_z_b; delta_rotY_b; delta_q1R; delta_q2R; delta_q1L; delta_q2L];
delta_dq = [delta_dx_b; delta_dz_b; delta_drotY_b; delta_dq1R; delta_dq2R; delta_dq1L; delta_dq2L];
delta_x = [delta_q; delta_dq];

delta_u_q1R = SX.sym('delta_u_q1R');
delta_u_q2R = SX.sym('delta_u_q2R');
delta_u_q1L = SX.sym('delta_u_q1L');
delta_u_q2L = SX.sym('delta_u_q2L');
delta_u = [delta_u_q1R; delta_u_q2R; delta_u_q1L; delta_u_q2L];

%% Analytical linearization
ddq = SX.sym('ddq',n_q,1);  % Must create ddq symbolics for analytical derivation
A1 = D;
A2 = 2*C;
A3 = jacobian(D*ddq + C*dq + G,q);
Alina = [zeros(n_q,n_q), eye(n_q);
         -A1\A3, -A1\A2];
Blina = [zeros(n_q,n_u); A1\B];
delta_xdot_analytical = Alina*delta_x + Blina*delta_u;
f_Alina = Function('f_Alina',{x,ddq,u},{Alina});
f_Blina = Function('f_Blina',{x,ddq,u},{Blina});
f_linear_analytical = Function('f_linear_analytical',{x,ddq,u,delta_x,delta_u},{delta_xdot_analytical});   % linearized mapping using analytical derivation68

%% Casadi Linearization
ddq = D\(-C*dq-G+B*u);
Alin = jacobian([dq; ddq],x);
Blin = jacobian([dq; ddq],u);
delta_xdot = Alin*delta_x + Blin*delta_u;
f_Alin = Function('f_Alin',{x,u},{Alin});
f_Blin = Function('f_Blin',{x,u},{Blin});
f_linear = Function('f_linear',{x,u,delta_x,delta_u},{delta_xdot});   % linearized mapping (using Casadi jacobian)

%% Numerical Check
ntest = 1000;
Error = zeros(ntest,1);
time_analytical = zeros(ntest,1);
time_casadi = zeros(ntest,1);

disp('Running Tests...');
for i = 1:ntest
    % test numbers
    q_test = rand(n_q,1);
    dq_test = rand(n_q,1);
    x_test = [q_test; dq_test];
    u_test = rand(n_u,1);
    delta_x_test = rand(n_x,1);
    delta_u_test = rand(n_u,1);
    D_test = f_D(x_test);
    C_test = f_C(x_test);
    G_test = f_G(x_test);
    B_test = f_B(x_test);
    ddq_test = D_test\(-C_test*dq_test-G_test+B_test*u_test);
    
    % compute and print
    f_Alina(x_test,ddq_test,u_test);
    f_Alin(x_test,u_test);
    
    f_Blina(x_test,ddq_test,u_test);
    f_Blin(x_test,u_test);
    
    tic
    fa = f_linear_analytical(x_test,ddq_test,u_test,delta_x_test,delta_u_test);
    time_analytical(i) = toc;
    
    tic
    fc = f_linear(x_test,u_test,delta_x_test,delta_u_test);
    time_casadi(i) = toc;
    
    Error(i) = norm(full(fa - fc));
    
    if mod(i,ntest/10) == 0
        disp(i);
    end
end

%% End of Test Results
error_total = norm(Error);
casadi_time = mean(time_casadi);
analytical_time = mean(time_analytical);

disp('End of Test!');
disp('Statistics');
disp("Error Norm = " + error_total);
disp("Jacobian of Nonlinear System Mean Computation Time = " + casadi_time);
disp("Analytical Linearization Mean Computation Time = " + analytical_time);

figure
plot(time_casadi); hold on; plot(time_analytical);
legend('casadi','analytical');
ylabel('Computation time (sec)');
figure
plot(Error);
ylabel('2-norm error');

save('LinearizationTestResults');





