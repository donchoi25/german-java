#include "../include/Exp.h"

Exp::Exp():AstNode(){
    
}

Visitor* Exp::accept(Visitor* v){
    return v->visitExp(this);
}
