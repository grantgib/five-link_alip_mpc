function [ufp_sol,xlip_sol] = compute_fp(p)
%% Extract Inputs
import casadi.*
% parameters
z_H = p.z_H;

% state
xlip_init = p.xlip_init;
Lx_offset = p.Lx_offset;
Ly_des = p.Ly_des;

% control
ufp_stance_max = p.ufp_stance_max; % p.ufp_max;
ufp_stance_min = p.ufp_stance_min;

% gait
stanceLeg = p.stanceLeg;
leg_width = p.leg_width;

% terrain
k = p.k;
mu = p.mu;

% mpc
n_xlip = p.n_xlip;
n_ufp = p.n_ufp;
N_k = p.N_k;
N_fp = p.N_fp;
f_opti_LS = p.f_opti_LS;
f_opti_RS = p.f_opti_RS;
opti_LS = p.opti_LS;
opti_RS = p.opti_RS;
opt_X_traj = p.opt_X_traj;
opt_Ufp_traj = p.opt_Ufp_traj;
p_x_init = p.p_x_init;
p_Ly_des = p.p_Ly_des;
p_z_H = p.p_z_H;
p_ufp_stance_max = p.p_ufp_stance_max;
p_ufp_stance_min = p.p_ufp_stance_min;
p_k = p.p_k;
p_mu = p.p_mu;
p_stanceLeg = p.p_stanceLeg;
p_leg_width = p.p_leg_width;
p_Lx_offset = p.p_Lx_offset;

%% Choose Opti
if stanceLeg == -1 % left stance
    opti = opti_LS;
    f_opti = f_opti_LS;
else
    opti = opti_RS;
    f_opti = f_opti_RS;
end
%% initial guess
if p.iter == 1
    ufp_guess = repmat([0; 0],1,N_fp);
    x_guess = compute_initial_guess(p,ufp_guess);
    opti.set_initial(opt_Ufp_traj,ufp_guess);   % opti.debug.value(opt_Ufp_traj,opti.initial())
    opti.set_initial(opt_X_traj,x_guess);       % opti.debug.value(opt_X_traj,opti.initial())
else
    ufp_guess = p.ufp_guess_prev;
    x_guess = p.x_guess_prev;
    opti.set_initial(opt_Ufp_traj,p.ufp_guess_prev);   % opti.debug.value(opt_Ufp_traj,opti.initial())
    opti.set_initial(opt_X_traj,p.x_guess_prev);
end
%% Foot Placement
if p.use_function
    % Solve
    [xlip_sol_temp,ufp_sol_temp] = f_opti(x_guess,ufp_guess,xlip_init,Ly_des,z_H,ufp_stance_max,ufp_stance_min,k,mu,stanceLeg,leg_width,Lx_offset);

    % Extract Solution
    xlip_sol = full(xlip_sol_temp);
    ufp_sol = full(ufp_sol_temp);
else
    % params
    opti.set_value(p_x_init,xlip_init);
    opti.set_value(p_Ly_des,Ly_des);
    opti.set_value(p_z_H,z_H);
    opti.set_value(p_ufp_stance_max,ufp_stance_max);
    opti.set_value(p_ufp_stance_min,ufp_stance_min);
    opti.set_value(p_k,k);
    opti.set_value(p_mu,mu);
    opti.set_value(p_stanceLeg,stanceLeg);
    opti.set_value(p_leg_width,leg_width);
    opti.set_value(p_Lx_offset,Lx_offset);
    
    % Solve
    sol = opti.solve_limited(); % solve_limited ignores max iteration and max execution time warnings
    
    % Extract Solution
    optvar = opti.x;
    xlip_sol_temp = opti.value(optvar(1:n_xlip*N_k));
    xlip_sol = reshape(xlip_sol_temp,n_xlip,N_k);
    ufp_sol_temp = opti.value(optvar(n_xlip*N_k+1:n_xlip*N_k+n_ufp*N_fp));
    ufp_sol = reshape(ufp_sol_temp,n_ufp,N_fp);
    %         cost_sol = sol.value(opti.f);
end

end
%%
function [x_guess] = compute_initial_guess(p,ufp_guess)
N_k = p.N_k;
n_xlip = p.n_xlip;
k_post_all = p.k_post_all;
fd_lip = p.fd_lip;
xlip_init = p.xlip_init;
z_H = p.z_H;
k_post_max = k_post_all(end);
k_post_all(end+1) = inf;

x_guess = zeros(n_xlip,N_k);
x_guess(:,1) = xlip_init;
for i = 2:N_k
    if i == k_post_all(1) && i <= k_post_max
        x_imp = [x_guess(1:2,i-1)-ufp_guess(:,1); x_guess(3:4,i-1)];
        x_guess(:,i) = full(fd_lip(x_imp,z_H));
        k_post_all(1) = [];
        ufp_guess(:,1) = [];
    else
        x_guess(:,i) = full(fd_lip(x_guess(:,i-1),z_H));
    end
end
% figure
% kiter = 1:1:N_k;
% scatter(kiter,x_guess(1,:))
% title('xc');
% figure
% scatter(kiter,x_guess(2,:))
% title('yc');
% figure
% scatter(kiter,x_guess(3,:))
% title('Lx');
% figure
% scatter(kiter,x_guess(4,:))
% title('Ly');
end