#ifndef MINUS_H
#define MINUS_H

#include "BinExp.h"
#include "Visitor.h"

class Exp;
class Minus : public BinExp {
public:
    Minus(int arow, int acol, ::Exp* ae1, ::Exp* ae2);

    virtual Visitor* accept(Visitor* v);
};

#endif