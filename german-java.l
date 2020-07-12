%{
	#include "german-java.tab.h"


	//updates position every token
	#define YY_USER_ACTION \
    yylloc.first_line = yylloc.last_line; \
    yylloc.first_column = yylloc.last_column; \
    if(yytext[0] == '\n') { \
        yylloc.last_line++; \
        yylloc.last_column = 1; \
    } \
    else { \
        yylloc.last_column+=yyleng; \
    } 

    void reportTok(char* out);
%}
%option noyywrap
%option yylineno

ws	[ \t\n]
%%

"b"				reportTok("Test");
"boolean"{ws}*	reportTok("Boolean");
.	{}
\n 	{}


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
}

void reportTok(char* out){
	printf("Line %d.%d: %s\n", yylloc.first_line,yylloc.first_column, out);
}