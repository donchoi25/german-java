#ifndef FALSE_H
#define FALSE_H

#include "Exp.h"
#include "Visitor.h"

class False : public Exp{
public:
    False(int arow, int acol);

    virtual Visitor* accept(Visitor* v);
};

#endif