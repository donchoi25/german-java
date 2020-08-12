#ifndef TRUE_H
#define TRUE_H

#include "Exp.h"
#include "Visitor.h"

class True : public Exp{
public:
    True(int arow, int acol);

    Visitor* accept(Visitor* v);
};

#endif