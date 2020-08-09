%{
	#include "parser.tab.h"

    int char_position = 0;
    int line_start = 0;
	//updates position every token
	#define YY_USER_ACTION                                \
        char_position += yyleng;                          \
        if (yylineno != yylloc.last_line) {               \
            char* p = yytext + yyleng;                    \
            line_start = char_position;                   \
            while (*--p != '\n') --line_start;            \
        }                                                 \
        yylloc.first_line = yylloc.last_line;             \
        yylloc.first_column = yylloc.last_column;         \
        yylloc.last_line = yylineno;                      \
        yylloc.last_column = char_position - line_start + 1; 

    extern void reportTok(char* out);
    extern void yyerror(const char* s);
%}
%option noyywrap
%option yylineno

ws	[ \t\n]
printable [ -~]    
charprintable   "\\\\"|"\\\""|"\\\'"|"\\n"|"\\t"|"\\f"|"\\r"|{printable}

letter [a-zA-Z]
digit [0-9]
intLit [1-9]{digit}*
idChar  ({letter}|{digit}|"_") 
ID  {letter}{idChar}*
STRINGLIT   "\""{printable}*"\"" 
CHARLIT "\'"{charprintable}"\'"
%% 
    /* 
        Reserved Words 
    */
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
"char"{ws}*         reportTok("Char"); return _char;
"const"{ws}*        reportTok("Const"); return _const;
"continue"{ws}*     reportTok("Continue"); return _continue;
"default"{ws}*      reportTok("Default"); return _default;
"do"{ws}*           reportTok("Do"); return _do;
"double"{ws}*       reportTok("Double"); return _double;
"enum"{ws}*         reportTok("Enum"); return _enum;
"final"{ws}*        reportTok("Final"); return _final;
"finally"{ws}*      reportTok("Finally"); return _finally;
"float"{ws}*        reportTok("Float"); return _float;
"goto"{ws}*         reportTok("Goto"); return _goto;
"implements"{ws}*   reportTok("Implements"); return _implements;
"import"{ws}*       reportTok("Import"); return _import;
"interface"{ws}*    reportTok("Interface"); return _interface;
"long"{ws}*         reportTok("Long"); return _long;
"package"{ws}*      reportTok("Package"); return _package;
"private"{ws}*      reportTok("Private"); return _private;
"protected"{ws}*    reportTok("Protected"); return _protected;
"public"{ws}*       reportTok("Public"); return _public;
"short"{ws}*        reportTok("Short"); return _short;
"static"{ws}*       reportTok("Static"); return _static;
"strictfp"{ws}*     reportTok("Strictfp"); return _strictfp;
"switch"{ws}*       reportTok("Switch"); return _switch;
"synchronized"{ws}* reportTok("Synchronized"); return _synchronized;
"throw"{ws}*        reportTok("Throw"); return _throw;
"throws"{ws}*       reportTok("Throws"); return _throws;
"transient"{ws}*    reportTok("Transient"); return _transient;
"try"{ws}*          reportTok("Try"); return _try;
"volatile"{ws}*     reportTok("Volatile"); return _volatile;

    /* 
        All Symbols 
    */

"="{ws}*            reportTok("Assign"); return '=';
","{ws}*            reportTok("Comma"); return ',';
"."{ws}*            reportTok("Period"); return '.';
";"{ws}*            reportTok("Semicolon"); return ';';
":"{ws}*            reportTok("Colon"); return ':';
"!"{ws}*            reportTok("Not"); return '!';
"<"{ws}*            reportTok("Less"); return '<';
">"{ws}*            reportTok("Greater"); return '>';
"&"{ws}*            reportTok("And"); return '&';
"|"{ws}*            reportTok("Or"); return '|';
"("{ws}*            reportTok("Left Paren"); return '(';
")"{ws}*            reportTok("Right Paren"); return ')';
"["{ws}*            reportTok("Left Square"); return '[';
"]"{ws}*            reportTok("Right Square"); return ']';
"{"{ws}*            reportTok("Left Curly"); return '{';
"}"{ws}*            reportTok("Right Curly"); return '}';
"+"{ws}*            reportTok("Add"); return '+';
"-"{ws}*            reportTok("Subtract"); return '-';
"*"{ws}*            reportTok("Multiply"); return '*';
"/"{ws}*            reportTok("Division"); return '/';
"%"{ws}*            reportTok("Mod"); return '%';





    /* Literals, newline, and unaccepted characters */
\n 	{}
{intLit}{ws}*		reportTok("Integer Literal"); return INTLIT;
{ID}{ws}*           reportTok("Identifier"); return ID;
{STRINGLIT}{ws}*    reportTok("String Literal"); return STRINGLIT;
{CHARLIT}{ws}*      reportTok("Char Literal"); return CHARLIT;
.				    yyerror("Token not recognized");
