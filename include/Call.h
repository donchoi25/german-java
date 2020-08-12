#ifndef CALL_H
#define CALL_H

#include "Exp.h"
#include "Visitor.h"
#include <string>

class ExpList;
class MethodDecl;
class Call : public Exp{
public:
    Exp* obj;
    std::string methName;
    ExpList* parms;
    MethodDecl* methodLink;

    Call(int arow, int acol, Exp *aobj, const std::string amethName, ExpList* aparms);

    virtual Visitor* accept(Visitor* v);
};

#endif