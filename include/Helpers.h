#ifndef HEPLERS_H
#define HELPERS_H

#include <typeinfo>
#include "Type.h"

template <typename Cast, typename Base>
inline bool instanceof(Base* obj){
    if(dynamic_cast<Cast*>(obj)){
        return true;
    }
    else{
        return false;
    }
}

inline bool sameType(Type* a1, Type* a2){
    return typeid(*a1) == typeid(*a2);
}

#endif