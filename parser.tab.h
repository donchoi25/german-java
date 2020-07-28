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
    NOT = 310,
    NOT_EQUAL = 311,
    MOD = 312,
    AND = 313,
    MULTIPLY = 314,
    LEFT_PAREN = 315,
    RIGHT_PAREN = 316,
    SUBTRACT = 317,
    ADD = 318,
    ASSIGN = 319,
    EQUAL = 320,
    LEFT_SQUARE = 321,
    RIGHT_SQUARE = 322,
    OR = 323,
    LESS = 324,
    LESS_EQUAL = 325,
    COMMA = 326,
    GREATER = 327,
    GREATER_EQUAL = 328,
    PERIOD = 329,
    SEMICOLON = 330,
    INCREMENT = 331,
    DECREMENT = 332,
    DIVISION = 333,
    COLON = 334,
    ID = 335,
    INTLIT = 336,
    STRINGLIT = 337,
    CHARLIT = 338
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
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

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
