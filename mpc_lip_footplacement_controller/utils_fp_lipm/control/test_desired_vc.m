%% Rabbit Parabola for desired trajectory of p_st_to_sw_z
clear; close all
syms ufp_sol_x kx real
syms s_cl z_cl real
syms p_st_to_sw_z_init real
p_st_to_sw_z_end = kx*ufp_sol_x; % + ky*ufp_sol_y for cassie
p_st_to_sw_z_cl = p_st_to_sw_z_end + z_cl;

A = [...
    0,          0,      1;
    1,          1,      1;
    s_cl^2,     s_cl,   1];
B = [p_st_to_sw_z_init; p_st_to_sw_z_end; p_st_to_sw_z_cl];
tic
sol = simplify(linsolve(A,B),100)

toc
a = sol(1);
b = sol(2);
c = sol(3);

%% Cassie Parabola for desired trajectory of p_st_to_sw_z
clear; close all
syms kx_body_ ky_body_ real
syms ufp_sol_x ufp_sol_y real  
syms s_clearance_ z_clearance real
syms p_st_to_sw_z_init real
p_st_to_sw_z_end = kx*ufp_sol_x + ky*ufp_sol_y; % + ky*ufp_sol_y for cassie
p_st_to_sw_z_cl = p_st_to_sw_z_end + z_cl;

% p_st_to_sw_z = a*s^2 + b*s + c
A = [...
    0,          0,      1;
    1,          1,      1;
    s_cl^2,     s_cl,   1];
B = [p_st_to_sw_z_init; p_st_to_sw_z_end; p_st_to_sw_z_cl];
sol = simplify(linsolve(A,B),100);
a_cassie = sol(1)
b_cassie = sol(2)
c_cassie = sol(3)

matlabFunction(a_cassie,'File','a_func','Vars',{kx,ky,ufp_sol_x,ufp_sol_y,s_cl,z_cl,p_st_to_sw_z_init});
matlabFunction(b_cassie,'File','b_func','Vars',{kx,ky,ufp_sol_x,ufp_sol_y,s_cl,z_cl,p_st_to_sw_z_init});
matlabFunction(c_cassie,'File','c_func','Vars',{kx,ky,ufp_sol_x,ufp_sol_y,s_cl,z_cl,p_st_to_sw_z_init});


% save('vc_params','a_cassie','b_cassie','c_cassie');

%% Test Cassie
clear;
% parameters
kx = tan(deg2rad(5));
ky = tan(deg2rad(0));
ufp_sol_x = 0.6;
ufp_sol_y = 0;
s_cl = 2/3;
z_cl = 0.2;
p_st_to_sw_z_init = 0;

% traj
s = linspace(0,1,1000);
p_st_to_sw_traj = a_func(kx,ky,ufp_sol_x,ufp_sol_y,s_cl,z_cl,p_st_to_sw_z_init)*s.^2 + ...
    b_func(kx,ky,ufp_sol_x,ufp_sol_y,s_cl,z_cl,p_st_to_sw_z_init)*s + ...
    c_func(kx,ky,ufp_sol_x,ufp_sol_y,s_cl,z_cl,p_st_to_sw_z_init);

% plot
figure;
plot(s,p_st_to_sw_traj)







%% Digit
clear; close all
syms kx_body_ ky_body_ real
syms p_sw_wrt_st_des_x_aligned p_sw_wrt_st_des_y_aligned real  
syms s_clearance_ z_clearance_ real
syms p_sw_wrt_st_toe_bos_aligned_ real
p_st_to_sw_z_end = kx_body_*p_sw_wrt_st_des_x_aligned + ky_body_*p_sw_wrt_st_des_y_aligned; % + ky*ufp_sol_y for cassie
p_st_to_sw_z_cl = p_st_to_sw_z_end + z_clearance_;

% p_st_to_sw_z = a*s^2 + b*s + c
A = [...
    0,          0,      1;
    1,          1,      1;
    s_clearance_^2,     s_clearance_,   1];
B = [p_sw_wrt_st_toe_bos_aligned_; p_st_to_sw_z_end; p_st_to_sw_z_cl];
sol = simplify(linsolve(A,B),100);
a_digit = sol(1)
b_digit = sol(2)
c_digit = sol(3)

% matlabFunction(a_cassie,'File','a_func','Vars',{kx,ky,ufp_sol_x,ufp_sol_y,s_cl,z_cl,p_st_to_sw_z_init});
% matlabFunction(b_cassie,'File','b_func','Vars',{kx,ky,ufp_sol_x,ufp_sol_y,s_cl,z_cl,p_st_to_sw_z_init});
% matlabFunction(c_cassie,'File','c_func','Vars',{kx,ky,ufp_sol_x,ufp_sol_y,s_cl,z_cl,p_st_to_sw_z_init});


% save('vc_params','a_cassie','b_cassie','c_cassie');







