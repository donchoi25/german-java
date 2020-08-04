#ifndef EQUALS_H
#define EQUALS_H

#include "BinExp.h"
#include "Visitor.h"

class Exp;
class Equals : BinExp{
public:
    Equals(::Exp* ae1, ::Exp* ae2);

    virtual Visitor* accept(Visitor* v);
};

#endif