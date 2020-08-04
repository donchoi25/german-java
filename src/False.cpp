#include "../include/False.h"

False::False() : Exp()
{}

Visitor* False::accept(Visitor* v){
    return v->visitFalse(this);
}