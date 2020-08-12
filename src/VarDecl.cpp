#include "../include/VarDecl.h"

VarDecl::VarDecl(int arow, int acol, Type* atype, const std::string aname) : 
Decl(arow, acol, aname),
type(atype),
offset(0)
{}

Visitor* VarDecl::accept(Visitor* v){
    return v->visitVarDecl(this);
}