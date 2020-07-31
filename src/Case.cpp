#include "../include/Case.h"

Case::Case(Exp* aexp) : Label(),
                        exp(aexp)
{}

Exp* Case::labelValue() {
    return exp;
}

Visitor* Case::accept(Visitor* v){
    return v->visitCase(this);
}