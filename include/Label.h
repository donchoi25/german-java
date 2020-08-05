#ifndef LABEL_H
#define LABEL_H

#include "Statement.h"

class Switch;
class Exp;
class Label : public Statement{
public:
    Switch* enclosingSwitch;

    Label();

    virtual Exp* labelValue() = 0;

    virtual Visitor* accept(Visitor* v) = 0;
};

#endif