function [] = Plot_TrajectoryTracking(dyn_info,mpc_info,ref_info,traj_info,plotSettings)
%% Extract variables from inputs
% plotSettings
plot_title = plotSettings.traj_title;

% dyn info
n_q = dyn_info.dim.n_q;
n_u = dyn_info.dim.n_u;
n_w = dyn_info.dim.n_w;

% mpc_info
args = mpc_info.args;
N = mpc_info.N;
DT = mpc_info.DT;

% traj_info
if plotSettings.single_sol
    x_traj = traj_info.x_traj_all(:,:,1);
    u_traj = traj_info.u_traj_all(:,:,1);
    w_traj = traj_info.w_traj_all(:,:,1);
    time_traj = linspace(0,DT*N,N+1);
else
    x_traj = traj_info.x_traj;
    u_traj = traj_info.u_traj;
    w_traj = traj_info.w_traj;
    time_traj = traj_info.time_traj;
    x_ref_traj = traj_info.x_ref_traj;
    u_ref_traj = traj_info.u_ref_traj;
end

% ref_info
X_REF_Original = ref_info.x_ref;
U_REF_Original = ref_info.u_ref;

%% Initialize variables
q_header = {'$x$','$z$','$rot_Y$','$q_{1R}$','$q_{2R}$','$q_{1L}$','$q_{2L}$'}';
dq_header = {'$\dot{x}$','$\dot{z}$','$\dot{rot}_Y$','$\dot{q}_{1R}$','$\dot{q}_{2R}$','$\dot{q}_{1L}$','$\dot{q}_{2L}$'}';
u_header = {'$u_{q_{1R}}$','$u_{q_{2R}}$','$u_{q_{1L}}$','$u_{q_{2L}}$'};
w_header = {'$f_x$','$f_z$'};
q_err_header = {'$x_{err}$','$z_{err}$','${rot_Y}_{err}$','${q_{1R}}_{err}$','${q_{2R}}_{err}$','${q_{1L}}_{err}$','${q_{2L}}_{err}$'}';
dq_err_header = {'$\dot{x}_{err}$','$\dot{z}_{err}$','$\dot{rot}_{Y_{err}}$','$\dot{q}_{{1R}_{err}}$','$\dot{q}_{{2R}_{err}}$','$\dot{q}_{{1L}_{err}}$','$\dot{q}_{{2L}_{err}}$'};

blue = [0, 0.4470, 0.7410];
width_ref = 1;
width_traj = 1;
width_bound = 1;
sz = 15;

%% State Positions
if plotSettings.q
    figure % plot q
    for i = 1:n_q
        subplot(3,3,i);
        plot(time_traj(1:size(x_ref_traj,2)),x_ref_traj(i,:),'LineWidth',width_ref);
        hold on; plot(time_traj,x_traj(i,:),'--','LineWidth',width_traj);
%         hold on; yline(args.lbx(i),'g','LineWidth',width_bound);
%         hold on; yline(args.ubx(i),'g','LineWidth',width_bound);
        title(q_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz)
    end
    legend('reference','NMPC trajectory','constraints');
    set(legend,'Position',[0.45 0.19 0.17 0.11]);
    sgtitle(plot_title+" positions");
end

%% State Position Errors
if plotSettings.qerr
    q_error = x_traj(1:n_q,1:end-1) - x_ref_traj(1:n_q,:);
    figure
    for i = 1:n_q
        subplot(3,3,i);
        plot(time_traj(1:size(q_error,2)),q_error(i,:));
        title(q_err_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz);
    end
    legend('Error');
    set(legend,'Position',[0.45 0.19 0.17 0.11]);
    sgtitle(plot_title+" position error");
end

%% State Velocities
if plotSettings.dq
    figure % plot q
    for i = 1:length(q_header)
        subplot(3,3,i);
        plot(time_traj(1:size(x_ref_traj,2)),x_ref_traj(n_q+i,:),'LineWidth',width_ref);
        hold on; plot(time_traj,x_traj(n_q+i,:),'--','LineWidth',width_traj);
%         hold on; yline(args.lbx(n_q+i),'m','LineWidth',width_bound);
%         hold on; yline(args.ubx(n_q+i),'m','LineWidth',width_bound);
        title(dq_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz)
    end
    legend('reference','NMPC trajectory');
    set(legend,'Position',[0.45 0.19 0.17 0.11]);
    sgtitle(plot_title+" velociites");
end

%% State Velocity Errors
if plotSettings.dqerr
    dq_error = x_traj(n_q+1:end,1:end-1) - x_ref_traj;
    figure
    for i = 1:n_q
        subplot(3,3,i);
        plot(time_traj(1:size(dq_error,2)),dq_error(i,:));
        title(dq_err_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz);
    end
    legend('Error');
    set(legend,'Position',[0.45 0.19 0.17 0.11]);
    sgtitle(plot_title+" velocity error");
end

%% Control inputs
if plotSettings.u
    figure
    for i = 1:n_u
        subplot(2,2,i);
        plot(time_traj(1:size(u_ref_traj,2)),u_ref_traj(i,:),'LineWidth',width_ref);
        hold on; plot(time_traj(1:end-1),u_traj(i,1:size(time_traj(1:end-1),2)),'--','LineWidth',width_traj);
        title(u_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz)
    end
    legend('reference','NMPC trajectory','location','best');
    sgtitle(plot_title+" control inputs");
end

%% Wrench values
if plotSettings.w
    figure
    for i = 1:n_w
        subplot(1,2,i);
        plot(time_traj(1:size(w_traj,2)),w_traj(i,:));
        title(w_header{i},'interpreter','latex');
        grid on; set(gca,'FontSize',sz);
    end
    sgtitle(plot_title + " wrench");
end

