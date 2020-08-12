#ifndef STATEMENT_H
#define STATEMENT_H

#include "AstNode.h"
#include "Visitor.h"

class Visitor;
class Statement : public AstNode{
public:
    Statement(int arow, int acol);

    virtual Visitor* accept(Visitor* v);
};

#endif