#include "Cast.h"

Cast::Cast(int arow, int acol, Type* atype, Exp* aexp) : 
Exp(arow, acol),
castType(atype),
exp(aexp)          
{}

Visitor* Cast::accept(Visitor* v){
    return v->visitCast(this);
}