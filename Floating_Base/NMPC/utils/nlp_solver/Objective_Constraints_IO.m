function [Xdec,Udec,Wdec,P,obj,g,obj_vector,Q_mat,R,C] = Objective_Constraints_IO(dyn_info,ctrl_info,ref_info,constr_info,N)
import casadi.*
%% Extract variables
% dyn_info
n_q = dyn_info.dim.n_q;
n_x = dyn_info.dim.n_x;
n_u = dyn_info.dim.n_u;
n_w = dyn_info.dim.n_w;
n_y = dyn_info.dim.n_y;
f = dyn_info.func.f_NL;
f_w = dyn_info.func.wrench;
f_sw_pos = dyn_info.func.f_pos_swing;

% ctrl_info
mpc_info = ctrl_info.mpc_info;
DT = mpc_info.DT;
IO_info = ctrl_info.IO_info;

    Kp = dyn_info.ctrl.Kp;
    Kd = dyn_info.ctrl.Kd;


% ref_info
full_ref = ref_info.full_ref;
alpha_h = ref_info.phase_based.alpha_h;
alpha_dh = ref_info.phase_based.alpha_dh;
alpha_ddh = ref_info.phase_based.alpha_ddh;
s_func = ref_info.phase_based.s_func;

%% Symbolics
Udec = SX.sym('U',n_u,N+1);      % controls in R^N-1. subset of the decision variables
Xdec = SX.sym('X',n_x,N+1);  % A vector that represents the states over the optimization problem.
Wdec = SX.sym('W',n_w,N+1);
P = SX.sym('P',n_x+(N+1)*(n_x + n_u));
% P = [xinit | x_0ref | u_0ref | x_1ref | u_1ref | ... | x_Nref | u_Nref]
% parameters (which include the initial state and the reference along the
% predicted trajectory (reference states and reference controls))

%% Define Penalties
% Bryson's rule
% Q_vector = zeros(2*n_q,1);
% for i = 1:n_q
%     Q_vector(i) = 1/full_ref.bounds.RightStance.states.x.ub(i);
%     Q_vector(n_q+i) = 1/full_ref.bounds.RightStance.states.dx.ub(i);
% end
% Q_weights = [1, 1, 50, 15, 15, 5, 5,...
%     1, 1, 1, 1, 1, 1, 1]';
% Q = Q_weights.*Q_vector;
% Q_mat = diag(Q);
C = [0 0 0 1 0 0 0;     % stance thigh
    0 0 1 1 1 0 0;     % torso, stance leg together
    0 0 0 0 0 1 0;     % swing leg
    0 0 0 0 0 0 1];    % swing leg
