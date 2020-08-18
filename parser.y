%code requires {
	#include <iostream>
	#include <stdio.h>
	#include <stdlib.h>
	#include <vector>
	#include <string>
	#include "assert.h"
	#include "include/nodes.h"

	extern int yylex();
	extern int yyparse();
	extern FILE* yyin;

	#define ROW(node) node .first_line
	#define COL(node) node .first_column

	void yyerror(const char* s);
}
%locations

%code provides {
	extern Program* RootProgram;
}

%code {
	Program* RootProgram;
}

%union {
	int Int;
	std::string* Str;

	And* NAnd;
	ArrayLength* NArrayLength;
	ArrayLookup* NArrayLookup;
	ArrayType* NArrayType;
	Assign* NAssign;
	AstNode* NAstNode;
	BinExp* NBinExp;
	Block* NBlock;
	BooleanType* NBooleanType;
	Break* NBreak;
	BreakTarget* NBreakTarget;
	Call* NCall;
	CallStatement* NCallStatement;
	Case* NCase;
	Cast* NCast;
	ClassDecl* NClassDecl;
	ClassDeclList* NClassDeclList;
	Decl* NDecl;
	DeclList* NDeclList;
	Default* NDefault;
	Divide* NDivide;
	Equals* NEquals;
	Exp* NExp;
	ExpList* NExpList;
	False* NFalse;
	FormalDecl* NFormalDecl;
	GreaterThan* NGreaterThan;
	IdentifierExp* NIdentifierExp;
	IdentifierType* NIdentifierType;
	If* NIf;
	InstVarAccess* NInstVarAccess;
	InstVarDecl* NInstVarDecl;
	InstanceOf* NInstanceOf;
	IntegerLiteral* NIntegerLiteral;
	IntegerType* NIntegerType;
	Label* NLabel;
	LessThan* NLessThan;
	LocalDeclStatement* NLocalDeclStatement;
	LocalVarDecl* NLocalVarDecl;
	MethodDecl* NMethodDecl;
	MethodDeclNonVoid* NMethodDeclNonVoid;
	MethodDeclVoid* NMethodDeclVoid;
	Minus* NMinus;
	NewArray* NNewArray;
	NewObject* NNewObject;
	Not* NNot;
	Null* NNull;
	NullType* NNullType;
	Or* NOr;
	Plus* NPlus;
	Program* NProgram;
	Remainder* NRemainder;
	Statement* NStatement;
	StatementList* NStatementList;
	StringLiteral* NStringLiteral;
	Super* NSuper;
	Switch* NSwitch;
	This* NThis;
	Times* NTimes;
	True* NTrue;
	Type* NType;
	UnExp* NUnExp;
	VarDecl* NVarDecl;
	VarDeclList* NVarDeclList;
	VoidType* NVoidType;
	While* NWhile;
}

/* Define our terminal symbols (tokens).Should match
   our lexer.l file.
*/
%token _boolean
%token _class
%token _extends
%token _void
%token _int
%token _while
%token _if
%token _else
%token _for
%token _break
%token _this
%token _false
%token _true
%token _super
%token _null
%token _return
%token _instanceof
%token _new
%token _abstract
%token _assert
%token _byte
%token _case
%token _catch
%token _char
%token _const
%token _continue
%token _default
%token _do
%token _double
%token _enum
%token _final
%token _finally
%token _float
%token _goto
%token _implements
%token _import
%token _interface
%token _long
%token _package
%token _private
%token _protected
%token _public
%token _short
%token _static
%token _strictfp
%token _switch
%token _synchronized
%token _throw
%token _throws
%token _transient
%token _try
%token _volatile
%token '!'
%token '%'
%token '&'
%token '*'
%token '('
%token ')'				
%token '{'
%token '}'
%left '-'
%left '+'
%token '='
%token '['
%token ']'
%token '|'
%token '<'
%token ','
%token '>'
%token '.'
%token ';'
%token '/'
%token ':'

