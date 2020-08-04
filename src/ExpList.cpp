#include "../include/ExpList.h"

ExpList::ExpList(std::vector<Exp*> lst) : AstList<Exp*>(lst)
{}

Visitor* ExpList::accept(Visitor* v){
    return v->visitExpList(this);
}