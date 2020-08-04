#include "../include/IntegerLiteral.h"

IntegerLiteral::IntegerLiteral(int aval) :
Exp(),
val(aval)
{}

Visitor* IntegerLiteral::accept(Visitor* v){
    return v->visitIntegerLiteral(this);
}