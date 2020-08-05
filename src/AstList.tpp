#include "../include/AstList.h"

template <typename T>
AstList<T>::AstList()
{}

template <typename T>
AstList<T>::AstList(std::vector<T> alst) : lst(alst)
{}

template <typename T>
void AstList<T>::push_back(T n){
    lst.push_back(n);
}

template <typename T>
void AstList<T>::push_front(T n){
    lst.insert(lst.begin, n);
}