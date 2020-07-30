#ifndef ARRAYTYPE_H
#define ARRAYTYPE_H

#include "Type.h"
#include "Visitor.h"

class ArrayType : Type{
public:
    Type* baseType;

    ArrayType(Type* base);

    bool equals(void* obj);

    Visitor* accept(Visitor* v);
};

#endif