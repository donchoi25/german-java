#ifndef EXP_NODE_H
#define EXP_NODE_H


#include "AstNode.h"

class Type;
class Visitor;
class Exp : public AstNode{
public: 
    Type* t;

    Exp();

    virtual Visitor* accept(Visitor* v) = 0;
};

#endif