%token <Str> ID INTLIT STRINGLIT CHARLIT


%type <NClassDecl> class-decl
%type <NClassDeclList> class-decl-1plus
%type <NDeclList> decl-in-class-0plus
%type <NDecl> decl-in-class method-decl inst-var-decl
%type <NStatementList> stmt-decl-0plus case-0plus
%type <NStatement> stmt-decl stmt assign local-var-decl case for initialization increment
%type <NExp> exp exp8 exp7 exp6 exp5 exp4 exp3 exp2 exp1 cast-exp unary-exp callExp termination 
%type <NExpList> exp-list
%type <NType> type
%type <NVarDeclList> formal-list formal-list-extended
%type <Int> empty-bracket-list

%start program

%%

program:
	class-decl-1plus { RootProgram = new Program(@$.first_line, COL(@$), $1); }
;

class-decl-1plus:
	class-decl { $$ = new ClassDeclList(); $$->push_back($1); }
|	class-decl-1plus class-decl { $1->push_back($2); }

type:
	_int { $$ = new IntegerType(ROW(@$), COL(@$)); }
|	_boolean { $$ = new BooleanType(ROW(@$), COL(@$)); }
|	ID { $$ = new IdentifierType(ROW(@$), COL(@$), *$1); }
|	type '[' ']' { $$ = new ArrayType(ROW(@$), COL(@$), $1); }
;

class-decl:
	_class ID '{' decl-in-class-0plus '}' { $$ = new ClassDecl(ROW(@$), COL(@$), *$2, "Object", $4); }
|	_class ID _extends ID '{' decl-in-class-0plus '}' { $$ = new ClassDecl(ROW(@$), COL(@$), *$2, *$4, $6); }	
;

decl-in-class-0plus:
	%empty { $$ = new DeclList(); }
|	decl-in-class { $$ = new DeclList(); $$->push_back($1); }
|	decl-in-class-0plus decl-in-class { $1->push_back($2); }
;

decl-in-class:
	method-decl { $$ = $1; }
|	inst-var-decl
;

inst-var-decl:
	type ID ';' { $$ = new InstVarDecl(ROW(@$), COL(@$), $1, *$2); }
;

method-decl:
	_public _void ID '(' ')' '{' stmt-decl-0plus '}' { $$ = new MethodDeclVoid(ROW(@$), COL(@$), *$3, new VarDeclList(), $7); }
|	_public _void ID '(' formal-list ')' '{' stmt-decl-0plus '}' { $$ = new MethodDeclVoid(ROW(@$), COL(@$), *$3, $5, $8); }
|	_public type ID '(' ')' '{' stmt-decl-0plus _return exp ';' '}' { $$ = new MethodDeclNonVoid(ROW(@$), COL(@$), $2, *$3, new VarDeclList(), $7, $9); }
|	_public type ID '(' formal-list ')' '{' stmt-decl-0plus _return exp ';' '}' { $$ = new MethodDeclNonVoid(ROW(@$), COL(@$), $2, *$3, $5, $8, $10); }
;

formal-list:
	type ID formal-list-extended{ 
		$3->push_front(new FormalDecl(ROW(@$), COL(@$), $1, *$2));
		$$ = $3;
	}
;

formal-list-extended:
	',' type ID { $$ = new VarDeclList(); $$->push_back(new FormalDecl(ROW(@$), COL(@$), $2, *$3)); }
|	formal-list-extended ',' type ID { $$->push_back(new FormalDecl(ROW(@$), COL(@$), $3, *$4)); }
;

stmt-decl-0plus:
	%empty { $$ = new StatementList(); }
|	stmt-decl { $$ = new StatementList(); $$->push_back($1); }
|	stmt-decl-0plus stmt-decl  { $1->push_back($2); }
;

stmt-decl:
	stmt { $$ = $1; }
|	local-var-decl { $$ = $1; }
;

local-var-decl:
	type ID '=' exp ';' { $$ = new LocalDeclStatement(ROW(@$), COL(@$), new LocalVarDecl(ROW(@$), COL(@$), $1, *$2, $4)); }
