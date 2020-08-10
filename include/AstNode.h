#ifndef AST_NODE_H
#define AST_NODE_H

#include "Visitor.h"

class AstNode {
private:
public: 
    AstNode();

    virtual Visitor* accept(Visitor* v);
};

#endif