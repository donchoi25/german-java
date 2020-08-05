#include "../include/Or.h"

Or::Or(::Exp* ae1, ::Exp* ae2) :
BinExp(ae1, ae2)
{}

Visitor* Or::accept(Visitor* v){
    return v->visitOr(this);
}