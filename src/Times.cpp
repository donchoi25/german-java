#include "Times.h"

Times::Times(int arow, int acol, Exp* ae1, Exp* ae2) :
BinExp(arow, acol, ae1, ae2)
{}

Visitor* Times::accept(Visitor* v){
    return v->visitTimes(this);
}