function [alpha_h,alpha_dh,alpha_ddh,alpha_ddh_old,s_func,x_init,gait] = ...
    Generate_Better_Trajectory(dyn_info,ctrl_info,ref_info,traj_info)
import casadi.*
%% Extract inputs
% dyn_info
n_y = dyn_info.dim.n_y;
n_q = dyn_info.dim.n_q;

% traj_info
impact_traj = traj_info.impact_traj;
theta_traj = traj_info.theta_traj;
x_traj = traj_info.x_traj;
u_traj = traj_info.u_traj;
ddq_traj = traj_info.ddq_traj;
time_traj = traj_info.time_traj;
y_traj = traj_info.y_traj;
dy_traj = traj_info.dy_traj;
ddy_traj = traj_info.ddq_traj(4:end,:);
% ref_info
alpha_ddh_old = ref_info.phase_based.alpha_ddh;

%% Find last step stats

% Find last step stats
temp = (max(impact_traj)-1).*ones(size(impact_traj));
templogic = eq((impact_traj - temp), zeros(size(impact_traj)));
indx = find(templogic);
begin_iter = indx(1);
end_iter = indx(end);

%% Generate new alphas
theta_begin = theta_traj(begin_iter);
theta_end = theta_traj(end_iter);
theta_new = theta_traj(begin_iter:end_iter);
ds = 1/(theta_end-theta_begin);
h_0 = y_traj(:,begin_iter:end_iter);
dh_0 = dy_traj(:,begin_iter:end_iter);
ddh_0 = ddy_traj(:,begin_iter:end_iter);

s_points = zeros(1,length(indx));
for i = 1:length(indx)
    s_points(i) = (theta_new(i)-theta_begin)/(theta_end-theta_begin);
end
M_h = 20;
free_h = [0 0 ones(1,M_h-3) 0 0]; % constrain position/derivative at
alpha_h = bezfit(s_points,h_0,free_h);
alpha_dh = bezfit(s_points,dh_0,free_h);
alpha_ddh = bezfit(s_points,ddh_0,free_h);

for k = 1:length(s_points)
    h_d(:,k) = bezier(alpha_h ,s_points(k));
    [dh_d(:,k),ddh_ds] = bezier(alpha_dh ,s_points(k));
    ddh_d(:,k) = bezier(alpha_ddh ,s_points(k));
end

s_test = linspace(0,1,1000);
for k = 1:length(s_test)
    h_d_test(:,k) = bezier(alpha_h ,s_test(k));
    [dh_d_test(:,k),ddh_ds_test] = bezier(alpha_dh ,s_test(k));
    ddh_d_test(:,k) = bezier(alpha_ddh ,s_test(k));
    ddh_d_old(:,k) = bezier(alpha_ddh_old,s_test(k));
end
figure
for w = 1:n_y
    subplot(3,4,w)
    scatter(s_points,h_0(w,:),2); hold on;
    plot(s_test,h_d_test(w,:));
    xlabel('s'); ylabel("h_0 "+w); title("h_0 "+w);
    
    subplot(3,4,w+4);
    scatter(s_points,dh_0(w,:),2); hold on;
    plot(s_test,dh_d_test(w,:));
    xlabel('s'); ylabel("dh_0 "+w); title("dh_0 "+w);
    
    subplot(3,4,w+2*4);
%     scatter(s_points,ddh_0(w,:),2); hold on;
    plot(s_test,ddh_d_test(w,:)); hold on;
    plot(s_test,ddh_d_old(w,:));
    xlabel('s'); ylabel("ddh_0 " + w); title("ddh_0 " + w);
end
sgtitle("h_0, dh_0, and ddh_0 vs. s");

%% Phase function
xbar = SX.sym('xbar');
zbar = SX.sym('zbar');
rotY = SX.sym('rotY');
q1R = SX.sym('q1R');
q2R = SX.sym('q2R');
q1L = SX.sym('q1L');
q2L = SX.sym('q2L');
q = [xbar; zbar; rotY; q1R; q2R; q1L; q2L];
q_stance_abs = rotY + q1R + q2R/2;
s = (q_stance_abs - theta_begin) / (theta_end - theta_begin);
s_func = Function('s_func',{q},{s});

%% x_init_new
x_init = x_traj(:,indx(1));

%% gait struct
gait = struct;
gait.tspan = time_traj(1,begin_iter:end_iter);
gait.tspan = gait.tspan - gait.tspan(1).*ones(size(gait.tspan));
gait.inputs.u = u_traj(:,begin_iter:end_iter);
gait.states.x = x_traj(1:n_q,begin_iter:end_iter);
gait.states.dx = x_traj(n_q+1:end,begin_iter:end_iter);
gait.states.ddx = ddq_traj(:,begin_iter:end_iter);





end
