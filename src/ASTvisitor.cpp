#include "../include/ASTvisitor.h"

#include "../include/And.h"
#include "../include/ArrayLength.h" 
#include "../include/ArrayLookup.h" 
#include "../include/ArrayType.h" 
#include "../include/Assign.h" 
#include "../include/AstNode.h" 
#include "../include/BinExp.h" 
#include "../include/Block.h" 
#include "../include/BooleanType.h" 
#include "../include/Break.h" 
#include "../include/BreakTarget.h" 
#include "../include/Call.h" 
#include "../include/CallStatement.h" 
#include "../include/Case.h" 
#include "../include/Cast.h" 
#include "../include/ClassDecl.h" 
#include "../include/ClassDeclList.h" 
#include "../include/Decl.h" 
#include "../include/DeclList.h" 
#include "../include/Default.h"
#include "../include/Divide.h"
#include "../include/Equals.h"
#include "../include/Exp.h" 
#include "../include/ExpList.h" 
#include "../include/False.h" 
#include "../include/FormalDecl.h" 
#include "../include/GreaterThan.h" 
#include "../include/IdentifierExp.h" 
#include "../include/IdentifierType.h"
#include "../include/If.h" 
#include "../include/InstVarAccess.h" 
#include "../include/InstVarDecl.h" 
#include "../include/InstanceOf.h" 
#include "../include/IntegerLiteral.h" 
#include "../include/IntegerType.h" 
#include "../include/Label.h" 
#include "../include/LessThan.h" 
#include "../include/LocalDeclStatement.h" 
#include "../include/LocalVarDecl.h" 
#include "../include/MethodDecl.h" 
#include "../include/MethodDeclNonVoid.h" 
#include "../include/MethodDeclVoid.h" 
#include "../include/Minus.h" 
#include "../include/NewArray.h" 
#include "../include/NewObject.h" 
#include "../include/Not.h" 
#include "../include/Null.h" 
#include "../include/NullType.h" 
#include "../include/Or.h" 
#include "../include/Plus.h" 
#include "../include/Program.h"
#include "../include/Remainder.h" 
#include "../include/Statement.h" 
#include "../include/StatementList.h" 
#include "../include/StringLiteral.h" 
#include "../include/Super.h" 
#include "../include/Switch.h" 
#include "../include/This.h" 
#include "../include/Times.h" 
#include "../include/True.h" 
#include "../include/Type.h" 
#include "../include/UnExp.h" 
#include "../include/VarDecl.h" 
#include "../include/VarDeclList.h" 
#include "../include/VoidType.h" 
#include "../include/While.h"

ASTvisitor::ASTvisitor() :
Visitor()
{}

Visitor* ASTvisitor::visitAnd(And* node){
    return ASTvisitor::visitBinExp(node);
}

Visitor* ASTvisitor::visitArrayLength(ArrayLength* node){
    return ASTvisitor::visitUnExp(node);
}

Visitor* ASTvisitor::visitArrayLookup(ArrayLookup* node){
    this->visitExp(node);
    node->arrExp->accept(this);
    node->idxExp->accept(this);
    return nullptr;
}

Visitor* ASTvisitor::visitArrayType(ArrayType* node){
    this->visitType(node);
    node->baseType->accept(this);
    return nullptr;
}

Visitor* ASTvisitor::visitAssign(Assign* node){
    this->visitStatement(node);
    node->lhs->accept(this);
    node->rhs->accept(this);
    return nullptr;
}

Visitor* ASTvisitor::visitAstNode(AstNode* node){
    return nullptr;
}

Visitor* ASTvisitor::visitBinExp(BinExp* node){
    this->visitExp(node);
    node->left->accept(this);
    node->right->accept(this);
    return nullptr;
}

Visitor* ASTvisitor::visitBlock(Block* node){
    this->visitStatement(node);
    node->stmts->accept(this);
    return nullptr;
}

Visitor* ASTvisitor::visitBooleanType(BooleanType* node){
    return this->visitType(node);
}

Visitor* ASTvisitor::visitBreak(Break* node){
    return this->visitStatement(node);
}

