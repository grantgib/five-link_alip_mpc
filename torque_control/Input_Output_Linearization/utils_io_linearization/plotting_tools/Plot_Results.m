function [] = Plot_Results(dyn_info,ctrl_info,ref_info,traj_info,constr_info,plotSettings)
%% Extract variables from inputs
disp("Plotting Results...");

% plotSettings
plot_title = plotSettings.traj_title;

% dyn info
n_q = dyn_info.dim.n_q;
n_x = dyn_info.dim.n_x;
n_u = dyn_info.dim.n_u;
n_w = dyn_info.dim.n_w;
n_h = dyn_info.dim.n_h;

% ctrl_info
mpc_info = ctrl_info.mpc_info;
args = mpc_info.args;
N = ctrl_info.N;
DT = ctrl_info.DT;
ctrl_type = ctrl_info.type;

% ref_info
x_lb = ref_info.x_lb;
x_ub = ref_info.x_ub;
u_lb = ref_info.u_lb;
u_ub = ref_info.u_ub;
w_lb = ref_info.w_lb;
w_ub = ref_info.w_ub;


% traj_info
time_traj = traj_info.time_traj;
time_calc = traj_info.stats.time_calc;
x_traj = traj_info.x_traj;
u_io_traj = traj_info.u_io_traj;
w_io_traj = traj_info.w_io_traj;
ha_traj = traj_info.ha_traj;
ha_dot_traj = traj_info.ha_dot_traj;
ha_ddot_traj = traj_info.ha_ddot_traj;
hd_traj = traj_info.hd_traj;
hd_dot_traj = traj_info.hd_dot_traj;
hd_ddot_traj = traj_info.hd_ddot_traj;
y_traj = traj_info.y_traj;
y_dot_traj = traj_info.y_dot_traj;
y_ddot_traj = traj_info.y_ddot_traj;
x_ref_traj = traj_info.x_ref_traj;
u_ref_traj = traj_info.u_ref_traj;
w_ref_traj = traj_info.w_ref_traj;
impact_traj = traj_info.impact_traj;
pos_sw_traj = traj_info.pos_sw_traj;
pos_st_traj = traj_info.pos_st_traj;

% contr_info
obs_start = constr_info.obstacle.width(1);
obs_end = constr_info.obstacle.width(2);
obs_height = constr_info.obstacle.height;

%% Initialize variables
q_header = {'$\bar{x}$','$\bar{z}$','$\psi$','$q_{1R}$','$q_{2R}$','$q_{1L}$','$q_{2L}$'}';
dq_header = {'$\dot{\bar{x}}$','$\dot{\bar{z}}$','$\dot{\psi}_Y$','$\dot{q}_{1R}$','$\dot{q}_{2R}$','$\dot{q}_{1L}$','$\dot{q}_{2L}$'}';
u_header = {'$u_{q_{1R}}$','$u_{q_{2R}}$','$u_{q_{1L}}$','$u_{q_{2L}}$'};
w_header = {'$f_x$','$f_z$'};

if ref_info.time_based_cartesian
    h_header = {'$h_1=$torso angle', '$h_2=$hip height', '$h_3=$swing foot X', '$h_4=$swing foot Z'};
    h_dot_header = {'$\dot{h}_1=$torso angle velocity', '$\dot{h}_2=$hip height velocity', '$\dot{h}_3=$swing foot X velocity', '$\dot{h}_4=$swing foot Z velocity'};
end
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
if plotSettings.x
    figure
    for i = 1:n_q
        subplot(3,3,i);
        plot(time_traj(1:size(x_ref_traj,2)),x_ref_traj(i,:),'LineWidth',width_ref);
        hold on; plot(time_traj,x_traj(i,:),':','LineWidth',width_traj);
        try
            hold on; yline(x_lb(i),'r','LineWidth',width_bound);
            hold on; yline(x_ub(i),'r','LineWidth',width_bound);
        catch
            disp("infinite bounds for x_" + i);
        end
        title(q_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz)
    end
    %     legend('reference',ctrl_type +" trajectory",'constraints');
    legend("reference","IO-NMPC trajectory");
    set(legend,'Position',[0.45 0.19 0.17 0.11]);
%     set(gcf,'color','w');
    sgtitle("State Position Trajectories (q) for N = 5");
    %         sgtitle(plot_title+" State Positions (N = " + mpc_info.N + ")");
    
end

