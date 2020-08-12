#include "../include/ArrayType.h"
#include "../include/Helpers.h"

ArrayType::ArrayType(int arow, int acol, Type* base) : 
Type(arow, acol),
baseType(base)
{}

bool ArrayType::equals(Type* obj){
    return instanceof<ArrayType, Type>(obj) && sameType(this->baseType, ((ArrayType*)obj)->baseType);
}   

Visitor* ArrayType::accept(Visitor* v){
    return v->visitArrayType(this);
}