function [ c ] = plot_mandel( r )
%UNTITLED3 Summary of this function goes here
%   Detailed explanation goes here


pcolor( r ) ;
set( get(gca,'Children'), 'EdgeColor', 'none' ) ;
colorbar ;
c = true ;

end

