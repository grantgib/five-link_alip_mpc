function [params] = LoadParams()
params = struct();
params.ht = 0.07;
params.avgvel = 0.5;

params.swingxmid = 0.2;
params.swingxvel = 0.1;
params.swingzvel = -0.3;

params.comxvel = 0.55;
params.comzvel = -0.1;

params.length = 0.28;
end
