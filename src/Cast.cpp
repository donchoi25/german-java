#include "../include/Cast.h"

Cast::Cast(Type* atype, Exp* aexp) : Exp(),
                                     castType(atype),
                                     exp(aexp)          
{}

Visitor* Cast::accept(Visitor* v){
    return v->visitCast(this);
}