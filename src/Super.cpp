#include "../include/Super.h"

Super::Super(int arow, int acol) :
Exp(arow, acol)
{}

Visitor* Super::accept(Visitor* v){
    return v->visitSuper(this);
}