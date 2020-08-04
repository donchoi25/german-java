#ifndef METHODDECL_H
#define METHODDECL_H

#include "Decl.h"
#include <string>

class VarDeclList;
class StatementList;
class ClassDecl;
class MethodDecl : Decl{
public:
    VarDeclList* formals;
    StatementList* stmts;
    MethodDecl* superMethod;
    int thisPtrOffset;
    int vtableOffset;
    ClassDecl* classDecl;

    MethodDecl(std::string aname, VarDeclList* aformals, StatementList* astmts);

    virtual Visitor* accept(Visitor* v) = 0;
};

#endif