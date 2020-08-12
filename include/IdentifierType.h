#ifndef IDENTIFIERTYPE_H
#define IDENTIFIERTYPE_H

#include "Type.h"
#include "Visitor.h"
#include <string>

class ClassDecl;
class IdentifierType : public Type{
public:
    std::string name;
    ClassDecl* link;

    IdentifierType(int arow, int acol, const std::string aname);

    bool equals(Type* obj);

    virtual Visitor* accept(Visitor* v);
};

#endif