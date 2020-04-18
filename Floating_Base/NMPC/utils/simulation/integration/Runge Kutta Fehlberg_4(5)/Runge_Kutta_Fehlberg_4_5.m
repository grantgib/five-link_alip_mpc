%----------------------------------------------------------------------------
%  Description:                                                              
%     The Runge-Kutta-Fehlberg method is an adaptive procedure for approxi-  
%     mating the solution of the differential equation y'(x) = f(x,y) with   
%     initial condition y(x0) = c.  This implementation evaluates f(x,y) six 
%     times per step using embedded fourth order and fifth order Runge-Kutta 
%     estimates to estimate the not only the solution but also the error.    
%     The next step size is then calculated using the preassigned tolerance  
%     and error estimate.                                                    
%     For step i+1,                                                          
%        y(i+1) = y(i) +  h * ( 25 / 216 * k1 + 1408 / 2565 * k3             
%                              + 2197 / 4104 * k4 - 1 / 5 * k5 )             
%     where                                                                  
%     k1 = f( x(i),y(i) ),                                                   
%     k2 = f( x(i)+h/4, y(i) + h*k1/4 ),                                     
%     k3 = f( x(i)+3h/8, y(i)+h*(3/32 k1 + 9/32 k2) ),                       
%     k4 = f( x(i)+12h/13, y(i)+h*(1932/2197 k1 - 7200/2197 k2               
%                                                       + 7296/2197 k3) ),   
%     k5 = f( x(i)+h, y(i)+h*(439/216 k1 - 8 k2 + 3680/513 k3 - 845/4104 k4))
%     k6 = f( x(i)+h/2, y(i)+h*(-8/27 k1 + 2 k2 - 3544/2565 k3               
%                                              + 1859/4104 k4 - 11/40 k5) )  
%     x(i+1) = x(i) + h.                                                     
%                                                                            
%     The error is estimated to be                                           
%        err = h*( k1 / 360 - 128 k3 / 4275 - 2197 k4 / 75240 + k5 / 50      
%              + 2 k6 / 55 )                                                 
%     The step size h is then scaled by the scale factor                     
%         scale = 0.8 * | epsilon * y(i) / (err * (xmax - x(1))) | ^ 1/4     
%     The scale factor is further constrained 0.125 < scale < 4.           
%     The new step size is h := scale * h.
%
%  Arguments:                                                               
%     func       function which returns the slope at (x,y) of integral curve
%				 of the differential equation y' = f(x,y) which passes      
%                through the point (x0,y0). 			                    
%     y0 		 initial value of y(x) at x
%     x   		 Initial value of x
%     h   		 Initial step size of integration
%     xmax       Final value of x
%     tolerance  threshold of relative error (relative error<tolerance)
%
%  Return Values:
%     y          solution of y(x) at x + h
%
% Last modified:   2020/01/10   Meysam Mahooti
%----------------------------------------------------------------------------
function [x,out,h_next] = Runge_Kutta_Fehlberg_4_5(func,x0,t0,h,tmax,tolerance,params_int)

ATTEMPTS = 12;
MIN_SCALE_FACTOR = 0.125;
MAX_SCALE_FACTOR = 4.0;

err_exponent = 1.0/7.0;
last_interval = 0;

% Verify that the step size is positive and that the upper endpoint %
% of integration is greater than the initial enpoint.               %

if (tmax < t0 || h <= 0.0)
    x = x0;
    out = -2;
    h_next = h;
    return
end
   
% If the upper endpoint of the independent variable agrees with the %
% initial value of the independent variable.  Set the value of the  %
% dependent variable and return success.                            %
h_next = h;
x = x0;
if (tmax == t0)
    x = x0;
    out = 0;
    h_next = h;
    return
end

% Insure that the step size h is not larger than the length of the %
% integration interval.                                            %
if (h > (tmax - t0)) 
    h = tmax - t0;
    last_interval = 1;
end

% Redefine the error tolerance to an error tolerance per unit    %
% length of the integration interval.                            %
tolerance = tolerance/(tmax - t0);

