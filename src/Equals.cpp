#include "../include/Equals.h"

Equals::Equals(int arow, int acol, ::Exp* ae1, ::Exp* ae2) : 
BinExp(arow, acol, ae1, ae2)
{}

Visitor* Equals::accept(Visitor* v){
    return v->visitEquals(this);
}