#ifndef AST_NODE_H
#define AST_NODE_H

class Visitor;
class AstNode {
private:
public: 
    AstNode();

    virtual void accept(Visitor* v) = 0;
};

#endif