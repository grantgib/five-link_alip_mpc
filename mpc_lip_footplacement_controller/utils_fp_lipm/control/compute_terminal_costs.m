function [Pf] = compute_terminal_costs(p)

m = p.m; 
g = p.g;
z_H = p.z_H;
Ts = p.Ts;

% continuous state matrix
A = [...
    0,      0,      0,          1/(m*z_H);
    0,      0,      -1/(m*z_H), 0;
    0,      -m*g,   0,          0;
    m*g,    0,      0,          0];
% foot placement at impact
B = [-1, 0; 0, -1; 0, 0; 0, 0];

% discrete periodic state and control matrices
Ad = expm(A*Ts);
Bd = expm(A*Ts)*B;

% Costs
Q = diag([0 0 10 10]);
R = diag([0 0]);

[~,Pf,~] = dlqr(Ad,Bd,Q,R);

Pf = Pf;

end