% Velocities
if plotSettings.x
    figure
    for i = 1:length(q_header)
        subplot(3,3,i);
        plot(time_traj(1:size(x_ref_traj,2)),x_ref_traj(n_q+i,:),'LineWidth',width_ref);
        hold on; plot(time_traj,x_traj(n_q+i,:),':','LineWidth',width_traj);
        try
%             hold on; yline(args.lbx(n_q+i),'m','LineWidth',width_bound);
%             hold on; yline(args.ubx(n_q+i),'m','LineWidth',width_bound);
        catch
            disp("infinite bounds for dx_" + i);
        end
        title(dq_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz)
    end
    legend('reference',ctrl_type +" trajectory",'location','best');
    set(legend,'Position',[0.45 0.19 0.17 0.11]);
    sgtitle(plot_title + " State Velociites (N = " + N + ")");
end
%% Control inputs
if plotSettings.u
    figure
    for i = 1:n_u
        subplot(2,2,i);
        plot(time_traj,u_ref_traj(i,:),'LineWidth',width_ref);
        hold on; plot(time_traj,u_io_traj(i,:),'LineWidth',width_traj);
        title(u_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz)
    end
    legend('reference','actual','location','best');
    sgtitle("Control Torques")
%     set(gcf,'color','w');
    
end

%% Wrench
if plotSettings.w
    figure
    for i = 1:n_w
        subplot(1,2,i);
        plot(time_traj(1:size(w_ref_traj,2)),w_ref_traj(i,:),'LineWidth',width_ref); hold on;
        plot(time_traj(1:size(w_io_traj,2)),w_io_traj(i,:));
        title(w_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz);
    end
    legend("reference","IO trajectory",'location','best');
    sgtitle(plot_title + " Wrench (N = " + N + ")");
    
%     figure
%     mu_actual = abs(w_io_traj(1,:)./w_io_traj(2,:));
%     plot(time_traj(1:end-1),mu_actual); hold on;
%     ylabel('$\mu_s$','interpreter','latex');
%     xlabel('Time (sec)','interpreter','latex');
%     title("IO-L Friction Cone Violation");
%     yline(constr_info.grf.mu,'r');
%     grid on; set(gca,'FontSize',sz)
%     set(gcf,'color','w');
end

%% Virtuals
if plotSettings.virtual_constr
    figure
    for i = 1:n_h
        subplot(2,2,i);
        plot(time_traj,ha_traj(i,:));
        hold on; plot(time_traj,hd_traj(i,:));
        title(h_header(i),'interpreter','latex');
        xlabel('time');
        grid on; set(gca,'FontSize',sz);
    end
    legend('desired','actual','location','best');
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
    legend('desired','actual','location','best');
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

% if plotSettings.last_step
%     
%     temp = (max(impact_traj)-1).*ones(size(impact_traj));
%     templogic = eq((impact_traj - temp), zeros(size(impact_traj)));
%     indx = find(templogic);
%     begin_iter = indx(1);
%     end_iter = indx(end);
%     figure
%     for i = 1:n_y
%         subplot(2,4,i);
%         scatter(s_traj(begin_iter:end_iter),y_traj(i,begin_iter:end_iter),1);
%         title("h_q(" + i + ")");
%         xlabel('s');
%         grid on; set(gca,'FontSize',sz);
%         subplot(2,4,n_y+i);
%         scatter(s_traj(begin_iter:end_iter),dy_traj(i,begin_iter:end_iter),1);
%         title("dh_q(" + i + ")");
%         xlabel('s');
%         grid on; set(gca,'FontSize',sz);
%     end
%     figure
%     subplot(1,2,1);
%     scatter(time_traj(begin_iter:end_iter),theta_traj(begin_iter:end_iter),1);
%     title("Theta vs time");
%     subplot(1,2,2);
%     scatter(s_traj(begin_iter:end_iter),theta_traj((begin_iter:end_iter)),1);
%     title("Theta vs. s");
% end

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

%% Number of impacts
if plotSettings.impact
    figure
    plot(time_traj(1:size(impact_traj,2)),impact_traj);
    title("Number of Impacts vs. Time");
    grid on; set(gca,'FontSize',sz);
end

