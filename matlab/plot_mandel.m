function [ c ] = plot_mandel( r , c )
%UNTITLED3 Summary of this function goes here
%   Detailed explanation goes here

itr = max ( max(r) ) ;
map = (r~=itr) ;

v_mod = 20 ;

r(map) = mod( r(map) , v_mod ) ;
r(not(map)) = v_mod ;

pcolor( real(c) , imag(c) , r ) ;
set( get(gca,'Children'), 'EdgeColor', 'none' ) ;

cm = colormap( 'Hot' ) ;
cs = size( cm ,1 ) ;
cm = cm(cs:-2:1,1:3) ;
colormap( cm ) ;

colorbar ;

c = true ;

end

