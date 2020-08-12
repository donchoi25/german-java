#include "../include/Case.h"

Case::Case(int arow, int acol, Exp* aexp) : 
Label(arow, acol),
exp(aexp)
{}

Exp* Case::labelValue() {
    return exp;
}

Visitor* Case::accept(Visitor* v){
    return v->visitCase(this);
}