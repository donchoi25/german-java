#include "NullType.h"
#include "Helpers.h"

NullType::NullType(int arow, int acol) :
Type(arow, acol)
{}

bool NullType::equals(Type* obj){
    return instanceof<NullType, Type>(obj);
}

Visitor* NullType::accept(Visitor* v){
    return v->visitNullType(this);
}