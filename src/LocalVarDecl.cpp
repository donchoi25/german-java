#include "../include/LocalVarDecl.h"

LocalVarDecl::LocalVarDecl(Type* at, const std::string as, Exp* initX) :
VarDecl(at, as),
initExp(initX)
{}

Visitor* LocalVarDecl::accept(Visitor* v){
    return v->visitLocalVarDecl(this);
}