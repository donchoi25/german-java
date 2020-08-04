#ifndef IF_H
#define IF_H

#include "Statement.h"
#include "Visitor.h"

class Exp;
class If : Statement{
public:
    Exp* exp;
    Statement* trueStmt;
    Statement* falseStmt;

    If(Exp* aexp, Statement* atrueStmt, Statement* afalseStmt);

    virtual Visitor* accept(Visitor* v);
};

#endif