function [] = Plot_TrajectoryTracking(t_all,x_traj,u_traj,X_REF_Original,U_REF_Original,plotSettings,plot_title,args)
%% Plot variables
q_header = {'$x$','$z$','$rot_Y$','$q_{1R}$','$q_{2R}$','$q_{1L}$','$q_{2L}$'}';
dq_header = {'$\dot{x}$','$\dot{z}$','$\dot{rot}_Y$','$\dot{q}_{1R}$','$\dot{q}_{2R}$','$\dot{q}_{1L}$','$\dot{q}_{2L}$'}';
u_header = {'$u_{q_{1R}}$','$u_{q_{2R}}$','$u_{q_{1L}}$','$u_{q_{2L}}$'};
n_q = length(q_header);
n_u = length(u_header);

blue = [0, 0.4470, 0.7410];
width_ref = 2;
width_traj = 1;
sz = 15;

%% Errors
x_error = x_traj - X_REF_Original(:,1:size(x_traj,2));
u_error = u_traj - U_REF_Original(:,1:size(u_traj,2));
q_err_header = {'$x_{err}$','$z_{err}$','${rot_Y}_{err}$','${q_{1R}}_{err}$','${q_{2R}}_{err}$','${q_{1L}}_{err}$','${q_{2L}}_{err}$'}';
%% State positions
if plotSettings.q
    figure % plot q
    for i = 1:n_q
        subplot(3,3,i);
        plot(t_all(1:size(X_REF_Original,2)),X_REF_Original(i,1:size(X_REF_Original,2)),'--g','LineWidth',width_ref);
        hold on; plot(t_all,x_traj(i,:),'color',blue,'LineWidth',width_traj);
        hold on; yline(args.lbx(i),'--r','LineWidth',width_ref);
        %         hold on; yline(args.ubx(i),'--r','LineWidth',width_ref);
        title(q_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz)
    end
    legend('reference','NMPC trajectory','constraints');
    set(legend,'Position',[0.45 0.19 0.17 0.11]);
    sgtitle(plot_title+" positions");
    
    figure
    for i = 1:n_q
        subplot(3,3,i);
        plot(t_all(1:size(x_error,2)),x_error(i,:));
        title(q_err_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz);
    end
    legend('Error');
    set(legend,'Position',[0.45 0.19 0.17 0.11]);
    sgtitle(plot_title+" position error");
end

%% State velocities
if plotSettings.dq
    figure % plot q
    for i = 1:length(q_header)
        subplot(3,3,i);
        plot(t_all(1:size(X_REF_Original,2)),X_REF_Original(n_q+i,1:size(X_REF_Original,2)),'--g','LineWidth',width_ref);
        hold on; plot(t_all,x_traj(n_q+i,:),'color',blue,'LineWidth',width_traj);
        %         hold on; yline(args.lbx(n_q+i),'--r','LineWidth',wdr);
        %         hold on; yline(args.ubx(n_q+i),'--r','LineWidth',wdr);
        title(dq_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz)
    end
    legend('reference','NMPC trajectory');
    set(legend,'Position',[0.45 0.19 0.17 0.11]);
    sgtitle(plot_title+" velociites");
end

%% Control inputs
if plotSettings.u
    figure
    for i = 1:n_u
        subplot(2,2,i);
        plot(t_all(1:size(U_REF_Original,2)),U_REF_Original(i,1:size(U_REF_Original,2)),'--g','LineWidth',width_ref);
        hold on; plot(t_all(1:end-1),u_traj(i,:),'color',blue,'LineWidth',width_traj);
        title(u_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz)
    end
    legend('reference','NMPC trajectory','location','best');
    sgtitle(plot_title+" control inputs");
end

end

