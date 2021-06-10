function lie_derivative = Lie_Derivative(h,f,x)
import casadi.*;
lie_derivative = jacobian(h,x)*f;
end