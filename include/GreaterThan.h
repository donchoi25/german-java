#ifndef GREATERTHAN_H
#define GREATERTHAN_H

#include "BinExp.h"
#include "Visitor.h"

class Exp;
class GreaterThan : BinExp{
public:
    GreaterThan(::Exp* ae1, ::Exp* ae2);

    virtual Visitor* accept(Visitor* v);
};

#endif