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

#ifndef MANDELBROTSETEVALUATOR_H
#define MANDELBROTSETEVALUATOR_H

#include "fractalevaluatorabstract.h"

class MandelbrotSetEvaluator : public FractalEvaluatorAbstract
{
public:
    MandelbrotSetEvaluator( unsigned int iterations = 100 );

    void setMaxIterations( unsigned int iterations ) { p_max_iterations = iterations ; }

    virtual bool evalPoints( const FComplexVector& points , const FIndiciesVector& indicies , FMatrix *results );

private:
    unsigned int p_max_iterations ;
};

#endif // MANDELBROTSETEVALUATOR_H
