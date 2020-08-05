#ifndef NULLTYPE_H
#define NULLTYPE_H

#include "Type.h"
#include "Visitor.h"

class NullType : public Type {
public:
    NullType();

    bool equals(Type* obj);

    Visitor* accept(Visitor* v);
};

#endif