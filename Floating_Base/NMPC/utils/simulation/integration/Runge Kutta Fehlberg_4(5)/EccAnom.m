%--------------------------------------------------------------------------
%
% EccAnom: computes the eccentric anomaly for elliptic orbits
%
% Inputs:
%   M        Mean anomaly in [rad]
%   e        Eccentricity of the orbit [0,1]
%
% Output:
%   E        Eccentric anomaly in [rad]
%
% Last modified:   2018/01/27   M. Mahooti
% 
%--------------------------------------------------------------------------
function E = EccAnom(M, e)

maxit = 15;
epsilon = 100*eps;
i = 0;

% Starting value
M = mod(M, 2*pi);   
if (e<0.8)
    E=M;
else
    E=pi;
end

% Iteration
while(1)
    f = E - e*sin(E) - M;
    E = E - f/(1 - e*cos(E));
    i = i+1;
    if (i==maxit)
        disp(' Convergence problems in EccAnom\n');
        break
    end
    if (abs(f) <= epsilon)
        break
    end
end

