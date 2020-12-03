function traj = Interpolate_Bezier_Trajectory(gait,delT)
%% get the traj for position and velocity
traj = {};
n_u = size(gait(1).inputs.u,1);
n_y = n_u;
CHECK = 0;
for i=1:2:length(gait)
    t = gait(i).tspan;
    t0 = t(1);
    tf = t(end);
    t_par = (t-t0)/(tf-t0);
    
    M = 8;
    free = [0 0 ones(1,M-3) 0 0]; % constrain position/derivative at
    % beginning and end of trajectory
    alpha_u = bezfit(t_par,gait(i).inputs.u,free);
    alpha_x = bezfit(t_par,gait(i).states.x,free);
    alpha_dx = bezfit(t_par,gait(i).states.dx,free);
    alpha_ddx = bezfit(t_par,gait(i).states.ddx,free);
    
    % Interpolate for new trajectory
    tdes = t0:delT:tf;
    for k = 1:length(tdes)
        s = (tdes(k)-t0)/(tf-t0);
        ds = 1/(tf-t0);
        traj{i}.q(:,k) = bezier(alpha_x,s);
        traj{i}.dq(:,k) = bezier(alpha_dx,s);
        traj{i}.ddq(:,k) = bezier(alpha_ddx,s);
        traj{i}.u(:,k) = bezier(alpha_u,s);
        traj{i}.ds = ds;
    end
end

%% Phase-Based Trajectory (Theta = absolute stance leg angle)
traj{i}.theta = sum([traj{1}.q(3,:); traj{1}.q(4,:); traj{1}.q(5,:)./2]);
traj{i}.theta_begin = traj{i}.theta(1);
traj{i}.theta_end = traj{i}.theta(end);
traj{i}.h_0 = traj{i}.q(4:end,:);
traj{i}.dh_0 = traj{i}.dq(4:end,:);
traj{i}.ddh_0 = traj{i}.ddq(4:end,:);

s_points = zeros(1,length(tdes));
for p = 1:length(tdes)
    s_points(p) = (traj{i}.theta(p)-traj{i}.theta_begin)/(traj{i}.theta_end-traj{i}.theta_begin);
end

M_h = 8;
free_h = [0 0 ones(1,M_h-3) 0 0]; % constrain position/derivative at
traj{i}.alpha_h = bezfit(s_points,traj{i}.h_0,free_h);
traj{i}.alpha_dh = bezfit(s_points,traj{i}.dh_0,free_h);
traj{i}.alpha_ddh = bezfit(s_points,traj{i}.ddh_0,free_h);

for k = 1:length(s_points)
    traj{i}.h_d(:,k) = bezier(traj{i}.alpha_h ,s_points(k));
    traj{i}.dh_d(:,k) = bezier(traj{i}.alpha_dh ,s_points(k));
    traj{i}.ddh_d(:,k) = bezier(traj{i}.alpha_ddh ,s_points(k));
end

%% Phase variable check
if CHECK
    close all;
    figure;
    plot(tdes,traj{i}.theta); hold on;% Verify that phase variable is monotonically increasing
    scatter(tdes(1),traj{i}.theta_begin,'m'); hold on;
    scatter(tdes(end),traj{i}.theta_end,'m');
    xlabel('Time'); ylabel('Theta'); title("Phase Variable: Absolute Stance Leg Angle");
    
    figure
    for w = 1:n_y
        subplot(3,4,w)
        scatter(traj{i}.theta,traj{i}.h_0(w,:),2)
        xlabel('Theta'); ylabel("h_0 "+w); title("h_0 "+w);
        
        subplot(3,4,w+4);
        scatter(traj{i}.theta,traj{i}.dh_0(w,:),2)
        xlabel('Theta'); ylabel("dh_0 "+w); title("dh_0 "+w);
        
        subplot(3,4,w+2*4);
        scatter(traj{i}.theta,traj{i}.ddh_0(w,:),2)
        xlabel('Theta'); ylabel("ddh_0 " + w); title("ddh_0 " + w);
    end
    sgtitle("h_0, dh_0, and ddh_0 vs. \theta (t)");
    
    figure
    for w = 1:n_y
        subplot(3,4,w)
        scatter(s_points,traj{i}.h_0(w,:),2); hold on;
        plot(s_points,traj{i}.h_d(w,:));
        xlabel('s'); ylabel("h_0 "+w); title("h_0 "+w);
        
        subplot(3,4,w+4);
        scatter(s_points,traj{i}.dh_0(w,:),2); hold on;
        plot(s_points,traj{i}.dh_d(w,:));
        xlabel('s'); ylabel("dh_0 "+w); title("dh_0 "+w);
        
        subplot(3,4,w+2*4);
        scatter(s_points,traj{i}.ddh_0(w,:),2); hold on;
        plot(s_points,traj{i}.ddh_d(w,:));
        xlabel('s'); ylabel("ddh_0 " + w); title("ddh_0 " + w);
    end
    sgtitle("h_0, dh_0, and ddh_0 vs. s");
end

%% Original Trajectory Interpolation Check
if CHECK
    close all;
    figure
    for i = 1:7
        subplot(3,3,i)
        plot(gait(1).tspan,gait(1).states.x(i,:)); hold on;
        plot(tdes,traj{1}.q(i,:));
        legend('original', 'new');
        title("q_" + i);
    end
    figure
    for i = 1:7
        subplot(3,3,i)
        plot(gait(1).tspan,gait(1).states.dx(i,:)); hold on;
        plot(tdes,traj{1}.dq(i,:));
        legend('original','new');
        title("dq_" + i);
    end
    figure
    for i = 1:7
        subplot(3,3,i)
        plot(gait(1).tspan,gait(1).states.ddx(i,:)); hold on;
        plot(tdes,traj{1}.ddq(i,:));
        legend('original','new');
        title("ddq_" + i);
    end
    figure
    for i = 1:4
        subplot(2,2,i)
        plot(gait(1).tspan,gait(1).inputs.u(i,:)); hold on;
        plot(tdes,traj{1}.u(i,:));
        legend('original','new');
        title("u_" + i);
    end
end









end

