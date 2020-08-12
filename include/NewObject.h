#ifndef NEWOBJECT_H
#define NEWOBJECT_H

#include "Exp.h"
#include "Visitor.h"

class IdentifierType;
class NewObject : public Exp {
public:
    IdentifierType* objType;

    NewObject(int arow, int acol, IdentifierType* atype);

    virtual Visitor* accept(Visitor* v);
};

#endif