#ifndef WHILE_H
#define WHILE_H

#include "BreakTarget.h"
#include "Visitor.h"

class Exp;
class Statement;
class While : public BreakTarget{
public:
    Exp* exp;
    Statement* body;

    While(int arow, int acol, Exp* aexp, Statement* abody);

    Visitor* accept(Visitor* v);
};

#endif