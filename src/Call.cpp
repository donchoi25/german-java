#include "../include/Call.h"

Call::Call(Exp *aobj, const std::string amethName, ExpList* aparms) : Exp(),
                                                                obj(aobj),
                                                                methName(amethName),
                                                                parms(aparms),
                                                                methodLink(nullptr)
{}

Visitor* Call::accept(Visitor* v){
    return v->visitCall(this);
}