;

stmt:
	assign ';' { $$ = $1; }
|	callExp ';' { $$ = new CallStatement(ROW(@$), COL(@$), (Call*)$1); }
|	';' { $$ = new Block(ROW(@$), COL(@$), new StatementList()); }
|	_break ';' { $$ = new Break(ROW(@$), COL(@$)); }
|	'{' stmt-decl-0plus '}' { $$ = new Block(ROW(@$), COL(@$), $2); }
|	_while '(' exp ')' stmt { $$ = new While(ROW(@$), COL(@$), $3, $5); }
|	_do stmt _while '(' exp ')' {
		StatementList* body = new StatementList();
		body->push_back($2);
		body->push_back(new If(ROW(@$), COL(@$), new Not(ROW(@$), COL(@$), $5), new Break(ROW(@$), COL(@$)), new Block(ROW(@$), COL(@$), new StatementList())));

		$$ = new While(ROW(@$), COL(@$), new True(ROW(@$), COL(@$)), new Block(ROW(@$), COL(@$), body));
	}
|	_switch '(' exp ')' '{' case-0plus '}' { $$ = new Switch(ROW(@$), COL(@$), $3, $6); }
|	_if '(' exp ')' stmt { $$ = new If(ROW(@$), COL(@$), $3, $5, new Block(ROW(@$), COL(@$), new StatementList())); }
|	_if '(' exp ')' stmt _else stmt { $$ = new If(ROW(@$), COL(@$), $3, $5, $7); }
|	for { $$ = $1; }
;

for:
	_for '(' initialization ';' termination ';' increment ')' stmt {
		StatementList* stLst = new StatementList();
		stLst->push_back($3);

		StatementList* bodyList = new StatementList();
		bodyList->push_back($9);
		bodyList->push_back($7);
		stLst->push_back(new While(ROW(@$), COL(@$), $5, new Block(ROW(@$), COL(@$), bodyList)));
		$$ = new Block(ROW(@$), COL(@$), stLst);
	}
;

initialization:
	%empty { $$ = new Block(ROW(@$), COL(@$), new StatementList()); }
|	type ID '=' exp { $$ = new LocalDeclStatement(ROW(@$), COL(@$), new LocalVarDecl(ROW(@$), COL(@$), $1, *$2, $4)); }
|	assign { $$ = $1; }
|	callExp { $$ = new CallStatement(ROW(@$), COL(@$), (Call*)$1); }
;

termination:
	%empty { $$ = new True(ROW(@$), COL(@$)); }
|	exp { $$ = $1; }
;

increment:
	%empty { $$ = new Block(ROW(@$), COL(@$), new StatementList()); }
|	assign { $$ = $1; }
|	callExp { $$ = new CallStatement(ROW(@$), COL(@$), (Call*)$1); }
;

case-0plus:
	%empty { $$ = new StatementList(); }
|	case { $$ = new StatementList(); $$->push_back($1); }
|	case-0plus case { $1->push_back($2); }
;

case:
	stmt { $$ = $1; }
|	_case exp ':' { $$ = new Case(ROW(@$), COL(@$), $2); }
|	_default ':' { $$ = new Default(ROW(@$), COL(@$)); }
;

assign:
	exp1 '=' exp { $$ = new Assign(ROW(@$), COL(@$), $1, $3); }
|	ID '+' '+' { 
		Exp* e = new IdentifierExp(ROW(@$), COL(@$), *$1);
		$$ = new Assign(ROW(@$), COL(@$), e, new Plus(ROW(@$), COL(@$), e, new IntegerLiteral(ROW(@$), COL(@$), 1)));
	}
|	'+' '+' ID {
		Exp* e = new IdentifierExp(ROW(@$), COL(@$), *$3);
		$$ = new Assign(ROW(@$), COL(@$), e, new Plus(ROW(@$), COL(@$), e, new IntegerLiteral(ROW(@$), COL(@$), 1)));
	}
