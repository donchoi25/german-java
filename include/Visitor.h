#ifndef VISITOR_H
#define VISITOR_H

class AstNode;
class And;
class ClassDecl;
class IdentifierExp;
class Block;
class ArrayLength;
class ArrayLookup;
class ArrayType;
class Assign;

class Visitor{
public:
    virtual Visitor* visitAnd(And* node) = 0;

    virtual Visitor* visitClassDecl(ClassDecl* node) = 0;

    virtual Visitor* visitIdentifierExp(IdentifierExp* node) = 0;

    virtual Visitor* visitBlock(Block* node) = 0;
    
    virtual Visitor* visitArrayLength(ArrayLength* node) = 0;

    virtual Visitor* visitArrayLookup(ArrayLookup* node) = 0;

    virtual Visitor* visitArrayType(ArrayType* node) = 0;

    virtual Visitor* visitAssign(Assign* node) = 0;
};

#endif