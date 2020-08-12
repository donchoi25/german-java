#include "../include/Call.h"

Call::Call(int arow, int acol, Exp *aobj, const std::string amethName, ExpList* aparms) : 
Exp(arow, acol),
obj(aobj),
methName(amethName),
parms(aparms),
 methodLink(nullptr)
{}

Visitor* Call::accept(Visitor* v){
    return v->visitCall(this);
}