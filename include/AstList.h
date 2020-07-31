#ifndef ASTLIST_H
#define ASTLIST_H

#include <vector>
#include "Visitor.h"

template <typename T>
class AstList{
public:
    std::vector<T> lst;

    AstList();

    AstList(std::vector<T> lst);

    void push_back(T n);

    void push_front(T n);

    virtual Visitor* accept(Visitor* v) = 0;
};

#endif