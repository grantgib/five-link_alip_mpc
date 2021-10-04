function [] = plot_results(sym_info,traj_info,plot_info)
%% Extract variables from inputs
disp("Plotting Results...");

% dyn info
n_q = sym_info.dim.n_q;
n_x = sym_info.dim.n_x;
n_u = sym_info.dim.n_u;
n_w = sym_info.dim.n_w;
n_h = sym_info.dim.n_h;

%time
time_traj = traj_info.time_traj;
t_impact_traj = traj_info.t_impact_traj;
s_traj = traj_info.s_traj;

% state
x_traj = traj_info.x_traj;

% torque control
u_io_traj = traj_info.u_io_traj;

% wrench
w_io_traj = traj_info.w_io_traj;
w_aligned_traj = traj_info.w_aligned_traj;

% foot placement
ufp_world_traj = traj_info.ufp_world_traj;
ufp_rel_traj = traj_info.ufp_rel_traj;
ufp_sol_traj = traj_info.ufp_sol_traj;
xlip_sol_traj = traj_info.xlip_sol_traj;

% centroidal dynamics
p_com_world_traj = traj_info.p_com_world_traj;
v_com_world_traj = traj_info.v_com_world_traj;
p_com_stance_traj = traj_info.p_com_stance_traj;
v_com_stance_traj = traj_info.v_com_stance_traj;
Ly_stance_traj = traj_info.Ly_stance_traj;

% virtual constraints
ha_traj = traj_info.ha_traj;
ha_dot_traj = traj_info.ha_dot_traj;
ha_ddot_traj = traj_info.ha_ddot_traj;
hd_traj = traj_info.hd_traj;
hd_dot_traj = traj_info.hd_dot_traj;
hd_ddot_traj = traj_info.hd_ddot_traj;
y_traj = traj_info.y_traj;
y_dot_traj = traj_info.y_dot_traj;
y_ddot_traj = traj_info.y_ddot_traj;

% foot trajectories
p_sw_world_traj = traj_info.pos_sw_world_traj;
p_st_world_traj = traj_info.pos_st_world_traj;
p_sw_rel_traj = traj_info.pos_sw_rel_traj;
p_st_rel_traj = traj_info.pos_st_rel_traj;

% limit traj
ufp_stance_max_traj = traj_info.ufp_stance_max_traj;
ufp_stance_min_traj = traj_info.ufp_stance_min_traj;
xc_slip_limit_traj = traj_info.xc_slip_limit_traj;
xc_mech_hip_limit_traj = traj_info.xc_mech_hip_limit_traj;

% ideal lip
% xlip_ideal_traj = traj_info.xlip_ideal_traj;

% impact
impact_traj = traj_info.impact_traj;

% Foot placement solutions
p_sw_com_grant = traj_info.p_sw_com_grant_traj;
p_sw_com_yukai = traj_info.p_sw_com_yukai_traj;

% Desired
Ly_des_traj = traj_info.Ly_des_traj;

% Friction coefficient
mu_traj = traj_info.mu_traj;

%% Initialize variables
q_header = {'$\bar{x}$','$\bar{z}$','$\psi$','$q_{1R}$','$q_{2R}$','$q_{1L}$','$q_{2L}$'}';
dq_header = {'$\dot{\bar{x}}$','$\dot{\bar{z}}$','$\dot{\psi}_Y$','$\dot{q}_{1R}$','$\dot{q}_{2R}$','$\dot{q}_{1L}$','$\dot{q}_{2L}$'}';
u_header = {'$u_{q_{1R}}$','$u_{q_{2R}}$','$u_{q_{1L}}$','$u_{q_{2L}}$'};
w_header = {'$f_x$','$f_z$'};

h_header = {'$h_1=$torso angle', '$h_2=$hip height', '$h_3=$swing foot X', '$h_4=$swing foot Z'};
h_dot_header = {'$\dot{h}_1=$torso angle velocity', '$\dot{h}_2=$hip height velocity', '$\dot{h}_3=$swing foot X velocity', '$\dot{h}_4=$swing foot Z velocity'};

y_header = {'$y_1$','$y_2$','$y_3$','$y_4$'};

q_err_header = {'$\bar{x}_{err}$','$\bar{z}_{err}$','${rot_Y}_{err}$','${q_{1R}}_{err}$','${q_{2R}}_{err}$','${q_{1L}}_{err}$','${q_{2L}}_{err}$'}';
dq_err_header = {'$\dot{\bar{x}}_{err}$','$\dot{\bar{z}}_{err}$','$\dot{rot}_{Y_{err}}$','$\dot{q}_{{1R}_{err}}$','$\dot{q}_{{2R}_{err}}$','$\dot{q}_{{1L}_{err}}$','$\dot{q}_{{2L}_{err}}$'};
time_calc_header = {'Controller Calculation Time [sec]','interpreter','latex'};

blue = [0, 0.4470, 0.7410];
width_ref = 1;
width_traj = 2;
width_bound = 1;
sz = 15;

%% States
% Positions
if plot_info.x
    figure
    for i = 1:n_q
        subplot(3,3,i);
        hold on;
        plot(time_traj,x_traj(i,:),':','LineWidth',width_traj);
        title(q_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz)
    end
    set(legend,'Position',[0.45 0.19 0.17 0.11]);
    sgtitle("State Position Trajectories (q) for N = 5");
    
