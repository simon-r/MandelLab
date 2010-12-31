function [ r ] = mandel_boundary( c , iter )
%UNTITLED Summary of this function goes here
%   Detailed explanation goes here

res = zeros( size(c) ) ;

[row col] = size(c) ;

for i = 1:row
   r = mandel( c(i,:) , iter ) ;
   indx = find( r==iter ) ;
   
   if size(indx,2) ~= 0
       j=1 ;
       r = draw_boundary( r , c , i , indx(j) , iter ) ;
   end
   
end

end

function [ r ] = draw_boundary( r , c , i , j , th ) 

[row col] = size(c) ;




end

function [ m ] build_bound_matrix( c , i , j ) 

[row col] = size(c) ;

for ni = 1:3
    for nj = 1:3
        
    end ;
end ;


end