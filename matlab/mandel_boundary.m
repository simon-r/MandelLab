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

function [ r ] = draw_boundary( r , c , i , j , iter ) 

[row col] = size(c) ;


end
