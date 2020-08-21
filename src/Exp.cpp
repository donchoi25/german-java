#include "Exp.h"

Exp::Exp(int arow, int acol) : 
AstNode(arow, acol)
{}

Visitor* Exp::accept(Visitor* v){
    return v->visitExp(this);
}
