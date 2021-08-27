%% Path setup
clear; clc;
restoredefaultpath;
if isunix
    addpath('../../casadi-linux-matlabR2014b-v3.5.1');
    import casadi.*
else
    addpath('../Toolboxes/casadi-windows-matlabR2014b-3.5.1');
    import casadi.*
end
addpath('../Toolboxes/qpSWIFT-master/matlab');
addpath(genpath('utils_lmpc/'));
addpath(genpath('../reference_trajectories/'));
addpath(genpath('../FROST_code'));

disp("Path Setup Complete!");