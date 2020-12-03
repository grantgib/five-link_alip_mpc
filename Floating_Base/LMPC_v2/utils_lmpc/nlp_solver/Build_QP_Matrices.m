function [P,c,Aeq,Beq,Aineq,Bineq] = Build_QP_Matrices(dyn_info,ctrl_info,ref_info,delta_x_init,X_REF,U_REF,W_REF,impact_occurred,p_st_foot)
%% Build_QP_Matrices
%   QP solver has form
%       min Z'*P*Z, s.t.
%           Aeq*Z  = Beq
%         Aineq*Z <= Bineq

%% Extract Inputs
% dyn_info
n_q = dyn_info.dim.n_q;
n_x = dyn_info.dim.n_x;
n_u = dyn_info.dim.n_u;
n_w = dyn_info.dim.n_w;
n_p = dyn_info.dim.n_p;
n_qe = n_q + n_p;
n_xe = 2*n_qe;
f_Ax = dyn_info.func.f_Ax;
f_Bu = dyn_info.func.f_Bu;
f_Bw = dyn_info.func.f_Bw;

% ctrl_info
N = ctrl_info.lmpc_info.N;
DT = ctrl_info.lmpc_info.DT;

% modify ic
delta_xe_init = [delta_x_init(1:n_q); zeros(n_p,1); delta_x_init(n_q+1:end); zeros(n_p,1)];

% modify x ref
YST_REF = repmat(p_st_foot,1,N+1);
XE_REF = [X_REF(1:n_q,1:N+1); YST_REF; X_REF(n_q+1:end,1:N+1); zeros(n_p,N+1)];

%% Initialize matrices
A_blk = [];
Bu_blk = [];
Bw_blk = [];
Iu_blk = [];

Cp = 0*ones(4,2);
Cq = [0 0 1 0 0 0 0;     % stance thigh
     0 0 0 0 1 0 0;     % torso, stance leg together
     0 0 0 0 0 1 0;     % swing thigh
     0 0 0 0 0 0 1];    % swing leg
C = [Cq, Cp];
Qe = [C'*C, zeros(n_qe,n_qe);
    zeros(n_qe,n_qe), 0.001*(C'*C)];
Qe_N = 1e3*Qe;
Ru = 1e-4*eye(n_u);
Rw = 1e-8*eye(n_w);
Qe_blk = [];
Ru_blk = [];
Rw_blk = [];

%% Build subblock matrices
for i = 1:N
    % cost
    Qe_blk = blkdiag(Qe_blk, Qe);
    Ru_blk = blkdiag(Ru_blk, Ru);
    Rw_blk = blkdiag(Rw_blk, Rw);
    
    % state equalities
    A_i = eye(n_xe) + DT*full(f_Ax(XE_REF(:,i),U_REF(:,i),W_REF(:,i)));  % discrete state matrix
    Bu_i = DT * full(f_Bu(XE_REF(:,i),U_REF(:,i),W_REF(:,i)));     % discrete input matrix
    Bw_i = DT * full(f_Bw(XE_REF(:,i),U_REF(:,i),W_REF(:,i)));     % discrete wrench matrix
    Iu_i = eye(n_u);
    A_blk = blkdiag(A_blk,A_i);
    Bu_blk = blkdiag(Bu_blk,Bu_i);
    Bw_blk = blkdiag(Bw_blk,Bw_i);
    Iu_blk = blkdiag(Iu_blk,Iu_i);
end
% finish temp cost matrix
Qe_blk = blkdiag(Qe_blk, Qe_N);

% finish temp state equality matrices
A_blk = [[eye(n_xe), repmat(zeros(n_xe,n_xe),1,N-1)], zeros(n_xe,n_xe);
    A_blk, zeros(N*n_xe,n_xe)];
Bu_blk = [zeros(n_xe,N*n_u); Bu_blk];
Bw_blk = [zeros(n_xe,N*n_w); Bw_blk];

%% Create P and c matrices
P = blkdiag(Qe_blk, Ru_blk, Rw_blk);
c = zeros((N+1)*n_xe+N*(n_u+n_w),1);

%% Create Aeq and Beq
Aeq_temp = [eye(size(A_blk))-A_blk, -Bu_blk, -Bw_blk];
Aeq_temp(1:n_xe,:) = []; % remove 0 row;
eq_init = [eye(n_xe), zeros(n_xe, N*(n_xe+n_u+n_w))];
Aeq = [eq_init; Aeq_temp];
Beq_temp = zeros(size(Aeq_temp,1),1);
Beq = [delta_xe_init; Beq_temp];

%% Create G and H matrices (Inequality)
noineq = 1;
if noineq
    Aineq = zeros(1,(N+1)*n_xe+N*(n_u+n_w));
    Bineq = 1;
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
    
    Fbar = [];
    F = [eye(n_q), zeros(n_q,n_p), zeros(n_q,n_q+n_p);
        zeros(n_q,n_q+n_p), eye(n_q), zeros(n_q,n_p)];
    for i = 0:N
        Fbar = blkdiag(Fbar,F);
    end
    I_nx = eye((N+1)*n_xe);
    I_nu = eye(N*n_u);
    
    G_w1 = repmat([1,-mu],1,N);
    G_w2 = repmat([-1,mu],1,N);
    
    Aineq = [Fbar, zeros((N+1)*n_x,N*n_u), zeros((N+1)*n_x,N*n_w);
        -Fbar, zeros((N+1)*n_x,N*n_u), zeros((N+1)*n_x,N*n_w);
        zeros(N*n_u,(N+1)*n_xe), I_nu, zeros(N*n_u,N*n_w);
        zeros(N*n_u,(N+1)*n_xe), -I_nu, zeros(N*n_u,N*n_w);
        zeros(1,(N+1)*n_xe), zeros(1,N*n_u), G_w1];
    
    Bineq = [X_UB - X_REF_0toN;
        -X_LB + X_REF_0toN;
        U_UB - U_REF_0toN1;
        -U_LB + U_REF_0toN1;
        G_w2*W_REF_0toN1];
end

%% Size check
P_check = (size(P) == [(N+1)*n_xe+N*(n_u+n_w), (N+1)*n_xe+N*(n_u+n_w)]);
c_check = (size(c) == [size(P,1),1]);
Aeq_check = (size(Aeq) == [(N+2)*n_xe+N*(n_u+n_w),(N+1)*n_xe+N*(n_u+n_w)]);
Beq_check = (size(Beq,1) == size(Aeq,1));
Aineq_check = (size(Aineq) == [2*(N+1)*n_xe+2*N*n_u+1,(N+1)*n_xe+N*(n_u+n_w)]);
Bineq_check = (size(Bineq) == [size(Aineq,1), 1]);

if ~any(P_check) || ~any(c_check) || ~any(Aeq_check) || ~any(Beq_check) || ~any(Aineq_check) || ~any(Bineq_check)
    disp("Size of QP matrices is incorrect");
    disp("debug");
end

























end