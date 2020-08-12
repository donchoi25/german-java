#ifndef IF_H
#define IF_H

#include "Statement.h"
#include "Visitor.h"

class Exp;
class If : public Statement{
public:
    Exp* exp;
    Statement* trueStmt;
    Statement* falseStmt;

    If(int arow, int acol, Exp* aexp, Statement* atrueStmt, Statement* afalseStmt);

    virtual Visitor* accept(Visitor* v);
};

#endif