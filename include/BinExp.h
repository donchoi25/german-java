#ifndef BIN_EXP_H
#define BIN_EXP_H

#include "Exp.h"
#include "Visitor.h"

class BinExp : public Exp{
public:
    Exp* left;
    Exp* right;

    BinExp(int arow, int acol, Exp* aleft, Exp* aright);

    virtual Visitor* accept(Visitor* v);
};

#endif