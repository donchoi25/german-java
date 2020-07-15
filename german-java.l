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
intLit ^[1-9]{digit}*
%% /* Reserved Words */
\n 	{}
{intLit}{ws}*		reportTok("Integer Literal"); 
"boolean"{ws}*		reportTok("Boolean"); return _boolean;
"class"{ws}*		reportTok("Class"); return _class;
"extends"{ws}*		reportTok("Extends"); return _extends;
"void"{ws}*			reportTok("Void"); return _void;
"int"{ws}*			reportTok("Integer"); return _int;
"while"{ws}*		reportTok("While"); return _while;
"if"{ws}*			reportTok("If"); return _if;
"else"{ws}*			reportTok("Else"); return _else;
"for"{ws}*			reportTok("For"); return _for;
"break"{ws}*		reportTok("Break"); return _break;
"this"{ws}*			reportTok("This"); return _this;
"false"{ws}*		reportTok("False"); return _false;
"true"{ws}*			reportTok("True"); return _true;
"super"{ws}*		reportTok("Super"); return _super;
"null"{ws}*			reportTok("Null"); return _null;
"return"{ws}*		reportTok("Return"); return _return;
"instanceof"{ws}*	reportTok("InstanceOf"); return _instanceof;
"new"{ws}*			reportTok("New"); return _new;
"abstract"{ws}*		reportTok("Abstract"); return _abstract;
"assert"{ws}*		reportTok("Assert"); return _assert;
"byte"{ws}*			reportTok("Byte"); return _byte;
"case"{ws}*			reportTok("Case"); return _case;
"catch"{ws}*		reportTok("Catch"); return _catch;
.				yyerror();
