#include "../include/MethodDecl.h"

MethodDecl::MethodDecl(std::string aname, VarDeclList* aformals, StatementList* astmts) :
Decl(aname),
formals(aformals),
stmts(astmts),
superMethod(nullptr),
vtableOffset(0)
{}

