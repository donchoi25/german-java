#include "../include/Exp.h"

Exp::Exp():AstNode(){
    
}

Visitor* accept(Visitor* v){
    return v->visitExp(this);
}
