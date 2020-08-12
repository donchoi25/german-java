#ifndef LOCALVARDECL_H
#define LOCALVARDECL_H

#include "VarDecl.h"
#include "Visitor.h"
#include <string>

class Exp;
class Type;
class LocalVarDecl : public VarDecl{
public:
    Exp* initExp;

    LocalVarDecl(int arow, int acol, Type* at, const std::string as, Exp* initX);

    Visitor* accept(Visitor* v);
};

#endif