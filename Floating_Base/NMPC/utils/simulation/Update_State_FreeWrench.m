function [t_next, x_next, u_next_guess] = Update_State_FreeWrench(DT,n_q, t_current, x_init,U_init,f_nonlinear,lambda_func,lambda_sol)
x_current = x_init;
u_current = U_init(1,:)';
f_value = f_nonlinear(x_current,u_current);
qdq_next = full(x_current(1:2*n_q) + (DT*f_value));
% lambda_next = lambda_func(qdq_next(1:n_q), qdq_next(n_q+1:end),u_current);
x_next = [qdq_next; lambda_sol];
x_next = full(x_next);

t_next = t_current + DT;
u_next_guess = [U_init(2:size(U_init,1),:);U_init(size(U_init,1),:)];
end