function [out] = Gamma(theta,n)
%GAMMA Summary of this function goes here
%   Detailed explanation goes here
tx = Angles.skew(theta);
max = 100;
out = zeros(3,3);
for i=0:max
    out = out + tx^i/factorial(i+n);
end
end

