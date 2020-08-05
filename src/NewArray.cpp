#include "../include/NewArray.h"

NewArray::NewArray(Type* atype, Exp* asizeExp) :
Exp(),
objType(atype),
sizeExp(asizeExp)
{}

Visitor* NewArray::accept(Visitor* v){
    return v->visitNewArray(this);
}