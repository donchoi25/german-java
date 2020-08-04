#include "../include/GreaterThan.h"

GreaterThan::GreaterThan(::Exp* ae1, ::Exp* ae2) : BinExp(ae1, ae2)
{}

Visitor* GreaterThan::accept(Visitor* v){
    return v->visitGreaterThan(this);
}