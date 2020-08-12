#ifndef BREAK_H
#define BREAK_H

#include "Statement.h"
#include "Visitor.h"

class BreakTarget;
class Break : public Statement{
public:
    BreakTarget* breakLink;

    Break(int arow, int acol);

    virtual Visitor* accept(Visitor* v);
};

#endif