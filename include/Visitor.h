#ifndef VISITOR_H
#define VISITOR_H

    class And;
	class ArrayLength; 
	class ArrayLookup; 
	class ArrayType; 
	class Assign; 
	class AstNode; 
	class BinExp; 
	class Block; 
	class BooleanType; 
	class Break; 
	class BreakTarget; 
	class Call; 
	class CallStatement; 
	class Case; 
	class Cast; 
	class ClassDecl; 
	class ClassDeclList; 
	class Decl; 
	class DeclList; 
	class Default;
	class Divide;
	class Equals;
	class Exp; 
	class ExpList; 
	class False; 
	class FormalDecl; 
	class GreaterThan; 
	class IdentifierExp; 
	class IdentifierType;
	class If; 
	class InstVarAccess; 
	class InstVarDecl; 
	class InstanceOf; 
	class IntegerLiteral; 
	class IntegerType; 
	class Label; 
	class LessThan; 
	class LocalDeclStatement; 
	class LocalVarDecl; 
	class MethodDecl; 
	class MethodDeclNonVoid; 
	class MethodDeclVoid; 
	class Minus; 
	class NewArray; 
	class NewObject; 
	class Not; 
	class Null; 
	class NullType; 
	class Or; 
	class Plus; 
	class Program;
	class Remainder; 
	class Statement; 
	class StatementList; 
	class StringLiteral; 
	class Super; 
	class Switch; 
	class This; 
	class Times; 
	class True; 
	class Type; 
	class UnExp; 
	class VarDecl; 
	class VarDeclList; 
	class VoidType; 
	class While; 
class Visitor{
public:
    Visitor();

    Visitor* visit(AstNode* n);

    virtual Visitor* visitAnd(And* node) = 0;
    
    virtual Visitor* visitArrayLength(ArrayLength* node) = 0;

    virtual Visitor* visitArrayLookup(ArrayLookup* node) = 0;

    virtual Visitor* visitArrayType(ArrayType* node) = 0;

    virtual Visitor* visitAssign(Assign* node) = 0;

    virtual Visitor* visitAstNode(AstNode* node) = 0;

    virtual Visitor* visitBinExp(BinExp* node) = 0;

    virtual Visitor* visitBlock(Block* node) = 0;

    virtual Visitor* visitBooleanType(BooleanType* node) = 0;

    virtual Visitor* visitBreak(Break* node) = 0;

    virtual Visitor* visitBreakTarget(BreakTarget* node) = 0;

    virtual Visitor* visitCall(Call* node) = 0;

    virtual Visitor* visitCallStatement(CallStatement* node) = 0;

    virtual Visitor* visitCase(Case* node) = 0;

    virtual Visitor* visitCast(Cast* node) = 0;

    virtual Visitor* visitClassDecl(ClassDecl* node) = 0;

    virtual Visitor* visitClassDeclList(ClassDeclList* node) = 0;

    virtual Visitor* visitDecl(Decl* node) = 0;

    virtual Visitor* visitDeclList(DeclList* node) = 0;

    virtual Visitor* visitDefault(Default* node) = 0;

    virtual Visitor* visitDivide(Divide* node) = 0;

    virtual Visitor* visitEquals(Equals* node) = 0;

    virtual Visitor* visitExp(Exp* node) = 0;

    virtual Visitor* visitExpList(ExpList* node) = 0;

    virtual Visitor* visitFalse(False* node) = 0;

    virtual Visitor* visitFormalDecl(FormalDecl* node) = 0;

    virtual Visitor* visitGreaterThan(GreaterThan* node) = 0;

    virtual Visitor* visitIdentifierExp(IdentifierExp* node) = 0;

    virtual Visitor* visitIdentifierType(IdentifierType* node) = 0;

    virtual Visitor* visitIf(If* node) = 0;

    virtual Visitor* visitInstanceOf(InstanceOf* node) = 0;

    virtual Visitor* visitInstVarAccess(InstVarAccess* node) = 0;

    virtual Visitor* visitInstVarDecl(InstVarDecl* node) = 0;

    virtual Visitor* visitIntegerLiteral(IntegerLiteral* node) = 0;

    virtual Visitor* visitIntegerType(IntegerType* node) = 0;

    virtual Visitor* visitLabel(Label* node) = 0;

    virtual Visitor* visitLessThan(LessThan* node) = 0;

    virtual Visitor* visitLocalDeclStatement(LocalDeclStatement* node) = 0;

    virtual Visitor* visitLocalVarDecl(LocalVarDecl* node) = 0;

    virtual Visitor* visitMethodDecl(MethodDecl* node) = 0;

    virtual Visitor* visitMethodDeclNonVoid(MethodDeclNonVoid* node) = 0;

    virtual Visitor* visitMethodDeclVoid(MethodDeclVoid* node) = 0;

    virtual Visitor* visitMinus(Minus* node) = 0;

    virtual Visitor* visitNewArray(NewArray* node) = 0;

    virtual Visitor* visitNewObject(NewObject* node) = 0;

    virtual Visitor* visitNot(Not* node) = 0;

    virtual Visitor* visitNull(Null* node) = 0;

    virtual Visitor* visitNullType(NullType* node) = 0;

    virtual Visitor* visitOr(Or* node) = 0;

    virtual Visitor* visitPlus(Plus* node) = 0;

    virtual Visitor* visitProgram(Program* node) = 0;

    virtual Visitor* visitRemainder(Remainder* node) = 0;

    virtual Visitor* visitStatement(Statement* node) = 0;

    virtual Visitor* visitStatementList(StatementList* node) = 0;

    virtual Visitor* visitStringLiteral(StringLiteral* node) = 0;

    virtual Visitor* visitSuper(Super* node) = 0;
    
    virtual Visitor* visitSwitch(Switch* node) = 0;

    virtual Visitor* visitThis(This* node) = 0;

    virtual Visitor* visitTimes(Times* node) = 0;

    virtual Visitor* visitTrue(True* node) = 0;

    virtual Visitor* visitType(Type* node) = 0;

    virtual Visitor* visitUnExp(UnExp* node) = 0;

    virtual Visitor* visitVarDecl(VarDecl* node) = 0;

    virtual Visitor* visitVarDeclList(VarDeclList* node) = 0;

    virtual Visitor* visitVoidType(VoidType* node) = 0;

    virtual Visitor* visitWhile(While* node) = 0;
};
#endif