#include "../include/Switch.h"

Switch::Switch(int arow, int acol, Exp* aexp, StatementList* astmts) :
BreakTarget(arow, acol),
exp(aexp),
stmts(astmts)
{}

Visitor* Switch::accept(Visitor* v){
    return v->visitSwitch(this);
}
