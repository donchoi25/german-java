#ifndef TYPE_H
#define TYPE_H

#include "AstNode.h"
#include "Visitor.h"

class Type : public AstNode{
public:
    Type();

    virtual Visitor* accept(Visitor* v);
};

#endif