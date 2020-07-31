#include "../include/BooleanType.h"
#include "../include/Helpers.h"

BooleanType::BooleanType() : Type()
{}

bool BooleanType::equals(Type* obj){
    return instanceof<BooleanType,Type>(obj);
}

Visitor* BooleanType::accept(Visitor* v){
    return v->visitBooleanType(this);
}