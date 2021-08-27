%%
clear; clc;
addpath('../NMPC');
addpath('../NMPC_freewrench/');
fwbnd = load('FWbounds.mat');
bnd = load('NMPCbounds.mat');

[[bnd.all_bounds; zeros(4,4)], fwbnd.all_bounds]

[bnd.all_bounds; zeros(4,4)] - fwbnd.all_bounds
