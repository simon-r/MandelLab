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

#ifndef FMATRIX_H
#define FMATRIX_H

#include <vector>
#include "fsize.h"
#include "findex.h"
#include "fcomplex.h"

using namespace std ;

class FMatrix
{
public:
    FMatrix();

    void setSize( unsigned int i , unsigned int j ) { matrix.resize(i*j) ; s_i = i ; s_j = j ; }

    void setSize( unsigned int sq ) { setSize( sq , sq ) ; }

    void setSize( const FSize& size ) { setSize(  size.getHeight() , size.getWidth() ) ; }

    FSize getSize() const { return FSize( s_j , s_i ) ; }

    void setVal( unsigned int i , unsigned int j , FDouble val ) { matrix[s_i*i+j] = val ; }
    void setVal( FIndex indx , FDouble val ) { setVal( indx.I() , indx.J() , val ) ; }

    double val( unsigned int i , unsigned int j ) const { return matrix[s_i*i+j] ; }

private:
    vector< FDouble > matrix ;
    unsigned int s_i ;
    unsigned int s_j ;
};

#endif // FMATRIX_H
