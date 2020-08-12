#ifndef INTEGERTYPE_H
#define INTEGERTYPE_H

#include "Type.h"
#include "Visitor.h"

class IntegerType : public Type{
public:
    IntegerType(int arow, int acol);

    bool equals(Type* obj);

    virtual Visitor* accept(Visitor* v);
};

#endif