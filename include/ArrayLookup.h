#ifndef ARRAYLOOKUP_H
#define ARRAYLOOKUO_H

#include "Exp.h"
#include "Visitor.h"

class ArrayLookup : Exp{
public:
    Exp* arrExp;
    Exp* idxExp;

    ArrayLookup(Exp* aarrExp, Exp* aidxExp);

    virtual Visitor* accept(Visitor* v);
};

#endif