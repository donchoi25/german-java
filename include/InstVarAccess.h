#ifndef INSTVARACCESS_H
#define INSTVARACCESS_H

#include "Exp.h"
#include "Visitor.h"
#include <string>

class InstVarDecl;
class InstVarAccess : public Exp{
public:
    Exp* exp;
    std::string varName;
    InstVarDecl* varDec;

    InstVarAccess(int arow, int acol, Exp* aexp, const std::string avarName);

    virtual Visitor* accept(Visitor* v);
};

#endif