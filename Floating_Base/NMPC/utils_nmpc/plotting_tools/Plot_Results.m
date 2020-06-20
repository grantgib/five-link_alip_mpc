function [] = Plot_TrajectoryTracking(dyn_info,ctrl_info,ref_info,traj_info,constr_info,plotSettings)
%% Extract variables from inputs
disp("Plotting Results...");

% plotSettings
plot_title = plotSettings.traj_title;

% dyn info
n_q = dyn_info.dim.n_q;
n_x = dyn_info.dim.n_x;
n_u = dyn_info.dim.n_u;
n_w = dyn_info.dim.n_w;
n_y = dyn_info.dim.n_y;

% ctrl_info
mpc_info = ctrl_info.mpc_info;
args = mpc_info.args;
N = mpc_info.N;
DT = mpc_info.DT;
ctrl_type = ctrl_info.type;
IO_type = ctrl_info.IO_info.type;

if ctrl_type == "NMPC"
    ctrl_type = "NMPC";
elseif ctrl_type == "IO"
    if IO_type == "time"
        ctrl_type = "IO-time";
    elseif IO_type == "phase"
        ctrl_type = "IO-phase";
    end
end

% traj_info
if plotSettings.single_sol
    x_traj = traj_info.x_traj_all(:,:,1);
    u_traj = traj_info.u_traj_all(:,:,1);
    w_traj = traj_info.w_traj_all(:,:,1);
    time_traj = linspace(0,DT*N,N+1);
else
    time_traj = traj_info.time_traj;
    time_calc = traj_info.stats.time_calc;
    x_traj = traj_info.x_traj;
    x_traj_all = traj_info.x_traj_all;
    u_traj = traj_info.u_traj;
    w_traj = traj_info.w_traj;
    
    y_traj = traj_info.y_traj;      % virtual constraints
    dy_traj = traj_info.dy_traj;
    s_traj = traj_info.s_traj;
    theta_traj = traj_info.theta_traj;
    impact_traj = traj_info.impact_traj;
    y_sw_traj_normal = traj_info.y_sw_normal;
    y_sw_traj = traj_info.y_sw;
    y_st_traj = traj_info.y_st;
    x_ref_traj = traj_info.x_ref_traj;
    u_ref_traj = traj_info.u_ref_traj;
    w_ref_traj = traj_info.w_ref_traj;
end

% contr_info
obs_start = constr_info.obstacle.width(1);
obs_end = constr_info.obstacle.width(2);
obs_height = constr_info.obstacle.height;

%% Initialize variables
q_header = {'$\bar{x}$','$\bar{z}$','$\psi$','$h_1=q_{1R}$','$h_2=q_{2R}$','$h_3=q_{1L}$','$h_4=q_{2L}$'}';
dq_header = {'$\dot{x}$','$\dot{z}$','$\dot{\psi}_Y$','$\dot{q}_{1R}$','$\dot{q}_{2R}$','$\dot{q}_{1L}$','$\dot{q}_{2L}$'}';
u_header = {'$u_{q_{1R}}$','$u_{q_{2R}}$','$u_{q_{1L}}$','$u_{q_{2L}}$'};
w_header = {'$f_x$','$f_z$'};
q_err_header = {'$x_{err}$','$z_{err}$','${rot_Y}_{err}$','${q_{1R}}_{err}$','${q_{2R}}_{err}$','${q_{1L}}_{err}$','${q_{2L}}_{err}$'}';
dq_err_header = {'$\dot{x}_{err}$','$\dot{z}_{err}$','$\dot{rot}_{Y_{err}}$','$\dot{q}_{{1R}_{err}}$','$\dot{q}_{{2R}_{err}}$','$\dot{q}_{{1L}_{err}}$','$\dot{q}_{{2L}_{err}}$'};
y_header = {'$x_{sw}$','$z_{sw}$'};
time_calc_header = {'Controller Calculation Time [sec]','interpreter','latex'};

blue = [0, 0.4470, 0.7410];
width_ref = 1;
width_traj = 2;
width_bound = 1;
sz = 15;

