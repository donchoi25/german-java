#include "../include/IdentifierType.h"
#include "../include/Helpers.h"

IdentifierType::IdentifierType(std::string aname) : Type(),
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