#include "../include/Block.h"

Block::Block(StatementList* astmts):  Statement(),    
                                               stmts(astmts)
{}

Visitor* Block::accept(Visitor* v){
    return v->visitBlock(this);
}