%% States
% Positions
if plotSettings.x
    figure
    for i = 1:n_q
        subplot(3,3,i);
        plot(time_traj(1:size(x_ref_traj,2)),x_ref_traj(i,:),'LineWidth',width_ref);
        hold on; plot(time_traj,x_traj(i,:),'LineWidth',width_traj);
        try
            hold on; yline(args.lbx(i),'r','LineWidth',width_bound);
            hold on; yline(args.ubx(i),'r','LineWidth',width_bound);
        catch
            disp("infinite bounds for x_" + i);
        end
        title(q_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz)
    end
    %     legend('reference',ctrl_type +" trajectory",'constraints');
    legend("reference","IO-NMPC trajectory");
    set(legend,'Position',[0.45 0.19 0.17 0.11]);
    set(gcf,'color','w');
    sgtitle("State Position Trajectories (q) for N = 5");
    %         sgtitle(plot_title+" State Positions (N = " + mpc_info.N + ")");
    
end

% Velocities
if plotSettings.x
    figure
    for i = 1:length(q_header)
        subplot(3,3,i);
        plot(time_traj(1:size(x_ref_traj,2)),x_ref_traj(n_q+i,:),'LineWidth',width_ref);
        hold on; plot(time_traj,x_traj(n_q+i,:),'--','LineWidth',width_traj);
        try
            %             hold on; yline(args.lbx(n_q+i),'m','LineWidth',width_bound);
            %             hold on; yline(args.ubx(n_q+i),'m','LineWidth',width_bound);
        catch
            disp("infinite bounds for dx_" + i);
        end
        title(dq_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz)
    end
    legend('reference',ctrl_type +" trajectory");
    set(legend,'Position',[0.45 0.19 0.17 0.11]);
    sgtitle(plot_title + " State Velociites (N = " + mpc_info.N + ")");
end

%% x vs. s
if plotSettings.x_s
    figure
    wdxs = 1;
    scat = 1;
    for i = 1:n_q
        subplot(3,3,i);
        %         plot(time_traj(1:size(x_ref_traj,2)),x_ref_traj(i,:),'LineWidth',width_ref);
        %         hold on; plot(s_traj,x_traj(i,:),'LineWidth',wdxs);
        hold on; scatter(s_traj,x_traj(i,:),scat);
        try
            %             hold on; yline(args.lbx(i),'r','LineWidth',width_bound);
            %             hold on; yline(args.ubx(i),'r','LineWidth',width_bound);
        catch
            disp("infinite bounds for x_" + i);
        end
        title(q_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz)
    end
    %     legend('reference',ctrl_type +" trajectory",'constraints');
    legend("IO-NMPC trajectory",'State Constraints');
    set(legend,'Position',[0.45 0.19 0.17 0.11]);
    set(gcf,'color','w');
    sgtitle("State Position Trajectories (q) for N = " + mpc_info.N + ")") ;
    %         sgtitle(plot_title+" State Positions (N = " + mpc_info.N + ")");
    
end

% Velocities
if plotSettings.x_s
    figure
    for i = 1:length(q_header)
        subplot(3,3,i);
        %         scatter(s_traj(1:size(x_ref_traj,2)),x_ref_traj(n_q+i,:),'LineWidth',width_ref);
        %         hold on; plot(s_traj,x_traj(n_q+i,:),'LineWidth',wdxs);
        hold on; scatter(s_traj,x_traj(n_q+i,:),scat);
        try
            %             hold on; yline(args.lbx(n_q+i),'m','LineWidth',width_bound);
            %             hold on; yline(args.ubx(n_q+i),'m','LineWidth',width_bound);
        catch
            disp("infinite bounds for dx_" + i);
        end
        title(dq_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz)
    end
    legend('reference',ctrl_type +" trajectory");
    set(legend,'Position',[0.45 0.19 0.17 0.11]);
    sgtitle(plot_title + " State Velociites (N = " + mpc_info.N + ")");
end

%% State Errors
% Position
if plotSettings.xerr
    q_error = x_traj(1:n_q,:) - x_ref_traj(1:n_q,:);
    figure
    for i = 1:n_q
        subplot(3,3,i);
        plot(time_traj(1:size(q_error,2)),q_error(i,:));
        title(q_err_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz);
    end
    legend('Error');
    set(legend,'Position',[0.45 0.19 0.17 0.11]);
    sgtitle(plot_title+" Position Error (N = " + mpc_info.N + ")");
end

