#ifndef DECL_H
#define DECL_H

#include "AstNode.h"
#include <string>

class Type;
class Visitor;
class Decl : public AstNode{
public: 
    std::string name;

    Decl(std::string aname);

    virtual Visitor* accept(Visitor* v) = 0;
};

#endif