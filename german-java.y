%{

#include <stdio.h>
#include <stdlib.h>

extern int yylex();
extern int yyparse();
extern FILE* yyin;

void yyerror();
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
%token LEFT_CURLY
%token RIGHT_CURLY
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
%token DIVISION
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
	while(yylex());

	return 0;
}

void reportTok(char* out){
	printf("Line %d.%d: %s\n", 
		yylloc.first_line,yylloc.first_column, out);
}

void yyerror() {
	fprintf(stderr, "Parse error on Line %d.%d\n", 
		yylloc.first_line,yylloc.first_column);
	exit(1);
}