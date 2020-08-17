#include "../include/Sem1Visitor.h"

Sem1Visitor::Sem1Visitor(){

}

Type* Sem1Visitor::convertToType(std::string s){
    return nullptr;
}

void Sem1Visitor::initInstanceVars(){

}

std::map<std::string,ClassDecl*> Sem1Visitor::getGlobalSymTab(){
    return std::map<std::string, ClassDecl*>();
}

void Sem1Visitor::initGlobalSymTab(){

}

ClassDecl* Sem1Visitor::createClass(std::string name, std::string superName){
    return nullptr;
}

void Sem1Visitor::addDummyMethod(ClassDecl* dec, std::string methName, std::string rtnTypeName, std::string parmTypeNames[]){

}

Visitor* Sem1Visitor::visitClassDecl(ClassDecl* n){
    return nullptr;
}

Visitor* Sem1Visitor::visitInstVarDecl(InstVarDecl* n){
    return nullptr;
}

Visitor* Sem1Visitor::visitMethodDecl(MethodDecl* n){
    return nullptr;
}