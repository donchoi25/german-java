#ifndef PRINTVISITOR_H
#define PRINTVISITOR_H

#include "ASTvisitor.h"
#include <iostream>

class PrintVisitor : public ASTvisitor{
public:
    PrintVisitor();

    virtual Visitor* visitProgram(Program* node);

    virtual Visitor* visitClassDecl(ClassDecl* node);
};

#endif