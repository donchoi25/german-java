#include "../include/GreaterThan.h"

GreaterThan::GreaterThan(int arow, int acol, ::Exp* ae1, ::Exp* ae2) : 
BinExp(arow, acol, ae1, ae2)
{}

Visitor* GreaterThan::accept(Visitor* v){
    return v->visitGreaterThan(this);
}