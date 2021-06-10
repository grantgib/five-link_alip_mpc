function [params] = LoadParams()
params = struct();
params.ht = 0.07;
params.avgvel = 0.3;

params.swingxmid = 0.2; %0.2; %0.2; % free
params.swingxvel = -0.1; % free
params.swingzvel = "free"; % -0.5

params.comxvel = "free"; %0.55; % free
params.comzvel = "free"; %-0.1; % free

params.length = 0.2; % free
end
