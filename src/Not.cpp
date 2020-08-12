#include "../include/Not.h"

Not::Not(int arow, int acol, ::Exp* ae) :
UnExp(arow, acol, ae)
{}

Visitor* Not::accept(Visitor* v){
    return v->visitNot(this);
}