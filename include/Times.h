#ifndef TIMES_H
#define TIMES_H

#include "BinExp.h"
#include "Visitor.h"

class Exp;
class Times : public BinExp{
public:
    Times(int arow, int acol, Exp* ae1, Exp* ae2);

    Visitor* accept(Visitor* v);
};

#endif