#ifndef CALLSTATEMENT_H
#define CALLSTATEMENT_H

#include "Statement.h"
#include "Visitor.h"

class Call;
class CallStatement : public Statement{
public:
    Call* callExp;

    CallStatement(Call* aexp);

    virtual Visitor* accept(Visitor* v);
};

#endif