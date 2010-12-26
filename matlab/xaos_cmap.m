function [ c , delta_r , delta_i ] = xaos_cmap( r_size , i_size , xaos_pos )
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here

a = xaos_pos(1)-xaos_pos(3) ;
b = xaos_pos(1)+xaos_pos(3) ;

r_range = [a b] ;

a = -xaos_pos(2) - xaos_pos(4) ;
b = -xaos_pos(2) + xaos_pos(4) ;
i_range = [a b] ;

[ c , delta_r , delta_i ] = complexmap( r_size , i_size , r_range , i_range ) ;

end

