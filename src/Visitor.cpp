#include "Visitor.h"
#include "AstNode.h"

Visitor::Visitor()
{}

Visitor* Visitor::visit(AstNode* n){
    return n->accept(this);
}