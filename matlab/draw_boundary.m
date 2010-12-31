function [ r ] = draw_boundary( r , c , i , j , th , iter )

[row col] = size(c) ;
[ m , v ] = build_bound_matrix( c , i , j ) ;


while true  %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% ATTENZIONE 
    r = mandel( m , iter , v ) ;
end ;

end

