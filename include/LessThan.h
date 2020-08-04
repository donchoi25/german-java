#ifndef LESSTHAN_H
#define LESSTHAN_H

#include "BinExp.h"
#include "Visitor.h"

class Exp;
class LessThan : BinExp{
public:
    LessThan(::Exp* ae1, ::Exp* ae2);

    Visitor* accept(Visitor* v);
};

#endif