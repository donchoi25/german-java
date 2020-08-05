#ifndef CLASSDECL_H
#define CLASSDECL_H

#include "Decl.h"
#include "Visitor.h"
#include <string>
#include <vector>
#include <map>

class InstVarDecl;
class methodDecl;
class ClassDecl;
class ClassDecl : public Decl {
public:
    std::string superName;
    std::vector<Decl*> decls;

    ClassDecl* superlink;
    std::vector<ClassDecl*> subclasses;
    std::map<std::string,InstVarDecl*> instVarTable;
    std::map<std::string,methodDecl*> methodTable;

    ClassDecl(std::string aname, std::string 
        asuperName, std::vector<ClassDecl*> aDeclList);

    virtual Visitor* accept(Visitor* v);
};

#endif