Q_virt = eye(2*n_y);
Q_mat = [C'*C, zeros(n_q,n_q);
    zeros(n_q,n_q), C'*C];

% Q_term = 1e4*Q_mat;

% Control penalty
R_vector = zeros(n_u,1);
for i = 1:n_u
    R_vector(i) = 1/full_ref.bounds.RightStance.inputs.Control.u.ub(i);
end
R_weights = 0.1*[1, 1, 1, 1]';
R = R_weights.*R_vector;
R_mat = diag(R);

% Terminal state penalty (LQR of closed-loop linear system y'' = v)
Q_term = CLF_Terminal_Penalty(Q_mat,R_mat);

%% Equality Constraints (Dynamics)
g = [];                          % initialize equality constraints vector
g = [g; Xdec(:,1) - P(1:n_x)];    % initial condition constraints
obj_vector = SX.zeros(N+1,1);    % initialize objective function (scalar output)

for k = 1:N+1
    q_k = Xdec(1:n_q,k);
    dq_k = Xdec(n_q+1:2*n_q,k);
    x_k = [q_k; dq_k];            % current state
    v_NL_k = Udec(:,k);           % current control
    w_k = Wdec(:,k);              % current wrench
    x_ref_k = P((k-1)*(n_x+n_u)+(n_x+1):(k-1)*(n_x+n_u)+(n_x+(n_x)));
    u_ref_k = P((k-1)*(n_x+n_u)+(n_x+(n_x+1)):(k-1)*(n_x+n_u)+(n_x+(n_x)+n_u));
    
    % virtual constraints
    h_k = x_k(4:n_q);     % virtual constraint
    dh_k = x_k(11:end); % derivative
    
    % Compute IO input    
    if IO_info.type == "time"
        h_d_k = x_ref_k(4:n_q);
        dh_d_k = x_ref_k(n_q+4:end);
        ddh_d_k = zeros(n_y,1);
    elseif IO_info.type == "phase"
        s_k = s_func(x_k(1:n_q));
        h_d_k = bezier_casadi(alpha_h,s_k);       
        dh_d_k = bezier_casadi(alpha_dh,s_k);
        ddh_d_k = bezier_casadi(alpha_ddh,s_k);
    end
    if ctrl_info.IO_info.linear
        u_IO_k = dyn_info.func.u_IO(q_k,dq_k,h_d_k,dh_d_k,ddh_d_k,Kp,Kd);      
    else
        u_IO_k = dyn_info.func.u_IO_NMPC(q_k,dq_k,h_d_k,dh_d_k,ddh_d_k,Kp,Kd,v_NL_k);
    end
    u_k = u_IO_k;
    
    %% Contact constraint
    w_sym_k = f_w(q_k,dq_k,u_k);
    g = [g; w_k - w_sym_k];
    
    %% Forward Integration dynamics constraint
    if k < N+1
        x_k_1 = Xdec(:,k+1);
        xdot = f(q_k,dq_k,u_k,w_k);          % Nonlinear dynamics propogation
        x_k_1_euler = x_k + (DT*xdot);  % Forward Euler Discretization prediction
        g = [g; x_k_1 - x_k_1_euler];   % Update constraints vector
    end
    
    %% Objective
    if k < N+1
        y_k = h_k - h_d_k;
        dy_k = dh_k - dh_d_k;
        ddq_k = dyn_info.func.f_ddq(q_k,dq_k,u_k,w_k);
        ddh_k = ddq_k(4:end);
        ddy_k = ddh_k - ddh_d_k;
        % Running stage and control cost (u is now a delta_u added to
        % nominal IO controller so no reference dependece on u)
        obj_vector(k) = (x_k - x_ref_k)'*Q_mat*(x_k - x_ref_k) + ...
            (u_k - u_ref_k)'*R_mat*(u_k - u_ref_k) + ...
            (ddy_k + Kd*dy_k + Kp*y_k)'*(ddy_k + Kd*dy_k + Kp*y_k);
%         obj_vector(k) = [y_k; dy_k]'*Q_virt*[y_k; dy_k] + ...
%             (u_k - u_ref_k)'*R_mat*(u_k - u_ref_k) + ...
%             (ddy_k + Kd*dy_k + Kp*y_k - v_NL_k)'*(ddy_k + Kd*dy_k + Kp*y_k - v_NL_k);
    else
        if IO_info.type == "time"
            y_N = h_k - h_d_k;
            dy_N = dh_k - dh_d_k;
            Term_cost = [y_N; dy_N]'*Q_term*[y_N; dy_N];
        elseif IO_info.type == "phase"
            s_N = s_func(x_k(1:n_q));
            y_N = h_k - h_d_k;
            dy_N = dh_k - dh_d_k;
            Term_cost = [y_N; dy_N]'*Q_term*[y_N; dy_N];     
        end
    end    
end
obj = sum(obj_vector) + Term_cost;

%% Check for Output Constraints
if constr_info.obstacle.isObstacle
    for k = 1:N+1
        q_k = Xdec(1:n_q,k);
        sw_k = f_sw_pos(q_k);
        z_sw_k = sw_k(2);
        g = [g; z_sw_k];
    end
end

%% Ground Reaction Force Constraint
if constr_info.grf.active
    for k = 1:N+1
        w_k = Wdec(:,k);
        fric = w_k(1)./w_k(2);
        g = [g; fric];
    end
end


%% Torque Saturation
if constr_info.torque.sat
    for k = 1:N+1
        q_k = Xdec(1:n_q,k);
        dq_k = Xdec(n_q+1:2*n_q,k);
        x_k = [q_k; dq_k];            % current state
        v_NL_k = Udec(:,k);           % current control

        % Compute IO input    
        if IO_info.type == "time"
            h_d_k = x_ref_k(4:n_q);
            dh_d_k = x_ref_k(n_q+4:end);
            ddh_d_k = zeros(n_y,1);
        elseif IO_info.type == "phase"
            s_k = s_func(x_k(1:n_q));
            h_d_k = bezier_casadi(alpha_h,s_k);       
            dh_d_k = bezier_casadi(alpha_dh,s_k);
            ddh_d_k = bezier_casadi(alpha_ddh,s_k);
        end
        if ctrl_info.IO_info.linear
            u_IO_k = dyn_info.func.u_IO(q_k,dq_k,h_d_k,dh_d_k,ddh_d_k,Kp,Kd);      
        else
            u_IO_k = dyn_info.func.u_IO_NMPC(q_k,dq_k,h_d_k,dh_d_k,ddh_d_k,Kp,Kd,v_NL_k);
        end
        u_k = u_IO_k; 
        g = [g; u_k];
    end
    
end



end