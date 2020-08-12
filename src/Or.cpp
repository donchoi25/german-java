#include "../include/Or.h"

Or::Or(int arow, int acol, ::Exp* ae1, ::Exp* ae2) :
BinExp(arow, acol, ae1, ae2)
{}

Visitor* Or::accept(Visitor* v){
    return v->visitOr(this);
}