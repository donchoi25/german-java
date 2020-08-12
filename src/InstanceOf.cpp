#include "../include/InstanceOf.h"

InstanceOf::InstanceOf(int arow, int acol, Exp* aexp, Type* atype) : 
Exp(arow, acol),
exp(aexp),
checkType(atype)
{}

Visitor* InstanceOf::accept(Visitor* v){
    return v->visitInstanceOf(this);
}