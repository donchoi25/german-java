#ifndef CASE_H
#define CASE_H

#include "Label.h"
#include "Visitor.h"

class Exp;
class Case : public Label{
public:
    Exp* exp;

    Case(int arow, int acol, Exp* aexp);

    virtual Exp* labelValue();

    virtual Visitor* accept(Visitor* v);
};

#endif