end
% Velocities
if plot_info.x
    figure
    for i = 1:length(q_header)
        subplot(3,3,i);
        hold on; 
        plot(time_traj,x_traj(n_q+i,:),':','LineWidth',width_traj);
        title(dq_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz)
    end
    set(legend,'Position',[0.45 0.19 0.17 0.11]);
end

%% Control inputs
if plot_info.u
    figure
    for i = 1:n_u
        subplot(2,2,i);
        plot(time_traj,u_io_traj(i,:),'LineWidth',width_traj);
        title(u_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz)
    end
    sgtitle("Control Torques")
end

%% Wrench
if plot_info.w
    figure
    for i = 1:n_w
        subplot(1,2,i);
        plot(time_traj(1:size(w_io_traj,2)),w_io_traj(i,:));
        title(w_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz);
    end
    
    figure
    hold on;
    plot(time_traj,w_aligned_traj(1,:)./w_aligned_traj(2,:))
    plot(time_traj,mu_traj(1,:),'--r');
    plot(time_traj,-mu_traj(1,:),'--r');
    legend('Friction cone estimate','friction coefficient');
end

%% Foot Placement
fp_headers = {'x','z'};
if plot_info.fp
    for i = 1:2
        figure
        hold on;
        scatter(time_traj,ufp_world_traj(i,:));
        scatter(time_traj,p_st_world_traj(i,:),'filled');
        plot(time_traj,p_sw_world_traj(i,:),'LineWidth',4);
        legend('desired fp','stance','swing');
        title_string = "world absolute Foot placement " + fp_headers(i);
        title(title_string);
    end
    for i = 1:2
        figure
        hold on;
        scatter(time_traj,ufp_rel_traj(i,:));
        scatter(time_traj,p_st_rel_traj(i,:),'filled');
        plot(time_traj,p_sw_rel_traj(i,:),'LineWidth',4);
        plot(time_traj,ufp_stance_max_traj(1,:),'--r');
        plot(time_traj,ufp_stance_min_traj(1,:),'--r');
        legend('desired fp','stance','swing');
        title_string = "Relative Foot placement " + fp_headers(i);
        title(title_string);
    end
    
    figure
    hold on;
    
    plot(time_traj,p_sw_com_grant,'Linewidth',4);
    plot(time_traj,p_sw_com_yukai,'Linewidth',4,'LineStyle','--');
    legend('grant','yukai')
    title("Foot placement computation");
end




%% Centroidal Dynamics
if plot_info.com_dyn
    com_headers = {'x','z'};
    for i = 1:2
        figure
        hold on; grid on;
        plot(time_traj,p_com_world_traj(i,:));
        title_str = "com world position " + com_headers{i};
        title(title_str);
    end
    
    for i = 1:2
        figure
        hold on; grid on;
        plot(time_traj,v_com_world_traj(i,:));
        title_str = "com world velocity " + com_headers{i};
        title(title_str);
    end
    
    for i = 1:2
        figure
        hold on; grid on;
        plot(time_traj,p_com_stance_traj(i,:));
        if i == 1
            plot(time_traj,xc_slip_limit_traj,'--r');
            plot(time_traj,xc_mech_hip_limit_traj(1,:),'--m');
            legend('p_st_to_com','xc_slip_limit','xc_mech_limit');
        end
        title_str = "com stance position " + com_headers{i};
        title(title_str);
        
    end
    
    for i = 1:2
        figure
        hold on; grid on;
        plot(time_traj,v_com_stance_traj(i,:));
        title_str = "com stance velocity " + com_headers{i};
        title(title_str);
    end
    
    
    figure
    hold on; grid on;
    plot(time_traj,Ly_stance_traj)
    plot(time_traj,Ly_des_traj,':g','Linewidth',4);
    title('Angular Momentum about stance foot');   
end

%% Virtuals
if plot_info.vc
    figure
    for i = 1:n_h
        subplot(2,2,i);
        plot(time_traj,ha_traj(i,:));
        hold on; plot(time_traj,hd_traj(i,:));
        title(h_header(i),'interpreter','latex');
        xlabel('time');
        grid on; set(gca,'FontSize',sz);
    end
    legend('actual','desired','location','best');
    sgtitle('Virtual Output Positions');

    figure
    for i = 1:n_h
        subplot(2,2,i);
        plot(time_traj,ha_dot_traj(i,:));
        hold on; plot(time_traj,hd_dot_traj(i,:));
        title(h_dot_header(i),'interpreter','latex');
        xlabel('time');
        grid on; set(gca,'FontSize',sz);
    end
    legend('actual','desired','location','best');
    sgtitle('Virtual Output Velocities');
    
    figure
    for i = 1:n_h
        subplot(2,2,i);
        plot(time_traj,y_traj(i,:));
        title(y_header(i),'interpreter','latex');
        xlabel('time');
        grid on; set(gca,'FontSize',sz);
    end
    sgtitle('Outputs');
end

%% Phase Variable
if plot_info.s
    figure
    plot(time_traj(1:size(s_traj,2)),s_traj);
    title('Phase Variable Trajectory');
    xlabel('Time'); ylabel('s');
    grid on; set(gca,'FontSize',sz);
end

%% Number of impacts
if plot_info.impact
    figure
    plot(time_traj(1:size(impact_traj,2)),impact_traj);
    title("Number of Impacts vs. Time");
    grid on; set(gca,'FontSize',sz);
end







