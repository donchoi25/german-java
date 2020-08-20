#include "../include/Sem3Visitor.h"

Sem3Visitor::Sem3Visitor(std::map<std::string, ClassDecl*> globalSymTb, ErrorMsg* aerrorMsg)
{

}

void Sem3Visitor::initInstanceVars(std::map<std::string, ClassDecl*> globalTab){

}

Visitor* Sem3Visitor::visitClassDecl(ClassDecl* n){
    return nullptr;
}

Visitor* Sem3Visitor::visitMethodDecl(MethodDecl* n){
    return nullptr;
}

Visitor* Sem3Visitor::visitFormalDecl(FormalDecl* n){
    return nullptr;
}

Visitor* Sem3Visitor::visitLocalVarDecl(LocalVarDecl* n){
    return nullptr;
}

Visitor* Sem3Visitor::visitInstVarDecl(InstVarDecl* n){
    return nullptr;
}

Visitor* Sem3Visitor::visitBlock(Block* n){
    return nullptr;
}

Visitor* Sem3Visitor::visitIdentifierExp(IdentifierExp* n){
    return nullptr;
}

Visitor* Sem3Visitor::visitIdentifierType(IdentifierType* n){
    return nullptr;
}

Visitor* Sem3Visitor::visitWhile(While* n){
    return nullptr;
}

Visitor* Sem3Visitor::visitBreak(Break* n){
    return nullptr;
}