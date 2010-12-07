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

#include<QDebug>

#include "mandelbrotsetevaluator.h"

MandelbrotSetEvaluator::MandelbrotSetEvaluator( int iterations )
{
    this->setMaxIterations( iterations ) ;
}


bool MandelbrotSetEvaluator::evalPoints( const FComplexVector& points , const FIndiciesVector& indicies , FMatrix *results )
{
    if( points.size() != indicies.size() )
        return false ;

    for( unsigned int i = 0 ; i < points.size() ; i++ )
    {
        FComplex c = points[i] ;
        FComplex z = FComplex(0,0) ;
        FComplex p = FComplex(0,0) ;

        results->setVal( indicies[i] , (double)this->p_max_iterations ) ;
        if ( i%1000 == 0 ) qDebug() <<  i ;

        for( unsigned int cnt = 0 ; cnt < this->p_max_iterations ; cnt++ )
        {
            z = z*z + c ;

//            double r = z.real() ;
//            double i = z.imag() ;

//            double cr = c.real() ;
//            double ci = c.imag() ;

            double a = abs( p - z ) ;
            //qDebug() <<  a ;
            if ( abs( z ) > 1.0 )
            {
                results->setVal( indicies[i] , double(cnt) ) ;
                break ;
            }
            else if ( a < 1e-16 )
                break ;

            p = z ;
        }
    }
    return true ;
}
