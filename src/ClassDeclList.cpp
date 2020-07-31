#include "../include/ClassDeclList.h"

ClassDeclList::ClassDeclList(std::vector<ClassDecl> lst) : AstList<ClassDecl>(lst)
{}

Visitor* ClassDeclList::accept(Visitor* v){

}