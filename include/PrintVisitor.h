#ifndef PRINTVISITOR_H
#define PRINTVISITOR_H

#include "ASTvisitor.h"
#include <iostream>

class PrintVisitor : public ASTvisitor{
private:
    int level;

    void printLevel();
public:
    PrintVisitor();

    virtual Visitor* visitAnd(And* node);

    virtual Visitor* visitArrayLength(ArrayLength* node);

    virtual Visitor* visitArrayLookup(ArrayLookup* node);

    virtual Visitor* visitArrayType(ArrayType* node);

    virtual Visitor* visitAssign(Assign* node);

    virtual Visitor* visitBlock(Block* node);

    virtual Visitor* visitBooleanType(BooleanType* node);

    virtual Visitor* visitBreak(Break* node);

    virtual Visitor* visitCall(Call* node);

    virtual Visitor* visitCase(Case* node);

    virtual Visitor* visitCast(Cast* node);

    virtual Visitor* visitClassDecl(ClassDecl* node);

    virtual Visitor* visitDefault(Default* node);

    virtual Visitor* visitDivide(Divide* node);

    virtual Visitor* visitEquals(Equals* node);

    virtual Visitor* visitFalse(False* node);

    virtual Visitor* visitFormalDecl(FormalDecl* node);

    virtual Visitor* visitGreaterThan(GreaterThan* node);

    virtual Visitor* visitCallStatement(CallStatement* node);

    virtual Visitor* visitIf(If* node);

    virtual Visitor* visitIdentifierExp(IdentifierExp* node);

    virtual Visitor* visitIdentifierType(IdentifierType* node);

    virtual Visitor* visitInstanceOf(InstanceOf* node);

    virtual Visitor* visitInstVarAccess(InstVarAccess* node);

    virtual Visitor* visitInstVarDecl(InstVarDecl* node);

    virtual Visitor* visitIntegerLiteral(IntegerLiteral* node);

    virtual Visitor* visitIntegerType(IntegerType* node);

    virtual Visitor* visitLessThan(LessThan* node);

    virtual Visitor* visitLocalDeclStatement(LocalDeclStatement* node);

    virtual Visitor* visitLocalVarDecl(LocalVarDecl* node);

    virtual Visitor* visitMethodDeclNonVoid(MethodDeclNonVoid* node);

    virtual Visitor* visitMethodDeclVoid(MethodDeclVoid* node);

    virtual Visitor* visitMinus(Minus* node);

    virtual Visitor* visitNewArray(NewArray* node);

    virtual Visitor* visitNewObject(NewObject* node);

    virtual Visitor* visitNot(Not* node);

    virtual Visitor* visitNull(Null* node);

    virtual Visitor* visitNullType(NullType* node);

    virtual Visitor* visitOr(Or* node);

    virtual Visitor* visitPlus(Plus* node);

    virtual Visitor* visitProgram(Program* node);

    virtual Visitor* visitRemainder(Remainder* node);

    virtual Visitor* visitStringLiteral(StringLiteral* node);

    virtual Visitor* visitSuper(Super* node);
    
    virtual Visitor* visitSwitch(Switch* node);

    virtual Visitor* visitThis(This* node);

    virtual Visitor* visitTimes(Times* node);

    virtual Visitor* visitTrue(True* node);

    virtual Visitor* visitVoidType(VoidType* node);

    virtual Visitor* visitWhile(While* node);
};

#endif