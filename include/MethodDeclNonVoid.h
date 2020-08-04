#ifndef METHODDECLNONVOID_H
#define METHODDECLNONVOID_H

#include "MethodDecl.h"
#include "Visitor.h"
#include <string>

class Type;
class Exp;
class VarDeclList;
class StatementList;
class MethodDeclNonVoid : MethodDecl{
public:
    Type* rtnType;
    Exp* rtnExp;

    MethodDeclNonVoid(Type* at, std::string as, VarDeclList* afl, StatementList* asl, Exp* ae);

    Visitor* accept(Visitor* v);
};

#endif