function [h,dhds,ddhds] = bezier(a,s,varargin)
%BEZIER
%% DOES NOT WORK WHEN S=1 YET
% if s == 1
%     error("function doesn't work for s=1 yet")
% end
% Author: Ross Hartley
%   Date: 1/6/2016

%      a := bezier parameters in vector or matrix form (NxM)
%      s := bezier variable
%
%      varargin{1} := number of Bezier curves
%      varargin{1} := degree of Bezier polynomial

% Reshape vector into matrix if needed
% if any(size(a)==[1,1])
%     assert(~isempty(varargin{1}),'Need to specify number of bezier curves.')
%     assert(~isempty(varargin{2}),'Need to specify degree of bezier polynomial.')
%     a = reshape(a,varargin{1},varargin{2}-1);
% end
[n_h,M_deg] = size(a);
M_deg = M_deg-1;

h = zeros(n_h,1);
dhds = zeros(n_h,1);
ddhds = zeros(n_h,1);

for i=1:n_h
    for k=0:M_deg 
         h(i) = h(i) + a(i,k+1) * (factorial(M_deg)/(factorial(k)*factorial(M_deg-k))) * (s^k*(1-s)^(M_deg-k));
         dhds(i) = dhds(i) + a(i,k+1) * (factorial(M_deg)/(factorial(k)*factorial(M_deg-k))) * (k*s^(k-1)*(1-s)^(M_deg-k) - (M_deg-k)*s^k*(1-s)^(M_deg-k-1));
         ddhds(i) = ddhds(i) + a(i,k+1) * (factorial(M_deg)/(factorial(k)*factorial(M_deg-k))) * ((k*(k-1)*s^(k-2)*(1-s)^(M_deg-k)-k*(M_deg-k)*s^(k-1)*(1-s)^(M_deg-k-1)) - (k*(M_deg-k)*s^(k-1)*(1-s)^(M_deg-k-1)-(M_deg-k)*(M_deg-k-1)*s^k*(1-s)^(M_deg-k-2)));
    end
end