% Integrate the diff eq y'=f(x,y) from x=x to x=xmax trying to  %
% maintain an error less than tolerance * (xmax-x) using an     %
% initial step size of h and initial value: y = y[0]            %
temp_y0 = x0;
while (t0 < tmax)
      scale = 1.0;
      for i = 1:ATTEMPTS
         [temp_y, err] = Runge_Kutta(func, temp_y0, t0, h);
         err = norm(err);
         if (err == 0.0)
             scale = MAX_SCALE_FACTOR;
             break
         end
         if (norm(temp_y0) == 0.0)
             yy = tolerance;
         else
             yy = norm(temp_y0);
         end
         scale = 0.8*(tolerance*yy/err)^err_exponent;
         scale = min( max(scale,MIN_SCALE_FACTOR), MAX_SCALE_FACTOR);
         if (err < (tolerance*yy))
             break
         end
         h = h * scale;
         if ( t0 + h > tmax )
             h = tmax - t0;
         elseif ( t0 + h + 0.5 * h > tmax )
             h = 0.5 * h;
         end
      end
      if (i >= ATTEMPTS)
          h_next = h * scale;
          out = -1;
          return
      end
      temp_y0 = temp_y;         
      t0 = t0 + h;
      h = h * scale;
      h_next = h;
      if (last_interval)
          break
      end
      if (t0+h > tmax)
          last_interval = 1;
          h = tmax - t0;
      elseif (t0+h+0.5*h > tmax)
          h = 0.5 * h;
      end
end
x = temp_y;
out = 0;

end


%----------------------------------------------------------------------------
%  Description:                                                             
%     This routine approximates the solution of the differential equation
%	  y'=f(x,y) with the initial condition y = y(1) at x = x0. The value at
%     x + h is returned in y(2).  The function returns err/h (the absolute error  
%     per step size).
%                                                                           
%  Arguments:                                                               
%     func       function which returns the slope at (x,y) of integral curve
%				 of the differential equation y' = f(x,y) which passes      
%                through the point (x0,y0). 			                    
%     y 		 On input y is the initial value of y at x, on output y is  
%				 the solution at x + h.                              		
%     x   		 Initial value of x.                                        
%     h   		 Step size                                                  
%
%  Return Values:
%     y          solution of y(x) at x + h
%     out        err/h
%                                                                           
% Last modified:   2019/03/26   Meysam Mahooti
%----------------------------------------------------------------------------
function [x, out] = Runge_Kutta(func, x, t0, h)

a2 = 0.25;
a3 = 0.375;
a4 = 12/13;
a6 = 0.5;
b21 = 0.25;
b31 = 3/32;
b32 = 9/32;
b41 = 1932/2197;
b42 = -7200/2197;
b43 = 7296/2197;
b51 = 439/216;
b52 = -8;
b53 = 3680/513;
b54 = -845/4104;
b61 = -8/27;
b62 = 2;
b63 = -3544/2565;
b64 = 1859/4104;
b65 = -11/40;
c1 = 25/216;
c3 = 1408/2565;
c4 = 2197/4104;
c5 = -0.20;
d1 = 1/360;
d3 = -128/4275;
d4 = -2197/75240;
d5 = 0.02;
d6 = 2/55;

h2 = a2 * h; h3 = a3 * h; h4 = a4 * h; h6 = a6 * h;

k1 = func(t0, x);
k2 = func(t0+h2, x + h * b21 * k1);
k3 = func(t0+h3, x + h * ( b31*k1 + b32*k2) );
k4 = func(t0+h4, x + h * ( b41*k1 + b42*k2 + b43*k3) );
k5 = func(t0+h,  x + h * ( b51*k1 + b52*k2 + b53*k3 + b54*k4) );
k6 = func(t0+h6, x + h * ( b61*k1 + b62*k2 + b63*k3 + b64*k4 + b65*k5) );
x = x +  h * (c1*k1 + c3*k3 + c4*k4 + c5*k5);
out = d1*k1 + d3*k3 + d4*k4 + d5*k5 + d6*k6;

% k1 = func(t0, x);
% k2 = func(t0+h2, x + h * b21 * k1);
% k3 = func(t0+h3, x + h * ( b31*k1 + b32*k2) );
% k4 = func(t0+h4, x + h * ( b41*k1 + b42*k2 + b43*k3) );
% k5 = func(t0+h,  x + h * ( b51*k1 + b52*k2 + b53*k3 + b54*k4) );
% k6 = func(t0+h6, x + h * ( b61*k1 + b62*k2 + b63*k3 + b64*k4 + b65*k5) );
% x = x +  h * (c1*k1 + c3*k3 + c4*k4 + c5*k5);
% out = d1*k1 + d3*k3 + d4*k4 + d5*k5 + d6*k6;

end

