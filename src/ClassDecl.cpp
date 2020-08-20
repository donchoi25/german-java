#include "../include/ClassDecl.h"
#include "../include/ClassDeclList.h"

ClassDecl::ClassDecl(int arow, int acol, const std::string aname, const std::string asuperName, DeclList* aDeclList):
Decl(arow, acol, aname),
decls(aDeclList),
superName(asuperName),
superlink(nullptr),
subclasses(new ClassDeclList())
{}

Visitor* ClassDecl::accept(Visitor* v){
    return v->visitClassDecl(this);
}