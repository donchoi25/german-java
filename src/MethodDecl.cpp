#include "../include/MethodDecl.h"

MethodDecl::MethodDecl(const std::string aname, VarDeclList* aformals, StatementList* astmts) :
Decl(aname),
formals(aformals),
stmts(astmts),
superMethod(nullptr),
vtableOffset(0)
{}

Visitor* MethodDecl::accept(Visitor* v){
    return v->visitMethodDecl(this);
}
