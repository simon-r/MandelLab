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

#ifndef FRACTALEVALUATORABSTRACT_H
#define FRACTALEVALUATORABSTRACT_H

#include "fcomplex.h"
#include "findex.h"
#include "fmatrix.h"

class FractalEvaluatorAbstract
{
public:
    FractalEvaluatorAbstract();

    virtual bool evalPoints( const FComplexVector& points , const FIndiciesVector& indicies , FMatrix &results ) = 0 ;
};

#endif // FRACTALEVALUATORABSTRACT_H
