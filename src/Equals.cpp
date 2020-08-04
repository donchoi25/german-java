#include "../include/Equals.h"

Equals::Equals(::Exp* ae1, ::Exp* ae2) : BinExp(ae1, ae2)
{}

Visitor* Equals::accept(Visitor* v){
    return v->visitEquals(this);
}