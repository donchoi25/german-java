#ifndef CLASSDECLLIST_H
#define CLASSDECLLIST_H

#include "AstList.h"
#include "Visitor.h"
#include "ClassDecl.h"
#include <vector>

class ClassDecl;
class ClassDeclList : AstList<ClassDecl*>{
public:
    ClassDeclList(std::vector<ClassDecl*> lst);

    virtual Visitor* accept(Visitor* v);
};

#endif