%% Path setup
restoredefaultpath;
if isunix
    addpath('../../../../toolbox/casadi-linux-matlabR2014b-v3.5.5');
    import casadi.*
else
    addpath('../Toolboxes/casadi-windows-matlabR2014b-3.5.1');
    import casadi.*
end
addpath(genpath('utils_io_nmpc/'));
addpath(genpath('../reference_trajectories/'));
addpath(genpath('../FROST_code'));