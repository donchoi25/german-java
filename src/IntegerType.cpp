#include "../include/IntegerType.h"
#include "../include/Helpers.h"

IntegerType::IntegerType() :
Type()
{}

bool IntegerType::equals(Type* obj){
    return instanceof<IntegerType, Type>(obj);
}

Visitor* IntegerType::accept(Visitor* v){
    return v->visitIntegerType(this);
}