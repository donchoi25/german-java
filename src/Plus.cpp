#include "../include/Plus.h"

Plus::Plus(::Exp* ae1, ::Exp* ae2) :
BinExp(ae1, ae2)
{}

Visitor* Plus::accept(Visitor* v){
    return v->visitPlus(this);
}