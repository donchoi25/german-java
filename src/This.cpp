#include "../include/This.h"

This::This() :
Exp()
{}

Visitor* This::accept(Visitor* v){
    return v->visitThis(this);
}