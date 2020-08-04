#include "../include/InstVarDecl.h"

InstVarDecl::InstVarDecl(Type* atype, std::string aname) :
VarDecl(atype, aname)
{}

Visitor* InstVarDecl::accept(Visitor* v){
    return v->visitInstVarDecl(this);
}