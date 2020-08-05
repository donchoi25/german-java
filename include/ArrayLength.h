#ifndef ARRAYLENGTH_H
#define ARRAYLENGTH_H

#include "UnExp.h"
#include "Visitor.h"

class Exp;
class ArrayLength : public UnExp{
public:
    ArrayLength(::Exp* arrExp);

    virtual Visitor* accept(Visitor* v);
};

#endif