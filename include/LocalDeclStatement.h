#ifndef LOCALDECLSTATEMENT_H
#define LOCALDECLSTATEMENT_H

#include "Statement.h"
#include "Visitor.h"

class LocalVarDecl;
class LocalDeclStatement : public Statement{
public:
    LocalVarDecl* localVarDecl;

    LocalDeclStatement(int arow, int acol, LocalVarDecl* decl);

    Visitor* accept(Visitor* v);
};

#endif