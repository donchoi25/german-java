#include "IntegerType.h"
#include "Helpers.h"

IntegerType::IntegerType(int arow, int acol) :
Type(arow, acol)
{}

bool IntegerType::equals(Type* obj){
    return instanceof<IntegerType, Type>(obj);
}

Visitor* IntegerType::accept(Visitor* v){
    return v->visitIntegerType(this);
}