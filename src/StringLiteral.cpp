#include "../include/StringLiteral.h"

StringLiteral::StringLiteral(std::string astr) :
Exp(),
str(astr),
uniqueCgRep(nullptr)
{}

Visitor* StringLiteral::accept(Visitor* v){
    return v->visitStringLiteral(this);
}