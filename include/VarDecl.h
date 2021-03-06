#ifndef VARDECL_H
#define VARDECL_H

#include "Decl.h"
#include "Visitor.h"
#include <string>

class Visitor;
class VarDecl :  public Decl {
public:
    Type* type;
    int offset;

    VarDecl(int arow, int acol, Type* atype, const std::string aname);

    virtual Visitor* accept(Visitor* v);
};

#endif