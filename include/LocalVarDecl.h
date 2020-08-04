#ifndef LOCALVARDECL_H
#define LOCALVARDECL_H

#include "VarDecl.h"
#include "Visitor.h"
#include <string>

class Exp;
class Type;
class LocalVarDecl : VarDecl{
public:
    Exp* initExp;

    LocalVarDecl(Type* at, std::string as, Exp* initX);

    Visitor* accept(Visitor* v);
};

#endif