%% x vs. s
% if plotSettings.x_s
%     figure
%     wdxs = 1;
%     scat = 1;
%     for i = 1:n_q
%         subplot(3,3,i);
%         %         plot(time_traj(1:size(x_ref_traj,2)),x_ref_traj(i,:),'LineWidth',width_ref);
%         %         hold on; plot(s_traj,x_traj(i,:),'LineWidth',wdxs);
%         hold on; scatter(s_traj,x_traj(i,:),scat);
%         try
%             %             hold on; yline(args.lbx(i),'r','LineWidth',width_bound);
%             %             hold on; yline(args.ubx(i),'r','LineWidth',width_bound);
%         catch
%             disp("infinite bounds for x_" + i);
%         end
%         title(q_header{i},'interpreter','latex');
%         grid on; set(gca,'FontSize',sz)
%     end
%     %     legend('reference',ctrl_type +" trajectory",'constraints');
%     legend("IO-NMPC trajectory",'State Constraints');
%     set(legend,'Position',[0.45 0.19 0.17 0.11]);
%     set(gcf,'color','w');
%     sgtitle("State Position Trajectories (q) for N = " + mpc_info.N + ")") ;
%     %         sgtitle(plot_title+" State Positions (N = " + mpc_info.N + ")");
%     
% end
% 
% % Velocities
% if plotSettings.x_s
%     figure
%     for i = 1:length(q_header)
%         subplot(3,3,i);
%         %         scatter(s_traj(1:size(x_ref_traj,2)),x_ref_traj(n_q+i,:),'LineWidth',width_ref);
%         %         hold on; plot(s_traj,x_traj(n_q+i,:),'LineWidth',wdxs);
%         hold on; scatter(s_traj,x_traj(n_q+i,:),scat);
%         try
%             %             hold on; yline(args.lbx(n_q+i),'m','LineWidth',width_bound);
%             %             hold on; yline(args.ubx(n_q+i),'m','LineWidth',width_bound);
%         catch
%             disp("infinite bounds for dx_" + i);
%         end
%         title(dq_header{i},'interpreter','latex');
%         grid on; set(gca,'FontSize',sz)
%     end
%     legend('reference',ctrl_type +" trajectory");
%     set(legend,'Position',[0.45 0.19 0.17 0.11]);
%     sgtitle(plot_title + " State Velociites (N = " + mpc_info.N + ")");
% end



%% Output - Swing Foot Position
% if plotSettings.y_sw
%     %     figure
%     %     for i = 1:2
%     %         subplot(1,2,i);
%     %         plot(time_traj,y_sw_traj(i,:));
%     %         title(y_header{i},'interpreter','latex');
%     %         grid on; set(gca,'FontSize',sz);
%     %     end
%     %     sgtitle(plot_title + " Swing Foot Positions (N = " + mpc_info.N + ")");
%     
%     figure
%     maize = [256/256 204/256 6/256];
%     blue_color = [0 39/256 76/255];
%     plot(s_traj(1,1:104),y_sw_traj(2,1:104),'LineWidth',1,'color',blue_color); hold on
%     %     scatter(s_traj,y_sw_traj(2,:),1); hold on
%     rect = rectangle('Position',[obs_start, 0, obs_end-obs_start, obs_height]);
%     rect.FaceColor = maize;
%     rect.EdgeColor = maize;
%     rect2 = rectangle('Position',[obs_start, -obs_height, obs_end-obs_start, obs_height]);
%     rect2.FaceColor = maize;
%     rect2.EdgeColor = maize;
%     uistack(rect,'bottom');
%     
%     %     line([obs_start obs_start],[-0.02 obs_height],'color','r'); hold on;
%     %     line([obs_end obs_end],[-0.02 obs_height],'color','r'); hold on;
%     %     line([obs_start obs_end],[obs_height obs_height],'color','r');
%     xlabel('Phase Variable (s)');
%     ylabel('Swing Foot Height ($p^z_{sw}$)','interpreter','latex');
%     title('Obstacle Avoidance');
%     grid on; set(gca,'FontSize',sz)
%     axis([0 1.1 -0.06 0.15]);
%     set(gcf,'color','w');
%     
%     figure
%     scatter(s_traj,y_sw_traj(1,:),1); hold on
%     %     line([obs_start obs_start],[-0.02 obs_height],'color','r'); hold on;
%     %     line([obs_end obs_end],[-0.02 obs_height],'color','r'); hold on;
%     %     line([obs_start obs_end],[obs_height obs_height],'color','r');
%     xlabel('Phase Variable (s)');
%     ylabel('Swing Foot X (x_{sw})');
%     title('Obstacle Avoidance');
%     grid on; set(gca,'FontSize',sz)
%     set(gcf,'color','w');
%     
%     %     figure
%     %     plot(y_sw_traj(1,:),y_sw_traj(2,:));
%     %     xlabel('x_sw'); ylabel('z_{sw}');
%     %     title('x vs. z swing foot height'); grid on;
%     %
% end

