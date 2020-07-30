#include "../include/ArrayLookup.h"

ArrayLookup::ArrayLookup(Exp* aarrExp, Exp* aidxExp) : Exp(),
                             arrExp(aarrExp),
                             idxExp(aidxExp)
{}

Visitor* ArrayLookup::accept(Visitor* v){
    return v->visitArrayLookup(this);
}