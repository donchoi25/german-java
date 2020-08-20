#ifndef AST_NODE_H
#define AST_NODE_H


class Visitor;
class AstNode {
public: 
    int row;
    int col;

    AstNode(int arow, int acol);

    virtual Visitor* accept(Visitor* v);

    void printLoc();
};

#endif