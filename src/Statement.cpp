#include "Statement.h"

Statement::Statement(int arow, int acol) :
AstNode(arow, acol)
{}

Visitor* Statement::accept(Visitor* v){
    return v->visitStatement(this);
}