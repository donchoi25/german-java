#ifndef HEPLERS_H
#define HELPERS_H

#include <type_traits>
#include <typeinfo>

template <typename Base, typename T>
inline bool instanceof(const T*){
    return std::is_base_of<Base, T>::value;
}

class Type;
inline bool sameType(Type* a1, Type* a2){
    return typeid(*a1) == typeid(*a2);
}

#endif