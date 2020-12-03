kp = 100;
kd = 20;
DT = 0.005;
A = [0,1;-kp,-kd]
eig(eye(size(A)) + A*DT)

eig(A)