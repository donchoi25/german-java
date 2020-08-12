#include "../include/Decl.h"

Decl::Decl(int arow, int acol, const std::string aname) :
AstNode(arow, acol), 
name(aname)
{}

Visitor* Decl::accept(Visitor* v){
    return v->visitDecl(this);
}