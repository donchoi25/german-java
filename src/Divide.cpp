#include "../include/Divide.h"

Divide::Divide(::Exp* ae1, ::Exp* ae2) : BinExp(ae1, ae2)
{}

Visitor* Divide::accept(Visitor* v){
    return v->visitDivide(this);
}