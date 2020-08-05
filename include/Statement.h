#ifndef STATEMENT_H
#define STATEMENT_H

#include "AstNode.h"

class Visitor;
class Statement : public AstNode{
public:
    Statement();

    virtual Visitor* accept(Visitor* v) = 0;
};

#endif