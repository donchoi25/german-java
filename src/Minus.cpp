#include "../include/Minus.h"

Minus::Minus(int arow, int acol, ::Exp* ae1, ::Exp* ae2) : 
BinExp(arow, acol, ae1, ae2)
{}

Visitor* Minus::accept(Visitor* v){
    return v->visitMinus(this);
}