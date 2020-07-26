#ifndef VISITOR_H
#define VISITOR_H

class AstNode;
class And;
class ClassDecl;

class Visitor{
public:
    virtual void visitAnd(And* node);

    virtual void visitClassDecl(ClassDecl* node);
};

#endif