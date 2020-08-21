/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1909  */

	#include <iostream>
	#include <stdio.h>
	#include <stdlib.h>
	#include <vector>
	#include <string>
	#include "assert.h"
	#include "nodes.h"
	#include <map>

	extern int yylex();
	extern int yyparse();
	extern FILE* yyin;

	#define ROW(node) node .first_line
	#define COL(node) node .first_column

	void yyerror(const char* s);

#line 64 "parser.tab.h" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    _boolean = 258,
    _class = 259,
    _extends = 260,
    _void = 261,
    _int = 262,
    _while = 263,
    _if = 264,
    _else = 265,
    _for = 266,
    _break = 267,
    _this = 268,
    _false = 269,
    _true = 270,
    _super = 271,
    _null = 272,
    _return = 273,
    _instanceof = 274,
    _new = 275,
    _abstract = 276,
    _assert = 277,
    _byte = 278,
    _case = 279,
    _catch = 280,
    _char = 281,
    _const = 282,
    _continue = 283,
    _default = 284,
    _do = 285,
    _double = 286,
    _enum = 287,
    _final = 288,
    _finally = 289,
    _float = 290,
    _goto = 291,
    _implements = 292,
    _import = 293,
    _interface = 294,
    _long = 295,
    _package = 296,
    _private = 297,
    _protected = 298,
    _public = 299,
    _short = 300,
    _static = 301,
    _strictfp = 302,
    _switch = 303,
    _synchronized = 304,
    _throw = 305,
    _throws = 306,
    _transient = 307,
    _try = 308,
    _volatile = 309,
    ID = 310,
    INTLIT = 311,
    STRINGLIT = 312,
    CHARLIT = 313
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 30 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1909  */

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

#line 207 "parser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);
/* "%code provides" blocks.  */
#line 22 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1909  */

	extern Program* RootProgram;

#line 238 "parser.tab.h" /* yacc.c:1909  */

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
