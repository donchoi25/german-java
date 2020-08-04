#include "../include/MethodDeclNonVoid.h"

MethodDeclNonVoid::MethodDeclNonVoid(Type* at, std::string as, VarDeclList* afl, StatementList* asl, Exp* ae) :
MethodDecl(as, afl, asl),
rtnType(at),
rtnExp(ae)
{}

Visitor* MethodDeclNonVoid::accept(Visitor* v){
    return v->visitMethodDeclNonVoid(this);
}