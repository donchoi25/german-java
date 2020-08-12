#ifndef NOT_H
#define NOT_H

#include "UnExp.h"
#include "Visitor.h"

class Exp;
class Not : public UnExp {
public:
    Not(int arow, int acol, ::Exp* ae);

    Visitor* accept(Visitor* v);
};

#endif