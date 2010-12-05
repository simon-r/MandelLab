#ifndef FINDEX_H
#define FINDEX_H

#include <vector>

using namespace std ;

class FIndex {
public:
    FIndex( unsigned int i , unsigned int j ) { setIndex( i , j ) ; }

    void setIndex( unsigned int i , unsigned int j ) { setI( i ) ; setJ( j ) ; }

    void setI( unsigned int i ) { p_i = i ; }
    void setJ( unsigned int j ) { p_j = j ; }

    unsigned int I() { return p_i ; }
    unsigned int J() { return p_j ; }

private:

    unsigned int p_i ;
    unsigned int p_j ;
};

typedef vector< FIndex > FIndiciesVector ;

#endif // FINDEX_H
