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

#ifndef FDOMAIN_H
#define FDOMAIN_H

#include <fsize.h>
#include "fcomplex.h"
#include "findex.h"

class FDomain
{
public:
    FDomain();
    FDomain( double min_x , double max_x , double min_y , double max_y ) ;
    FDomain( double min_x , double max_x , double min_y , double max_y , const FSize& size) ;

    void setMinX( double min_x ) { p_min_x = min_x ; }
    void setMaxX( double max_x ) { p_max_x = max_x ; }

    void setMinY( double min_y ) { p_min_y = min_y ; }
    void setMaxY( double max_y ) { p_max_y = max_y ; }

    void setDomain( double min_x , double max_x , double min_y , double max_y ) ;

    void setXDomain( double min_x , double max_x ) ;
    void setYDomain( double min_y , double max_y ) ;

    double getMinX() { return p_min_x ; }
    double getMaxX() { return p_max_x ; }

    double getMinY() { return p_min_y ; }
    double getMaxY() { return p_max_y ; }

    void setSize( const FSize& size ) { p_size = size ; }

    FComplex getPoint( unsigned int i , unsigned int j ) ;

    bool getRange( FComplexVector& vect , FIndiciesVector& i_vect ,
                   unsigned int i , unsigned int j , unsigned int delta_i , unsigned int delta_j ) ;

private:

    double p_min_x ;
    double p_max_x ;

    double p_min_y ;
    double p_max_y ;

    FSize p_size ;
};

#endif // FDOMAIN_H
