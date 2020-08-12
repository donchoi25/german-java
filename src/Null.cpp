#include "../include/Null.h"

Null::Null(int arow, int acol) :
Exp(arow, acol)
{}

Visitor* Null::accept(Visitor* v){
    return v->visitNull(this);
}