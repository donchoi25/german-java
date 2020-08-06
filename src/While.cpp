#include "../include/While.h"

While::While(Exp* aexp, Statement* abody) :
BreakTarget(),
exp(aexp),
body(abody)
{}

Visitor* While::accept(Visitor* v){
    
}