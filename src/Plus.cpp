#include "../include/Plus.h"

Plus::Plus(int arow, int acol, ::Exp* ae1, ::Exp* ae2) :
BinExp(arow, acol, ae1, ae2)
{}

Visitor* Plus::accept(Visitor* v){
    return v->visitPlus(this);
}