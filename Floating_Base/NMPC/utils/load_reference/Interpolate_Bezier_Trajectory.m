function traj = Interpolate_Bezier_Trajectory(gait,delT)
%example of bezCoef
% bezCoef={};
% bezCoef{1}=gait(1).params.adoubleSupportConst;
% bezCoef{3}=gait(3).params.arightStance;
% bezCoef{5}=gait(5).params.aleftStance;
%% get the traj for position and velocity
traj = {};
n_u = size(gait(1).inputs.u,1);
n_y = n_u;
CHECK = 1;
for i=1:2:length(gait)
    t = gait(i).tspan;
    t0 = t(1);
    tf = t(end);
    t_par = (t-t0)/(tf-t0);
    
    M = 15;
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
        %         traj{i}.x(:,k) = calculations.bezier_Jessy(alpha_x,s);
        %         traj{i}.dx(:,k) = calculations.bezier_Jessy(alpha_dx,s);
        %         traj{i}.ddx(:,k) = calculations.bezier_Jessy(alpha_ddx,s);
        %         traj{i}.u(:,k) = calculations.bezier_Jessy(alpha_u,s);
        
        %         traj{i}.dx(:,k) = calculations.dbezier(alpha_x,s)*ds;
        traj{i}.ds = ds;
    end
end

% Phase-Based Trajectory (Theta = absolute stance leg angle)
traj{i}.theta = sum([traj{1}.q(3,:); traj{1}.q(4,:); traj{1}.q(5,:)./2]); 
traj{i}.h_0 = traj{i}.q(4:end,:);
traj{i}.dh_0 = traj{i}.dq(4:end,:);

%% Phase variable check
close all;
figure;
plot(tdes,traj{i}.theta); % Verify that phase variable is monotonically increasing
xlabel('Time'); ylabel('Theta'); title("Phase Variable: Absolute Stance Leg Angle");
figure
for w = 1:n_y
    subplot(2,4,w)
    scatter(traj{i}.theta,traj{i}.h_0(w,:),2)
    xlabel('Theta'); ylabel("h_0 "+w); title("h_0 "+w);
    
    subplot(2,4,w+4);
    scatter(traj{i}.theta,traj{i}.dh_0(w,:),2)
    xlabel('Theta'); ylabel("dh_0 "+w); title("dh_0 "+w);
end
sgtitle("h_0 and dh_0 vs. \theta (t)");



%% Check
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

