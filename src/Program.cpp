#include "../include/Program.h"

Program::Program(int arow, int acol, ClassDeclList* acl) : 
AstNode(arow, acol)
{
    IdentifierType* mainType = new IdentifierType(-1, -1, "Main");

    Exp* newExp = new NewObject(-1, -1, mainType);

    Call* callExp = new Call(-1, -1, newExp, "main", new ExpList());

    mainStatement = new CallStatement(-1, -1, callExp);

    classDecls = acl;
}

Visitor* Program::accept(Visitor* v){
    return v->visitProgram(this);
}