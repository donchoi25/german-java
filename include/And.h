#ifndef AND_H
#define AND_H

#include "BinExp.h"
#include "Visitor.h"

class Exp;
class And : BinExp{
public:
    And(::Exp* ae1, ::Exp* ae2);

    virtual void accept(Visitor* v);
};

#endif