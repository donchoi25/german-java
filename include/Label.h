#ifndef LABEL_H
#define LABEL_H

#include "Statement.h"
#include "Visitor.h"

class Switch;
class Exp;
class Label : public Statement{
public:
    Switch* enclosingSwitch;

    Label(int arow, int acol);

    virtual Exp* labelValue();

    virtual Visitor* accept(Visitor* v);
};

#endif