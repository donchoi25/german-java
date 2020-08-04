#include "../include/DeclList.h"

DeclList::DeclList(std::vector<Decl*> lst) : AstList<Decl*>(lst)
{}

Visitor* DeclList::accept(Visitor* v){
    return v->visitDeclList(this);
}