#ifndef METHODDECLVOID_H
#define METHODDECLVOID_H

#include "MethodDecl.h"
#include "Visitor.h"
#include <string>

class VarDeclList;
class StatementList;
class MethodDeclVoid : public MethodDecl{
public:
    MethodDeclVoid(std::string as, VarDeclList* afl, StatementList* asl);

    Visitor* accept(Visitor* v);
};

#endif