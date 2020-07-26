#ifndef VISITOR_H
#define VISITOR_H

class AstNode;
class And;

class Visitor{
public:
    virtual void visitAnd(And* node);
};

#endif