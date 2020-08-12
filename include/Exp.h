#ifndef EXP_NODE_H
#define EXP_NODE_H

#include "AstNode.h"
#include "Visitor.h"

class Type;
class Visitor;
class Exp : public AstNode{
public: 
    Type* t;

    Exp(int arow, int acol);

    virtual Visitor* accept(Visitor* v);
};

#endif