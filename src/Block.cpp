#include "../include/Block.h"

Block::Block(std::vector<Statement*> astmts):  Statement(),    
                                               stmts(astmts)
{}

Visitor* Block::accept(Visitor* v){
    return v->visitBlock(this);
}