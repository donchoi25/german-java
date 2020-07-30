#include "../include/ArrayLength.h"

ArrayLength::ArrayLength(::Exp* arrExp) : UnExp(arrExp)
{}

Visitor* ArrayLength::accept(Visitor* v){
    return v->visitArrayLength(this);
}