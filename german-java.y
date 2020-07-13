%{

#include <stdio.h>
#include <stdlib.h>

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
%token NOT
%token NOT_EQUAL
%token MOD
%token AND
%token MULTIPLY
%token LEFT_PAREN
%token RIGHT_PAREN					
%token LEFT_BRACE
%token RIGHT_BRACE
%left SUBTRACT
%left ADD
%token ASSIGN
%token EQUAL
%token LEFT_SQUARE
%token RIGHT_SQUARE
%token OR
%token LESS
%token LESS_EQUAL
%token COMMA
%token GREATER
%token GREATER_EQUAL
%token PERIOD
%token SEMICOLON
%token INCREMENT
%token DECREMENT
%token SLASH
%token COLON

%token ID
%token INTLIT
%token STRINGLIT
%token CHARLIT

%start program

%%

program:

;


%%

void yyerror(const char* s) {
	fprintf(stderr, "Parse error: %s\n", s);
	exit(1);
}