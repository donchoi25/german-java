#ifndef SEM2VISITOR_H
#define SEM2VISITOR_H

#include "ASTvisitor.h"
#include <map>
#include <string>

class ClassDecl;
class Sem2Visitor : public ASTvisitor{
public:
    std::map<std::string, ClassDecl*> globalSymTab;

    Sem2Visitor(std::map<std::string, ClassDecl*> globalSymTab);

    virtual Visitor* visitProgram(Program* n);

    virtual Visitor* visitClassDecl(ClassDecl* n);
};

#endif