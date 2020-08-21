#include "Block.h"

Block::Block(int arow, int acol, StatementList* astmts):  
Statement(arow, acol),    
stmts(astmts)
{}

Visitor* Block::accept(Visitor* v){
    return v->visitBlock(this);
}