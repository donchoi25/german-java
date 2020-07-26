#include "../include/And.h"

And::And(::Exp* ae1, ::Exp* ae2): BinExp(ae1, ae2)                              
{}

void And::accept(Visitor* v){
    v->visitAnd(this);
}