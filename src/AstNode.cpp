#include "../include/AstNode.h"
#include "../include/Visitor.h"
#include <stdio.h>

AstNode::AstNode(int arow, int acol) :
row(arow),
col(acol)
{}

Visitor* AstNode::accept(Visitor* v){
    return v->visitAstNode(this);
}

void AstNode::printLoc(){
    printf(" LINE %d", row);
}
 