%% Output - Swing Foot Position Normalized
% if plotSettings.y_sw_normal
%     figure
%     for i = 1:2
%         subplot(1,2,i);
%         plot(time_traj(1:size(y_sw_traj_normal,2)),y_sw_traj_normal(i,:));
%         title(y_header{i},'interpreter','latex');
%         grid on; set(gca,'FontSize',sz);
%     end
%     sgtitle(plot_title + " Swing Foot Positions (N = " + mpc_info.N + ")");
%     
%     figure
%     subplot(1,2,1);
%     %     scatter(s_traj,y_sw_traj_normal(2,:),1); hold on
%     plot(s_traj,y_sw_traj_normal(1,:)); hold on
%     %     line([obs_start obs_start],[-0.02 obs_height],'color','r'); hold on;
%     %     line([obs_end obs_end],[-0.02 obs_height],'color','r'); hold on;
%     %     line([obs_start obs_end],[obs_height obs_height],'color','r');
%     xlabel('Phase Variable (s)');
%     ylabel('Normalized Swing Foot X (x_{sw})');
%     title('Obstacle Avoidance');
%     grid on; set(gca,'FontSize',sz)
%     %     set(gcf,'color','w');
%     
%     subplot(1,2,2);
%     %     scatter(s_traj,y_sw_traj_normal(1,:),1); hold on
%     plot(s_traj,y_sw_traj_normal(2,:)); hold on
%     %     line([obs_start obs_start],[-0.02 obs_height],'color','r'); hold on;
%     %     line([obs_end obs_end],[-0.02 obs_height],'color','r'); hold on;
%     %     line([obs_start obs_end],[obs_height obs_height],'color','r');
%     xlabel('Phase Variable (s)');
%     ylabel('Normalized Swing Foot Z (z_{sw})');
%     title('Obstacle Avoidance');
%     grid on; set(gca,'FontSize',sz)
%     set(gcf,'color','w');
%     
%     
% end

%% Phase Variable
% if plotSettings.s
%     figure
%     plot(time_traj(1:size(s_traj,2)),s_traj);
%     title('Phase Variable Trajectory');
%     xlabel('Time'); ylabel('s');
%     grid on; set(gca,'FontSize',sz);
% end

%% Controller Calculation Time
% if plotSettings.calc_time
%     figure
%     plot(time_traj(1:size(time_calc,2)),time_calc);
%     title("Controller Calculation Time [sec] (N = " + mpc_info.N + ")");
%     grid on; set(gca,'FontSize',sz);
% end



%% H_Q vs. s
% if plotSettings.h_q_vs_s
%     figure
%     for i = 1:n_y
%         subplot(2,4,i);
%         %        scatter(s_traj,y_traj(i,:),1);
%         plot(s_traj,y_traj(i,:));
%         title("h_q(" + i + ")");
%         xlabel('s');
%         grid on; set(gca,'FontSize',sz);
%         subplot(2,4,n_y+i);
%         %        scatter(s_traj,dy_traj(i,:),1);
%         plot(s_traj,dy_traj(i,:));
%         title("dh_q(" + i + ")");
%         xlabel('s');
%         grid on; set(gca,'FontSize',sz);
%     end
% end




%% Stance Foot Position
% if plotSettings.pos_stancefoot
%     figure
%     plot(time_traj,y_st_traj);
%     title("StanceFoot position versus time");
% end

%% x_traj_all from mpc solutions
% if plotSettings.x_all
%     per = 0.3;
%     figure
%     set(gcf, 'Position',  [100, -500, 3000, 1200])
%     for i = 1:n_q
%         subplot(3,3,i)
%         x_reference{i} = plot(time_traj,x_ref_traj(i,:),'g'); hold on;
%         x_predict{i} = plot(time_traj(1:N+1),x_traj_all(i,:,1),'b--o'); hold on;
%         x_actual{i} = plot(time_traj(1),x_traj(i,1),'r','LineWidth',2); hold on;
%         title(q_header{i},'interpreter','latex'); xlabel('Time [sec]'); set(gca,'FontSize',sz)
%     end
%     
%     for j = 1:round(size(x_traj_all,3)*per)
%         for k = 1:n_q
%             subplot(3,3,k);
%             set(x_predict{k},'XData',time_traj(j:j+N),'YData',x_traj_all(k,:,j));
%             set(x_actual{k},'XData',time_traj(1:j),'YData',x_traj(k,1:j));
%         end
%         
%         drawnow;
%         pause(0.5);
%     end
% end
























