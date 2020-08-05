#include "../include/Minus.h"

Minus::Minus(::Exp* ae1, ::Exp* ae2) : 
BinExp(ae1, ae2)
{}

Visitor* Minus::accept(Visitor* v){
    return v->visitMinus(this);
}