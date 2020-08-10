#include "../include/ClassDecl.h"

ClassDecl::ClassDecl(const std::string aname, const std::string 
        asuperName, DeclList* aDeclList):
Decl(aname),
decls(aDeclList),
superName(asuperName),
superlink(nullptr)
{}

Visitor* ClassDecl::accept(Visitor* v){
    return v->visitClassDecl(this);
}