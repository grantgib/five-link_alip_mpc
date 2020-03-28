function [t_next, x_next] = ...
    Impact_Update(dyn_info,mpc_info,ref_info,t0,x0,u_init,w_init)
%% Extract inputs
% dyn_info
f_nonlinear = dyn_info.func.f_NL;
n_q = dyn_info.dim.n_q;

% mpc_info
DT = mpc_info.DT;

% ref_info
step_height = double(ref_info.step_height);

%% Root finding impact time
q0 = x0(1:n_q);
dq0 = x0(n_q+1:end);
u0 = u_init(:,1);
w0 = w_init(:,1);
f_value = full(f_nonlinear(q0,dq0,u0,w0));
y_func = @(delT) leftToeZ(x0(1:7)+(delT*f_value(1:7))) - step_height;
DT_impact = fzero(y_func, t0+DT/2);     % Matlab root finding funcion

% Check impact
height_impact = leftToeZ(x0(1:7)+(DT_impact*f_value(1:7)));
t_minus = t0 + DT_impact;
disp("Swing foot impacts step (" + height_impact + " m) at " + t_minus + " sec");


%% Forward Integrate until update
x_minus = x0 + DT_impact*f_value;

%% Apply Impact Map and Relabel
[x_plus, w_plus] = Impact_Map_Relabel(dyn_info,x_minus);
q_plus = x_plus(1:n_q);
dq_plus = x_plus(n_q+1:end);

%% Forward Integrate until t0 + DT has been reached
x_next = x_plus + (DT - DT_impact)*full(f_nonlinear(q_plus,dq_plus,u0,w_plus));
t_next = t0 + DT;

end