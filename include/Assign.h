#ifndef ASSIGN_H
#define ASSIGN_H

#include "Visitor.h"
#include "Statement.h"

class Exp;
class Assign : public Statement{
public:
    Exp* lhs;
    Exp* rhs;

    Assign(int arow, int acol, Exp* alhs, Exp* arhs);
    
    virtual Visitor* accept(Visitor* v);
};

#endif