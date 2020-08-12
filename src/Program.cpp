#include "../include/Program.h"

Program::Program(int arow, int acol, ClassDeclList* acl) : 
AstNode(arow, acol)
{
    IdentifierType* mainType = new IdentifierType(arow, acol, "Main");

    Exp* newExp = new NewObject(arow, acol, mainType);

    Call* callExp = new Call(arow, acol, newExp, "main", new ExpList());

    mainStatement = new CallStatement(arow, acol, callExp);

    classDecls = acl;
}

Visitor* Program::accept(Visitor* v){
    return v->visitProgram(this);
}