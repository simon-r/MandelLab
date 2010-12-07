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

#ifndef FCOMPLEX_H
#define FCOMPLEX_H

#include <complex>
#include <vector>

using namespace std ;

typedef long double FDouble ;

typedef complex< FDouble > FComplex;

typedef vector< FComplex > FComplexVector ;

typedef vector< unsigned int > FUIntVector ;

typedef vector< int > FIntVector ;

typedef vector< FDouble > FDoubleVector ;



#endif // FCOMPLEX_H
