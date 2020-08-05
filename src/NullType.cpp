#include "../include/NullType.h"
#include "../include/Helpers.h"

NullType::NullType() :
Type()
{}

bool NullType::equals(Type* obj){
    return instanceof<NullType, Type>(obj);
}

Visitor* NullType::accept(Visitor* v){
    return v->visitNullType(this);
}