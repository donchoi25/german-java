#include "../include/False.h"

False::False(int arow, int acol) : 
Exp(arow, acol)
{}

Visitor* False::accept(Visitor* v){
    return v->visitFalse(this);
}