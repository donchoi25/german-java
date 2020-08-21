#include "MethodDeclNonVoid.h"

MethodDeclNonVoid::MethodDeclNonVoid(int arow, int acol, Type* at, const std::string as, VarDeclList* afl, StatementList* asl, Exp* ae) :
MethodDecl(arow, acol, as, afl, asl),
rtnType(at),
rtnExp(ae)
{}

Visitor* MethodDeclNonVoid::accept(Visitor* v){
    return v->visitMethodDeclNonVoid(this);
}