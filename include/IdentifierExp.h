#ifndef IDENTIFIEREXP_H
#define IDENTIFIEREXP_H

#include <string>
#include "Exp.h"
#include "Visitor.h"

class VarDecl;
class IdentifierExp : public Exp{
public:
    std::string name;
    VarDecl* link;

    IdentifierExp(const std::string aname);

    virtual Visitor* accept(Visitor* v);
};

#endif