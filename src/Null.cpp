#include "../include/Null.h"

Null::Null() :
Exp()
{}

Visitor* Null::accept(Visitor* v){
    return v->visitNull(this);
}