%{
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include "include/nodes.h"

extern int yylex();
extern int yyparse();
extern FILE* yyin;

void yyerror(const char* s);
%}
%locations

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

%start program

%type <classDecl> class-decl
%type <string> ID

%union {
	ClassDecl *classDecl;
	std::string *string;
}

%%

program:
	%empty
|	program class-decl 

;

type:
	_int
|	_boolean
|	ID
|	type '[' ']'
;

class-decl:
	_class ID '{' decl-in-class-list '}'
|	_class ID _extends ID '{' decl-in-class-list '}'	
;

decl-in-class-list:
	%empty
|	decl-in-class decl-in-class-list
;

decl-in-class:
	method-decl
;

method-decl:
	_public _void ID '(' ')' '{' stmt-decl-list '}'
;

stmt-decl-list:
	%empty
|	stmt-decl-list stmt-decl 
;

stmt-decl:
	stmt
;

stmt:
	'{' stmt-decl-list '}'
|	_if '(' exp ')' stmt
;

exp:
	exp8
;

exp8:
	exp8 '|' '|' exp7
|	exp7
;

exp7:
	exp7 '&' '&' exp6
|	exp6
;

exp6: 
	exp6 '=' '=' exp5
|	exp6 '!' '=' exp5
|	exp5
;

exp5:
	exp5 '<' exp4
|	exp5 '>' exp4
|	exp5 '<' '=' exp4
|	exp5 '>' '=' exp4
|	exp5 _instanceof ID
|	exp4
;

exp4:
	exp4 '+' exp3
|	exp4 '-' exp3
|	exp3
;

exp3:
	exp3 '*' exp2
|	exp3 '/' exp2
|	exp3 '%' exp2
|	exp2
;

exp2: 
	cast-exp
|	unary-exp
;


cast-exp:
	'(' type ')' cast-exp
|	'(' type ')' exp1
;

unary-exp:
	'-' unary-exp
|	'!' unary-exp
|	'+' unary-exp
|	exp1
;


exp1:
	ID
|	exp1 '[' exp ']'
|	_new type '[' exp ']' empty-bracket-list
|	_new ID '(' ')'
|	INTLIT
|	callExp
|	STRINGLIT
|	exp1 '.' ID
|	_this
|	_false
|	_true
|	_null
|	CHARLIT
|	'(' exp ')'
;

callExp:
	ID '(' ')'
|	ID '(' exp-list ')'
|	_super '.' ID '(' ')'
|	_super '.' ID '(' exp-list ')'
|	exp1 '.' ID '(' ')'
|	exp1 '.' ID '(' exp-list ')'
; 

exp-list: 
	exp
|	exp-list ',' exp
;

empty-bracket-list:
	%empty
|	empty-bracket-list '[' ']'
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