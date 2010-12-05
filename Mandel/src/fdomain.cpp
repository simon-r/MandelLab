// Copyright (C) 2010  Simone Riva -- em: simone [dot] rva -a- gmail com

//   This program is free software: you can redistribute it and/or modify
//   it under the terms of the GNU General Public License as published by
//   the Free Software Foundation, either version 3 of the License, or
//   (at your option) any later version.

//   This program is distributed in the hope that it will be useful,
//   but WITHOUT ANY WARRANTY; without even the implied warranty of
//   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//   GNU General Public License for more details.

//   You should have received a copy of the GNU General Public License
//   along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "fdomain.h"
#include "math.h"

FDomain::FDomain()
{
    setDomain(  -2.0 ,  1.0 ,  -1.0 ,  1.0 ) ;
}

FDomain::FDomain( double min_x , double max_x , double min_y , double max_y )
{
    setDomain(  min_x ,  max_x ,  min_y ,  max_y ) ;
}

FDomain::FDomain( double min_x , double max_x , double min_y , double max_y , const FSize& size)
{
    setDomain(  min_x ,  max_x ,  min_y ,  max_y ) ;
    setSize( size ) ;
}

void FDomain::setDomain( double min_x , double max_x , double min_y , double max_y )
{
    this->setXDomain( min_x , max_x ) ;
    this->setYDomain( min_y , max_y ) ;
}

void FDomain::setXDomain( double min_x , double max_x )
{
    this->setMinX( min_x );
    this->setMaxX( max_x );
}

void FDomain::setYDomain( double min_y , double max_y )
{
    this->setMinY( min_y );
    this->setMaxY( max_y );
}

FComplex FDomain::getPoint( unsigned int i , unsigned int j ) const
{
    if ( i > p_size.getHeight()-1 || j > p_size.getWidth()-1 )
        return FComplex(NAN,NAN) ;

    FComplex c ;

    double delta_y = ( p_max_y - p_min_y ) / (double)p_size.getHeight() ;
    c.imag( p_max_y - delta_y*i ) ;

    double delta_x = ( p_max_x - p_min_x ) / (double)p_size.getWidth() ;
    c.real( p_min_x + delta_x*j ) ;

    return c ;
}


bool FDomain::getRange( FComplexVector& vect , FIndiciesVector& i_vect ,
               unsigned int i , unsigned int j , unsigned int delta_i , unsigned int delta_j ) const
{
    unsigned int range_size = delta_i*delta_j ;

    if( range_size != vect.size() )
        return false ;

    if( range_size != i_vect.size() )
        return false ;

    if( i+delta_i > this->p_size.getHeight() )
        return false ;

    if( j+delta_j > this->p_size.getWidth() )
        return false ;

    int index = 0 ;

    for ( unsigned int ii = 0 ; ii < delta_i ; ii++ )
    {
        for ( unsigned int jj = 0 ; jj < delta_j ; jj++ )
        {
            vect[index] = this->getPoint( i + ii , j + jj ) ;
            i_vect[index].setIndex( i + ii , j + jj ) ;
            index++ ;
        }
    }

    return true ;
}




