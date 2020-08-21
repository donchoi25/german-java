#include "BooleanType.h"
#include "Helpers.h"

BooleanType::BooleanType(int arow, int acol) : 
Type(arow, acol)
{}

bool BooleanType::equals(Type* obj){
    return instanceof<BooleanType,Type>(obj);
}

Visitor* BooleanType::accept(Visitor* v){
    return v->visitBooleanType(this);
}