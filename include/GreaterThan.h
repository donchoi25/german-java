#ifndef GREATERTHAN_H
#define GREATERTHAN_H

#include "BinExp.h"
#include "Visitor.h"

class Exp;
class GreaterThan : public BinExp{
public:
    GreaterThan(int arow, int acol, ::Exp* ae1, ::Exp* ae2);

    virtual Visitor* accept(Visitor* v);
};

#endif