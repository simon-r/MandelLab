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
    [tok mat] = regexp(tline , ...
        '\(view (-{0,1}\d+\.\d+) (-{0,1}\d+\.\d+) (-{0,1}\d+\.\d+) (-{0,1}\d+\.\d+)\)' ...
        ,'tokens', 'match' ) ;
    
    if  size( tok{:} , 2 ) == 4
        a = str2num(tok{1}{1}) ;
        b = str2num(tok{1}{2}) ;
        c = str2num(tok{1}{3}) ;
        d = str2num(tok{1}{4}) ;
        m_data.xaos_pos = [a b c d] ;
    end
    tline = fgetl(fid);
end

fclose(fid);

m_data.error = 1 ;

end

