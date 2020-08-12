#ifndef NULLTYPE_H
#define NULLTYPE_H

#include "Type.h"
#include "Visitor.h"

class NullType : public Type {
public:
    NullType(int arow, int acol);

    bool equals(Type* obj);

    Visitor* accept(Visitor* v);
};

#endif