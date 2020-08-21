#include "VarDeclList.h"

VarDeclList::VarDeclList() :
AstList<VarDecl*>()
{}

VarDeclList::VarDeclList(std::vector<VarDecl*> lst) :
AstList<VarDecl*>(lst)
{}

Visitor* VarDeclList::accept(Visitor* v){
    return v->visitVarDeclList(this);
}