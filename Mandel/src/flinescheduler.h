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

#ifndef FLINESCHEDULER_H
#define FLINESCHEDULER_H

#include "fcomplex.h"
#include "findex.h"
#include "fmatrix.h"
#include "fdomain.h"
#include "fabstractscheduler.h"
#include <QSemaphore>

class FLineScheduler : public FAbstractScheduler
{
public:
    FLineScheduler();

    virtual void setDomain( const FDomain& domain ) ;
    virtual JobState getJob( FComplexVector& points , FIndiciesVector& indicies ) ;

    unsigned int getJobSize() const ;
    void setLineStep( unsigned int step ) { p_step = step ; }

    unsigned int setAutoLineStep() ;

    virtual void stop() ;
    virtual void reset() ;

    virtual void acquire() ;
    virtual void release() ;

private:

    FDomain p_domain ;
    QSemaphore p_scheduler_semaphore ;

    int p_job_size ;
    bool p_f_stop ;
    int p_step ;

    unsigned int p_current_line ;
};

#endif // FLINESCHEDULER_H
