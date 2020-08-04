#ifndef EXPLIST_H
#define EXPLIST_H

#include "AstList.h"
#include "Visitor.h"

class Exp;
class ExpList : AstList<Exp*>{
public:
    ExpList(std::vector<Exp*> lst);

    virtual Visitor* accept(Visitor* v);
};

#endif