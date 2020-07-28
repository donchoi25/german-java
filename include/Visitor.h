#ifndef VISITOR_H
#define VISITOR_H

class AstNode;
class And;
class ClassDecl;
class IdentifierExp;
class Block;

class Visitor{
public:
    virtual Visitor* visitAnd(And* node) = 0;

    virtual Visitor* visitClassDecl(ClassDecl* node) = 0;

    virtual Visitor* visitIdentifierExp(IdentifierExp* node) = 0;

    virtual Visitor* visitBlock(Block* node) = 0;
};

#endif