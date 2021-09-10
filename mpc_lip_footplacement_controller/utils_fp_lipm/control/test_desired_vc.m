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
syms kx ky real
syms ufp_sol_x ufp_sol_y real
syms s_cl z_cl real
syms p_st_to_sw_z_init real
p_st_to_sw_z_end = kx*ufp_sol_x + ky*ufp_sol_y; % + ky*ufp_sol_y for cassie
p_st_to_sw_z_cl = p_st_to_sw_z_end + z_cl;

% p_st_to_sw_z = a*s^2 + b*s + c
A = [...
    0,          0,      1;
    1,          1,      1;
    s_cl^2,     s_cl,   1];
B = [p_st_to_sw_z_init; p_st_to_sw_z_end; p_st_to_sw_z_cl];
sol = simplify(linsolve(A,B),100)
a = sol(1);
b = sol(2);
c = sol(3);



















