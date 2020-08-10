#include "../include/Decl.h"

Decl::Decl(const std::string aname):AstNode(), name(aname){
    
}

Visitor* Decl::accept(Visitor* v){
    return v->visitDecl(this);
}