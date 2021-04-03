function [x_next,t_next] = Forward_Integrate(params)

%% Extract inputs
f = params.f;
t_init = params.t_init;
x_init = params.x_init;
DT = params.DT;
u = params.u;
w = params.w;
n_x = length(x_init);

%% Forward Integration
if params.type == "Euler"
    %% Forward Euler Integration
    f_value = full(f(x_init,u,w));
    x_next = x_init + DT*f_value;
    t_next = t_init + DT;
    
elseif params.type == "RK4"
    %% Runge-Kutta 4 Integration
    resolution = 5;
    t = linspace(0,DT,resolution);
    h = t(2)-t(1);
    x = zeros(n_x,length(t));
    x(:,1) = x_init;
    
    for i = 1:length(t)-1
        x_i = x(:,i);
        k_1 = full(f(x_i,u,w));
        k_2 = full(f(x_i+(h/2)*k_1,u,w));
        k_3 = full(f(x_i+(h/2)*k_2,u,w));
        k_4 = full(f(x_i+h*k_3,u,w));
        x(:,i+1) = x(:,i) + (h/6)*(k_1+2*k_2+2*k_3+k_4);  % main equation
    end
    x_next = x(:,end);
    t_next = t_init + t(end);
    
    
end
end