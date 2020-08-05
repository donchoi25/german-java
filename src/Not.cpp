#include "../include/Not.h"

Not::Not(::Exp* ae) :
UnExp(ae)
{}

Visitor* Not::accept(Visitor* v){
    return v->visitNot(this);
}