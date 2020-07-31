#ifndef BREAKTARGET_H
#define BREAKTARGET_H

#include "Statement.h"
#include "Visitor.h"

class BreakTarget : Statement{
public:
    int stackHeight;

    BreakTarget();

    virtual Visitor* accept(Visitor* v);
};

#endif