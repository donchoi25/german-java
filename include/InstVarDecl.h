#ifndef INSTVARDECL_H
#define INSTVARDECL_H

#include "VarDecl.h"
#include "Visitor.h"
#include <string>

class Type;
class InstVarDecl : public VarDecl{
public:
    InstVarDecl(int arow, int acol, Type* atype, const std::string aname);

    virtual Visitor* accept(Visitor* v);
};

#endif