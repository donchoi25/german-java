#include "../include/Sem2Visitor.h"

Sem2Visitor::Sem2Visitor(std::map<std::string, ClassDecl*> globalSymTab){

}

Visitor* Sem2Visitor::visitProgram(Program* n){
    return nullptr;
}

Visitor* Sem2Visitor::visitClassDecl(ClassDecl* n){
    return nullptr;
}