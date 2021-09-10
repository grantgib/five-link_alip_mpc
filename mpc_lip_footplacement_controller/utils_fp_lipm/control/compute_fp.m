function [ufp_sol,xlip_sol] = compute_fp(p)
    %% Extract Inputs
    import casadi.*
    % parameters
    m = p.m;
    g = p.g;
    z_H = p.z_H;
    
    % state
    xlip_init = p.xlip_init;
    Ly_des = p.Ly_des;
    
    % control
    ufp_stance_max = p.ufp_stance_max; % p.ufp_max;
    ufp_stance_min = p.ufp_stance_min;
    ufp_init = p.ufp_init;
    
    % Lz estimate
    Lz_est = p.Lz_est;
    
    % gait
    stanceLeg = p.stanceLeg;
    leg_width = p.leg_width;
    
    % terrain
    k = p.k;
    mu = p.mu;
    cos_alpha_x = p.cos_alpha_x;
    
    % mpc
    n_xlip = p.n_xlip;
    n_ufp = p.n_ufp;
    N_k = p.N_k;
    N_fp = p.N_fp;
    N_steps_ahead = p.N_steps;
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
    p_Lz_est = p.p_Lz_est;
    p_stanceLeg = p.p_stanceLeg;
    p_leg_width = p.p_leg_width;
    p_ufp_init = p.p_ufp_init;
    p_cos_alpha_x = p.p_cos_alpha_x;
    
    %% Choose Opti
    if stanceLeg == -1
        opti = opti_LS; 
    else
        opti = opti_RS;
    end
    
    %% Foot Placement
    if p.use_codegen
        sol = sqp_qrqp_solver(xlip_init,Lx_des,Ly_des,z_H,ufp_stance_max,ufp_stance_min,k,mu);
        xlip_sol = reshape(sol(1:n_xlip*N_k),n_xlip,N_k);
        ufp_sol = reshape(sol(n_xlip*N_k+1:n_xlip*N_k+n_ufp*N_fp),n_ufp,N_fp);
        
    else
        % params
        opti.set_value(p_x_init,xlip_init);
        opti.set_value(p_Ly_des,Ly_des);
        opti.set_value(p_z_H,z_H);
        opti.set_value(p_ufp_stance_max,ufp_stance_max);
        opti.set_value(p_ufp_stance_min,ufp_stance_min);
        opti.set_value(p_k,k);
        opti.set_value(p_mu,mu);
        opti.set_value(p_Lz_est,Lz_est);
        opti.set_value(p_stanceLeg,stanceLeg);
        opti.set_value(p_leg_width,leg_width);
        
        % initial guess
        if p.iter == 1
            ufp_guess = repmat([0; 0],1,N_fp);
            x_guess = compute_initial_guess(p,ufp_guess);
            opti.set_initial(opt_Ufp_traj,ufp_guess);   % opti.debug.value(opt_Ufp_traj,opti.initial())
            opti.set_initial(opt_X_traj,x_guess);       % opti.debug.value(opt_X_traj,opti.initial())
        else
            opti.set_initial(opt_Ufp_traj,p.ufp_guess_prev);   % opti.debug.value(opt_Ufp_traj,opti.initial())
            opti.set_initial(opt_X_traj,p.x_guess_prev); 
        end
        % Solve
        sol = opti.solve_limited();

        % Extract Solution    
        optvar = opti.x;
        xlip_sol_temp = opti.value(optvar(1:n_xlip*N_k));
        xlip_sol = reshape(xlip_sol_temp,n_xlip,N_k);
        ufp_sol_temp = opti.value(optvar(n_xlip*N_k+1:n_xlip*N_k+n_ufp*N_fp));
        ufp_sol = reshape(ufp_sol_temp,n_ufp,N_fp);
        cost_sol = sol.value(opti.f);
    end

end

function [x_guess] = compute_initial_guess(p,ufp_guess)
N_k = p.N_k;
n_xlip = p.n_xlip;
k_post_all = p.k_post_all;
fd_lip = p.fd_lip;
xlip_init = p.xlip_init;
k = p.k;
z_H = p.z_H;
Lz_est = p.Lz_est;
k_post_max = k_post_all(end);
k_post_all(end+1) = inf;

x_guess = zeros(n_xlip,N_k);
x_guess(:,1) = xlip_init;
for k = 2:N_k
    if k == k_post_all(1) && k <= k_post_max
        x_imp = [x_guess(1:2,k-1)-ufp_guess(:,1); x_guess(3:4,k-1)];
        x_guess(:,k) = full(fd_lip(x_imp,k,z_H,Lz_est));
        k_post_all(1) = [];
        ufp_guess(:,1) = [];
    else
        x_guess(:,k) = full(fd_lip(x_guess(:,k-1),k,z_H,Lz_est));
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