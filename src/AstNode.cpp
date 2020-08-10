#include "../include/AstNode.h"
#include "../include/Visitor.h"

AstNode::AstNode(){
    
}

Visitor* AstNode::accept(Visitor* v){
    return v->visitAstNode(this);
}
 