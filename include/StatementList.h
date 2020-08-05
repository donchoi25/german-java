#ifndef STATEMENTLIST_H
#define STATEMENTLIST_H

#include "AstList.h"
#include "Visitor.h"
#include <vector>

class Statement;
class StatementList : public AstList<Statement*> {
public:
    StatementList();

    StatementList(std::vector<Statement*> lst);

    virtual Visitor* accept(Visitor* v);
};

#endif

