#include "../include/FormalDecl.h"

FormalDecl::FormalDecl(Type* atype, const std::string aname) : VarDecl(atype, aname)
{}

Visitor* FormalDecl::accept(Visitor* v){
    return v->visitFormalDecl(this);
}