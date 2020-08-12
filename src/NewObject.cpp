#include "../include/NewObject.h"

NewObject::NewObject(int arow, int acol, IdentifierType* atype) :
Exp(arow, acol),
objType(atype)
{}

Visitor* NewObject::accept(Visitor* v){
    return v->visitNewObject(this);
}