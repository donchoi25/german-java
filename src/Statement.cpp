#include "../include/Statement.h"

Statement::Statement(){
    
}

Visitor* Statement::accept(Visitor* v){
    return v->visitStatement(this);
}