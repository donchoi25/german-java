#include "../include/LocalDeclStatement.h"

LocalDeclStatement::LocalDeclStatement(LocalVarDecl* decl) :
Statement(),
localVarDecl(decl)
{}

Visitor* LocalDeclStatement::accept(Visitor* v){
    return v->visitLocalDeclStatement(this);
}