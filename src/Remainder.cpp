#include "../include/Remainder.h"

Remainder::Remainder(int arow, int acol, ::Exp* ae1, ::Exp* ae2) :
BinExp(arow, acol, ae1, ae2)
{}

Visitor* Remainder::accept(Visitor* v){
    return v->visitRemainder(this);
}