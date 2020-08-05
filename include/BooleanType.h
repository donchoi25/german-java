#ifndef BOOLEANTYPE_H
#define BOOLEANTYPE_H

#include "Type.h"
#include "Visitor.h"

class BooleanType : public Type{
public:
    BooleanType();
    
    bool equals(Type* obj);

    virtual Visitor* accept(Visitor* v);
};

#endif