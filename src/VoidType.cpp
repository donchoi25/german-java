#include "../include/VoidType.h"
#include "../include/Helpers.h"

VoidType::VoidType() :
Type()
{}

bool VoidType::equals(Type* obj){
    return instanceof<VoidType, Type>(obj);
}

Visitor* VoidType::accept(Visitor* v){
    return v->visitVoidType(this);
}