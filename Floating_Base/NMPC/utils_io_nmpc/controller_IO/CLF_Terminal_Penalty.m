function P = CLF_Terminal_Penalty(Q_x,R)
% Lyapunov Closed-loop linear system for virtual constraint input-output
% linearization controller
%       y'' = v 
% State space form:
%       x = [y;y'];
%       x' = [0 1; 0 0]*x + [0; 1]*v
%       x' = Ax + B v
% Q_y = blkdiag(Q_x(4:7,4:7),Q_x(11:end,11:end)); 
% R_v = R;
n_y = size(R,1);
Q_y = blkdiag(eye(n_y),eye(n_y));
R_v = 0.1*eye(n_y);
A = [zeros(n_y,n_y), eye(n_y);
     zeros(n_y,n_y), zeros(n_y,n_y)];
B = [zeros(n_y,n_y); eye(n_y)];


assert(size(A,1) == 2*n_y);
assert(size(B,1) == 2*n_y);
assert(size(R,1) == n_y);
assert(size(Q_y,1) == size(A,1));

[~,P] = lqr(A,B,Q_y,R_v);

end