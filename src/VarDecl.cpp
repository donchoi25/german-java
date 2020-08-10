#include "../include/VarDecl.h"

VarDecl::VarDecl(Type* atype, const std::string aname) : Decl(aname),
                                                   type(atype),
                                                   offset(0)
{}

Visitor* VarDecl::accept(Visitor* v){
    return v->visitVarDecl(this);
}