Visitor* ASTvisitor::visitBreakTarget(BreakTarget* node){
    return this->visitStatement(node);
}

Visitor* ASTvisitor::visitCall(Call* node){
    this->visitExp(node);
    node->obj->accept(this);
    node->parms->accept(this);
    return nullptr;
}

Visitor* ASTvisitor::visitCallStatement(CallStatement* node){
    this->visitStatement(node);
    node->callExp->accept(this);
    return nullptr;
}

Visitor* ASTvisitor::visitCase(Case* node){
    this->visitLabel(node);
    node->exp->accept(this);
    return nullptr;
}

Visitor* ASTvisitor::visitCast(Cast* node){
    this->visitExp(node);
    node->castType->accept(this);
    node->exp->accept(this);
    return nullptr;
}

Visitor* ASTvisitor::visitClassDecl(ClassDecl* node){
    this->visitDecl(node);
    node->decls->accept(this);
    return nullptr;
}

Visitor* ASTvisitor::visitClassDeclList(ClassDeclList* node){
    for(int i = 0; i < node->lst.size(); ++i){
        ClassDecl* classDecl = node->lst[i];

        if(classDecl != nullptr){
            classDecl->accept(this);
        }
    }
    return nullptr;
}

Visitor* ASTvisitor::visitDecl(Decl* node){
    return visitAstNode(node);
}

Visitor* ASTvisitor::visitDeclList(DeclList* node){
    for(int i = 0; i < node->lst.size(); ++i){
        Decl* decl = node->lst[i];

        if(decl != nullptr){
            decl->accept(this);
        }
    }
    return nullptr;
}

Visitor* ASTvisitor::visitDefault(Default* node){
    return this->visitLabel(node);
}

Visitor* ASTvisitor::visitDivide(Divide* node){
    return this->visitBinExp(node);
}

Visitor* ASTvisitor::visitEquals(Equals* node){
    return this->visitBinExp(node);
}

Visitor* ASTvisitor::visitExp(Exp* node){
    return this->visitAstNode(node);
}

Visitor* ASTvisitor::visitExpList(ExpList* node){
    for(int i = 0; i < node->lst.size(); ++i){
        Exp* exp = node->lst[i];

        if(exp != nullptr){
            exp->accept(this);
        }
    }
    return nullptr;
}

Visitor* ASTvisitor::visitFalse(False* node){
    return this->visitExp(node);
}

Visitor* ASTvisitor::visitFormalDecl(FormalDecl* node){
    return this->visitVarDecl(node);
}

Visitor* ASTvisitor::visitGreaterThan(GreaterThan* node){
    return this->visitBinExp(node);
}

Visitor* ASTvisitor::visitIdentifierExp(IdentifierExp* node){
    return this->visitExp(node);
}

Visitor* ASTvisitor::visitIdentifierType(IdentifierType* node){
    return this->visitType(node);
}

Visitor* ASTvisitor::visitIf(If* node){
    this->visitStatement(node);
    node->exp->accept(this);
    node->trueStmt->accept(this);
    node->falseStmt->accept(this);
    return nullptr;
}

Visitor* ASTvisitor::visitInstanceOf(InstanceOf* node){
    this->visitExp(node);
    node->exp->accept(this);
    node->checkType->accept(this);
    return nullptr;
}

Visitor* ASTvisitor::visitInstVarAccess(InstVarAccess* node){
    this->visitExp(node);
    node->exp->accept(this);
    return nullptr;
}

Visitor* ASTvisitor::visitInstVarDecl(InstVarDecl* node){
    return this->visitVarDecl(node);
}

Visitor* ASTvisitor::visitIntegerLiteral(IntegerLiteral* node){
    return this->visitExp(node);
}

Visitor* ASTvisitor::visitIntegerType(IntegerType* node){
    return this->visitType(node);
}

Visitor* ASTvisitor::visitLabel(Label* node){
    return this->visitStatement(node);
}

Visitor* ASTvisitor::visitLessThan(LessThan* node){
    return this->visitBinExp(node);
}

Visitor* ASTvisitor::visitLocalDeclStatement(LocalDeclStatement* node){
    this->visitStatement(node);
    node->localVarDecl->accept(this);
    return nullptr;
}