|	ID '-' '-' {
		Exp* e = new IdentifierExp(ROW(@$), COL(@$), *$1);
		$$ = new Assign(ROW(@$), COL(@$), e, new Minus(ROW(@$), COL(@$), e, new IntegerLiteral(ROW(@$), COL(@$), 1))); 
	}
|	'-' '-' ID {
		Exp* e = new IdentifierExp(ROW(@$), COL(@$), *$3);
		$$ = new Assign(ROW(@$), COL(@$), e, new Minus(ROW(@$), COL(@$), e, new IntegerLiteral(ROW(@$), COL(@$), 1))); 
	}
;

exp:
	exp8 { $$ = $1; }
;

exp8:
	exp8 '|' '|' exp7 { $$ = new Or(ROW(@$), COL(@$), $1, $4); }
|	exp7 { $$ = $1; }
;

exp7:
	exp7 '&' '&' exp6 { $$ = new And(ROW(@$), COL(@$), $1, $4); }
|	exp6 { $$ = $1; }
;

exp6: 
	exp6 '=' '=' exp5 { $$ = new Equals(ROW(@$), COL(@$), $1, $4); }
|	exp6 '!' '=' exp5 { $$ = new Not(ROW(@$), COL(@$), new Equals(ROW(@$), COL(@$), $1, $4)); }
|	exp5 { $$ = $1; }
;

exp5:
	exp5 '<' exp4 { $$ = new LessThan(ROW(@$), COL(@$), $1, $3); }
|	exp5 '>' exp4 { $$ = new GreaterThan(ROW(@$), COL(@$), $1, $3); }
|	exp5 '<' '=' exp4 { $$ = new Not(ROW(@$), COL(@$), new GreaterThan(ROW(@$), COL(@$), $1, $4)); }
|	exp5 '>' '=' exp4 { $$ = new Not(ROW(@$), COL(@$), new LessThan(ROW(@$), COL(@$), $1, $4)); }
|	exp5 _instanceof ID { $$ = new InstanceOf(ROW(@$), COL(@$), $1, new IdentifierType(ROW(@$), COL(@$), *$3)); }
|	exp4 { $$ = $1; }
;

exp4:
	exp4 '+' exp3 { $$ = new Plus(ROW(@$), COL(@$), $1, $3); }
|	exp4 '-' exp3 { $$ = new Minus(ROW(@$), COL(@$), $1, $3); }
|	exp3 { $$ = $1; }
;

exp3:
	exp3 '*' exp2 { $$ = new Times(ROW(@$), COL(@$), $1, $3); }
|	exp3 '/' exp2 { $$ = new Divide(ROW(@$), COL(@$), $1, $3); }
|	exp3 '%' exp2 { $$ = new Remainder(ROW(@$), COL(@$), $1, $3); }
|	exp2 { $$ = $1; }
;

exp2: 
	cast-exp { $$ = $1; }
|	unary-exp { $$ = $1; }
;


cast-exp:
	'(' type ')' cast-exp { $$ = new Cast(ROW(@$), COL(@$), $2, $4); }
|	'(' type ')' exp1 { $$ = new Cast(ROW(@$), COL(@$), $2, $4); }
;

unary-exp:
	'-' unary-exp { $$ = new Minus(ROW(@$), COL(@$), new IntegerLiteral(ROW(@$), COL(@$), 0), $2); }
|	'!' unary-exp { $$ = new Not(ROW(@$), COL(@$), $2); }
|	'+' unary-exp { $$ = new Plus(ROW(@$), COL(@$), new IntegerLiteral(ROW(@$), COL(@$), 0), $2); }
|	exp1 { $$ = $1; }
;


exp1:
	ID { $$ = new IdentifierExp(ROW(@$), COL(@$), *$1); }
