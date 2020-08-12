#ifndef OR_H
#define OR_H

#include "BinExp.h"
#include "Visitor.h"

class Exp;
class Or : public BinExp {
public:
    Or(int arow, int acol, ::Exp* ae1, ::Exp* ae2);

    virtual Visitor* accept(Visitor* v);
};

#endif