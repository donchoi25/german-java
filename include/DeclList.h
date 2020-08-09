#ifndef DECLLIST_H
#define DECLLIST_H

#include "AstList.h"
#include "Visitor.h"
#include <vector>

class Decl;
class DeclList : public AstList<Decl*>{
public:
    DeclList();

    DeclList(std::vector<Decl*> lst);

    virtual Visitor* accept(Visitor* v);
};

#endif