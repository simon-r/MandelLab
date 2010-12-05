#include "mandelbrotsetevaluator.h"

MandelbrotSetEvaluator::MandelbrotSetEvaluator( int iterations )
{
    this->setMaxIterations( iterations ) ;
}


bool MandelbrotSetEvaluator::evalPoints( const FComplexVector& points , FIntVector &results )
{
    if( points.size() != results.size() )
        return false ;

    for( int i = 0 ; i < points.size() ; i++ )
    {
        FComplex c = points[i] ;
        FComplex z = FComplex(0,0) ;

        results[i] = this->p_max_iterations ;
        for( int cnt = 0 ; cnt < this->p_max_iterations ; cnt++ )
        {
            z = z*z + c ;
            if ( abs( z ) > 1.0 )
            {
                results[i] = cnt ;
                break ;
            }
        }

        return true ;
    }
}