|	exp1 '[' exp ']' { $$ = new ArrayLookup(ROW(@$), COL(@$), $1, $3); }
|	_new type '[' exp ']' empty-bracket-list 
	{ 
		if($6 > 0){
			Type* arrayType = new ArrayType(ROW(@$), COL(@$), $2);

			for(int i = 0; i < $6; ++i){
				arrayType = new ArrayType(ROW(@$), COL(@$), arrayType);
			}

			$$ = new NewArray(ROW(@$), COL(@$), arrayType, $4);
		}
		else{
			$$ = new NewArray(ROW(@$), COL(@$), $2, $4);
		}
	}
|	_new ID '(' ')' { $$ = new NewObject(ROW(@$), COL(@$), new IdentifierType(ROW(@$), COL(@$), *$2)); }
|	INTLIT { $$ = new IntegerLiteral(ROW(@$), COL(@$), atoi($1->c_str())); }
|	callExp { $$ = $1; }
|	STRINGLIT { $$ = new StringLiteral(ROW(@$), COL(@$), *$1); }
|	exp1 '.' ID { $$ = new InstVarAccess(ROW(@$), COL(@$), $1, *$3); }
|	_this { $$ = new This(ROW(@$), COL(@$)); }
|	_false { $$ = new False(ROW(@$), COL(@$)); }
|	_true { $$ = new True(ROW(@$), COL(@$)); }
|	_null { $$ = new Null(ROW(@$), COL(@$)); }
|	CHARLIT { $$ = new IntegerLiteral(ROW(@$), COL(@$), int(*($1->c_str()))); }
|	'(' exp ')' { $$ = $2; }
;

callExp:
	ID '(' ')' { $$ = new Call(ROW(@$), COL(@$), new This(ROW(@$), COL(@$)), *$1, new ExpList()); }
|	ID '(' exp-list ')' { $$ = new Call(ROW(@$), COL(@$), new This(ROW(@$), COL(@$)), *$1, $3); }
|	_super '.' ID '(' ')' { $$ = new Call(ROW(@$), COL(@$), new Super(ROW(@$), COL(@$)), *$3, new ExpList()); }
|	_super '.' ID '(' exp-list ')' { $$ = new Call(ROW(@$), COL(@$), new Super(ROW(@$), COL(@$)), *$3, $5); }
|	exp1 '.' ID '(' ')' { $$ = new Call(ROW(@$), COL(@$), $1, *$3, new ExpList()); }
|	exp1 '.' ID '(' exp-list ')' { $$ = new Call(ROW(@$), COL(@$), $1, *$3, $5); }
; 

exp-list: 
	exp { $$ = new ExpList(); $$->push_back($1); }
|	exp-list ',' exp { $$->push_back($3); }
;

empty-bracket-list:
	%empty { $$ = 0;}
|	'[' ']' { $$ = 0; }
|	empty-bracket-list '[' ']' { ++$$; }
;


%%
int main(int argc, char **argv){
	// open file
	FILE *myfile = fopen(argv[1], "r");

	//make sure file is valid
	if(!myfile){
		printf("%s", "Can't open file");
		return -1;
	}

	// set lex to read from file
	yyin = myfile;

	//lex through the input
	do	{
		yyparse();
	} while(!feof(yyin));

	fprintf(stderr, "Compiled Successfully\n");

	PrintVisitor* printVisitor = new PrintVisitor();
	Sem1Visitor* sem1Visitor = new Sem1Visitor();
	Sem2Visitor* sem2Visitor = new Sem2Visitor();
	Sem3Visitor* sem3Visitor = new Sem3Visitor();

	printVisitor->visitProgram(RootProgram);
	sem1Visitor->visitProgram(RootProgram);
	sem2Visitor->visitProgram(RootProgram);
	sem3Visitor->visitProgram(RootProgram);

	return 0;
}

void reportTok(char* out){
	/* printf("Line %d.%d: %s\n", 
		yylloc.first_line,yylloc.first_COL(@$)umn, out); */
}

void yyerror(const char* s) {
	fprintf(stderr, "Error on Line %d.%d: %s\n", 
		yylloc.first_line,yylloc.first_column,s);
	exit(1);
}