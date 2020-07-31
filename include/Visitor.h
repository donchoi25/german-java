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
class BooleanType;
class Break;
class BreakTarget;
class Call;
class CallStatement;
class Case;
class Cast;
class ClassDeclList;

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

    virtual Visitor* visitBooleanType(BooleanType* node) = 0;

    virtual Visitor* visitBreak(Break* node) = 0;

    virtual Visitor* visitBreakTarget(BreakTarget* node) = 0;

    virtual Visitor* visitCall(Call* node) = 0;

    virtual Visitor* visitCallStatement(CallStatement* node) = 0;

    virtual Visitor* visitCase(Case* node) = 0;

    virtual Visitor* visitCast(Cast* node) = 0;

    virtual Visitor* visitClassDeclList(ClassDeclList* node) = 0;
};

#endif