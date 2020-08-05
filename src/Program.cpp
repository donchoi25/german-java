#include "../include/Program.h"

Program::Program(ClassDeclList* acl) : 
AstNode()
{
    IdentifierType* mainType = new IdentifierType("Main");

    Exp* newExp = new NewObject(mainType);

    Call* callExp = new Call(newExp, "main", new ExpList());

    mainStatement = new CallStatement(callExp);

    classDecls = acl;
}

Visitor* Program::accept(Visitor* v){
    return v->visitProgram(this);
}