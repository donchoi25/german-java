#include "../include/InstVarAccess.h"

InstVarAccess::InstVarAccess(Exp* aexp, std::string avarName) :
Exp(),
exp(aexp),
varName(avarName)
{}

Visitor* InstVarAccess::accept(Visitor* v){
    return v->visitInstVarAccess(this);
}