function [x_next,t_next] = Forward_Integrate(params)

%% Extract inputs
f = params.f;
t_init = params.t_init;
q_init = params.q_init;
dq_init = params.dq_init;
x_init = params.x_init;
DT = params.DT;
u = params.u;
w = params.w;
n_x = length(x_init);
n_q = n_x / 2;

%% Forward Integration
if params.type == "Euler"
    %% Forward Euler Integration
    
    f_value = full(f(x_init,u,w));
    
    x_next = x_init + DT*f_value;
    t_next = t_init + DT;
    
elseif params.type == "RK4"
    %% Runge-Kutta 4 Integration
    resolution = 10;
    t = linspace(0,DT,resolution);
    h = t(2)-t(1);
    x = zeros(n_x,length(t));
    x(:,1) = x_init;
    
    for i = 1:length(t)-1
        q_i = x(1:n_q,i);
        dq_i = x(n_q+1:end,i);
        x_i = [q_i; dq_i];
        k_1 = h*full(f(x_i,u,w));
        k_2 = h*full(f(x_i+0.5*k_1,u,w));
        k_3 = h*full(f(x_i+0.5*k_2,u,w));
        k_4 = h*full(f(x_i+k_3,u,w));
        x(:,i+1) = x(:,i) + (1/6)*(k_1+2*k_2+2*k_3+k_4);  % main equation
    end
    x_next = x(:,end);
    t_next = t_init + t(end);
    
    
end
end