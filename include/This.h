#ifndef THIS_H
#define THIS_H

#include "Exp.h"
#include "Visitor.h"

class This : public Exp{
public:
    This(int arow, int acol);

    Visitor* accept(Visitor* v);
};

#endif