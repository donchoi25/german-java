#ifndef BREAK_H
#define BREAK_H

#include "Statement.h"
#include "Visitor.h"

class BreakTarget;
class Break : Statement{
public:
    BreakTarget* breakLink;

    Break();

    virtual Visitor* accept(Visitor* v);
};

#endif