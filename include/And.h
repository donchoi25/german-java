#ifndef AND_H
#define AND_H

#include "BinExp.h"
#include "Visitor.h"

class Exp;
class And : public BinExp{
public:
    And(::Exp* ae1, ::Exp* ae2);

    virtual Visitor* accept(Visitor* v);
};

#endif