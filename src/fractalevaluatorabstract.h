#ifndef FRACTALEVALUATORABSTRACT_H
#define FRACTALEVALUATORABSTRACT_H

#include "fcomplex.h"

class FractalEvaluatorAbstract
{
public:
    FractalEvaluatorAbstract();

    virtual bool evalPoints( const FComplexVector& points , FIntVector &results ) = 0 ;
};

#endif // FRACTALEVALUATORABSTRACT_H
