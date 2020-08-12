#ifndef SWITCH_H
#define SWITCH_H

#include "BreakTarget.h"
#include "Visitor.h"

class Exp;
class StatementList;
class Switch : public BreakTarget{
public:
    Exp* exp;
    StatementList* stmts;

    Switch(int arow, int acol, Exp* aexp, StatementList* astmts);

    virtual Visitor* accept(Visitor* v);
};

#endif