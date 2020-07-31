#include "../include/CallStatement.h"

CallStatement::CallStatement(Call* aexp) : Statement(),
                                           callExp(aexp)
{}

Visitor* CallStatement::accept(Visitor* v){
    return v->visitCallStatement(this);
}