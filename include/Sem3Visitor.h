#ifndef SEM3VISITOR_H
#define SEM3VISITOR_H

#include "ASTvisitor.h"
#include <map>
#include <stack>
#include <string>
#include "ErrorMsg.h"

class Sem3Visitor : public ASTvisitor{
private:
    static VarDecl* uninitVarDecl;

    void initInstanceVars(std::map<std::string, ClassDecl*> globalTab);
public:
    std::map<std::string, ClassDecl*> globalSymTab;
    ClassDecl* currentClass;
    std::map<std::string, VarDecl*> localSymTab;
    std::stack<BreakTarget*> breakTargetStack;
    ErrorMsg* errorMsg;

    Sem3Visitor(std::map<std::string, ClassDecl*> globalSymTb, ErrorMsg* aerrorMsg);

    virtual Visitor* visitClassDecl(ClassDecl* n);

    virtual Visitor* visitMethodDecl(MethodDecl* n);

    virtual Visitor* visitFormalDecl(FormalDecl* n);

    virtual Visitor* visitLocalVarDecl(LocalVarDecl* n);

    virtual Visitor* visitInstVarDecl(InstVarDecl* n);

    virtual Visitor* visitBlock(Block* n);

    virtual Visitor* visitIdentifierExp(IdentifierExp* n);

    virtual Visitor* visitIdentifierType(IdentifierType* n);

    virtual Visitor* visitWhile(While* n);

    virtual Visitor* visitBreak(Break* n);
};

#endif