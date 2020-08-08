#include "../include/ClassDecl.h"

ClassDecl::ClassDecl(std::string aname, std::string 
        asuperName, DeclList* aDeclList):Decl(aname),
                                                       superName(asuperName),
                                                       superlink(nullptr)
{}

Visitor* ClassDecl::accept(Visitor* v){
    return v->visitClassDecl(this);
}