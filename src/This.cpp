#include "This.h"

This::This(int arow, int acol) :
Exp(arow, acol)
{}

Visitor* This::accept(Visitor* v){
    return v->visitThis(this);
}