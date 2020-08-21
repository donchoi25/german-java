#include "Sem2Visitor.h"

#include "ClassDecl.h"
#include "ClassDeclList.h"
#include "Program.h"

Sem2Visitor::Sem2Visitor(std::map<std::string, ClassDecl*> aglobalSymTab, ErrorMsg* aerrorMsg) :
errorMsg(aerrorMsg),
globalSymTab(aglobalSymTab)
{}

Visitor* Sem2Visitor::visitProgram(Program* n){
    //no class can have a superclass name of String or RunMain
    for(ClassDecl* classDecl : n->classDecls->lst){
        this->visit(classDecl);

        //no class can have a superclass name of String or RunMain
        if(classDecl->superName == "String"){
            errorMsg->error(classDecl->row, classDecl->col, "Invalid superclass name: String");
        }
        else if(classDecl->superName == "RunMain"){
            errorMsg->error(classDecl->row, classDecl->col, "Invalid superclass name: RunMain");
        }
    }

    //checks that no class is a part of a cycle
    for(ClassDecl* classDecl : n->classDecls->lst){
        ClassDecl* currClass = classDecl;
        int i = 0;

        //loop until we reach the Object class
        while(currClass->name != "Object"){
            if(i > globalSymTab.size() ||
               currClass->superlink == classDecl){
                   errorMsg->error(classDecl->row, classDecl->col, "class part of an inheritance cycle: " + classDecl->name + ", " + classDecl->superName + ", ...");
                   break;
               }
            else if(currClass->superlink == nullptr){
                break;
            }

            currClass = currClass->superlink;
            ++i;
        }
    }

    return visitAstNode(n);
}

Visitor* Sem2Visitor::visitClassDecl(ClassDecl* n){
    //if superclass exists, link the suepr class and subclasses
    if(globalSymTab.find(n->superName) != globalSymTab.end()){
        n->superlink = globalSymTab[n->superName];
        globalSymTab[n->superName]->subclasses->push_back(n);
    }
    //if the superclass does not exist, report an error
    else if(n->name != "Object"){
        errorMsg->error(n->row, n->col, "undefined class name: " + n->superName);
    }

    return visitDecl(n);
}