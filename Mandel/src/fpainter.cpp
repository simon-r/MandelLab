#include "fpainter.h"

FPainter::FPainter() :
        p_qpaiter(0) ,
        p_fmatrix(0)
{
}

bool FPainter::paint()
{
    if ( p_fmatrix == 0 || p_qpaiter == 0 )
        return false ;

    FSize size = p_fmatrix->getSize() ;

    for ( unsigned int i = 0 ; i < size.getHeight() ; i++ )
    {
        for ( unsigned int j = 0 ; j < size.getWidth() ; j++ )
        {

        }
    }
}
