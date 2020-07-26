#ifndef TYPE_H
#define TYPE_H

#include "AstNode.h"

class Type : AstNode{
public:
    Type();

    virtual void accept(Visitor* v) = 0;
};

#endif