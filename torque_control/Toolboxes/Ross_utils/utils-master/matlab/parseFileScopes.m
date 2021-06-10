function log = parseFileScopes(tg, varargin)

% Connect to target
if nargin < 1
    tg = slrt;
end

% Parse inputs
p = inputParser;
p.addOptional('savePath','./log/');
p.addOptional('fileScopes',struct);

p.parse(varargin{:});
results = p.Results;
savePath = results.savePath;
fileScopes = results.fileScopes;


%% Log Data
log = struct;

% Stop Agility's filescope
stop(getscope(tg,1)); 
% Stop user filescopes
for i = 1:length(fileScopes)
    sc = getscope(tg,fileScopes(i).number);
    stop(sc);
end

% Log Agility's filescope
SimulinkRealTime.copyFileToHost(tg, 'CASSIE1.dat')
log.cassie = CassieLog('CASSIE1.dat');

% Copy data to host
for i = 1:length(fileScopes)
    SimulinkRealTime.copyFileToHost(tg, fileScopes(i).fileName)
end

% Log user data
for i = 1:length(fileScopes)
    log.(fileScopes(i).logName) = parseFileScopeData(fileScopes(i).fileName, fileScopes(i).template);
end

%% Save Data
format shortg;
clk = clock;
date_str = [num2str(clk(1)),'-',num2str(clk(2)),'-',num2str(clk(3))];
time_str = [num2str(clk(4)),'-',num2str(clk(5))];

full_save_path = [savePath,date_str,'/'];
listing = dir(full_save_path);
all_file_names = {listing.name};
indices = ~cellfun('isempty',strfind(all_file_names,'CassieData'));
data_files = all_file_names(indices);
exp_num = zeros(1,length(data_files));
for i = 1:length(data_files)
    [start_index, end_index] = regexp(data_files{i},'\d*');
    exp_num(i) = str2double(data_files{i}(start_index(1):end_index(1)));
end
max_exp_num = max(exp_num);
if isempty(max_exp_num)
    max_exp_num = 0;
end

user_input = inputdlg({'Experiment #','Date/Time','Setup','Results'}, 'Data Log', ...
    [1 13; 1 20; 3 50; 3 50], ...
    {num2str(max_exp_num+1),[date_str,'-',time_str],'',''});

if ~isempty(user_input)
    log.description.ExperimentNumber = user_input{1};
    log.description.DateTime = user_input{2};
    log.description.Setup = user_input{3};
    log.description.Results = user_input{4};
    
    if ~exist(full_save_path,'dir')
        mkdir(full_save_path);
    end
    
    save([full_save_path,'CassieData', '-Exp-', log.description.ExperimentNumber, '-DateTime-',log.description.DateTime], 'log')
end

end
