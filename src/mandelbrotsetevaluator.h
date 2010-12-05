#ifndef MANDELBROTSETEVALUATOR_H
#define MANDELBROTSETEVALUATOR_H

#include "fractalevaluatorabstract.h"

class MandelbrotSetEvaluator : public FractalEvaluatorAbstract
{
public:
    MandelbrotSetEvaluator( int iterations = 100 );

    void setMaxIterations( int iterations ) { p_max_iterations = iterations ; }

    virtual bool evalPoints( const FComplexVector& points , FIntVector &results ) ;

private:
    int p_max_iterations ;
};

#endif // MANDELBROTSETEVALUATOR_H
