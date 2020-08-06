#include "../include/Times.h"

Times::Times(Exp* ae1, Exp* ae2) :
BinExp(ae1, ae2)
{}

Visitor* Times::accept(Visitor* v){
    return v->visitTimes(this);
}