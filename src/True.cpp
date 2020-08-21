#include "True.h"

True::True(int arow, int acol) :
Exp(arow, acol)
{}

Visitor* True::accept(Visitor* v){
    return v->visitTrue(this);
}