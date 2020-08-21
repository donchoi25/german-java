#include "UnExp.h"

UnExp::UnExp(int arow, int acol, Exp* aexp) : 
Exp(arow, acol),
exp(aexp)
{}

Visitor* UnExp::accept(Visitor* v){
    return v->visitUnExp(this);
}