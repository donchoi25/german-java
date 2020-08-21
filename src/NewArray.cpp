#include "NewArray.h"

NewArray::NewArray(int arow, int acol, Type* atype, Exp* asizeExp) :
Exp(arow, acol),
objType(atype),
sizeExp(asizeExp)
{}

Visitor* NewArray::accept(Visitor* v){
    return v->visitNewArray(this);
}