#include "../include/IdentifierExp.h"

IdentifierExp::IdentifierExp(std::string aname): Exp(),
                                name(aname),
                                link(nullptr)   
{}

Visitor* IdentifierExp::accept(Visitor* v){
    return v->visitIdentifierExp(this);
}