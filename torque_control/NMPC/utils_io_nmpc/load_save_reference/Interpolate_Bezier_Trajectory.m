 function traj = Interpolate_Bezier_Trajectory(gait,delta_time)
%% Initialize 
traj = {};
n_u = size(gait(1).inputs.u,1);
CHECK = 1;
bez_deg = 9;
bez_deg_phase = 9;
n_h = 4; % dim of h(s_phase)
%% Time-based Trajectory
for i=1:2:length(gait)
    t = gait(i).tspan;
    t_init = t(1);
    t_end = t(end);
    s_time = (t-t_init)/(t_end-t_init);
    
    free = [0 0 ones(1,bez_deg-3) 0 0]; % constrain position/derivative at
    
    % beginning and end of trajectory
    traj{i}.alpha_u = bezfit(s_time,gait(i).inputs.u,free);
    traj{i}.alpha_q = bezfit(s_time,gait(i).states.x,free);
    traj{i}.alpha_dq = bezfit(s_time,gait(i).states.dx,free);
    traj{i}.alpha_ddq = bezfit(s_time,gait(i).states.ddx,free);
    
    % bezier coefficients from FROST
    traj{i}.alpha_q_virtFROST = reshape(gait(1).params.atime,4,6);
    
    % Interpolate for new trajectory
    tdes = t_init:delta_time:t_end;
    for k = 1:length(tdes)
        s = (tdes(k)-t_init)/(t_end-t_init);
        ds = 1/(t_end-t_init);
        traj{i}.q(:,k) = bezier(traj{i}.alpha_q,s);
        traj{i}.dq(:,k) = bezier(traj{i}.alpha_dq,s);
        traj{i}.ddq(:,k) = bezier(traj{i}.alpha_ddq,s);
        traj{i}.u(:,k) = bezier(traj{i}.alpha_u,s);
        traj{i}.ds = ds;
        traj{i}.q_virt(:,k) = bezier(traj{i}.alpha_q_virtFROST,s);
    end
end

% Time-based Interpolation Check
if CHECK
    figure
    for i = 1:7
        subplot(3,3,i)
        plot(gait(1).tspan,gait(1).states.x(i,:)); 
        hold on;
        plot(tdes,traj{1}.q(i,:));
        title("q_" + i);
    end
    for j = 1:4
        subplot(3,3,j+3);
        hold on;
        plot(tdes,traj{1}.q_virt(j,:));
    end
    legend('integration','bezfit','FROST coeffs');
    
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

%% Phase-Based Trajectory (Theta = absolute stance leg angle)
for i=1:2:length(gait)
    traj{i}.theta = sum([traj{1}.q(3,:); traj{1}.q(4,:); traj{1}.q(5,:)./2]);
    traj{i}.theta_begin = traj{i}.theta(1);
    traj{i}.theta_end = traj{i}.theta(end);
    traj{i}.h_0 = traj{i}.q(4:end,:);
    traj{i}.dh_0 = traj{i}.dq(4:end,:);
    traj{i}.ddh_0 = traj{i}.ddq(4:end,:);

    s_phase = zeros(1,length(tdes));
    for p = 1:length(tdes)
        s_phase(p) = (traj{i}.theta(p)-traj{i}.theta_begin)/(traj{i}.theta_end-traj{i}.theta_begin);
    end


    free_h = [0 0 ones(1,bez_deg_phase-3) 0 0]; % constrain position/derivative at
    traj{i}.alpha_h = bezfit(s_phase,traj{i}.h_0,free_h);
    traj{i}.alpha_dh = bezfit(s_phase,traj{i}.dh_0,free_h);
    traj{i}.alpha_ddh = bezfit(s_phase,traj{i}.ddh_0,free_h);

    for k = 1:length(s_phase)
        traj{i}.h_d(:,k) = bezier(traj{i}.alpha_h ,s_phase(k));
        traj{i}.dh_d(:,k) = bezier(traj{i}.alpha_dh ,s_phase(k));
        traj{i}.ddh_d(:,k) = bezier(traj{i}.alpha_ddh ,s_phase(k));
    end
end

% Phase-based Interpolation check
if CHECK
    figure;
    plot(tdes,traj{i}.theta); hold on;% Verify that phase variable is monotonically increasing
    scatter(tdes(1),traj{i}.theta_begin,'m'); hold on;
    scatter(tdes(end),traj{i}.theta_end,'m');
    xlabel('Time'); ylabel('Theta'); title("Phase Variable: Absolute Stance Leg Angle");
    
    figure
    for k = 1:n_h
        subplot(3,4,k)
        scatter(traj{i}.theta,traj{i}.h_0(k,:),2)
        xlabel('Theta'); ylabel("h_0 "+k); title("h_0 "+k);
        
        subplot(3,4,k+4);
        scatter(traj{i}.theta,traj{i}.dh_0(k,:),2)
        xlabel('Theta'); ylabel("dh_0 "+k); title("dh_0 "+k);
        
        subplot(3,4,k+2*4);
        scatter(traj{i}.theta,traj{i}.ddh_0(k,:),2)
        xlabel('Theta'); ylabel("ddh_0 " + k); title("ddh_0 " + k);
    end
    sgtitle("h_0, dh_0, and ddh_0 vs. \theta (t)");
    
    figure
    for k = 1:n_h
        subplot(3,4,k)
        scatter(s_phase,traj{i}.h_0(k,:),2); hold on;
        plot(s_phase,traj{i}.h_d(k,:));
        xlabel('s'); ylabel("h_0 "+k); title("h_0 "+k);
        
        subplot(3,4,k+4);
        scatter(s_phase,traj{i}.dh_0(k,:),2); hold on;
        plot(s_phase,traj{i}.dh_d(k,:));
        xlabel('s'); ylabel("dh_0 "+k); title("dh_0 "+k);
        
        subplot(3,4,k+2*4);
        scatter(s_phase,traj{i}.ddh_0(k,:),2); hold on;
        plot(s_phase,traj{i}.ddh_d(k,:));
        xlabel('s'); ylabel("ddh_0 " + k); title("ddh_0 " + k);
    end
    sgtitle("h_0, dh_0, and ddh_0 vs. s");
end

end

