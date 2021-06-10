function log = parseFileScopeData(filePath, structTemplate)

% Get bus unpacking data
[bytes, fields, ~, numTypes] = BusModule.getPackingInfo(structTemplate, 'doublefloats');
logEntrySize = sum(bytes);
packedLogEntrySize = 8 * ceil(logEntrySize / 8);
fieldNames = cellfun(@(s)s.join('.'), fields);
endInds = cumsum(bytes);
startInds = endInds - bytes + 1;

% Extract logged data
fileScopeData = SimulinkRealTime.utils.getFileScopeData(char(filePath));
time = fileScopeData.data(:, end)';
doubles = fileScopeData.data(:, 1:end-1)';
logBytesPadded = typecast(doubles(:), 'uint8');

% Cast doubles -> bytes, then reshape byte array and remove padding
numEntries = numel(time);
logBytesPadded = reshape(logBytesPadded, packedLogEntrySize, numEntries);
logBytes = logBytesPadded(1:logEntrySize, :);

%% Create log

log = struct;
for i = 1:length(fieldNames)
    
    % Typecast data
    inds = startInds(i):endInds(i);
    bytes = logBytes(inds, :);
    out = typecast(bytes(:), char(numTypes(i)));
    
    % Reshape data
    ncols = size(logBytes, 2);
    nrows = numel(out) / ncols;
    
    log.(fieldNames(i)) = reshape(out, nrows, ncols);
end

end