#ifndef BLOCK_H
#define BLOCK_H

#include "Statement.h"
#include "Visitor.h"
#include <vector>

class StatementList;
class Block : public Statement{
public:
    StatementList* stmts;

    Block(int arow, int acol, StatementList* astmts);

    virtual Visitor* accept(Visitor* v);
};

#endif