% Velocity
if plotSettings.xerr
    dq_error = x_traj(n_q+1:end,:) - x_ref_traj(n_q+1:end,:);
    figure
    for i = 1:n_q
        subplot(3,3,i);
        plot(time_traj(1:size(dq_error,2)),dq_error(i,:));
        title(dq_err_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz);
    end
    legend('Error');
    set(legend,'Position',[0.45 0.19 0.17 0.11]);
    sgtitle(plot_title + " Velocity Error (N = " + mpc_info.N + ")");
end

%% Control inputs
if plotSettings.u
    figure
    for i = 1:n_u
        subplot(2,2,i);
        %         plot(time_traj(1:size(u_ref_traj,2)),u_ref_traj(i,:),'LineWidth',width_ref);
        hold on; plot(time_traj(1:end-1),u_traj(i,1:size(time_traj(1:end-1),2)),'LineWidth',width_traj);
        %         scatter(s_traj(1:end-1),u_traj(i,:),1);
        title(u_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz)
    end
    %     legend('reference',ctrl_type +" trajectory",'location','best');
    legend("IO-NMPC trajectory",'location','best');
    %     sgtitle(plot_title+" Control Inputs (N = " + mpc_info.N + ")");
    sgtitle("Control Torques")
    set(gcf,'color','w');
    
end

%% Wrench
if plotSettings.w
    figure
    for i = 1:n_w
        subplot(1,2,i);
        plot(time_traj(1:size(w_ref_traj,2)),w_ref_traj(i,:),'LineWidth',width_ref); hold on;
        plot(time_traj(1:size(w_traj,2)),w_traj(i,:));
        %         scatter(s_traj(1:end-1),w_traj(i,:),1);
        title(w_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz);
    end
    legend("reference","IO-NMPC trajectory");
    sgtitle(plot_title + " Wrench (N = " + mpc_info.N + ")");
    
    figure
    mu_actual = abs(w_traj(1,:)./w_traj(2,:));
    plot(time_traj(1:end-1),mu_actual); hold on;
    %     scatter(s_traj(1:end-1),mu_actual,1);
    ylabel('$\mu_s$','interpreter','latex');
    xlabel('Time (sec)','interpreter','latex');
    %     title("IO-NMPC Friction Cone Satisfaction");
    title("IO-L Friction Cone Violation");
    yline(constr_info.grf.mu,'r');
    grid on; set(gca,'FontSize',sz)
    set(gcf,'color','w');
    
    
end
%% Output - Swing Foot Position
if plotSettings.y_sw
    %     figure
    %     for i = 1:2
    %         subplot(1,2,i);
    %         plot(time_traj,y_sw_traj(i,:));
    %         title(y_header{i},'interpreter','latex');
    %         grid on; set(gca,'FontSize',sz);
    %     end
    %     sgtitle(plot_title + " Swing Foot Positions (N = " + mpc_info.N + ")");
    
    figure
    maize = [256/256 204/256 6/256];
    blue_color = [0 39/256 76/255];
    plot(s_traj(1,1:104),y_sw_traj(2,1:104),'LineWidth',1,'color',blue_color); hold on
    %     scatter(s_traj,y_sw_traj(2,:),1); hold on
    rect = rectangle('Position',[obs_start, 0, obs_end-obs_start, obs_height]);
    rect.FaceColor = maize;
    rect.EdgeColor = maize;
    rect2 = rectangle('Position',[obs_start, -obs_height, obs_end-obs_start, obs_height]);
    rect2.FaceColor = maize;
    rect2.EdgeColor = maize;
    uistack(rect,'bottom');
    
    %     line([obs_start obs_start],[-0.02 obs_height],'color','r'); hold on;
    %     line([obs_end obs_end],[-0.02 obs_height],'color','r'); hold on;
    %     line([obs_start obs_end],[obs_height obs_height],'color','r');
    xlabel('Phase Variable (s)');
    ylabel('Swing Foot Height ($p^z_{sw}$)','interpreter','latex');
    title('Obstacle Avoidance');
    grid on; set(gca,'FontSize',sz)
    axis([0 1.1 -0.06 0.15]);
    set(gcf,'color','w');
    
    figure
    scatter(s_traj,y_sw_traj(1,:),1); hold on
    %     line([obs_start obs_start],[-0.02 obs_height],'color','r'); hold on;
    %     line([obs_end obs_end],[-0.02 obs_height],'color','r'); hold on;
    %     line([obs_start obs_end],[obs_height obs_height],'color','r');
    xlabel('Phase Variable (s)');
    ylabel('Swing Foot X (x_{sw})');
    title('Obstacle Avoidance');
    grid on; set(gca,'FontSize',sz)
    set(gcf,'color','w');
    
    %     figure
    %     plot(y_sw_traj(1,:),y_sw_traj(2,:));
    %     xlabel('x_sw'); ylabel('z_{sw}');
    %     title('x vs. z swing foot height'); grid on;
    %
