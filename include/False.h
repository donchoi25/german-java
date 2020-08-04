#ifndef FALSE_H
#define FALSE_H

#include "Exp.h"
#include "Visitor.h"

class False : Exp{
public:
    False();

    virtual Visitor* accept(Visitor* v);
};

#endif