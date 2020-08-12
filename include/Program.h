#ifndef PROGRAM_H
#define PROGRAM_H

#include "AstNode.h"
#include "Visitor.h"
#include "IdentifierType.h"
#include "NewObject.h"
#include "Call.h"
#include "ExpList.h"
#include "CallStatement.h"
#include <vector>

class ClassDeclList;
class Statement;
class Exp;
class Program : public AstNode {
public:
    ClassDeclList* classDecls;
    Statement* mainStatement;

    Program(int arow, int acol, ClassDeclList* acl);

    virtual Visitor* accept(Visitor* v);
};

#endif