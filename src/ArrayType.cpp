#include "../include/ArrayType.h"
#include "../include/Helpers.h"

ArrayType::ArrayType(Type* base) : Type(),
                                   baseType(base)
{}

bool ArrayType::equals(Type* obj){
    return instanceof<ArrayType*>(obj) && sameType(this->baseType, ((ArrayType*)obj)->baseType);
}

Visitor* ArrayType::accept(Visitor* v){
    return v->visitArrayType(this);
}