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
#include "../include/Sem2Visitor.h"
#include "../include/Sem3Visitor.h"

Sem1Visitor::Sem1Visitor(ErrorMsg* aerrorMsg) :
errorMsg(aerrorMsg)
{
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
    
    std::vector<std::string> empty = {};

    addDummyMethod(classObjectDecl, "hashCode", "int", empty);
    std::vector<std::string> temp1 = { "Object" };
    addDummyMethod(classObjectDecl, "equals", "boolean", temp1);
    addDummyMethod(classObjectDecl, "toString", "String", empty);
    addDummyMethod(classLibDecl, "readLine", "String", empty);
    addDummyMethod(classLibDecl, "readInt", "int", empty);
    addDummyMethod(classLibDecl, "readChar", "int", empty);
    std::vector<std::string> temp2 = { "String" };
    addDummyMethod(classLibDecl, "printStr", "void", temp2);
    std::vector<std::string> temp3 = { "boolean" };
    addDummyMethod(classLibDecl, "printBool", "void", temp3);
    std::vector<std::string> temp4 = { "int" };
    addDummyMethod(classLibDecl, "printInt", "void", temp4);
    std::vector<std::string> temp5 = { "int" };
    addDummyMethod(classLibDecl, "intToString", "String", temp5);
    std::vector<std::string> temp6 = { "int" };
    addDummyMethod(classLibDecl, "intToChar", "String", temp6);
    addDummyMethod(classStringDecl, "hashCode", "int", empty);
    std::vector<std::string> temp7 = { "Object" };
    addDummyMethod(classStringDecl, "equals", "boolean", temp7);
    addDummyMethod(classStringDecl, "toString", "String", empty);
    std::vector<std::string> temp8 = { "String" };
    addDummyMethod(classStringDecl, "concat", "String", temp8);
    std::vector<std::string> temp9 = { "int", "int" };
    addDummyMethod(classStringDecl, "substring", "String", temp9);
    addDummyMethod(classStringDecl, "length", "int", empty);
    std::vector<std::string> temp10 = { "int" };
    addDummyMethod(classStringDecl, "charAt", "int", temp10);
    std::vector<std::string> temp11 = { "String" };
    addDummyMethod(classStringDecl, "compareTo", "int", temp11);

    this->visitClassDecl(classObjectDecl);
    this->visitClassDecl(classLibDecl);
    this->visitClassDecl(classStringDecl);
    this->visitClassDecl(classRunMainDecl);
    this->visitClassDecl(classDataArrayDecl);
    this->visitClassDecl(classObjectArrayDecl);

    Sem2Visitor* s2 = new Sem2Visitor(globalSymTab, errorMsg);
    s2->visit(classObjectDecl);
    s2->visit(classLibDecl);
    s2->visit(classStringDecl);
    s2->visit(classRunMainDecl);
    s2->visit(classDataArrayDecl);
    s2->visitClassDecl(classDataArrayDecl);
    s2->visitClassDecl(classObjectArrayDecl);

    Sem3Visitor* s3 = new Sem3Visitor(globalSymTab, errorMsg);
    s3->visit(classObjectDecl);
    s3->visit(classLibDecl);
    s3->visit(classStringDecl);
    s3->visit(classRunMainDecl);
    s3->visit(classDataArrayDecl);
    s3->visitClassDecl(classDataArrayDecl);
    s3->visitClassDecl(classObjectArrayDecl);

}

ClassDecl* Sem1Visitor::createClass(std::string name, std::string superName){
    return new ClassDecl(-1, -1, name, superName, new DeclList());
}

void Sem1Visitor::addDummyMethod(ClassDecl* dec, std::string methName, std::string rtnTypeName, std::vector<std::string> parmTypeNames){
    VarDeclList* parmDecls = new VarDeclList();

    for(int i = 0; i < parmTypeNames.size(); ++i){
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
    if(globalSymTab.find(n->name) == globalSymTab.end()){
        globalSymTab.emplace(n->name, n);

        currentClass = n;

        for(Decl* decl : n->decls->lst){
            this->visit(decl);
        }
    }
    else{
        errorMsg->error(n->row, n->col, "Duplicate Class Declaration \n");
    }

    return visitDecl(n);
}

Visitor* Sem1Visitor::visitInstVarDecl(InstVarDecl* n){
    return nullptr;
}

Visitor* Sem1Visitor::visitMethodDecl(MethodDecl* n){
    return nullptr;
}