#include "IdentifierType.h"
#include "Helpers.h"

IdentifierType::IdentifierType(int arow, int acol, const std::string aname) : 
Type(arow, acol),
name(aname),
link(nullptr)
{}

bool IdentifierType::equals(Type* obj){
    return instanceof<IdentifierType, Type>(obj) && 
    this->link != nullptr &&
    this->link == ((IdentifierType*)obj)->link;
}

Visitor* IdentifierType::accept(Visitor* v){
    return v->visitIdentifierType(this);
}