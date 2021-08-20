function [ ] = export_function( exprs, name, path, vars )
current_dir = pwd;
cd(path);
if ~exist('src/','dir')
    mkdir('src');
end
if ~exist('mex/','dir')
    mkdir('mex');
end
if ~exist('m/','dir')
    mkdir('m');
end
cd(current_dir);

if ~iscell(exprs)
    exprs = {exprs};
end

if ~iscell(vars)
    vars = {vars};
end

% Generate mex file
export(exprs{:}, 'File', [path,name,'_mex'], 'Vars', vars, 'ForceExport', true);
% cd(path);
% movefile *mex* mex
% delete *.cc
% delete *.hh
% cd(current_dir);

% Generate c code
% export(exprs{:}, 'File', [path,name,'_src'], 'Vars', vars, 'BuildMex', false, 'ForceExport', true);
% cd(path);
% !ren *.cc *.c
% !ren *.hh *.h
% movefile *.c* src
% movefile *.h* src
% cd(current_dir);

% Generate Matlab wrapper function
% export(exprs{:}, 'File', [path,name], 'Vars', vars, 'BuildMex', false, 'ForceExport', true);
% cd(path);
% !ren *.cc *.m
% !ren *.hh *.garbage
% movefile *.m* m
% delete *.garbage
% cd(current_dir);

end



