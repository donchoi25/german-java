#include "../include/Assign.h"

Assign::Assign(Exp* alhs, Exp* arhs) : Statement(),
                                       lhs(alhs),
                                       rhs(arhs)
{}

Visitor* Assign::accept(Visitor* v){
    return v->visitAssign(this);
}