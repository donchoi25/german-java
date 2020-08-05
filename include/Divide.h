#ifndef DIVIDE_H
#define DIVIDE_H

#include "BinExp.h"
#include "Visitor.h"

class Exp;
class Divide : public BinExp{
public:
    Divide(::Exp* ae1, ::Exp* ae2);

    virtual Visitor* accept(Visitor* v);
};

#endif