#include "../include/ClassDeclList.h"

ClassDeclList::ClassDeclList() : AstList<ClassDecl*>()
{}

ClassDeclList::ClassDeclList(std::vector<ClassDecl*> lst) : AstList<ClassDecl*>(lst)
{}

Visitor* ClassDeclList::accept(Visitor* v){
    return v->visitClassDeclList(this);
}