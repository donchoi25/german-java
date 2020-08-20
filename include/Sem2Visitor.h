#ifndef SEM2VISITOR_H
#define SEM2VISITOR_H

#include "ASTvisitor.h"
#include <map>
#include <string>
#include "ErrorMsg.h"

class ClassDecl;
class Sem2Visitor : public ASTvisitor{
public:
    ErrorMsg* errorMsg;

    std::map<std::string, ClassDecl*> globalSymTab;

    Sem2Visitor(std::map<std::string, ClassDecl*> globalSymTab, ErrorMsg* aerrorMsg);

    virtual Visitor* visitProgram(Program* n);

    virtual Visitor* visitClassDecl(ClassDecl* n);
};

#endif