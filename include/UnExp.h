#ifndef UNEXP_H
#define UNEXP_H

#include "Exp.h"
#include "Visitor.h"

class Exp;
class UnExp : public Exp {
public:
    Exp* exp;

    UnExp(Exp* aexp);

    virtual Visitor* accept(Visitor* v);

};

#endif