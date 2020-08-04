#include "../include/InstanceOf.h"

InstanceOf::InstanceOf(Exp* aexp, Type* atype) : 
Exp(),
exp(aexp),
checkType(atype)
{}

Visitor* InstanceOf::accept(Visitor* v){
    return v->visitInstanceOf(this);
}