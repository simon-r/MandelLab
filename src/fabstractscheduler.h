#ifndef FABSTRACTSCHEDULER_H
#define FABSTRACTSCHEDULER_H

class FAbstractScheduler
{
public:
    FAbstractScheduler();



    virtual void notifyProgress( double pr ) = 0 ;
    virtual void notifyEnd() = 0 ;

private:

};

#endif // FABSTRACTSCHEDULER_H
