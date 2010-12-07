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
#include "fmatrix.h"


class FDomain
{
public:
    FDomain();
    FDomain( FDouble min_x , FDouble max_x , FDouble min_y , FDouble max_y ) ;
    FDomain( FDouble min_x , FDouble max_x , FDouble min_y , FDouble max_y , const FSize& size) ;

    void setMinX( FDouble min_x ) { p_min_x = min_x ; }
    void setMaxX( FDouble max_x ) { p_max_x = max_x ; }

    void setMinY( FDouble min_y ) { p_min_y = min_y ; }
    void setMaxY( FDouble max_y ) { p_max_y = max_y ; }

    void setDomain( FDouble min_x , FDouble max_x , FDouble min_y , FDouble max_y ) ;

    void setXDomain( FDouble min_x , FDouble max_x ) ;
    void setYDomain( FDouble min_y , FDouble max_y ) ;

    FDouble getMinX() const { return p_min_x ; }
    FDouble getMaxX() const { return p_max_x ; }

    FDouble getMinY() const { return p_min_y ; }
    FDouble getMaxY() const { return p_max_y ; }

    void setSize( const FSize& size ) { p_size = size ; }
    FSize getSize() const { return p_size ; }

    FComplex getPoint( unsigned int i , unsigned int j ) const ;

    bool getRange( FComplexVector& vect , FIndiciesVector& i_vect ,
                   unsigned int i , unsigned int j , unsigned int delta_i , unsigned int delta_j ) const ;

private:

    FDouble p_min_x ;
    FDouble p_max_x ;

    FDouble p_min_y ;
    FDouble p_max_y ;

    FSize p_size ;
};

#endif // FDOMAIN_H
