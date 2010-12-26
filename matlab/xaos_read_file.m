function [ m_data ] = xaos_read_file( file_name )
%UNTITLED3 Summary of this function goes here
%   Detailed explanation goes here

fid = fopen( file_name );

if fid == -1
    m_data.error = -1 ;
    return ;
end

tline = fgetl(fid);

while ischar(tline)
    disp(tline)
    tline = fgetl(fid);
end

fclose(fid);

m_data.error = 1 ;

end

