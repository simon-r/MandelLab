function [ c , delta_r , delta_i ] = complexmap( r_size , i_size , r_range , i_range )
%UNTITLED2 Summary of this function goes here
%   Detailed explanation goes here

delta_r = range( r_range ) / r_size ;
delta_i = range( i_range ) / i_size ;

r_min = min( r_range ) ;
r_max = max( r_range ) ;

re = r_min:delta_r:r_max ; 

i_range = -i_range ;
i_min = min( i_range ) ;
i_max = max( i_range ) ;

im = i_min:delta_i:i_max ;

mr = ones( size( im , 2 ) , 1 ) * re ;
mi =  -(im') * ones( 1 , size( re , 2 ) ) ;

c = complex( mr , mi ) ;

end

