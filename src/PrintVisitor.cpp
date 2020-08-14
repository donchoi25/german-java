#include "../include/nodes.h"

#define PRINT(f)    \
    printLevel();  \
    printf(typeid(node).name());   \
    node->printLoc();   \
    printf("\n");    \
    int rtnVal = level++;   \
    f; \
    level = rtnVal; \
    return nullptr;

PrintVisitor::PrintVisitor() :  
ASTvisitor(),
level(0)
{}

void PrintVisitor::printLevel(){
    for(int i = 0; i < level; ++i){
        printf("  ");
    }
}
        
Visitor* PrintVisitor::visitAnd(And* node){
    PRINT(ASTvisitor::visitAnd(node))
}

Visitor* PrintVisitor::visitArrayLength(ArrayLength* node){
    PRINT(ASTvisitor::visitArrayLength(node))
}

Visitor* PrintVisitor::visitArrayLookup(ArrayLookup* node){
    PRINT(ASTvisitor::visitArrayLookup(node))
}

Visitor* PrintVisitor::visitArrayType(ArrayType* node){
    PRINT(ASTvisitor::visitArrayType(node))
}

Visitor* PrintVisitor::visitAssign(Assign* node){
    PRINT(ASTvisitor::visitAssign(node))
}

Visitor* PrintVisitor::visitBlock(Block* node){
    PRINT(ASTvisitor::visitBlock(node))
}

Visitor* PrintVisitor::visitBooleanType(BooleanType* node){
    PRINT(ASTvisitor::visitBooleanType(node))
}

Visitor* PrintVisitor::visitBreak(Break* node){
    PRINT(ASTvisitor::visitBreak(node))
}

Visitor* PrintVisitor::visitCall(Call* node){
    PRINT(ASTvisitor::visitCall(node))
}

Visitor* PrintVisitor::visitCase(Case* node){
    PRINT(ASTvisitor::visitCase(node))
}

Visitor* PrintVisitor::visitCast(Cast* node){
    PRINT(ASTvisitor::visitCast(node))
}

Visitor* PrintVisitor::visitClassDecl(ClassDecl* node){
    PRINT(ASTvisitor::visitClassDecl(node))
}

Visitor* PrintVisitor::visitDefault(Default* node){
    PRINT(ASTvisitor::visitDefault(node))
}

Visitor* PrintVisitor::visitDivide(Divide* node){
    PRINT(ASTvisitor::visitDivide(node))
}

Visitor* PrintVisitor::visitEquals(Equals* node){
    PRINT(ASTvisitor::visitEquals(node))
}

Visitor* PrintVisitor::visitFalse(False* node){
    PRINT(ASTvisitor::visitFalse(node))
}

Visitor* PrintVisitor::visitFormalDecl(FormalDecl* node){
    PRINT(ASTvisitor::visitFormalDecl(node))
}

Visitor* PrintVisitor::visitGreaterThan(GreaterThan* node){
    PRINT(ASTvisitor::visitGreaterThan(node))
}

Visitor* PrintVisitor::visitCallStatement(CallStatement* node){
    PRINT(ASTvisitor::visitCallStatement(node))
}

Visitor* PrintVisitor::visitIf(If* node){
    PRINT(ASTvisitor::visitIf(node))
}

Visitor* PrintVisitor::visitIdentifierExp(IdentifierExp* node){
    PRINT(ASTvisitor::visitIdentifierExp(node))
}

Visitor* PrintVisitor::visitIdentifierType(IdentifierType* node){
    PRINT(ASTvisitor::visitIdentifierType(node))
}

Visitor* PrintVisitor::visitInstanceOf(InstanceOf* node){
    PRINT(ASTvisitor::visitInstanceOf(node))
}

Visitor* PrintVisitor::visitInstVarAccess(InstVarAccess* node){
    PRINT(ASTvisitor::visitInstVarAccess(node))
}

Visitor* PrintVisitor::visitInstVarDecl(InstVarDecl* node){
    PRINT(ASTvisitor::visitInstVarDecl(node))
}

Visitor* PrintVisitor::visitIntegerLiteral(IntegerLiteral* node){
    PRINT(ASTvisitor::visitIntegerLiteral(node))
}

Visitor* PrintVisitor::visitIntegerType(IntegerType* node){
    PRINT(ASTvisitor::visitIntegerType(node))
}

Visitor* PrintVisitor::visitLessThan(LessThan* node){
    PRINT(ASTvisitor::visitLessThan(node))
}

Visitor* PrintVisitor::visitLocalDeclStatement(LocalDeclStatement* node){
    PRINT(ASTvisitor::visitLocalDeclStatement(node))
}

Visitor* PrintVisitor::visitLocalVarDecl(LocalVarDecl* node){
    PRINT(ASTvisitor::visitLocalVarDecl(node))
}

Visitor* PrintVisitor::visitMethodDeclNonVoid(MethodDeclNonVoid* node){
    PRINT(ASTvisitor::visitMethodDeclNonVoid(node))
}

Visitor* PrintVisitor::visitMethodDeclVoid(MethodDeclVoid* node){
    PRINT(ASTvisitor::visitMethodDeclVoid(node))
}

Visitor* PrintVisitor::visitMinus(Minus* node){
   
    
    PRINT(ASTvisitor::visitMinus(node))
}

Visitor* PrintVisitor::visitNewArray(NewArray* node){
    PRINT(ASTvisitor::visitNewArray(node))
}

Visitor* PrintVisitor::visitNewObject(NewObject* node){
    PRINT(ASTvisitor::visitNewObject(node))
}

Visitor* PrintVisitor::visitNot(Not* node){
    PRINT(ASTvisitor::visitNot(node))
}

Visitor* PrintVisitor::visitNull(Null* node){
    PRINT(ASTvisitor::visitNull(node))
}

Visitor* PrintVisitor::visitNullType(NullType* node){

    PRINT(ASTvisitor::visitNullType(node))
}

Visitor* PrintVisitor::visitOr(Or* node){
   
    PRINT(ASTvisitor::visitOr(node))
}

Visitor* PrintVisitor::visitPlus(Plus* node){
    PRINT(ASTvisitor::visitPlus(node))
}

Visitor* PrintVisitor::visitProgram(Program* node){

    PRINT(ASTvisitor::visitProgram(node))
}

Visitor* PrintVisitor::visitRemainder(Remainder* node){
   

    PRINT(ASTvisitor::visitRemainder(node))
}

Visitor* PrintVisitor::visitStringLiteral(StringLiteral* node){

    PRINT(ASTvisitor::visitStringLiteral(node))
}

Visitor* PrintVisitor::visitSuper(Super* node){
   
    
    PRINT(ASTvisitor::visitSuper(node))
}

Visitor* PrintVisitor::visitSwitch(Switch* node){
    PRINT(ASTvisitor::visitSwitch(node))
}

Visitor* PrintVisitor::visitThis(This* node){
    PRINT(ASTvisitor::visitThis(node))
}

Visitor* PrintVisitor::visitTimes(Times* node){   
    PRINT(ASTvisitor::visitTimes(node))
}

Visitor* PrintVisitor::visitTrue(True* node){
    PRINT(ASTvisitor::visitTrue(node))
}

Visitor* PrintVisitor::visitVoidType(VoidType* node){
    PRINT(ASTvisitor::visitVoidType(node))
}

Visitor* PrintVisitor::visitWhile(While* node){
    PRINT(ASTvisitor::visitWhile(node))
}