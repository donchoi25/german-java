#include "../include/ArrayType.h"

ArrayType::ArrayType(Type* base) : Type(),
                                   baseType(base)
{}

Visitor* ArrayType::accept(Visitor* v){
    return v->visitArrayType(this);
}