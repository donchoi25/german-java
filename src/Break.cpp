#include "../include/Break.h"

Break::Break(int arow, int acol) : 
Statement(arow, acol),
breakLink(nullptr)
{}

Visitor* Break::accept(Visitor* v){
    return v->visitBreak(this);
}