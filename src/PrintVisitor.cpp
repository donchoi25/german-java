#include "../include/PrintVisitor.h"

PrintVisitor::PrintVisitor() : 
ASTvisitor(),
level(0)
{}

void PrintVisitor::printLevel(){
    for(int i = 0; i < level; ++i){
        printf(" ");
    }
}

Visitor* PrintVisitor::visitAnd(And* node){
    printLevel();
    printf("And\n");

    int rtnVal = level++;
    ASTvisitor::visitAnd(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitArrayLength(ArrayLength* node){
    printLevel();
    printf("ArrayLength\n");

    int rtnVal = level++;
    ASTvisitor::visitArrayLength(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitArrayLookup(ArrayLookup* node){
    printLevel();
    printf("ArrayLookup\n");

    int rtnVal = level++;
    ASTvisitor::visitArrayLookup(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitArrayType(ArrayType* node){
    printLevel();
    printf("ArrayType\n");

    int rtnVal = level++;
    ASTvisitor::visitArrayType(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitAssign(Assign* node){
    printLevel();
    printf("Assign\n");

    int rtnVal = level++;
    ASTvisitor::visitAssign(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitBlock(Block* node){
    printLevel();
    printf("Block\n");

    int rtnVal = level++;
    ASTvisitor::visitBlock(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitBooleanType(BooleanType* node){
    printLevel();
    printf("BooleanType\n");

    int rtnVal = level++;
    ASTvisitor::visitBooleanType(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitBreak(Break* node){
    printLevel();
    printf("Break\n");

    int rtnVal = level++;
    ASTvisitor::visitBreak(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitCall(Call* node){
    printLevel();
    printf("Call\n");

    int rtnVal = level++;
    ASTvisitor::visitCall(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitCase(Case* node){
    printLevel();
    printf("Case\n");

    int rtnVal = level++;
    ASTvisitor::visitCase(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitCast(Cast* node){
    printLevel();
    printf("Cast\n");

    int rtnVal = level++;
    ASTvisitor::visitCast(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitClassDecl(ClassDecl* node){
    printLevel();
    printf("ClassDeclaration\n");

    int rtnVal = level++;
    ASTvisitor::visitClassDecl(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitDefault(Default* node){
    printLevel();
    printf("Default\n");

    int rtnVal = level++;
    ASTvisitor::visitDefault(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitDivide(Divide* node){
    printLevel();
    printf("Divide\n");

    int rtnVal = level++;
    ASTvisitor::visitDivide(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitEquals(Equals* node){
    printLevel();
    printf("Equals\n");

    int rtnVal = level++;
    ASTvisitor::visitEquals(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitFalse(False* node){
    printLevel();
    printf("False\n");

    int rtnVal = level++;
    ASTvisitor::visitFalse(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitFormalDecl(FormalDecl* node){
    printLevel();
    printf("FormalDecl\n");

    int rtnVal = level++;
    ASTvisitor::visitFormalDecl(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitGreaterThan(GreaterThan* node){
    printLevel();
    printf("GreaterThan\n");

    int rtnVal = level++;
    ASTvisitor::visitGreaterThan(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitCallStatement(CallStatement* node){
    printLevel();
    printf("CallStatement\n");

    int rtnVal = level++;
    ASTvisitor::visitCallStatement(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitIf(If* node){
    printLevel();
    printf("If\n");

    int rtnVal = level++;
    ASTvisitor::visitIf(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitIdentifierExp(IdentifierExp* node){
    printLevel();
    printf("IdentifierExp\n");

    int rtnVal = level++;
    ASTvisitor::visitIdentifierExp(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitIdentifierType(IdentifierType* node){
    printLevel();
    printf("IdentifierType\n");

    int rtnVal = level++;
    ASTvisitor::visitIdentifierType(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitInstanceOf(InstanceOf* node){
    printLevel();
    printf("InstanceOf\n");

    int rtnVal = level++;
    ASTvisitor::visitInstanceOf(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitInstVarAccess(InstVarAccess* node){
    printLevel();
    printf("InstVarAccess\n");

    int rtnVal = level++;
    ASTvisitor::visitInstVarAccess(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitInstVarDecl(InstVarDecl* node){
    printLevel();
    printf("InstVarDecl\n");

    int rtnVal = level++;
    ASTvisitor::visitInstVarDecl(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitIntegerLiteral(IntegerLiteral* node){
    printLevel();
    printf("IntegerLiteral\n");

    int rtnVal = level++;
    ASTvisitor::visitIntegerLiteral(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitIntegerType(IntegerType* node){
    printLevel();
    printf("IntegerType\n");

    int rtnVal = level++;
    ASTvisitor::visitIntegerType(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitLessThan(LessThan* node){
    printLevel();
    printf("LessThan\n");

    int rtnVal = level++;
    ASTvisitor::visitLessThan(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitLocalDeclStatement(LocalDeclStatement* node){
    printLevel();
    printf("LocalDeclStatement\n");

    int rtnVal = level++;
    ASTvisitor::visitLocalDeclStatement(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitLocalVarDecl(LocalVarDecl* node){
    printLevel();
    printf("LocalVarDecl\n");

    int rtnVal = level++;
    ASTvisitor::visitLocalVarDecl(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitMethodDeclNonVoid(MethodDeclNonVoid* node){
    printLevel();
    printf("MethodDeclNonVoid\n");

    int rtnVal = level++;
    ASTvisitor::visitMethodDeclNonVoid(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitMethodDeclVoid(MethodDeclVoid* node){
    printLevel();
    printf("MethodDeclVoid\n");

    int rtnVal = level++;
    ASTvisitor::visitMethodDeclVoid(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitMinus(Minus* node){
    printLevel();
    printf("Minus\n");

    int rtnVal = level++;
    ASTvisitor::visitMinus(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitNewArray(NewArray* node){
    printLevel();
    printf("NewArray\n");

    int rtnVal = level++;
    ASTvisitor::visitNewArray(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitNewObject(NewObject* node){
    printLevel();
    printf("NewObject\n");

    int rtnVal = level++;
    ASTvisitor::visitNewObject(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitNot(Not* node){
    printLevel();
    printf("Not\n");

    int rtnVal = level++;
    ASTvisitor::visitNot(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitNull(Null* node){
    printLevel();
    printf("Null\n");

    int rtnVal = level++;
    ASTvisitor::visitNull(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitNullType(NullType* node){
    printLevel();
    printf("NullType\n");

    int rtnVal = level++;
    ASTvisitor::visitNullType(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitOr(Or* node){
    printLevel();
    printf("Or\n");

    int rtnVal = level++;
    ASTvisitor::visitOr(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitPlus(Plus* node){
    printLevel();
    printf("Plus\n");

    int rtnVal = level++;
    ASTvisitor::visitPlus(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitProgram(Program* node){
    printLevel();
    printf("Program\n");

    int rtnVal = level++;
    ASTvisitor::visitProgram(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitRemainder(Remainder* node){
    printLevel();
    printf("Remainder\n");

    int rtnVal = level++;
    ASTvisitor::visitRemainder(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitStringLiteral(StringLiteral* node){
    printLevel();
    printf("StringLiteral\n");

    int rtnVal = level++;
    ASTvisitor::visitStringLiteral(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitSuper(Super* node){
    printLevel();
    printf("Super\n");

    int rtnVal = level++;
    ASTvisitor::visitSuper(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitSwitch(Switch* node){
    printLevel();
    printf("Switch\n");

    int rtnVal = level++;
    ASTvisitor::visitSwitch(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitThis(This* node){
    printLevel();
    printf("This\n");

    int rtnVal = level++;
    ASTvisitor::visitThis(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitTimes(Times* node){
    printLevel();
    printf("Times\n");

    int rtnVal = level++;
    ASTvisitor::visitTimes(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitTrue(True* node){
    printLevel();
    printf("True\n");

    int rtnVal = level++;
    ASTvisitor::visitTrue(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitVoidType(VoidType* node){
    printLevel();
    printf("VoidType\n");

    int rtnVal = level++;
    ASTvisitor::visitVoidType(node);
    level = rtnVal;
    return nullptr;
}

Visitor* PrintVisitor::visitWhile(While* node){
    printLevel();
    printf("While\n");

    int rtnVal = level++;
    ASTvisitor::visitWhile(node);
    level = rtnVal;
    return nullptr;
}