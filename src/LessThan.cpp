#include "../include/LessThan.h"

LessThan::LessThan(::Exp* ae1, ::Exp* ae2) : 
BinExp(ae1, ae2)
{}

Visitor* LessThan::accept(Visitor* v){
    return v->visitLessThan(this);
}