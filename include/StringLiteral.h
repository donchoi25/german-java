#ifndef STRINGLITERAL_H
#define STRINGLITERAL_H

#include "Exp.h"
#include "Visitor.h"
#include <string>

class StringLiteral : public Exp{
public:
    std::string str;
    StringLiteral* uniqueCgRep; //for code generation

    StringLiteral(int arow, int acol, const std::string astr);

    virtual Visitor* accept(Visitor* v);
};

#endif