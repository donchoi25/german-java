#include "../include/IdentifierExp.h"

IdentifierExp::IdentifierExp(int arow, int acol, const std::string aname) : 
Exp(arow, acol),
name(aname),
link(nullptr)   
{}

Visitor* IdentifierExp::accept(Visitor* v){
    return v->visitIdentifierExp(this);
}