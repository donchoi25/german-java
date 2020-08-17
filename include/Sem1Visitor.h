#ifndef SEM1VISITOR_H
#define SEM1VISITOR_H

#include "ASTvisitor.h"
#include <map>
#include <string>

class Sem1Visitor : public ASTvisitor{
private:
    static Type* convertToType(std::string s);

    void initInstanceVars();
public:
    std::map<std::string,ClassDecl*> globalSymTab;
    ClassDecl* currentClass;
    
    Sem1Visitor();

    std::map<std::string,ClassDecl*> getGlobalSymTab();

    void initGlobalSymTab();

    static ClassDecl* createClass(std::string name, std::string superName);

    static void addDummyMethod(ClassDecl* dec, std::string methName, std::string rtnTypeName, std::string parmTypeNames[]);

    virtual Visitor* visitClassDecl(ClassDecl* n);

    virtual Visitor* visitInstVarDecl(InstVarDecl* n);

    virtual Visitor* visitMethodDecl(MethodDecl* n);
};

#endif