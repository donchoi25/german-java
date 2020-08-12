#ifndef VOIDTYPE_H
#define VOIDTYPE_H

#include "Type.h"
#include "Visitor.h"

class VoidType : public Type{
public:
    VoidType(int arow, int acol);

    bool equals(Type* obj);

    Visitor* accept(Visitor* v);
};

#endif