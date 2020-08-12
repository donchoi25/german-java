#ifndef ARRAYTYPE_H
#define ARRAYTYPE_H

#include "Type.h"
#include "Visitor.h"

class ArrayType : public Type{
public:
    Type* baseType;

    ArrayType(int arow, int acol, Type* base);

    bool equals(Type* obj);

    virtual Visitor* accept(Visitor* v);
};

#endif