#ifndef DECL_H
#define DECL_H

#include "AstNode.h"
#include <string>

class Type;
class Visitor;
class Decl : AstNode{
public: 
    std::string name;

    Decl(std::string aname);

    virtual void accept(Visitor* v) = 0;
};

#endif