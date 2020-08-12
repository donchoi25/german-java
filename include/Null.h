#ifndef NULL_H
#define NULL_H

#include "Exp.h"
#include "Visitor.h"

class Null : public Exp {
public:
    Null(int arow, int acol);

    Visitor* accept(Visitor* v);
};

#endif