function [ m , v ] = build_bound_matrix( c , i , j )

[row col] = size(c) ;

m = zeros(3) ;
v = false(3) ;

for ni = 1:3
    c_i = i-2+ni ;
    
    for nj = 1:3
        c_j = j-2+nj ;
        if c_i >= 1 & c_i <= row & c_j >= 1 & c_j <= col
            m(ni,nj) = c( c_i , c_j ) ;
            v(ni,nj) = true ;
        end ;
    end ;
    
end ;

end
