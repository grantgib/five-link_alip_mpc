%% Path setup
clear; clc; close all; restoredefaultpath;
if isunix
    addpath('../../../../toolbox/casadi-linux-matlabR2014b-v3.5.5');
else
    addpath('../Toolboxes/casadi-windows-matlabR2014b-3.5.1');
end
addpath(genpath('utils_fp_lipm/'));
