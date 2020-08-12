#ifndef ARRAYLOOKUP_H
#define ARRAYLOOKUO_H

#include "Exp.h"
#include "Visitor.h"

class ArrayLookup : public Exp{
public:
    Exp* arrExp;
    Exp* idxExp;

    ArrayLookup(int arow, int acol, Exp* aarrExp, Exp* aidxExp);

    virtual Visitor* accept(Visitor* v);
};

#endif