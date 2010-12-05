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

#ifndef FINDEX_H
#define FINDEX_H

#include <vector>

using namespace std ;

class FIndex {
public:
    FIndex( unsigned int i , unsigned int j ) { setIndex( i , j ) ; }

    void setIndex( unsigned int i , unsigned int j ) { setI( i ) ; setJ( j ) ; }

    void setI( unsigned int i ) { p_i = i ; }
    void setJ( unsigned int j ) { p_j = j ; }

    unsigned int I() const { return p_i ; }
    unsigned int J() const { return p_j ; }

private:

    unsigned int p_i ;
    unsigned int p_j ;
};

typedef vector< FIndex > FIndiciesVector ;

#endif // FINDEX_H
