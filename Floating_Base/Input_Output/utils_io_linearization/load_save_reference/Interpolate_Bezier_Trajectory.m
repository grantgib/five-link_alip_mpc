function traj = Interpolate_Bezier_Trajectory(gait,ctrl_info,dyn_info)
%% Extract & Initialize
% dyn_info
n_q = dyn_info.dim.n_q;
n_u = dyn_info.dim.n_u;
n_h = dyn_info.dim.n_h;

f_pos_swing = dyn_info.func.f_pos_swing;
f_vel_swing = dyn_info.func.f_vel_swing;
f_w = dyn_info.func.f_w;
f_acc_swing = dyn_info.func.f_acc_swing;

% Initialize
DT = ctrl_info.DT;
traj = {};
bez_degree = 9;
CHECK = 0;

%% Fit Beziers to the trajectoreis for
%   input:          (u)
%   position:       (q)
%   velocity:       (q_dot)
%   acceleration:   (q_ddot)
%   actual output:  (ha)

for i=1:2:length(gait)
    t = gait(i).tspan;
    t_init = t(1);
    t_end = t(end);
    tau = (t-t_init)/(t_end-t_init);    % time-based phase variable
    
    free = [0 0 ones(1,bez_degree-3) 0 0];
    % constrain position/derivative at beginning and end of trajectory
    
    alpha_u = bezfit(tau,gait(i).inputs.u,free);
    alpha_q = bezfit(tau,gait(i).states.x,free);
    alpha_q_dot = bezfit(tau,gait(i).states.dx,free);
    alpha_q_ddot = bezfit(tau,gait(i).states.ddx,free);
    alpha_hd = reshape(gait(i).params.atime,4,6);
    
    % Interpolate for new trajectory
    t_actual = t_init:DT:t_end;
    for k = 1:length(t_actual)
        tau = (t_actual(k)-t_init)/(t_end-t_init);
        tau_dot = 1/(t_end-t_init);
        traj{i}.u(:,k) = bezier(alpha_u,tau);
        traj{i}.q(:,k) = bezier(alpha_q,tau);
        traj{i}.q_dot(:,k) = bezier(alpha_q_dot,tau);
        traj{i}.q_ddot(:,k) = bezier(alpha_q_ddot,tau);
        traj{i}.hd(:,k) = bezier(alpha_hd,tau);
        traj{i}.tau(:,k) = tau;
        traj{i}.tau_dot = tau_dot;
        
        pos_swing_k = full(f_pos_swing(traj{i}.q(:,k)));
        traj{i}.hd_check(:,k) = [traj{i}.q(3,k); traj{i}.q(2,k); pos_swing_k(1); pos_swing_k(2)];
        
        vel_swing_k = full(f_vel_swing(traj{i}.q(:,k), traj{i}.q_dot(:,k)));
        traj{i}.hd_dot(:,k) = [traj{i}.q_dot(3,k); traj{i}.q_dot(2,k); vel_swing_k(1); vel_swing_k(2)];
    
        traj{i}.w(:,k) = full(f_w([traj{i}.q(:,k); traj{i}.q_dot(:,k)],traj{i}.u(:,k)));
        acc_swing_k = full(f_acc_swing(traj{i}.q(:,k), traj{i}.q_dot(:,k), traj{i}.u(:,k), traj{i}.w(:,k)));
        traj{i}.hd_ddot(:,k) = [traj{i}.q_ddot(3,k); traj{i}.q_ddot(2,k); acc_swing_k(1); acc_swing_k(2)];
    
    end
end

%% Original Trajectory Interpolation Check
if CHECK
    % Input
    figure
    for i = 1:n_u
        subplot(2,2,i)
        plot(gait(1).tspan,gait(1).inputs.u(i,:)); hold on;
        plot(t_actual,traj{1}.u(i,:));
        legend('original','new');
        title("u_" + i);
    end
    
    % Position
    figure
    for i = 1:n_q
        subplot(3,3,i)
        plot(gait(1).tspan,gait(1).states.x(i,:)); hold on;
        plot(t_actual,traj{1}.q(i,:));
        legend('original', 'new');
        title("q_" + i);
    end
    
    % Velocity
    figure
    for i = 1:n_q
        subplot(3,3,i)
        plot(gait(1).tspan,gait(1).states.dx(i,:)); hold on;
        plot(t_actual,traj{1}.dq(i,:));
        legend('original','new');
        title("dq_" + i);
    end
    
    % Acceleration
    figure
    for i = 1:n_q
        subplot(3,3,i)
        plot(gait(1).tspan,gait(1).states.ddx(i,:)); hold on;
        plot(t_actual,traj{1}.ddq(i,:));
        legend('original','new');
        title("ddq_" + i);
    end
    
    % Plot Original Beziers vs. Computed outputs from interpolation
    headers = {'Torso Angle', 'Hip Height', 'Swing Foot X Pos', 'Swing Foot Z Pos'};
    for i = 1:n_h
        subplot(2,2,i);
        plot(t_actual,traj{1}.hd(i,:));
        hold on;
        plot(t_actual,traj{1}.hd_check(i,:));
        legend('original','check');
        title(headers{i});
    end
    
end









end

