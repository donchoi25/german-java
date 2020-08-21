#include "Sem3Visitor.h"
#include "Helpers.h"

#include "Block.h"
#include "Break.h"
#include "ClassDecl.h"
#include "IdentifierExp.h"
#include "IdentifierType.h"
#include "InstVarDecl.h"
#include "FormalDecl.h"
#include "LocalVarDecl.h"
#include "StatementList.h"
#include "While.h"

VarDecl* Sem3Visitor::uninitVarDecl = new InstVarDecl(-1, -1, nullptr, "$$$$");

Sem3Visitor::Sem3Visitor(std::map<std::string, ClassDecl*> aglobalSymTab, ErrorMsg* aerrorMsg) :
errorMsg(aerrorMsg),
globalSymTab(aglobalSymTab),
currentClass(nullptr)
{}

Visitor* Sem3Visitor::visitClassDecl(ClassDecl* n){
    currentClass = n;

    ASTvisitor::visitClassDecl(n);

    return visitDecl(n);
}

Visitor* Sem3Visitor::visitMethodDecl(MethodDecl* n){
    localSymTab.clear();

    ASTvisitor::visitMethodDecl(n);

    return nullptr;
}

Visitor* Sem3Visitor::visitFormalDecl(FormalDecl* n){
    if(localSymTab.find(n->name) != localSymTab.end()){
        errorMsg->error(n->row, n->col, "Duplicate variable name: " + n->name);
    }

    localSymTab.emplace(n->name, uninitVarDecl);
    ASTvisitor::visitFormalDecl(n);
    localSymTab[n->name] = n;

    return nullptr;
}

Visitor* Sem3Visitor::visitLocalVarDecl(LocalVarDecl* n){
    if(localSymTab.find(n->name) != localSymTab.end()){
        errorMsg->error(n->row, n->col, "Duplicate variable name: " + n->name);
    }

    localSymTab.emplace(n->name, uninitVarDecl);
    ASTvisitor::visitLocalVarDecl(n);
    localSymTab[n->name] = n;

    return nullptr;
}

Visitor* Sem3Visitor::visitInstVarDecl(InstVarDecl* n){
    if(n->name == "length"){
        errorMsg->error(n->row, n->col, "invalid variable name \"length\"");
    }

    return ASTvisitor::visitInstVarDecl(n);
}

Visitor* Sem3Visitor::visitBlock(Block* n){
    ASTvisitor::visitBlock(n);

    for(AstNode* stmt : n->stmts->lst){
        if(instanceof<VarDecl, AstNode>(stmt)){
            localSymTab.erase(((VarDecl*)stmt)->name);
        }
    }

    return nullptr;
}

Visitor* Sem3Visitor::visitIdentifierExp(IdentifierExp* n){
    bool undefined = true;

    if(localSymTab.find(n->name) != localSymTab.end()){
        undefined = false;

        if(localSymTab[n->name] == uninitVarDecl){
            errorMsg->error(n->row, n->col, "uninitialized variable: " + n->name);
        }
        else{
            n->link = localSymTab[n->name];
        }
    }
    else{
        if(currentClass->instVarTable.find(n->name) != currentClass->instVarTable.end()){
            undefined = false;
            n->link = currentClass->instVarTable[n->name];
        }
        else{
            ClassDecl* currClass = currentClass->superlink;
            while(currClass != nullptr){
                if(currClass->instVarTable.find(n->name) != currClass->instVarTable.end()){
                    n->link = currentClass->instVarTable[n->name];
                    undefined = false;
                    break;
                }

                currClass = currClass->superlink;
            }
        }
    }

    if(undefined){
        errorMsg->error(n->row, n->col, "undefined variable name: " + n->name);
    }

    return ASTvisitor::visitIdentifierExp(n);
}

#include <iostream>
Visitor* Sem3Visitor::visitIdentifierType(IdentifierType* n){
    if(globalSymTab.find(n->name) != globalSymTab.end()){
        n->link = globalSymTab[n->name];
    }
    else{
        errorMsg->error(n->row, n->col, "undefined class name: " + n->name);
    }

    return visitType(n);
}

Visitor* Sem3Visitor::visitWhile(While* n){
    breakTargetStack.push(n);

    ASTvisitor::visitWhile(n);

    breakTargetStack.pop();

    return nullptr;
}

Visitor* Sem3Visitor::visitBreak(Break* n){
    if(breakTargetStack.empty()){
        errorMsg->error(n->row, n->col, "break statement outside of loop/switch");
    }
    else{
        n->breakLink = breakTargetStack.top();
    }

    return visitStatement(n);
}