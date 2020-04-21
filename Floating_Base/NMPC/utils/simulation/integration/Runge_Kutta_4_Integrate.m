function [x_next,t_next] = ...
    Runge_Kutta_4_Integrate(f,x_init,t_init,params)
% Extract inputs
q_init = params.q_init;
dq_init = params.dq_init;
DT = params.DT;
u = params.u;
w = params.w;
w_ext = params.w_ext;
n_x = length(x_init);
n_q = n_x / 2;

% Integration step size
t = linspace(0,DT,5);
h = t(2)-t(1);
x = zeros(n_x,length(t));
x(:,1) = x_init;
if w_ext
    for i = 1:length(t)-1
        q_i = x(1:n_q,i);
        dq_i = x(n_q+1:end,i);
        k_1 = h*full(f(q_i,dq_i,u,w,[w_ext;0]));
        k_2 = h*full(f(q_i+0.5*k_1(1:n_q),dq_i+0.5*k_1(n_q+1:end),u,w,[w_ext;0]));
        k_3 = h*full(f(q_i+0.5*k_2(1:n_q),dq_i+0.5*k_2(n_q+1:end),u,w,[w_ext;0]));
        k_4 = h*full(f(q_i+k_3(1:n_q),dq_i+k_3(n_q+1:end),u,w,[w_ext;0]));
        x(:,i+1) = x(:,i) + (1/6)*(k_1+2*k_2+2*k_3+k_4);  % main equation
    end
    x_next = x(:,end);
    t_next = t_init + t(end);
else
    for i = 1:length(t)-1
        q_i = x(1:n_q,i);
        dq_i = x(n_q+1:end,i);
        k_1 = h*full(f(q_i,dq_i,u,w));
        k_2 = h*full(f(q_i+0.5*k_1(1:n_q),dq_i+0.5*k_1(n_q+1:end),u,w));
        k_3 = h*full(f(q_i+0.5*k_2(1:n_q),dq_i+0.5*k_2(n_q+1:end),u,w));
        k_4 = h*full(f(q_i+k_3(1:n_q),dq_i+k_3(n_q+1:end),u,w));
        x(:,i+1) = x(:,i) + (1/6)*(k_1+2*k_2+2*k_3+k_4);  % main equation
    end
    x_next = x(:,end);
    t_next = t_init + t(end);
end




end







