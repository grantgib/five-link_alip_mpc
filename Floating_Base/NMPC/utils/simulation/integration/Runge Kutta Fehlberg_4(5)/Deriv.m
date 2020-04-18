%--------------------------------------------------------------------------
%
% Deriv: Computes the derivative of the state vector for the normalized
%        (GM=1) Kepler's problem in three dimensions
%
% Last modified:   2018/01/27   M. Mahooti
%
%--------------------------------------------------------------------------
function yp = Deriv(t, y)

% State vector components
r = y(1:3);
v = y(4:6);

% State vector derivative
yp = [v;-r/((norm(r))^3)];

