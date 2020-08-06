#ifndef VOIDTYPE_H
#define VOIDTYPE_H

#include "Type.h"
#include "Visitor.h"

class VoidType : public Type{
public:
    VoidType();

    bool equals(Type* obj);

    Visitor* accept(Visitor* v);
};

#endif