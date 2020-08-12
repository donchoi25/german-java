#include "../include/CallStatement.h"

CallStatement::CallStatement(int arow, int acol, Call* aexp) : 
Statement(arow, acol),
callExp(aexp)
{}

Visitor* CallStatement::accept(Visitor* v){
    return v->visitCallStatement(this);
}