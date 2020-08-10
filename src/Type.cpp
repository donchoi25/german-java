#include "../include/Type.h"
#include "../include/AstNode.h"


Type::Type():AstNode(){

}

Visitor* Type::accept(Visitor* v){
    return v->visitType(this);
}