#include "ArrayLength.h"

ArrayLength::ArrayLength(int arow, int acol, ::Exp* arrExp) : UnExp(arow, acol, arrExp)
{}

Visitor* ArrayLength::accept(Visitor* v){
    return v->visitArrayLength(this);
}