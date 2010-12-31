function [ res ] = mandel( c , iter , varargin )
%mandel: compute the mendelbrot set
%   c: matrix of complex coordinates
%   iter: max iteractions

optargin = size(varargin,2);

z = zeros( size(c) ) ;
%p = z ;

res = ones( size(c) )*iter ;

if optargin == 0
    v = true(size(c)) ;
else
    v = varargin(1) ;
end ;

for i = 1:iter
    z(v) = z(v).^2 + c(v) ;
    v(v) = ( abs( z(v) ) < 2.0 ) ;
    res( res==iter & not(v) ) = i ;
%     v = v & not(p==z) ;
%     p = z ;
end;

end
