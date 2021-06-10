 function traj = Interpolate_Bezier_Trajectory(gait,delta_time)
%% Initialize 
traj = {};
CHECK = 0;
n_u = size(gait(1).inputs.u,1);
bez_deg = 9;
import casadi.*

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
    % Make s_time function
    t_step = SX.sym('t_step');
    s_time = (t_step - t_init)/ (t_end - t_init);
    traj{i}.f_s_time = Function('f_s_time',{t_step},{s_time});

end



% Time-based Interpolation Check
if CHECK
    close all;
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



end

