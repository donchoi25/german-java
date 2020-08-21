#include "StatementList.h"

StatementList::StatementList() : 
AstList<Statement*>()
{}

StatementList::StatementList(std::vector<Statement*> lst) :
AstList<Statement*>(lst)
{}

Visitor* StatementList::accept(Visitor* v){
    return v->visitStatementList(this);
}