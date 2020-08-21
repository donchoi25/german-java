#include "IntegerLiteral.h"

IntegerLiteral::IntegerLiteral(int arow, int acol, int aval) :
Exp(arow, acol),
val(aval)
{}

Visitor* IntegerLiteral::accept(Visitor* v){
    return v->visitIntegerLiteral(this);
}