#include "../include/Switch.h"

Switch::Switch(Exp* aexp, StatementList* astmts) :
BreakTarget(),
exp(aexp),
stmts(astmts)
{}

Visitor* Switch::accept(Visitor* v){
    return v->visitSwitch(this);
}
