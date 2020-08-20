#ifndef CLASSDECL_H
#define CLASSDECL_H

#include "Decl.h"
#include "Visitor.h"
#include <string>
#include <vector>
#include <map>

class InstVarDecl;
class MethodDecl;
class DeclList;
class ClassDeclList;
class ClassDecl : public Decl {
public:
    std::string superName;
    DeclList* decls;

    ClassDecl* superlink;
    ClassDeclList* subclasses;
    std::map<std::string,InstVarDecl*> instVarTable;
    std::map<std::string,MethodDecl*> methodTable;

    ClassDecl(int arow, int acol, const std::string aname, const std::string asuperName, DeclList* aDeclList);

    virtual Visitor* accept(Visitor* v);
};

#endif