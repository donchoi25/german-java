#include "../include/Sem1Visitor.h"
#include "../include/VoidType.h"
#include "../include/BooleanType.h"
#include "../include/ClassDecl.h"
#include "../include/DeclList.h"
#include "../include/FormalDecl.h"
#include "../include/IntegerType.h"
#include "../include/IdentifierType.h"
#include "../include/MethodDeclVoid.h"
#include "../include/MethodDeclNonVoid.h"
#include "../include/Null.h"
#include "../include/StatementList.h"
#include "../include/VarDeclList.h"

#include <array>

Sem1Visitor::Sem1Visitor(){
    initInstanceVars();
    initGlobalSymTab();
}

Type* Sem1Visitor::convertToType(std::string s){
    if(s == "void") {
        return new VoidType(-1, -1);
    }
    else if(s == "boolean") {
        return new BooleanType(-1, -1);
    }
    else if(s == "int") {
        return new IntegerType(-1, -1);
    }
    else {
        return new IdentifierType(-1, -1, s);
    }
}

void Sem1Visitor::initInstanceVars(){
    currentClass = nullptr;
}

std::map<std::string,ClassDecl*> Sem1Visitor::getGlobalSymTab(){
    return globalSymTab;
}

void Sem1Visitor::initGlobalSymTab(){
    ClassDecl* classObjectDecl = createClass("Object", "");
    ClassDecl* classStringDecl = createClass("String", "Object");
    ClassDecl* classLibDecl = createClass("Lib", "Object");
    ClassDecl* classRunMainDecl = createClass("RunMain", "Object");
    ClassDecl* classDataArrayDecl = createClass("_DataArray", "Object");
    ClassDecl* classObjectArrayDecl = createClass("_ObjectArray", "Object");

    addDummyMethod(classObjectDecl, "hashCode", "int", new std::string[0]);
    addDummyMethod(classObjectDecl, "equals", "boolean", {"Object", ""});

}

ClassDecl* Sem1Visitor::createClass(std::string name, std::string superName){
    return new ClassDecl(-1, -1, name, superName, new DeclList());
}

void Sem1Visitor::addDummyMethod(ClassDecl* dec, std::string methName, std::string rtnTypeName, std::string parmTypeNames[]){
    VarDeclList* parmDecls = new VarDeclList();

    for(int i = 0; i < sizeof(parmTypeNames); ++i){
        Type* t = convertToType(parmTypeNames[i]);
        std::string parmName = "parm"+i;
        VarDecl* vd = new FormalDecl(-1, -1, t, parmName);
        parmDecls->push_back(vd);
    }

    Type* t = convertToType(rtnTypeName);
    StatementList* s1 = new StatementList();

    MethodDecl* md;
    if(t == nullptr) {
        md = new MethodDeclVoid(-1, -1, methName, parmDecls, s1);
    }   
    else{
        Exp* rtnExpr = new Null(-1, -1);
        md = new MethodDeclNonVoid(-1, -1, t, methName, parmDecls, s1, rtnExpr);
    }
    dec->decls->push_back(md);
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