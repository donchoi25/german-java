#include "../include/Type.h"
#include "../include/AstNode.h"


Type::Type(int arow, int acol) :
AstNode(arow, acol)
{}

Visitor* Type::accept(Visitor* v){
    return v->visitType(this);
}