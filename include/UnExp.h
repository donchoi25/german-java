#ifndef UNEXP_H
#define UNEXP_H

#include "Exp.h"
#include "Visitor.h"

class Exp;
class UnExp : Exp {
public:
    Exp* exp;

    UnExp(Exp* aexp);

    virtual Visitor* accept(Visitor* v) = 0;

};

#endif