#ifndef FORMALDECL_H
#define FORMALDECL_H

#include "VarDecl.h"
#include "Visitor.h"
#include <string>

class Type;
class FormalDecl : public VarDecl{
public:
    FormalDecl(int arow, int acol, Type* atype, const std::string aname);

    virtual Visitor* accept(Visitor* v);
};

#endif