#include "../include/If.h"

If::If(int arow, int acol, Exp* aexp, Statement* atrueStmt, Statement* afalseStmt) : 
Statement(arow, acol),
exp(aexp),
trueStmt(atrueStmt),
falseStmt(afalseStmt)
{}

Visitor* If::accept(Visitor* v){
    return v->visitIf(this);
}