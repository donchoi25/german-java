#include "MethodDeclVoid.h"

MethodDeclVoid::MethodDeclVoid(int arow, int acol, const std::string as, VarDeclList* afl, StatementList* asl) : 
MethodDecl(arow, acol, as, afl, asl)
{}

Visitor* MethodDeclVoid::accept(Visitor* v){
    return v->visitMethodDeclVoid(this);
}