#include "../include/NewObject.h"

NewObject::NewObject(IdentifierType* atype) :
Exp(),
objType(atype)
{}

Visitor* NewObject::accept(Visitor* v){
    return v->visitNewObject(this);
}