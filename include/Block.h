#ifndef BLOCK_H
#define BLOCK_H

#include "Statement.h"
#include "Visitor.h"
#include <vector>

class Block : Statement{
public:
    std::vector<Statement*> stmts;

    Block(std::vector<Statement*> astmts);

    virtual Visitor* accept(Visitor* v);
};

#endif