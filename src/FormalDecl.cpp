#include "FormalDecl.h"

FormalDecl::FormalDecl(int arow, int acol, Type* atype, const std::string aname) : 
VarDecl(arow, acol, atype, aname)
{}

Visitor* FormalDecl::accept(Visitor* v){
    return v->visitFormalDecl(this);
}