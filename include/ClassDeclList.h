#ifndef CLASSDECLLIST_H
#define CLASSDECLLIST_H

#include "AstList.h"
#include "Visitor.h"
#include <vector>

class ClassDecl;
class ClassDeclList : public AstList<ClassDecl*>{
public:
    ClassDeclList();

    ClassDeclList(std::vector<ClassDecl*> lst);

    virtual Visitor* accept(Visitor* v);
};

#endif