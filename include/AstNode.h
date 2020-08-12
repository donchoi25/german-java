#ifndef AST_NODE_H
#define AST_NODE_H


class Visitor;
class AstNode {
private:
    int row;
    int col;
public: 
    AstNode(int arow, int acol);

    virtual Visitor* accept(Visitor* v);

    void printLoc();
};

#endif