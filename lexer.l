%{
	#include "parser.tab.h"

    int char_position = 0;
    int line_start = 0;
    //saves token value into string
    #define SAVE_TOKEN_STRING yylval.Str = new std::string(++yytext, yyleng - 2)

    #define SAVE_TOKEN yylval.Str = new std::string(yytext, yyleng)

    #define YY_USER_ACTION  updateLoc();
    //yylloc.first_line = yylloc.last_line = yylineno;

    void updateLoc(){
        yylloc.first_line = yylloc.last_line; 
        yylloc.first_column = yylloc.last_column; 
        if(yytext[0] == '\n') { 
            yylloc.last_line++; 
            yylloc.last_column = 0; 
        } 
        else { 
            yylloc.last_column+=yyleng; 
        } 
    }

    extern void reportTok(char* out);
    extern void yyerror(const char* s);
%}
%option noyywrap
%option yylineno

ws	[ \t\n]
stringprintable [ !#-~]
charprintable   "\\\\"|"\\\""|"\\\'"|"\\n"|"\\t"|"\\f"|"\\r"|[ -&(-~]

letter [a-zA-Z]
digit [0-9]
intLit [1-9]{digit}*|0
idChar  ({letter}|{digit}|"_") 
ID  {letter}{idChar}*
STRINGLIT   "\""{stringprintable}*"\""
CHARLIT "\'"{charprintable}"\'"
%% 
    /* 
        Reserved Words 
    */
"boolean"		reportTok("Boolean"); return _boolean;
"class"		    reportTok("Class"); return _class;
"extends"		reportTok("Extends"); return _extends;
"void"			reportTok("Void"); return _void;
"int"			reportTok("Integer"); return _int;
"while"		    reportTok("While"); return _while;
"if"			reportTok("If"); return _if;
"else"			reportTok("Else"); return _else;
"for"			reportTok("For"); return _for;
"break"		    reportTok("Break"); return _break;
"this"			reportTok("This"); return _this;
"false"		    reportTok("False"); return _false;
"true"			reportTok("True"); return _true;
"super"		    reportTok("Super"); return _super;
"null"			reportTok("Null"); return _null;
"return"		reportTok("Return"); return _return;
"instanceof"	reportTok("InstanceOf"); return _instanceof;
"new"			reportTok("New"); return _new;
"abstract"		reportTok("Abstract"); return _abstract;
"assert"	    reportTok("Assert"); return _assert;
"byte"		    reportTok("Byte"); return _byte;
"case"		    reportTok("Case"); return _case;
"catch"		    reportTok("Catch"); return _catch;
"char"          reportTok("Char"); return _char;
"const"         reportTok("Const"); return _const;
"continue"      reportTok("Continue"); return _continue;
"default"       reportTok("Default"); return _default;
"do"            reportTok("Do"); return _do;
"double"        reportTok("Double"); return _double;
"enum"          reportTok("Enum"); return _enum;
"final"         reportTok("Final"); return _final;
"finally"       reportTok("Finally"); return _finally;
"float"         reportTok("Float"); return _float;
"goto"          reportTok("Goto"); return _goto;
"implements"    reportTok("Implements"); return _implements;
"import"        reportTok("Import"); return _import;
"interface"     reportTok("Interface"); return _interface;
"long"          reportTok("Long"); return _long;
"package"       reportTok("Package"); return _package;
"private"       reportTok("Private"); return _private;
"protected"     reportTok("Protected"); return _protected;
"public"        reportTok("Public"); return _public;
"short"         reportTok("Short"); return _short;
"static"        reportTok("Static"); return _static;
"strictfp"      reportTok("Strictfp"); return _strictfp;
"switch"        reportTok("Switch"); return _switch;
"synchronized"  reportTok("Synchronized"); return _synchronized;
"throw"         reportTok("Throw"); return _throw;
"throws"        reportTok("Throws"); return _throws;
"transient"     reportTok("Transient"); return _transient;
"try"           reportTok("Try"); return _try;
"volatile"      reportTok("Volatile"); return _volatile;

    /* 
        All Symbols 
    */

"="             reportTok("Assign"); return '=';
","             reportTok("Comma"); return ',';
"."             reportTok("Period"); return '.';
";"             reportTok("Semicolon"); return ';';
":"             reportTok("Colon"); return ':';
"!"             reportTok("Not"); return '!';
"<"             reportTok("Less"); return '<';
">"             reportTok("Greater"); return '>';
"&"             reportTok("And"); return '&';
"|"             reportTok("Or"); return '|';
"("             reportTok("Left Paren"); return '(';
")"             reportTok("Right Paren"); return ')';
"["             reportTok("Left Square"); return '[';
"]"             reportTok("Right Square"); return ']';
"{"             reportTok("Left Curly"); return '{';
"}"             reportTok("Right Curly"); return '}';
"+"             reportTok("Add"); return '+';
"-"             reportTok("Subtract"); return '-';
"*"             reportTok("Multiply"); return '*';
"/"             reportTok("Division"); return '/';
"%"             reportTok("Mod"); return '%';





    /* Literals, newline, and unaccepted characters */
{intLit}        SAVE_TOKEN; reportTok("Integer Literal"); return INTLIT;
{ID}               SAVE_TOKEN; reportTok("Identifier"); return ID;
{STRINGLIT}     SAVE_TOKEN_STRING; reportTok("String Literal");    return STRINGLIT;
{CHARLIT}       SAVE_TOKEN_STRING; reportTok("Char Literal"); return CHARLIT;
{ws}            ;
.		        yyerror("Token not recognized"); 