end

%% Output - Swing Foot Position Normalized
if plotSettings.y_sw_normal
    figure
    for i = 1:2
        subplot(1,2,i);
        plot(time_traj(1:size(y_sw_traj_normal,2)),y_sw_traj_normal(i,:));
        title(y_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz);
    end
    sgtitle(plot_title + " Swing Foot Positions (N = " + mpc_info.N + ")");
    
    figure
    subplot(1,2,1);
    %     scatter(s_traj,y_sw_traj_normal(2,:),1); hold on
    plot(s_traj,y_sw_traj_normal(1,:)); hold on
    %     line([obs_start obs_start],[-0.02 obs_height],'color','r'); hold on;
    %     line([obs_end obs_end],[-0.02 obs_height],'color','r'); hold on;
    %     line([obs_start obs_end],[obs_height obs_height],'color','r');
    xlabel('Phase Variable (s)');
    ylabel('Normalized Swing Foot X (x_{sw})');
    title('Obstacle Avoidance');
    grid on; set(gca,'FontSize',sz)
    %     set(gcf,'color','w');
    
    subplot(1,2,2);
    %     scatter(s_traj,y_sw_traj_normal(1,:),1); hold on
    plot(s_traj,y_sw_traj_normal(2,:)); hold on
    %     line([obs_start obs_start],[-0.02 obs_height],'color','r'); hold on;
    %     line([obs_end obs_end],[-0.02 obs_height],'color','r'); hold on;
    %     line([obs_start obs_end],[obs_height obs_height],'color','r');
    xlabel('Phase Variable (s)');
    ylabel('Normalized Swing Foot Z (z_{sw})');
    title('Obstacle Avoidance');
    grid on; set(gca,'FontSize',sz)
    set(gcf,'color','w');
    
    
end

%% Phase Variable
if plotSettings.s
    figure
    plot(time_traj(1:size(s_traj,2)),s_traj);
    title('Phase Variable Trajectory');
    xlabel('Time'); ylabel('s');
    grid on; set(gca,'FontSize',sz);
end

%% MPC Calculation Time
if plotSettings.calc_time
    figure
    plot(time_traj(1:size(time_calc,2)),time_calc);
    title("Controller Calculation Time [sec] (N = " + mpc_info.N + ")");
    grid on; set(gca,'FontSize',sz);
end

%% Number of impacts
if plotSettings.impact
    figure
    plot(time_traj(1:size(impact_traj,2)),impact_traj);
    title("Number of Impacts vs. Time");
    grid on; set(gca,'FontSize',sz);
end


%% H_Q vs. s
if plotSettings.h_q_vs_s
    figure
    for i = 1:n_y
        subplot(2,4,i);
        %        scatter(s_traj,y_traj(i,:),1);
        plot(s_traj,y_traj(i,:));
        title("h_q(" + i + ")");
        xlabel('s');
        grid on; set(gca,'FontSize',sz);
        subplot(2,4,n_y+i);
        %        scatter(s_traj,dy_traj(i,:),1);
        plot(s_traj,dy_traj(i,:));
        title("dh_q(" + i + ")");
        xlabel('s');
        grid on; set(gca,'FontSize',sz);
    end
end

%% Virtuals
if plotSettings.virtuals
    figure
    for i = 1:n_y
        subplot(2,4,i);
        %         scatter(theta_traj,y_traj(i,:),1);
        scatter(theta_traj(1:114),y_traj(i,1:114),1);
        title("h_q(" + i + ")");
        xlabel('theta');
        grid on; set(gca,'FontSize',sz);
        subplot(2,4,n_y+i);
        scatter(theta_traj,dy_traj(i,:),1);
        title("dh_q(" + i + ")");
        xlabel('theta');
        grid on; set(gca,'FontSize',sz);
    end
    figure
    subplot(1,2,1);
    scatter(time_traj,theta_traj,1);
    title("Theta vs time");
    subplot(1,2,2);
    scatter(s_traj,theta_traj,1);
    title("Theta vs. s");
