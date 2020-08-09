%code top{
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include "include/nodes.h"

extern int yylex();
extern int yyparse();
extern FILE* yyin;

Program* RootProgram;

void yyerror(const char* s);
}
%locations

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

%token ID
%token INTLIT
%token STRINGLIT
%token CHARLIT

%type <NClassDecl> class-decl
%type <NClassDeclList> class-decl-list
%type <NDeclList> decl-in-class-list
%type <Str> ID STRINGLIT
%type <NDecl> decl-in-class method-decl
%type <NStatementList> stmt-decl-list
%type <NStatement> stmt-decl stmt
%type <NExp> exp exp8 exp7 exp6 exp5 exp4 exp3 exp2 exp1 cast-exp unary-exp callExp
%type <NExpList> exp-list
%type <NType> type
%type <Int> empty-bracket-list INTLIT CHARLIT

%start program

%%

program:
	class-decl-list { RootProgram = new Program($1); }
;

class-decl-list:
	class-decl { $$ = new ClassDeclList(); $$->push_back($1); }
|	class-decl-list class-decl { $1->push_back($2); }

type:
	_int { $$ = new IntegerType(); }
|	_boolean { $$ = new BooleanType(); }
|	ID { $$ = new IdentifierType(""); }
|	type '[' ']' { $$ = new ArrayType($1); }
;

class-decl:
	_class ID '{' decl-in-class-list '}' { $$ = new ClassDecl(*$2, "Object", $4); }
|	_class ID _extends ID '{' decl-in-class-list '}' { $$ = new ClassDecl("", "", $6); }	
;

decl-in-class-list:
	decl-in-class { $$ = new DeclList(); $$->push_back($1); }
|	decl-in-class-list decl-in-class { $1->push_back($2); }
;

decl-in-class:
	method-decl { $$ = $1; }
;

method-decl:
	_public _void ID '(' ')' '{' stmt-decl-list '}' { $$ = new MethodDeclVoid("", new VarDeclList(), $7); }
;

stmt-decl-list:
	%empty
|	stmt-decl { $$ = new StatementList(); $$->push_back($1); }
|	stmt-decl-list stmt-decl  { $1->push_back($2); }
;

stmt-decl:
	stmt { $$ = $1; }
;

stmt:
	'{' stmt-decl-list '}' { $$ = new Block($2); }
|	_if '(' exp ')' stmt { $$ = new If($3, $5, new Block(new StatementList())); }	

;

exp:
	exp8 { $$ = $1; }
;

exp8:
	exp8 '|' '|' exp7 { $$ = new Or($1, $4); }
|	exp7 { $$ = $1; }
;

exp7:
	exp7 '&' '&' exp6 { $$ = new And($1, $4); }
|	exp6 { $$ = $1; }
;

exp6: 
	exp6 '=' '=' exp5 { $$ = new Equals($1, $4); }
|	exp6 '!' '=' exp5 { $$ = new Not(new Equals($1, $4)); }
|	exp5 { $$ = $1; }
;

exp5:
	exp5 '<' exp4 { $$ = new LessThan($1, $3); }
|	exp5 '>' exp4 { $$ = new GreaterThan($1, $3); }
|	exp5 '<' '=' exp4 { $$ = new Not(new GreaterThan($1, $4)); }
|	exp5 '>' '=' exp4 { $$ = new Not(new LessThan($1, $4)); }
|	exp5 _instanceof ID { $$ = new InstanceOf($1, new IdentifierType("")); }
|	exp4 { $$ = $1; }
;

exp4:
	exp4 '+' exp3 { $$ = new Plus($1, $3); }
|	exp4 '-' exp3 { $$ = new Minus($1, $3); }
|	exp3 { $$ = $1; }
;

exp3:
	exp3 '*' exp2 { $$ = new Times($1, $3); }
|	exp3 '/' exp2 { $$ = new Divide($1, $3); }
|	exp3 '%' exp2 { $$ = new Remainder($1, $3); }
|	exp2 { $$ = $1; }
;

exp2: 
	cast-exp { $$ = $1; }
|	unary-exp { $$ = $1; }
;


cast-exp:
	'(' type ')' cast-exp { $$ = new Cast($2, $4); }
|	'(' type ')' exp1 { $$ = new Cast($2, $4); }
;

unary-exp:
	'-' unary-exp { $$ = new Minus(new IntegerLiteral(0), $2); }
|	'!' unary-exp { $$ = new Not($2); }
|	'+' unary-exp { $$ = new Plus(new IntegerLiteral(0), $2); }
|	exp1 { $$ = $1; }
;


exp1:
	ID { $$ = new IdentifierExp(""); }
|	exp1 '[' exp ']' { $$ = new ArrayLookup($1, $3); }
|	_new type '[' exp ']' empty-bracket-list 
	{ 
		if($6 > 0){
			Type* arrayType = new ArrayType($2);

			for(int i = 0; i < $6; ++i){
				arrayType = new ArrayType(arrayType);
			}

			$$ = new NewArray(arrayType, $4);
		}
		else{
			$$ = new NewArray($2, $4);
		}
	}
|	_new ID '(' ')' { $$ = new NewObject(new IdentifierType("")); }
|	INTLIT { $$ = new IntegerLiteral($1); }
|	callExp { $$ = $1; }
|	STRINGLIT { $$ = new StringLiteral(""); }
|	exp1 '.' ID { $$ = new InstVarAccess($1, *$3); }
|	_this { $$ = new This(); }
|	_false { $$ = new False(); }
|	_true { $$ = new True(); }
|	_null { $$ = new Null(); }
|	CHARLIT { $$ = new IntegerLiteral($1); }
|	'(' exp ')' { $$ = $2; }
;

callExp:
	ID '(' ')' { $$ = new Call(new This(), "", new ExpList()); }
|	ID '(' exp-list ')' { $$ = new Call(new This(), "", $3); }
|	_super '.' ID '(' ')' { $$ = new Call(new Super(), "", new ExpList()); }
|	_super '.' ID '(' exp-list ')' { $$ = new Call(new Super(), "", $5); }
|	exp1 '.' ID '(' ')' { $$ = new Call($1, "", new ExpList()); }
|	exp1 '.' ID '(' exp-list ')' { $$ = new Call($1, "", $5); }
; 

exp-list: 
	exp { $$ = new ExpList(); $$->push_back($1); }
|	exp-list ',' exp { $$->push_back($3); }
;

empty-bracket-list:
	'[' ']' { $$ = 1; }
|	empty-bracket-list '[' ']' { $1++; }
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
	return 0;
}

void reportTok(char* out){
	/* printf("Line %d.%d: %s\n", 
		yylloc.first_line,yylloc.first_column, out); */
}

void yyerror(const char* s) {
	fprintf(stderr, "Error on Line %d.%d: %s\n", 
		yylloc.first_line,yylloc.first_column,s);
	exit(1);
}