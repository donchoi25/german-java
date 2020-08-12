#ifndef INSTANCEOF_H
#define INSTANCEOF_H

#include "Exp.h"
#include "Visitor.h"

class Type;
class InstanceOf : public Exp{
public:
    Exp* exp;
    Type* checkType;

    InstanceOf(int arow, int acol, Exp* aexp, Type* atype);

    virtual Visitor* accept(Visitor* v);
};

#endif