#ifndef ARRAYTYPE_H
#define ARRAYTYPE_H

#include "Type.h"
#include "Visitor.h"

class ArrayType : Type{
public:
    Type* baseType;

    ArrayType(Type* base);

    bool equals(Type* obj);

    Visitor* accept(Visitor* v);
};

#endif