#ifndef INSTVARDECL_H
#define INSTVARDECL_H

#include "VarDecl.h"
#include "Visitor.h"
#include <string>

class Type;
class InstVarDecl : VarDecl{
public:
    InstVarDecl(Type* atype, std::string aname);

    virtual Visitor* accept(Visitor* v);
};

#endif