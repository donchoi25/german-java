#include "../include/While.h"

While::While(int arow, int acol, Exp* aexp, Statement* abody) :
BreakTarget(arow, acol),
exp(aexp),
body(abody)
{}

Visitor* While::accept(Visitor* v){
    return v->visitWhile(this);
}