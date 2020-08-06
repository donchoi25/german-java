#ifndef VARDECLLIST_H
#define VARDECLLIST_H

#include "AstList.h"
#include "Visitor.h"
#include <vector>

class VarDecl;
class VarDeclList : public AstList<VarDecl*> {
public:
    VarDeclList();

    VarDeclList(std::vector<VarDecl*> lst);

    Visitor* accept(Visitor* v);
};

#endif