#ifndef EQUALS_H
#define EQUALS_H

#include "BinExp.h"
#include "Visitor.h"

class Exp;
class Equals : public BinExp{
public:
    Equals(int arow, int acol, ::Exp* ae1, ::Exp* ae2);

    virtual Visitor* accept(Visitor* v);
};

#endif