#include "../include/And.h"

And::And(::Exp* ae1, ::Exp* ae2): BinExp(ae1, ae2)                              
{}

Visitor* And::accept(Visitor* v){
    return v->visitAnd(this);
}