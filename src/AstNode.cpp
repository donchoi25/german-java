#include "../include/AstNode.h"

AstNode::AstNode(){
    
}

Visitor* AstNode::accept(Visitor* v){
    return v->visitAstNode(this);
}
 