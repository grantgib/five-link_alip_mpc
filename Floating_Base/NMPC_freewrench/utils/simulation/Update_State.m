function [t_next, x_next, u_next_guess, w_next_guess] = ...
    Update_State(DT,t_current,x_init,U_init,W_init,f_nonlinear)
x_current = x_init;
u_current = U_init(1,:)';
w_current = W_init(1,:)';
f_value = f_nonlinear(x_current,u_current,w_current);
x_next = full(x_current+ (DT*f_value));

t_next = t_current + DT;
u_next_guess = [U_init(2:size(U_init,1),:); U_init(size(U_init,1),:)];
w_next_guess = [W_init(2:size(W_init,1),:); W_init(size(W_init,1),:)];
end