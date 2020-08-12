#include "../include/LessThan.h"

LessThan::LessThan(int arow, int acol, ::Exp* ae1, ::Exp* ae2) : 
BinExp(arow, acol, ae1, ae2)
{}

Visitor* LessThan::accept(Visitor* v){
    return v->visitLessThan(this);
}