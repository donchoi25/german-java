#include "../include/If.h"

If::If(Exp* aexp, Statement* atrueStmt, Statement* afalseStmt) : 
Statement(),
exp(aexp),
trueStmt(atrueStmt),
falseStmt(afalseStmt)
{}

Visitor* If::accept(Visitor* v){
    return v->visitIf(this);
}