#include "../include/MethodDeclVoid.h"

MethodDeclVoid::MethodDeclVoid(std::string as, VarDeclList* afl, StatementList* asl) : 
MethodDecl(as, afl, asl)
{}

Visitor* MethodDeclVoid::accept(Visitor* v){
    return v->visitMethodDeclVoid(this);
}