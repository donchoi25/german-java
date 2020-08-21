#include "And.h"

And::And(int arow, int acol, ::Exp* ae1, ::Exp* ae2): BinExp(arow, acol,ae1, ae2)                              
{}

Visitor* And::accept(Visitor* v){
    return v->visitAnd(this);
}