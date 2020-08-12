#include "../include/InstVarDecl.h"

InstVarDecl::InstVarDecl(int arow, int acol, Type* atype, const std::string aname) :
VarDecl(arow, acol, atype, aname)
{}

Visitor* InstVarDecl::accept(Visitor* v){
    return v->visitInstVarDecl(this);
}