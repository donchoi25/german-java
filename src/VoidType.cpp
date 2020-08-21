#include "VoidType.h"
#include "Helpers.h"

VoidType::VoidType(int arow, int acol) :
Type(arow, acol)
{}

bool VoidType::equals(Type* obj){
    return instanceof<VoidType, Type>(obj);
}

Visitor* VoidType::accept(Visitor* v){
    return v->visitVoidType(this);
}