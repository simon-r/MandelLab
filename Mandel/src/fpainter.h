#ifndef FPAINTER_H
#define FPAINTER_H

#include "fmatrix.h"
#include <QPainter>

class FPainter
{
public:
    FPainter();

    void setQPaiter( QPainter *qpaiter ) { p_qpaiter = qpaiter ; }
    void setFMatrix( FMatrix *fmatrix ) { p_fmatrix = fmatrix ; }

    bool paint() ;

private:

    QPainter *p_qpaiter ;
    FMatrix *p_fmatrix ;
};

#endif // FPAINTER_H
