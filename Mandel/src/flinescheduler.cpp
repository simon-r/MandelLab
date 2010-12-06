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

#include "flinescheduler.h"

FLineScheduler::FLineScheduler() :
        p_scheduler_semaphore(1),
        p_f_stop(false),
        p_current_line(0)
{
}

FLineScheduler::JobState FLineScheduler::getJob( FComplexVector& points , FIndiciesVector& indicies )
{
    this->acquire() ;
    bool f ;

    if ( p_f_stop )
    {
        this->release() ;
        return FLineScheduler::JobStopped ;
    }

    unsigned int w = p_domain.getSize().getWidth() ;
    unsigned int delta_s = 0 ;
    unsigned int h = p_domain.getSize().getHeight() ;

    if ( p_current_line+p_step >= h )
        delta_s = p_current_line+p_step - h ;

    f = p_domain.getRange( points , indicies , p_current_line , 0 , p_step - delta_s , w ) ;

    if ( f == false )
    {
        this->release() ;
        return FLineScheduler::JobError ;
    }

    p_current_line+=p_step ;

    this->release();
    return FLineScheduler::JobOk ;
}

unsigned int FLineScheduler::getJobSize() const
{
    return p_step * p_domain.getSize().getWidth() ;
}

unsigned int FLineScheduler::setAutoLineStep()
{
    p_step = 10 ;
    return p_step ;
}

void FLineScheduler::setDomain( const FDomain& domain )
{
    p_domain = domain ;
    this->reset() ;
}

void FLineScheduler::reset()
{
    p_f_stop = false ;
    p_current_line = 0 ;
    p_step = 10 ;

}

void FLineScheduler::acquire()
{
    p_scheduler_semaphore.acquire(1);
}

void FLineScheduler::release()
{
    p_scheduler_semaphore.release(1);
}

void FLineScheduler::stop()
{
    p_f_stop = true ;
}