end

if plotSettings.last_step
    
    temp = (max(impact_traj)-1).*ones(size(impact_traj));
    templogic = eq((impact_traj - temp), zeros(size(impact_traj)));
    indx = find(templogic);
    begin_iter = indx(1);
    end_iter = indx(end);
    figure
    for i = 1:n_y
        subplot(2,4,i);
        scatter(s_traj(begin_iter:end_iter),y_traj(i,begin_iter:end_iter),1);
        title("h_q(" + i + ")");
        xlabel('s');
        grid on; set(gca,'FontSize',sz);
        subplot(2,4,n_y+i);
        scatter(s_traj(begin_iter:end_iter),dy_traj(i,begin_iter:end_iter),1);
        title("dh_q(" + i + ")");
        xlabel('s');
        grid on; set(gca,'FontSize',sz);
    end
    figure
    subplot(1,2,1);
    scatter(time_traj(begin_iter:end_iter),theta_traj(begin_iter:end_iter),1);
    title("Theta vs time");
    subplot(1,2,2);
    scatter(s_traj(begin_iter:end_iter),theta_traj((begin_iter:end_iter)),1);
    title("Theta vs. s");
    
end


%% Stance Foot Position
if plotSettings.pos_stancefoot
    figure
    plot(time_traj,y_st_traj);
    title("StanceFoot position versus time");
    
end

%% x_traj_all from mpc solutions
if plotSettings.x_all
    per = 0.3;
    figure
    set(gcf, 'Position',  [100, -500, 3000, 1200])
    for i = 1:n_q
        subplot(3,3,i)
        x_reference{i} = plot(time_traj(1:round(size(x_traj_all,3)*per)),x_ref_traj(i,1:round(size(x_traj_all,3)*per)),'g'); hold on;
        x_predict{i} = plot(time_traj(1:N+1),x_traj_all(i,:,1),'b--o'); hold on;
        x_actual{i} = plot(time_traj(1),x_traj(i,1),'r','LineWidth',2); hold on;
        title(q_header{i},'interpreter','latex'); xlabel('Time [sec]'); set(gca,'FontSize',sz)
    end
    
    for j = 1:round(size(x_traj_all,3)*per)
        k = 1;
        subplot(3,3,k);
        set(x_predict{k},'XData',time_traj(j:j+N),'YData',x_traj_all(k,:,j));
        set(x_actual{k},'XData',time_traj(1:j),'YData',x_traj(k,1:j));
        
        k = 2;
        subplot(3,3,k);
        set(x_predict{k},'XData',time_traj(j:j+N),'YData',x_traj_all(k,:,j));
        set(x_actual{k},'XData',time_traj(1:j),'YData',x_traj(k,1:j));
        
        k = 3;
        subplot(3,3,k);
        set(x_predict{k},'XData',time_traj(j:j+N),'YData',x_traj_all(k,:,j));
        set(x_actual{k},'XData',time_traj(1:j),'YData',x_traj(k,1:j));
        
        k = 4;
        subplot(3,3,k);
        set(x_predict{k},'XData',time_traj(j:j+N),'YData',x_traj_all(k,:,j));
        set(x_actual{k},'XData',time_traj(1:j),'YData',x_traj(k,1:j));
        
        k = 5;
        subplot(3,3,k);
        set(x_predict{k},'XData',time_traj(j:j+N),'YData',x_traj_all(k,:,j));
        set(x_actual{k},'XData',time_traj(1:j),'YData',x_traj(k,1:j));
        
        k = 6;
        subplot(3,3,k);
        set(x_predict{k},'XData',time_traj(j:j+N),'YData',x_traj_all(k,:,j));
        set(x_actual{k},'XData',time_traj(1:j),'YData',x_traj(k,1:j));
        
        k = 7;
        subplot(3,3,k);
        set(x_predict{k},'XData',time_traj(j:j+N),'YData',x_traj_all(k,:,j));
        set(x_actual{k},'XData',time_traj(1:j),'YData',x_traj(k,1:j));
        
        drawnow;
        pause(0.1);
    end
end
























