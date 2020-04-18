function varargout = getCompiledPortWidths(mdl,writeFun)
    % GETCOMPILEDPORTWIDTS creates a function to return port names and
    % sizes for a Simulink model.
    %
    % Modified by Ross Hartley to include support for bus signals - 10/6/17
    
    all_bus_data = all_buses();
    
    if nargin<2
        writeFun = 1;
    end
    
    % find_system expects a handle to a model and returns a vector of handles
    % to refer to the blocks found.
    sys = get_param(mdl, 'Handle');
    Outports = find_system(sys,'SearchDepth',1,'BlockType','Outport');
    
    w = zeros(size(Outports));
    b = cell(size(Outports));
    
    try
        fprintf('\n');
        fprintf('Compiling %s to determine port widths....\n',mdl);
        f=str2func(mdl);
        f([],[],[],'compile');
        for i=1:length(Outports)
            pw = get_param(Outports(i),'CompiledPortWidths');
            ph = get_param(Outports(i), 'PortHandles');
            sh = get_param(ph.Inport, 'SignalHierarchy');
            
            if ~isempty(sh.BusObject)
                index = 1;
                logged_bus_signal_names = {sh.Children.SignalName};
%                 logged_bus_bus_object = {sh.Children.BusObject};
%                 logged_bus_children = {sh.Children.Children};
                for j = 1:length(all_bus_data)
                   bus_name = all_bus_data{j}{1};
                   if strcmp(sh.BusObject, bus_name)
                       for k = 1:length(all_bus_data{j}{6})
                           if any(strcmp(all_bus_data{j}{6}{k}{1}, logged_bus_signal_names))
                               b{i}.bus_signal_names{index} = all_bus_data{j}{6}{k}{1};
                               b{i}.bus_signal_dims{index} = all_bus_data{j}{6}{k}{2};
                               index = index + 1;
                           end
                       end
                   end
                end
            else
                b{i} = [];
            end
            
            if ~isempty(pw)
                w(i) = pw.Inport;
            else
                w(i) = -1;
            end
        end
        f([],[],[],'term');
        fprintf('\tcomplete.\n');
    catch err
        warning('Could not compile the model to determine the port widths!');
        rethrow(err);
    end
    
    if writeFun
        %fprintf('Writing %s_compiledPortWidths.m ....\n', mdl);
        fid = fopen([mdl '_compiledPortWidths.m'],'w');
        fprintf(fid, 'function p = %s()\n', [mdl '_compiledPortWidths']);
        fprintf(fid, '\tp = struct(''PortName'',cell(%d,%d),''PortWidth'',-1);\n', size(w));
        for i=1:numel(w)
            OutportName = get_param(Outports(i), 'Name');
            fprintf(fid, '\n\t%% PortName: %s\n', OutportName);
            fprintf(fid, '\tp(%d).PortName = ''%s'';\n', i, OutportName);
            fprintf(fid, '\tp(%d).PortWidth = %d;\n', i, w(i));
            
            if ~isempty(b{i})
                fprintf(fid, '\tp(%d).BusSignalNames = {', i);
                for j = 1:length(b{i}.bus_signal_names)
                    if j > 1
                        fprintf(fid, ',');
                    end
                    fprintf(fid, ['''',b{i}.bus_signal_names{j},'''']);
                end
                fprintf(fid, '};\n');
                
                fprintf(fid, '\tp(%d).BusSignalDims = {', i);
                for j = 1:length(b{i}.bus_signal_dims)
                    if j > 1
                        fprintf(fid, ',');
                    end
                    fprintf(fid, '[');
                    for k = 1:length(b{i}.bus_signal_dims{j})
                        if k == length(b{i}.bus_signal_dims{j})
                            fprintf(fid, '%d', b{i}.bus_signal_dims{j}(k));
                        else
                            fprintf(fid, '%d,', b{i}.bus_signal_dims{j}(k));
                        end
                    end
                    fprintf(fid, ']');
                end
                fprintf(fid, '};\n');
            end
            
        end
        fprintf(fid, 'end\n');
        fclose(fid);
        %fprintf('\tcomplete.\n');
    end
    if nargout>0
        varargout{1} = w;
        if nargout>1
            varargout{2} = [mdl '_compiledPortWidths'];
        end
    else
        varargout = {};
    end
end
