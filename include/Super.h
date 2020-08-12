#ifndef SUPER_H
#define SUPER_H

#include "Exp.h"
#include "Visitor.h"

class Super : public Exp{
public:
    Super(int arow, int acol);

    Visitor* accept(Visitor* v);
};

#endif