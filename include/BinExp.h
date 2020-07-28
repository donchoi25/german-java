#ifndef BIN_EXP_H
#define BIN_EXP_H

#include "Exp.h"

class BinExp : Exp{
public:
    Exp* left;
    Exp* right;

    BinExp(Exp* aleft, Exp* aright);

    virtual Visitor* accept(Visitor* v) = 0;
};

#endif