function [t_next, x_next, u_next_guess] = Update_State(DT, t_current, x_init,U_init,f_nonlinear)
x_current = x_init;
u_current = U_init(1,:)';
f_value = f_nonlinear(x_current,u_current);
x_next = full(x_current+ (DT*f_value));

t_next = t_current + DT;
u_next_guess = [U_init(2:size(U_init,1),:);U_init(size(U_init,1),:)];
end