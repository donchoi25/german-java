#ifndef NEWOBJECT_H
#define NEWOBJECT_H

#include "Exp.h"
#include "Visitor.h"

class IdentifierType;
class NewObject : public Exp {
public:
    IdentifierType* objType;

    NewObject(IdentifierType* atype);

    virtual Visitor* accept(Visitor* v);
};

#endif