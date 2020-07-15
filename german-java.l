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

ws	[ \t]
letter [a-zA-Z]
digit [0-9]
intLit {digit}-[0]{digit}*
%%

\n 	{}
{digit}+{ws}*	reportTok("Integer Literal");
"boolean"{ws}*	reportTok("Boolean"); return _boolean;
"class"{ws}*	reportTok("Class"); return _class;
"extends"{ws}*	reportTok("Extends"); return _extends;
"void"{ws}*		reportTok("Void"); return _void;
"int"{ws}*		reportTok("Integer"); return _int;
"while"{ws}*	reportTok("While"); return _while;
"if"{ws}*		reportTok("If"); return _if;
.				yyerror();
