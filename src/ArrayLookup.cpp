#include "ArrayLookup.h"

ArrayLookup::ArrayLookup(int arow, int acol, Exp* aarrExp, Exp* aidxExp) : Exp(arow, acol),
arrExp(aarrExp),
idxExp(aidxExp)
{}

Visitor* ArrayLookup::accept(Visitor* v){
    return v->visitArrayLookup(this);
}