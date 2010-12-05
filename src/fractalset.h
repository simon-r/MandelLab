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


#ifndef FRACTALSET_H
#define FRACTALSET_H

#include "fsize.h"
#include "fdomain.h"
#include "fractalevaluatorabstract.h"
#include "fmatrix.h"

class FractalSet
{
public:

    FractalSet();

    void setSize( const FSize &size ) { p_size = size ; }
    FSize getSize() const { return p_size ; }

    void setDomain ( const FDomain &domain ) { p_domain = domain ; }
    FDomain getDomain() const { return p_domain ; }

    void setEvaluator( FractalEvaluatorAbstract* evaluator ) {  p_evaluator = evaluator ; }
    void setResultMatrix( FMatrix* matrix ) { p_matrix = matrix ; }

    void setScheduler() ;

    bool run() ;

protected:

    FSize p_size ;
    FDomain p_domain ;

    FractalEvaluatorAbstract* p_evaluator ;
    FMatrix* p_matrix ;
};

#endif // FRACTALSET_H
