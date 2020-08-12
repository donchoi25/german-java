#ifndef BREAKTARGET_H
#define BREAKTARGET_H

#include "Statement.h"
#include "Visitor.h"

class BreakTarget : public Statement{
public:
    int stackHeight;

    BreakTarget(int arow, int acol);

    virtual Visitor* accept(Visitor* v);
};

#endif