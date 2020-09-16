function [P,c,alpha,beta,G,H] = Build_QP_Matrices(dyn_info,ctrl_info,ref_info,delta_x_init,X_REF,U_REF,W_REF,impact_occurred)
%% Build_QP_Matrices
%   QP solver has form
%       min Z'*P*Z, s.t.
%           alpha*Z  = beta
%           GZ      <= H

%% Extract Inputs
% dyn_info
n_q = dyn_info.dim.n_q;
n_x = dyn_info.dim.n_x;
n_u = dyn_info.dim.n_u;
n_w = dyn_info.dim.n_w;
f_Ax = dyn_info.func.f_Ax;
f_Bu = dyn_info.func.f_Bu;
f_Bw = dyn_info.func.f_Bw;
f_Wx = dyn_info.func.f_Wx;
f_Wu = dyn_info.func.f_Wu;

% ctrl_info
N = ctrl_info.lmpc_info.N;
DT = ctrl_info.lmpc_info.DT;

%% Initialize matrices
A_blk = [];
Bu_blk = [];
Bw_blk = [];
Wx_blk = [];
Wu_blk = [];
Iu_blk = [];

C = [0 0 100 1 0 0 0;     % stance thigh
     0 0 0 0 1 0 0;     % torso, stance leg together
     0 0 0 0 0 1 0;     % swing thigh
     0 0 0 0 0 0 1];    % swing leg
Q = [C'*C, zeros(n_q,n_q);
    zeros(n_q,n_q), 0.001*C'*C];
Q_N = 1e3*Q;
R = 1e-8*eye(n_u);
Q_blk = [];
R_blk = [];

%% Build subblock matrices
for i = 1:N
    % cost
    Q_blk = blkdiag(Q_blk, Q);
    R_blk = blkdiag(R_blk, R);
    
    % state equalities
    A_i = eye(n_x) + DT*full(f_Ax(X_REF(:,i),U_REF(:,i),W_REF(:,i)));  % discrete state matrix
    Bu_i = DT * full(f_Bu(X_REF(:,i),U_REF(:,i),W_REF(:,i)));     % discrete input matrix
    Bw_i = DT * full(f_Bw(X_REF(:,i),U_REF(:,i),W_REF(:,i)));     % discrete wrench matrix
    Iu_i = eye(n_u);
    Wx_i = full(f_Wx(X_REF(:,i),U_REF(:,i)));
    Wu_i = full(f_Wu(X_REF(:,i),U_REF(:,i)));
    A_blk = blkdiag(A_blk,A_i);
    Bu_blk = blkdiag(Bu_blk,Bu_i);
    Bw_blk = blkdiag(Bw_blk,Bw_i);
    Iu_blk = blkdiag(Iu_blk,Iu_i);
    Wx_blk = blkdiag(Wx_blk,Wx_i);
    Wu_blk = blkdiag(Wu_blk,Wu_i);
end
% finish temp cost matrix
Q_blk = blkdiag(Q_blk, Q_N);

% finish temp state equality matrices
A_blk = [[eye(n_x), repmat(zeros(n_x,n_x),1,N-1)], zeros(n_x,n_x);
    A_blk, zeros(N*n_x,n_x)];
Bu_blk = [zeros(n_x,N*n_u); Bu_blk];
Bw_blk = [zeros(n_x,N*n_w); Bw_blk];
Wx_blk = [Wx_blk, zeros(N*n_w,n_x)];

%% Create P and c matrices
P = blkdiag(Q_blk, R_blk, zeros(N*n_w,N*n_w));
c = zeros((N+1)*n_x+N*(n_u+n_w),1);

%% Create alpha/ beta matrices
alpha_temp = [A_blk, Bu_blk, Bw_blk;
    zeros(N*n_u,(N+1)*n_x), Iu_blk, zeros(N*n_u,N*n_w);
    Wx_blk, Wu_blk, zeros(N*n_w,N*n_w)];
alpha = [eye(n_x), zeros(n_x, N*(n_x+n_u+n_w));
    eye(size(alpha_temp)) - alpha_temp];

beta_temp = zeros((N+1)*n_x+N*(n_u+n_w),1);
beta = [delta_x_init; beta_temp];

%% Create G and H matrices (Inequality)
noineq = 1;
if noineq
    G = zeros(1,(N+1)*n_x+N*(n_u+n_w));
    H = 1;
else
    x_lb = ref_info.x_lb;
    x_ub = ref_info.x_ub;
    u_lb = ref_info.u_lb;
    u_ub = ref_info.u_ub;
    
    if impact_occurred
        mu = inf;
        X_LB = repmat(-inf*ones(n_x,1),N+1,1);
        X_UB = repmat(inf*ones(n_x,1),N+1,1);
        U_LB = inf*repmat(u_lb,N,1);
        U_UB = inf*repmat(u_ub,N,1);
    else
        mu = 0.9;
        X_LB = repmat(x_lb,N+1,1);
        X_UB = repmat(x_ub,N+1,1);
        U_LB = repmat(u_lb,N,1);
        U_UB = repmat(u_ub,N,1);
    end
    
    X_REF_0toN = reshape(X_REF(:,1:N+1),(N+1)*n_x,1);
    U_REF_0toN1 = reshape(U_REF(:,1:N),N*n_u,1);
    W_REF_0toN1 = reshape(W_REF(:,1:N),N*n_w,1);
    
    I_nx = eye((N+1)*n_x);
    I_nu = eye(N*n_u);
    
    G_w1 = repmat([1,-mu],1,N);
    G_w2 = repmat([-1,mu],1,N);
    
    G = [I_nx, zeros((N+1)*n_x,N*n_u), zeros((N+1)*n_x,N*n_w);
        -I_nx, zeros((N+1)*n_x,N*n_u), zeros((N+1)*n_x,N*n_w);
        zeros(N*n_u,(N+1)*n_x), I_nu, zeros(N*n_u,N*n_w);
        zeros(N*n_u,(N+1)*n_x), -I_nu, zeros(N*n_u,N*n_w);
        zeros(1,(N+1)*n_x), zeros(1,N*n_u), G_w1];
    
    H = [X_UB - X_REF_0toN;
        -X_LB + X_REF_0toN;
        U_UB - U_REF_0toN1;
        -U_LB + U_REF_0toN1;
        G_w2*W_REF_0toN1];
end

%% Size check
P_check = (size(P) == [(N+1)*n_x+N*(n_u+n_w), (N+1)*n_x+N*(n_u+n_w)]);
c_check = (size(c) == [size(P,1),1]);
alpha_check = (size(alpha) == [(N+2)*n_x+N*(n_u+n_w),(N+1)*n_x+N*(n_u+n_w)]);
beta_check = (size(beta) == [size(alpha,1), 1]);
G_check = (size(G) == [2*(N+1)*n_x+2*N*n_u+1,(N+1)*n_x+N*(n_u+n_w)]);
H_check = (size(H) == [size(G,1), 1]);
if ~any(P_check) || ~any(c_check) || ~any(alpha_check) || ~any(beta_check) || ~any(G_check) || ~any(H_check)
    disp("Size of QP matrices is incorrect");
    pause
end

























end