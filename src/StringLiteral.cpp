#include "../include/StringLiteral.h"

StringLiteral::StringLiteral(int arow, int acol, const std::string astr) :
Exp(arow, acol),
str(astr),
uniqueCgRep(nullptr)
{}

Visitor* StringLiteral::accept(Visitor* v){
    return v->visitStringLiteral(this);
}