#ifndef PLUS_H
#define PLUS_H

#include "BinExp.h"
#include "Visitor.h"

class Exp;
class Plus : public BinExp {
public:
    Plus(::Exp* ae1, ::Exp* ae2);

    Visitor* accept(Visitor* v);
};

#endif