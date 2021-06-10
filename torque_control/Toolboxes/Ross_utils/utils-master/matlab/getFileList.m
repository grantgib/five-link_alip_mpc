function [file_str] = getFileList(filename)
    file_list = importdata(filename);
    file_str = [];
    for i = 1:length(file_list)
        file_str = [file_str, file_list{i}, newline];
    end
end