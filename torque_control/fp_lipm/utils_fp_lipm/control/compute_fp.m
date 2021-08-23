function [ufp_sol,xlip_sol] = compute_fp(p)
    %% Extract Inputs
    import casadi.*
    % parameters
    m = p.m;
    g = p.g;
    z_H = p.z_H;
    
    % state
    x_init = p.x_init;
    Lx_des = p.Lx_des;
    Ly_des = p.Ly_des;
    
    % control
    ufp_stance_max = p.ufp_stance_max; % p.ufp_max;
    ufp_stance_min = p.ufp_stance_min;
    ufp_init = p.ufp_init;
    
    
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
    opti = p.opti;
    p_x_init = p.p_x_init;
    p_Lx_des = p.p_Lx_des;
    p_Ly_des = p.p_Ly_des;
    p_z_H = p.p_z_H;
    p_ufp_stance_max = p.p_ufp_stance_max;
    p_ufp_stance_min = p.p_ufp_stance_min;
    p_k = p.p_k;
    p_mu = p.p_mu;
    p_ufp_init = p.p_ufp_init;
    p_cos_alpha_x = p.p_cos_alpha_x;
    
    %% Foot Placement
    % params
    opti.set_value(p_x_init,x_init);
    opti.set_value(p_Lx_des,Lx_des);
    opti.set_value(p_Ly_des,Ly_des);
    opti.set_value(p_z_H,z_H);
    opti.set_value(p_ufp_stance_max,ufp_stance_max);
    opti.set_value(p_ufp_stance_min,ufp_stance_min);
    opti.set_value(p_k,k);
    opti.set_value(p_mu,mu);
    opti.set_value(p_ufp_init,ufp_init);
    opti.set_value(p_cos_alpha_x,cos_alpha_x);
    
    % Solven_ufp
    sol = opti.solve();
    
    % Extract Solution    
    optvar = opti.x;
    xlip_sol_temp = opti.value(optvar(1:n_xlip*N_k));
    xlip_sol = reshape(xlip_sol_temp,n_xlip,N_k);
    ufp_sol_temp = opti.value(optvar(n_xlip*N_k+1:n_xlip*N_k+n_ufp*N_fp));
    ufp_sol = reshape(ufp_sol_temp,n_ufp,N_fp);
    slack_slip_sol = opti.value(optvar(n_xlip*N_k+n_ufp*N_fp+1));
    cost_sol = sol.value(opti.f);
    

end