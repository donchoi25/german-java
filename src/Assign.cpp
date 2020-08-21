#include "Assign.h"

Assign::Assign(int arow, int acol, Exp* alhs, Exp* arhs) : 
Statement(arow, acol),
lhs(alhs),
rhs(arhs)
{}

Visitor* Assign::accept(Visitor* v){
    return v->visitAssign(this);
}