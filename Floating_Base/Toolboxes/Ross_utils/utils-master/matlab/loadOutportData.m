function log = loadOutportData(tg)
% Parse output data from slrt target machine
%
%   Author: Ross Hartley
%   Date:   10/6/2017

[~, f_name] = getCompiledPortWidths(char(tg.Application));
ports = feval(f_name);

log = struct();
log.t = tg.TimeLog;
index = 1;
for i = 1:length(ports)
    if ~isempty(ports(i).BusSignalNames)
        % Bus Signal
        fieldName = char(ports(i).PortName);
        for j = 1:length(ports(i).BusSignalNames)
            args = cell(1,length(num2cell(ports(i).BusSignalDims{j}))+2);
            args{1} = tg.OutputLog(:, index:index + prod(ports(i).BusSignalDims{j}) - 1);
            args{2} = [];
            for k = 1:length(num2cell(ports(i).BusSignalDims{j}))
                args{k+2} = ports(i).BusSignalDims{j}(k);
            end
           log.(fieldName).(ports(i).BusSignalNames{j}) = reshape(args{:});
        end
    else
        % Vector Signal
        fieldName = char(ports(i).PortName);
        log.(fieldName) = tg.OutputLog(:, index:index + ports(i).PortWidth - 1);
        index = index + ports(i).PortWidth;
    end
end

end