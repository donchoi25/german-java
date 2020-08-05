#ifndef INTEGERLITERAL_H
#define INTEGERLITERAL_H

#include "Exp.h"
#include "Visitor.h"

class IntegerLiteral : public Exp{
public:
    int val;

    IntegerLiteral(int aval);

    virtual Visitor* accept(Visitor* v);
};

#endif