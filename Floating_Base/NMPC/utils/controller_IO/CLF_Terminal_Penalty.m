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
Q_y = blkdiag(eye(4),eye(4));
R_v = 0.01*eye(4);
A = [zeros(4,4), eye(4);
     zeros(4,4), zeros(4,4)];
B = [zeros(4,4); eye(4)];


assert(size(A,1) == 8);
assert(size(B,1) == 8);
assert(size(R,1) == 4);
assert(size(Q_y,1) == size(A,1));

[~,P] = lqr(A,B,Q_y,R_v);

end