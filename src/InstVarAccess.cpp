#include "../include/InstVarAccess.h"

InstVarAccess::InstVarAccess(int arow, int acol, Exp* aexp, const std::string avarName) :
Exp(arow, acol),
exp(aexp),
varName(avarName)
{}

Visitor* InstVarAccess::accept(Visitor* v){
    return v->visitInstVarAccess(this);
}