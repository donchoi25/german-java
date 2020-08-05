#include "../include/Super.h"

Super::Super() :
Exp()
{}

Visitor* Super::accept(Visitor* v){
    return v->visitSuper(this);
}