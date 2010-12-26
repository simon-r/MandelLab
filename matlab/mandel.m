function [ res ] = mandel( c , iter )
%mandel: compute the mendelbrot set
%   c: c matrix of complex coordinates
%   iter: iteractions

z = zeros( size(c) ) ;
p = z ;

res = ones( size(c) )*iter ;
v = true(size(c)) ;

for i = 1:iter
    z(v) = z(v).^2 + c(v) ;
    v = ( abs( z ) < 1.0 ) ;
    res( res==iter & not(v) ) = i ;
end;

end

