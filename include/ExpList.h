#ifndef EXPLIST_H
#define EXPLIST_H

#include "AstList.h"
#include "Visitor.h"

class Exp;
class ExpList : public AstList<Exp*>{
public:
    ExpList();

    ExpList(std::vector<Exp*> lst);

    virtual Visitor* accept(Visitor* v);
};

#endif