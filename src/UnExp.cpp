#include "../include/UnExp.h"

UnExp::UnExp(Exp* aexp) : Exp(),
                          exp(aexp)
{}

Visitor* UnExp::accept(Visitor* v){
    return v->visitUnExp(this);
}