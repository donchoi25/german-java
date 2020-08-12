#ifndef NEWARRAY_H
#define NEWARRAY_H

#include "Exp.h"
#include "Visitor.h"

class Type;
class NewArray : public Exp {
public:
    Exp* sizeExp;
    Type* objType;

    NewArray(int arow, int acol, Type* atype, Exp* asizeExp);

    virtual Visitor* accept(Visitor* v);
};

#endif