function [ufp_sol,xlip_sol] = compute_fp(p)
    %% Extract Inputs
    import casadi.*
    % parameters
    z_H = p.z_H;
    
    % state
    x_init = p.x_init;
    xcdot_des = p.xcdot_des;
    ycdot_des = p.ycdot_des;
    
    % control
    ufp_max = p.ufp_max; % p.ufp_max;
    ufp_min = p.ufp_min;
    
    % terrain
    k = p.k;
    mu = p.mu;
    
    % mpc
    n_xlip = p.n_xlip;
    n_ufp = p.n_ufp;
    N_steps_ahead = p.N_steps;
    opti = p.opti;
    p_x_init = p.p_x_init;
    p_xcdot_des = p.p_xcdot_des;
    p_ycdot_des = p.p_ycdot_des;
    p_z_H = p.p_z_H;
    p_ufp_max = p.p_ufp_max;
    p_ufp_min = p.p_ufp_min;
    p_k = p.p_k;
    p_mu = p.p_mu;
    
    %% Foot Placement
    % params
    opti.set_value(p_x_init,x_init);
    opti.set_value(p_xcdot_des,xcdot_des);
    opti.set_value(p_ycdot_des,ycdot_des);
    opti.set_value(p_z_H,z_H);
    opti.set_value(p_ufp_max,ufp_max);
    opti.set_value(p_ufp_min,ufp_min);
    opti.set_value(p_k,k);
    opti.set_value(p_mu,mu);
    
    % Solven_ufp
    sol = opti.solve();
    
    % Extract Solution
    optvar = opti.x;
    xlip_sol_temp = opti.value(optvar(1:end-(n_ufp*N_steps_ahead)));
    xlip_sol = reshape(xlip_sol_temp,n_xlip,length(xlip_sol_temp)/n_xlip);
    ufp_sol_temp = opti.value(optvar(end-(n_ufp*N_steps_ahead-1):end));
    ufp_sol = reshape(ufp_sol_temp,n_ufp,length(ufp_sol_temp)/n_ufp);
    cost_sol = sol.value(opti.f);
    
end