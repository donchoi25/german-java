#ifndef REMAINDER_H
#define REMAINDER _H

#include "BinExp.h"
#include "Visitor.h"

class Exp;
class Remainder : public BinExp{
public:
    Remainder(::Exp* ae1, ::Exp* ae2);

    virtual Visitor* accept(Visitor* v);
};

#endif