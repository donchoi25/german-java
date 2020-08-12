#include "../include/LocalVarDecl.h"

LocalVarDecl::LocalVarDecl(int arow, int acol, Type* at, const std::string as, Exp* initX) :
VarDecl(arow, acol, at, as),
initExp(initX)
{}

Visitor* LocalVarDecl::accept(Visitor* v){
    return v->visitLocalVarDecl(this);
}