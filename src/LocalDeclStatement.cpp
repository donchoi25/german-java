#include "LocalDeclStatement.h"

LocalDeclStatement::LocalDeclStatement(int arow, int acol, LocalVarDecl* decl) :
Statement(arow, acol),
localVarDecl(decl)
{}

Visitor* LocalDeclStatement::accept(Visitor* v){
    return v->visitLocalDeclStatement(this);
}