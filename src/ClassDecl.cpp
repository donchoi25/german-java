#include "../include/ClassDecl.h"

ClassDecl::ClassDecl(std::string aname, std::string 
        asuperName, std::vector<ClassDecl*> aDeclList):Decl(aname),
                                                       superName(asuperName),
                                                       superlink(nullptr)
{}

void ClassDecl::accept(Visitor* v){
    v->visitClassDecl(this);
}