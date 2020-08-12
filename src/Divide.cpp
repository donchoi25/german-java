#include "../include/Divide.h"

Divide::Divide(int arow, int acol, ::Exp* ae1, ::Exp* ae2) : 
BinExp(arow, acol, ae1, ae2)
{}

Visitor* Divide::accept(Visitor* v){
    return v->visitDivide(this);
}