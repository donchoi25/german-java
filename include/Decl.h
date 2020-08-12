#ifndef DECL_H
#define DECL_H

#include "AstNode.h"
#include "Visitor.h"
#include <string>

class Type;
class Visitor;
class Decl : public AstNode{
public: 
    std::string name;

    Decl(int arow, int acol, const std::string aname);

    virtual Visitor* accept(Visitor* v);
};

#endif