#include "../include/Break.h"

Break::Break() : Statement(),
                 breakLink(nullptr)
{}

Visitor* Break::accept(Visitor* v){
    return v->visitBreak(this);
}