#ifndef CAST_H
#define CAST_H

#include "Exp.h"
#include "Visitor.h"

class Type;
class Cast : public Exp{
public:
    Type* castType;
    Exp* exp;

    Cast(int arow, int acol, Type* atype, Exp* aexp);

    virtual Visitor* accept(Visitor* v);
};

#endif