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

#include <QtGui/QApplication>
#include "mandelmainw.h"
#include "flinescheduler.h"
#include "mandelbrotsetevaluator.h"
#include "fmatrix.h"

#include "fdomain.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    FDomain d ;

    FComplex c = d.getPoint( 299 , 299 ) ;
    qDebug() << c.real() ;
    qDebug() << c.imag() ;

    c = d.getPoint( 0 , 0 ) ;
    qDebug() << c.real() ;
    qDebug() << c.imag() ;

    FLineScheduler fl ;
    fl.setDomain(d);
    fl.setLineStep(300);

    unsigned int sze = fl.getJobSize() ;

    FComplexVector ve ;
    ve.resize(sze);

    FIndiciesVector vi ;
    vi.resize(sze);

    fl.reset();
//    fl.setLineStep(10);
    fl.getJob( ve , vi ) ;

    MandelbrotSetEvaluator eval ;

    eval.setMaxIterations( 1000 );

    FMatrix ma ;
    ma.setSize( 300 , 300 );

    eval.evalPoints( ve , vi  , &ma ) ;



    return 0 ;

    MandelMainW w;
    w.show();

    return a.exec();
}
