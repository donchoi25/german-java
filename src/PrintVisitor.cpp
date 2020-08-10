#include "../include/PrintVisitor.h"

PrintVisitor::PrintVisitor() : ASTvisitor()
{}

Visitor* PrintVisitor::visitProgram(Program* node){
    printf("Program\n");
    ASTvisitor::visitProgram(node);
    return nullptr;
}

Visitor* PrintVisitor::visitClassDecl(ClassDecl* node){
    printf("Class Declaration\n");
    ASTvisitor::visitClassDecl(node);
    return nullptr;
}