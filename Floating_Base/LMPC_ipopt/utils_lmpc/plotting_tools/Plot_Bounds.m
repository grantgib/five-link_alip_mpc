function [] = Plot_Bounds(dyn_info,ctrl_info,sol_info,args)
% check bounds with figure

%% Extract Inputs
n_q = dyn_info.dim.n_q;
n_x = dyn_info.dim.n_x;
n_u = dyn_info.dim.n_u;
n_w = dyn_info.dim.n_w;
N = ctrl_info.lmpc_info.N;
delta_x_sol = sol_info.delta_x_sol_mpc;
delta_u_sol = sol_info.delta_u_sol_mpc;
delta_w_sol = sol_info.delta_w_sol_mpc;
X_REF = sol_info.X_REF;
U_REF = sol_info.U_REF;
W_REF = sol_info.W_REF;

x_sol = X_REF(:,1:N+1) + delta_x_sol;
u_sol = U_REF(:,1:N+1) + delta_u_sol;
w_sol = W_REF(:,1:N+1) + delta_w_sol;

%% Extract bounds
delta_x_lb = reshape(full(args.lbx(1:n_x*(N+1))),n_x,N+1);
delta_x_ub = reshape(full(args.ubx(1:n_x*(N+1))),n_x,N+1);

delta_u_lb = reshape(full(args.lbx(n_x*(N+1)+1:n_x*(N+1)+n_u*(N+1)))',n_u,N+1);
delta_u_ub = reshape(full(args.ubx(n_x*(N+1)+1:n_x*(N+1)+n_u*(N+1)))',n_u,N+1);

delta_w_lb = reshape(full(args.lbx((n_x+n_u)*(N+1)+1:end))',n_w,N+1);
delta_w_ub = reshape(full(args.ubx((n_x+n_u)*(N+1)+1:end))',n_w,N+1);

%% Plot
close all;
figure
for i = 1:n_q
    subplot(3,3,i);
    plot(delta_x_sol(i,:));
    hold on; plot(delta_x_lb(i,:),'r');
    hold on; plot(delta_x_ub(i,:),'r');
    grid on; 
end

figure
for i = 1:n_q
    subplot(3,3,i);
    plot(delta_x_sol(n_q+i,:));
    hold on; plot(delta_x_lb(n_q+i,:),'r');
    hold on; plot(delta_x_ub(n_q+i,:),'r');
    grid on;
end


end