Visitor* ASTvisitor::visitLocalVarDecl(LocalVarDecl* node){
    this->visitVarDecl(node);
    node->initExp->accept(this);
    return nullptr;
}

Visitor* ASTvisitor::visitMethodDecl(MethodDecl* node){
    this->visitDecl(node);
    node->formals->accept(this);
    node->stmts->accept(this);
    return nullptr;
}

Visitor* ASTvisitor::visitMethodDeclNonVoid(MethodDeclNonVoid* node){
    this->visitMethodDecl(node);
    node->rtnType->accept(this);
    node->rtnExp->accept(this);
    return nullptr;
}

Visitor* ASTvisitor::visitMethodDeclVoid(MethodDeclVoid* node){
    this->visitMethodDecl(node);
}

Visitor* ASTvisitor::visitMinus(Minus* node){
    this->visitBinExp(node);
}

Visitor* ASTvisitor::visitNewArray(NewArray* node){
    this->visitExp(node);
    node->objType->accept(this);
    node->sizeExp->accept(this);
    return nullptr;
}

Visitor* ASTvisitor::visitNewObject(NewObject* node){
    this->visitExp(node);
    node->objType->accept(this);
    return nullptr;
}

Visitor* ASTvisitor::visitNot(Not* node){
    return this->visitUnExp(node);
}

Visitor* ASTvisitor::visitNull(Null* node){
    return this->visitExp(node);
}

Visitor* ASTvisitor::visitNullType(NullType* node){
    return this->visitType(node);
}

Visitor* ASTvisitor::visitOr(Or* node){
    return this->visitBinExp(node);
}

Visitor* ASTvisitor::visitPlus(Plus* node){
    return this->visitBinExp(node);
}

Visitor* ASTvisitor::visitProgram(Program* node){
    this->visitAstNode(node);
    node->mainStatement->accept(this);
    node->classDecls->accept(this);
    return nullptr;
}

Visitor* ASTvisitor::visitRemainder(Remainder* node){
    this->visitBinExp(node);
}

Visitor* ASTvisitor::visitStatement(Statement* node){
    return this->visitAstNode(node);
}

Visitor* ASTvisitor::visitStatementList(StatementList* node){
    for(int i = 0; i < node->lst.size(); ++i){
        Statement* statement = node->lst[i];

        if(statement != nullptr){
            statement->accept(this);
        }
    }
    return nullptr;
}

Visitor* ASTvisitor::visitStringLiteral(StringLiteral* node){
    return this->visitExp(node);
}

Visitor* ASTvisitor::visitSuper(Super* node){
    return this->visitExp(node);
}

Visitor* ASTvisitor::visitSwitch(Switch* node){
    this->visitBreakTarget(node);
    node->exp->accept(this);
    node->stmts->accept(this);
    return nullptr;
}

Visitor* ASTvisitor::visitThis(This* node){
    return this->visitExp(node);
}

Visitor* ASTvisitor::visitTimes(Times* node){
    return this->visitBinExp(node);
}

Visitor* ASTvisitor::visitTrue(True* node){
    return this->visitExp(node);
}

Visitor* ASTvisitor::visitType(Type* node){
    return this->visitAstNode(node);
}  

Visitor* ASTvisitor::visitUnExp(UnExp* node){
    this->visitExp(node);
    node->exp->accept(this);
    return nullptr;
}

Visitor* ASTvisitor::visitVarDecl(VarDecl* node){
    this->visitDecl(node);
    node->type->accept(this);
    return nullptr;
}

Visitor* ASTvisitor::visitVarDeclList(VarDeclList* node){
    for(int i = 0; i < node->lst.size(); ++i){
        VarDecl* varDecl = node->lst[i];

        if(varDecl != nullptr){
            varDecl->accept(this);
        }
    }
    return nullptr;
}

Visitor* ASTvisitor::visitVoidType(VoidType* node){
    return this->visitType(node);
}

Visitor* ASTvisitor::visitWhile(While* node){
    this->visitBreakTarget(node);
    node->exp->accept(this);
    node->body->accept(this);
    return nullptr;
}