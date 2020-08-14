/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */

#line 67 "parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
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
#line 1 "parser.y" /* yacc.c:355  */

	#include <iostream>
	#include <stdio.h>
	#include <stdlib.h>
	#include <vector>
	#include <string>
	#include "assert.h"
	#include "include/nodes.h"

	extern int yylex();
	extern int yyparse();
	extern FILE* yyin;

	#define ROW(node) node .first_line
	#define COL(node) node .first_column

	void yyerror(const char* s);

#line 116 "parser.tab.c" /* yacc.c:355  */

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
#line 29 "parser.y" /* yacc.c:355  */

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

#line 259 "parser.tab.c" /* yacc.c:355  */
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
#line 21 "parser.y" /* yacc.c:355  */

	extern Program* RootProgram;

#line 290 "parser.tab.c" /* yacc.c:355  */

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 296 "parser.tab.c" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 25 "parser.y" /* yacc.c:359  */

	Program* RootProgram;

#line 302 "parser.tab.c" /* yacc.c:359  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   970

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  114
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  252

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,     2,     2,    56,    57,     2,
      59,    60,    58,    64,    70,    63,    72,    74,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    75,    73,
      69,    65,    71,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    66,     2,    67,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    61,    68,    62,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      76,    77,    78,    79
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   201,   201,   205,   206,   209,   210,   211,   212,   216,
     217,   221,   222,   223,   227,   228,   232,   236,   237,   238,
     239,   243,   244,   248,   249,   250,   254,   255,   259,   263,
     264,   265,   266,   267,   268,   269,   276,   277,   278,   279,
     283,   296,   297,   298,   299,   303,   304,   308,   309,   310,
     314,   315,   316,   320,   321,   322,   326,   327,   331,   335,
     339,   346,   350,   351,   355,   356,   360,   361,   362,   366,
     367,   368,   369,   370,   371,   375,   376,   377,   381,   382,
     383,   384,   388,   389,   394,   395,   399,   400,   401,   402,
     407,   408,   409,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   433,   434,   438,   439,   440,   441,   442,   443,
     447,   448,   452,   453,   454
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "_boolean", "_class", "_extends",
  "_void", "_int", "_while", "_if", "_else", "_for", "_break", "_this",
  "_false", "_true", "_super", "_null", "_return", "_instanceof", "_new",
  "_abstract", "_assert", "_byte", "_case", "_catch", "_char", "_const",
  "_continue", "_default", "_do", "_double", "_enum", "_final", "_finally",
  "_float", "_goto", "_implements", "_import", "_interface", "_long",
  "_package", "_private", "_protected", "_public", "_short", "_static",
  "_strictfp", "_switch", "_synchronized", "_throw", "_throws",
  "_transient", "_try", "_volatile", "'!'", "'%'", "'&'", "'*'", "'('",
  "')'", "'{'", "'}'", "'-'", "'+'", "'='", "'['", "']'", "'|'", "'<'",
  "','", "'>'", "'.'", "';'", "'/'", "':'", "ID", "INTLIT", "STRINGLIT",
  "CHARLIT", "$accept", "program", "class-decl-1plus", "type",
  "class-decl", "decl-in-class-0plus", "decl-in-class", "inst-var-decl",
  "method-decl", "formal-list", "stmt-decl-0plus", "stmt-decl",
  "local-var-decl", "stmt", "for", "initialization", "termination",
  "increment", "case-0plus", "case", "assign", "exp", "exp8", "exp7",
  "exp6", "exp5", "exp4", "exp3", "exp2", "cast-exp", "unary-exp", "exp1",
  "callExp", "exp-list", "empty-bracket-list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,    33,    37,    38,    42,    40,
      41,   123,   125,    45,    43,    61,    91,    93,   124,    60,
      44,    62,    46,    59,    47,    58,   310,   311,   312,   313
};
# endif

#define YYPACT_NINF -160

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-160)))

#define YYTABLE_NINF -91

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      -2,   -65,    15,    -2,  -160,     2,  -160,  -160,   -58,    10,
     -41,  -160,  -160,    19,  -160,    24,     3,  -160,  -160,  -160,
      10,   -47,    32,   -33,   -21,  -160,  -160,     5,    35,    47,
    -160,  -160,  -160,    20,    28,    13,    56,    43,    30,    50,
     443,    70,    41,    61,   443,    48,    82,    86,    89,    85,
    -160,  -160,  -160,    91,  -160,    55,   625,   102,   812,   443,
      57,   106,  -160,    88,  -160,  -160,  -160,    67,   203,  -160,
    -160,  -160,  -160,   104,   131,   109,  -160,   443,  -160,   241,
     443,   812,   812,   520,  -160,   111,   139,   124,   129,   192,
     812,   839,   498,   839,   839,   143,   144,   141,   150,    63,
      52,    -3,    27,  -160,  -160,  -160,    39,  -160,   318,   149,
     158,   654,   172,   173,   171,  -160,  -160,  -160,   812,   812,
     163,  -160,   342,   812,   419,   180,   181,    73,   169,  -160,
     170,   186,   187,   679,   201,   208,  -160,   162,   112,  -160,
    -160,  -160,   178,   206,   204,   205,   196,   706,   734,   812,
     812,   812,   812,   812,  -160,  -160,  -160,  -160,  -160,    94,
    -160,  -160,   812,  -160,   207,   214,  -160,   202,   812,   625,
     625,   212,   812,   759,  -160,   211,   812,   222,   891,   812,
     812,   812,   812,  -160,   812,    -3,   812,    -3,    27,    27,
    -160,  -160,  -160,  -160,   812,   213,  -160,   787,   223,   215,
    -160,   274,   812,   217,  -160,  -160,    97,   221,   231,   602,
    -160,    39,   150,    63,    52,    52,    -3,    -3,  -160,  -160,
    -160,   105,  -160,   230,   625,  -160,   864,  -160,   226,   228,
    -160,   812,   220,  -160,   530,  -160,  -160,  -160,  -160,   236,
    -160,   237,  -160,   232,   233,  -160,  -160,  -160,   625,  -160,
    -160,  -160
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     2,     3,     0,     1,     4,     0,    11,
       0,     6,     5,     0,     7,     0,     0,    12,    15,    14,
      11,     0,     0,     0,     0,     9,    13,     0,     0,     0,
       8,    16,    10,     0,     0,     0,     0,     0,     0,     0,
      23,     0,     0,     0,    23,     0,     0,     0,     0,     0,
      98,    99,   100,     0,   101,     0,     0,     0,     0,    23,
       0,     0,    31,     7,    94,    96,   102,     0,     0,    24,
      27,    26,    39,     0,     0,    95,    21,    23,    22,     0,
      23,     0,     0,    41,    32,     0,     7,     0,    90,     0,
       0,     0,     0,     0,     0,    90,     0,    61,    63,    65,
      68,    74,    77,    81,    82,    83,    89,    95,     0,     0,
       0,     0,     0,     0,     0,    17,    25,    29,     0,     0,
       0,    30,     0,     0,     0,     0,     0,     0,     0,    43,
      95,     0,     0,     0,     0,     0,    87,    90,     0,    86,
      88,   103,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,    60,    58,   104,   110,     0,
      59,    57,     0,    56,     0,    97,    18,     0,     0,     0,
       0,     0,    45,     0,    93,     0,     0,     0,     0,     0,
       0,     0,     0,    73,     0,    69,     0,    70,    76,    75,
      80,    78,    79,   105,     0,     0,    91,     0,     0,     0,
      34,    37,     0,     0,    46,   106,     0,   112,     0,    50,
      84,    85,    62,    64,    67,    66,    71,    72,   111,    28,
     108,     0,    19,     0,     0,    42,    47,   107,     0,    92,
      35,     0,     0,    53,     0,    51,   109,    20,    38,     0,
      48,    95,   113,     0,     0,    55,    36,    52,     0,   114,
      54,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -160,  -160,  -160,   146,   295,   281,    14,  -160,  -160,   269,
      -8,    -9,  -160,   -53,  -160,  -160,  -160,  -160,  -160,    72,
     -82,   -26,  -160,   128,   130,  -104,   -72,   -25,    79,   134,
     133,   -40,   -35,  -159,  -160
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    67,     4,    16,    17,    18,    19,    37,
      68,    69,    70,    71,    72,   128,   203,   239,   234,   235,
      73,   158,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   159,   229
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      74,   129,     1,    89,    74,    75,    11,     8,    11,    75,
      12,     5,    12,    11,   206,     6,    74,    12,    10,    74,
      20,    75,    11,    11,    75,    21,    12,    12,    74,    28,
      26,    11,    96,    75,    30,    12,    79,    74,   221,    74,
      74,    26,    75,    74,    75,    75,    11,    13,   130,    13,
      12,   108,    31,    11,    13,   125,   126,    12,    11,   116,
     149,   150,    12,     9,   135,    25,    96,    32,    74,   122,
     116,   146,   124,    75,    40,   185,   187,   214,   215,    14,
      35,    14,    74,   151,    74,   152,    14,    75,    38,    75,
      23,    44,   163,   164,    33,    14,    14,   167,    23,   116,
      24,   153,    77,    42,    14,   119,    34,   175,    29,    80,
      45,   120,   216,   116,   217,   116,   200,   201,   144,    14,
     109,   147,    23,   148,   188,   189,    14,    23,   145,    74,
      74,    86,    41,    23,    75,    75,   195,    78,   211,    23,
      76,    81,   199,   114,   240,    82,   204,   111,    83,   171,
     208,   112,   113,   -90,   193,    15,   233,   227,    84,    22,
     -90,    90,    15,    85,   194,   236,    15,   194,   218,    74,
     110,   238,   178,    15,    75,   194,   225,   117,    23,    36,
      36,   233,   121,    43,    74,    43,    74,   131,   111,    75,
     133,   241,   112,   113,    74,   251,   118,   119,   132,    75,
     134,    87,   111,   120,   141,   244,    11,   143,    74,   142,
      12,    46,    47,    75,    48,    49,    50,    51,    52,    53,
      54,   111,    -7,    55,   136,   155,   139,   140,    -7,   127,
     190,   191,   192,    56,   156,   160,   162,   161,   138,   165,
     169,   170,   172,   -44,    11,   173,   179,   174,    12,    46,
      47,    57,    48,    49,    50,    51,    52,    53,    54,   123,
     176,    55,    58,   180,    59,   115,    60,    61,   177,   181,
     182,    56,   183,   197,   196,   198,    62,   202,   207,    63,
      64,    65,    66,   209,   224,   222,   219,   228,   223,    57,
     226,   230,   237,   242,   243,   245,   248,   -49,     7,   249,
      58,    27,    59,    39,    60,    61,   247,   212,   250,     0,
     213,     0,   210,     0,    62,     0,     0,    63,    64,    65,
      66,    11,     0,     0,     0,    12,    46,    47,     0,    48,
      49,    50,    51,    52,    53,    54,     0,     0,    55,     0,
       0,     0,     0,     0,     0,    11,     0,     0,    56,    12,
      46,    47,     0,    48,    49,    50,    51,    52,    53,    54,
       0,     0,    55,     0,     0,     0,    57,     0,     0,     0,
       0,     0,    56,     0,     0,     0,     0,    58,     0,    59,
     154,    60,    61,     0,     0,     0,     0,     0,     0,     0,
      57,    62,     0,     0,    63,    64,    65,    66,     0,     0,
       0,    58,     0,    59,   166,    60,    61,     0,     0,     0,
       0,     0,     0,     0,     0,    62,     0,     0,    63,    64,
      65,    66,    11,     0,     0,     0,    12,    46,    47,     0,
      48,    49,    50,    51,    52,    53,    54,   168,     0,    55,
       0,     0,     0,     0,     0,     0,    11,     0,     0,    56,
      12,    46,    47,     0,    48,    49,    50,    51,    52,    53,
      54,     0,     0,    55,     0,     0,     0,    57,     0,     0,
       0,     0,     0,    56,     0,     0,     0,     0,    58,     0,
      59,     0,    60,    61,     0,     0,     0,     0,     0,     0,
       0,    57,    62,     0,     0,    63,    64,    65,    66,     0,
       0,    11,    58,     0,    59,    12,    60,    61,     0,     0,
       0,    50,    51,    52,    53,    54,    62,     0,    55,    63,
      64,    65,    66,    11,     0,     0,     0,    12,     0,     0,
       0,     0,     0,    50,    51,    52,    53,    54,    46,    47,
      55,    48,    49,    50,    51,    52,    53,    54,     0,     0,
      55,     0,     0,    91,   231,     0,     0,    92,     0,   232,
      56,    93,    94,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   137,    64,    65,    66,    57,    58,
       0,     0,     0,    60,    61,     0,     0,     0,     0,    58,
       0,    59,   246,    60,    61,     0,    63,    64,    65,    66,
       0,     0,     0,    62,     0,     0,    88,    64,    65,    66,
      46,    47,     0,    48,    49,    50,    51,    52,    53,    54,
       0,     0,    55,     0,     0,     0,   231,     0,     0,     0,
       0,   232,    56,    46,    47,     0,    48,    49,    50,    51,
      52,    53,    54,     0,     0,    55,     0,     0,     0,     0,
      57,     0,     0,     0,     0,    56,     0,     0,     0,     0,
       0,    58,     0,    59,     0,    60,    61,    50,    51,    52,
      53,    54,     0,    57,    55,    62,     0,     0,    88,    64,
      65,    66,     0,     0,    58,     0,    59,     0,    60,    61,
       0,     0,    50,    51,    52,    53,    54,     0,    62,    55,
       0,    88,    64,    65,    66,     0,     0,     0,     0,    91,
       0,     0,     0,    92,   157,     0,     0,    93,    94,    50,
      51,    52,    53,    54,     0,     0,    55,     0,     0,     0,
      95,    64,    65,    66,    91,     0,     0,     0,    92,     0,
       0,     0,    93,    94,     0,     0,    30,    50,    51,    52,
      53,    54,     0,     0,    55,    95,    64,    65,    66,     0,
       0,    91,     0,     0,     0,    92,     0,     0,     0,    93,
      94,   184,    50,    51,    52,    53,    54,     0,     0,    55,
       0,     0,    95,    64,    65,    66,     0,     0,     0,    91,
       0,     0,     0,    92,     0,     0,     0,    93,    94,   186,
      50,    51,    52,    53,    54,     0,     0,    55,     0,     0,
      95,    64,    65,    66,    91,     0,     0,     0,    92,   205,
       0,     0,    93,    94,     0,    50,    51,    52,    53,    54,
       0,     0,    55,     0,     0,    95,    64,    65,    66,     0,
       0,     0,    91,     0,     0,     0,    92,   220,     0,     0,
      93,    94,    50,    51,    52,    53,    54,     0,     0,    55,
       0,     0,     0,    95,    64,    65,    66,    91,     0,     0,
       0,    92,     0,     0,     0,    93,    94,    50,    51,    52,
      53,    54,     0,     0,    55,     0,     0,     0,    95,    64,
      65,    66,     0,     0,    91,     0,     0,     0,    58,     0,
       0,     0,    93,    94,    50,    51,    52,    53,    54,     0,
       0,    55,     0,     0,     0,    95,    64,    65,    66,     0,
       0,     0,     0,    58,     0,     0,     0,    60,    61,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,    64,    65,    66,     0,     0,     0,     0,     0,     0,
      92,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    95,    64,    65,
      66
};

static const yytype_int16 yycheck[] =
{
      40,    83,     4,    56,    44,    40,     3,     5,     3,    44,
       7,    76,     7,     3,   173,     0,    56,     7,    76,    59,
      61,    56,     3,     3,    59,     6,     7,     7,    68,    76,
      16,     3,    58,    68,    67,     7,    44,    77,   197,    79,
      80,    27,    77,    83,    79,    80,     3,    44,    83,    44,
       7,    59,    73,     3,    44,    81,    82,     7,     3,    68,
      63,    64,     7,    61,    90,    62,    92,    62,   108,    77,
      79,    19,    80,   108,    61,   147,   148,   181,   182,    76,
      60,    76,   122,    56,   124,    58,    76,   122,    60,   124,
      66,    61,   118,   119,    59,    76,    76,   123,    66,   108,
      76,    74,    61,    60,    76,    66,    59,   133,    76,    61,
      60,    72,   184,   122,   186,   124,   169,   170,    55,    76,
      63,    69,    66,    71,   149,   150,    76,    66,    65,   169,
     170,    76,    76,    66,   169,   170,   162,    76,   178,    66,
      70,    59,   168,    76,   226,    59,   172,    59,    59,    76,
     176,    63,    64,    65,    60,     9,   209,    60,    73,    13,
      72,    59,    16,    72,    70,    60,    20,    70,   194,   209,
      64,   224,    60,    27,   209,    70,   202,    73,    66,    33,
      34,   234,    73,    37,   224,    39,   226,    76,    59,   224,
      66,   226,    63,    64,   234,   248,    65,    66,    59,   234,
       8,    55,    59,    72,    60,   231,     3,    57,   248,    68,
       7,     8,     9,   248,    11,    12,    13,    14,    15,    16,
      17,    59,    60,    20,    91,    76,    93,    94,    66,    83,
     151,   152,   153,    30,    76,    63,    65,    64,    92,    76,
      60,    60,    73,    73,     3,    59,    68,    60,     7,     8,
       9,    48,    11,    12,    13,    14,    15,    16,    17,    18,
      59,    20,    59,    57,    61,    62,    63,    64,    60,    65,
      65,    30,    76,    59,    67,    73,    73,    65,    67,    76,
      77,    78,    79,    61,    10,    62,    73,    66,    73,    48,
      73,    60,    62,    67,    66,    75,    60,    60,     3,    67,
      59,    20,    61,    34,    63,    64,   234,   179,    75,    -1,
     180,    -1,   178,    -1,    73,    -1,    -1,    76,    77,    78,
      79,     3,    -1,    -1,    -1,     7,     8,     9,    -1,    11,
      12,    13,    14,    15,    16,    17,    -1,    -1,    20,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    30,     7,
       8,     9,    -1,    11,    12,    13,    14,    15,    16,    17,
      -1,    -1,    20,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    -1,    30,    -1,    -1,    -1,    -1,    59,    -1,    61,
      62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    73,    -1,    -1,    76,    77,    78,    79,    -1,    -1,
      -1,    59,    -1,    61,    62,    63,    64,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    76,    77,
      78,    79,     3,    -1,    -1,    -1,     7,     8,     9,    -1,
      11,    12,    13,    14,    15,    16,    17,    18,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    30,
       7,     8,     9,    -1,    11,    12,    13,    14,    15,    16,
      17,    -1,    -1,    20,    -1,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    59,    -1,
      61,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    73,    -1,    -1,    76,    77,    78,    79,    -1,
      -1,     3,    59,    -1,    61,     7,    63,    64,    -1,    -1,
      -1,    13,    14,    15,    16,    17,    73,    -1,    20,    76,
      77,    78,    79,     3,    -1,    -1,    -1,     7,    -1,    -1,
      -1,    -1,    -1,    13,    14,    15,    16,    17,     8,     9,
      20,    11,    12,    13,    14,    15,    16,    17,    -1,    -1,
      20,    -1,    -1,    55,    24,    -1,    -1,    59,    -1,    29,
      30,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    76,    77,    78,    79,    48,    59,
      -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    59,
      -1,    61,    62,    63,    64,    -1,    76,    77,    78,    79,
      -1,    -1,    -1,    73,    -1,    -1,    76,    77,    78,    79,
       8,     9,    -1,    11,    12,    13,    14,    15,    16,    17,
      -1,    -1,    20,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    29,    30,     8,     9,    -1,    11,    12,    13,    14,
      15,    16,    17,    -1,    -1,    20,    -1,    -1,    -1,    -1,
      48,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,
      -1,    59,    -1,    61,    -1,    63,    64,    13,    14,    15,
      16,    17,    -1,    48,    20,    73,    -1,    -1,    76,    77,
      78,    79,    -1,    -1,    59,    -1,    61,    -1,    63,    64,
      -1,    -1,    13,    14,    15,    16,    17,    -1,    73,    20,
      -1,    76,    77,    78,    79,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    59,    60,    -1,    -1,    63,    64,    13,
      14,    15,    16,    17,    -1,    -1,    20,    -1,    -1,    -1,
      76,    77,    78,    79,    55,    -1,    -1,    -1,    59,    -1,
      -1,    -1,    63,    64,    -1,    -1,    67,    13,    14,    15,
      16,    17,    -1,    -1,    20,    76,    77,    78,    79,    -1,
      -1,    55,    -1,    -1,    -1,    59,    -1,    -1,    -1,    63,
      64,    65,    13,    14,    15,    16,    17,    -1,    -1,    20,
      -1,    -1,    76,    77,    78,    79,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    63,    64,    65,
      13,    14,    15,    16,    17,    -1,    -1,    20,    -1,    -1,
      76,    77,    78,    79,    55,    -1,    -1,    -1,    59,    60,
      -1,    -1,    63,    64,    -1,    13,    14,    15,    16,    17,
      -1,    -1,    20,    -1,    -1,    76,    77,    78,    79,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    59,    60,    -1,    -1,
      63,    64,    13,    14,    15,    16,    17,    -1,    -1,    20,
      -1,    -1,    -1,    76,    77,    78,    79,    55,    -1,    -1,
      -1,    59,    -1,    -1,    -1,    63,    64,    13,    14,    15,
      16,    17,    -1,    -1,    20,    -1,    -1,    -1,    76,    77,
      78,    79,    -1,    -1,    55,    -1,    -1,    -1,    59,    -1,
      -1,    -1,    63,    64,    13,    14,    15,    16,    17,    -1,
      -1,    20,    -1,    -1,    -1,    76,    77,    78,    79,    -1,
      -1,    -1,    -1,    59,    -1,    -1,    -1,    63,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      76,    77,    78,    79,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,
      79
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    81,    82,    84,    76,     0,    84,     5,    61,
      76,     3,     7,    44,    76,    83,    85,    86,    87,    88,
      61,     6,    83,    66,    76,    62,    86,    85,    76,    76,
      67,    73,    62,    59,    59,    60,    83,    89,    60,    89,
      61,    76,    60,    83,    61,    60,     8,     9,    11,    12,
      13,    14,    15,    16,    17,    20,    30,    48,    59,    61,
      63,    64,    73,    76,    77,    78,    79,    83,    90,    91,
      92,    93,    94,   100,   111,   112,    70,    61,    76,    90,
      61,    59,    59,    59,    73,    72,    76,    83,    76,    93,
      59,    55,    59,    63,    64,    76,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    90,    63,
      64,    59,    63,    64,    76,    62,    91,    73,    65,    66,
      72,    73,    90,    18,    90,   101,   101,    83,    95,   100,
     112,    76,    59,    66,     8,   101,   110,    76,    83,   110,
     110,    60,    68,    57,    55,    65,    19,    69,    71,    63,
      64,    56,    58,    74,    62,    76,    76,    60,   101,   113,
      63,    64,    65,   101,   101,    76,    62,   101,    18,    60,
      60,    76,    73,    59,    60,   101,    59,    60,    60,    68,
      57,    65,    65,    76,    65,   106,    65,   106,   107,   107,
     108,   108,   108,    60,    70,   101,    67,    59,    73,   101,
      93,    93,    65,    96,   101,    60,   113,    67,   101,    61,
     109,   111,   103,   104,   105,   105,   106,   106,   101,    73,
      60,   113,    62,    73,    10,   101,    73,    60,    66,   114,
      60,    24,    29,    93,    98,    99,    60,    62,    93,    97,
     100,   112,    67,    66,   101,    75,    62,    99,    60,    67,
      75,    93
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    80,    81,    82,    82,    83,    83,    83,    83,    84,
      84,    85,    85,    85,    86,    86,    87,    88,    88,    88,
      88,    89,    89,    90,    90,    90,    91,    91,    92,    93,
      93,    93,    93,    93,    93,    93,    93,    93,    93,    93,
      94,    95,    95,    95,    95,    96,    96,    97,    97,    97,
      98,    98,    98,    99,    99,    99,   100,   100,   100,   100,
     100,   101,   102,   102,   103,   103,   104,   104,   104,   105,
     105,   105,   105,   105,   105,   106,   106,   106,   107,   107,
     107,   107,   108,   108,   109,   109,   110,   110,   110,   110,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   112,   112,   112,   112,   112,   112,
     113,   113,   114,   114,   114
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     3,     5,
       7,     0,     1,     2,     1,     1,     3,     8,     9,    11,
      12,     3,     3,     0,     1,     2,     1,     1,     5,     2,
       2,     1,     2,     3,     5,     6,     7,     5,     7,     1,
       9,     0,     4,     1,     1,     0,     1,     0,     1,     1,
       0,     1,     2,     1,     3,     2,     3,     3,     3,     3,
       3,     1,     4,     1,     4,     1,     4,     4,     1,     3,
       3,     4,     4,     3,     1,     3,     3,     1,     3,     3,
       3,     1,     1,     1,     4,     4,     2,     2,     2,     1,
       1,     4,     6,     4,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     3,     3,     4,     5,     6,     5,     6,
       1,     3,     0,     2,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yyls1, yysize * sizeof (*yylsp),
                    &yystacksize);

        yyls = yyls1;
        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 201 "parser.y" /* yacc.c:1646  */
    { RootProgram = new Program((yyloc).first_line, COL((yyloc)), (yyvsp[0].NClassDeclList)); }
#line 1799 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 205 "parser.y" /* yacc.c:1646  */
    { (yyval.NClassDeclList) = new ClassDeclList(); (yyval.NClassDeclList)->push_back((yyvsp[0].NClassDecl)); }
#line 1805 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 206 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].NClassDeclList)->push_back((yyvsp[0].NClassDecl)); }
#line 1811 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 209 "parser.y" /* yacc.c:1646  */
    { (yyval.NType) = new IntegerType(ROW((yyloc)), COL((yyloc))); }
#line 1817 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 210 "parser.y" /* yacc.c:1646  */
    { (yyval.NType) = new BooleanType(ROW((yyloc)), COL((yyloc))); }
#line 1823 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 211 "parser.y" /* yacc.c:1646  */
    { (yyval.NType) = new IdentifierType(ROW((yyloc)), COL((yyloc)), *(yyvsp[0].Str)); }
#line 1829 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 212 "parser.y" /* yacc.c:1646  */
    { (yyval.NType) = new ArrayType(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NType)); }
#line 1835 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 216 "parser.y" /* yacc.c:1646  */
    { (yyval.NClassDecl) = new ClassDecl(ROW((yyloc)), COL((yyloc)), *(yyvsp[-3].Str), "Object", (yyvsp[-1].NDeclList)); }
#line 1841 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 217 "parser.y" /* yacc.c:1646  */
    { (yyval.NClassDecl) = new ClassDecl(ROW((yyloc)), COL((yyloc)), *(yyvsp[-5].Str), *(yyvsp[-3].Str), (yyvsp[-1].NDeclList)); }
#line 1847 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 221 "parser.y" /* yacc.c:1646  */
    { (yyval.NDeclList) = new DeclList(); }
#line 1853 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 222 "parser.y" /* yacc.c:1646  */
    { (yyval.NDeclList) = new DeclList(); (yyval.NDeclList)->push_back((yyvsp[0].NDecl)); }
#line 1859 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 223 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].NDeclList)->push_back((yyvsp[0].NDecl)); }
#line 1865 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 227 "parser.y" /* yacc.c:1646  */
    { (yyval.NDecl) = (yyvsp[0].NDecl); }
#line 1871 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 232 "parser.y" /* yacc.c:1646  */
    { (yyval.NDecl) = new InstVarDecl(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NType), *(yyvsp[-1].Str)); }
#line 1877 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 236 "parser.y" /* yacc.c:1646  */
    { (yyval.NDecl) = new MethodDeclVoid(ROW((yyloc)), COL((yyloc)), *(yyvsp[-5].Str), new VarDeclList(), (yyvsp[-1].NStatementList)); }
#line 1883 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 237 "parser.y" /* yacc.c:1646  */
    { (yyval.NDecl) = new MethodDeclVoid(ROW((yyloc)), COL((yyloc)), *(yyvsp[-6].Str), (yyvsp[-4].NVarDeclList), (yyvsp[-1].NStatementList)); }
#line 1889 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 238 "parser.y" /* yacc.c:1646  */
    { (yyval.NDecl) = new MethodDeclNonVoid(ROW((yyloc)), COL((yyloc)), (yyvsp[-9].NType), *(yyvsp[-8].Str), new VarDeclList(), (yyvsp[-4].NStatementList), (yyvsp[-2].NExp)); }
#line 1895 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 239 "parser.y" /* yacc.c:1646  */
    { (yyval.NDecl) = new MethodDeclNonVoid(ROW((yyloc)), COL((yyloc)), (yyvsp[-10].NType), *(yyvsp[-9].Str), (yyvsp[-7].NVarDeclList), (yyvsp[-4].NStatementList), (yyvsp[-2].NExp)); }
#line 1901 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 243 "parser.y" /* yacc.c:1646  */
    { (yyval.NVarDeclList) = new VarDeclList(); (yyval.NVarDeclList)->push_back(new FormalDecl(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NType), *(yyvsp[-1].Str))); }
#line 1907 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 244 "parser.y" /* yacc.c:1646  */
    { (yyval.NVarDeclList)->push_back(new FormalDecl(ROW((yyloc)), COL((yyloc)), (yyvsp[-1].NType), *(yyvsp[0].Str))); }
#line 1913 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 248 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatementList) = new StatementList(); }
#line 1919 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 249 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatementList) = new StatementList(); (yyval.NStatementList)->push_back((yyvsp[0].NStatement)); }
#line 1925 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 250 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].NStatementList)->push_back((yyvsp[0].NStatement)); }
#line 1931 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 254 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = (yyvsp[0].NStatement); }
#line 1937 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 255 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = (yyvsp[0].NStatement); }
#line 1943 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 259 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new LocalDeclStatement(ROW((yyloc)), COL((yyloc)), new LocalVarDecl(ROW((yyloc)), COL((yyloc)), (yyvsp[-4].NType), *(yyvsp[-3].Str), (yyvsp[-1].NExp))); }
#line 1949 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 263 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = (yyvsp[-1].NStatement); }
#line 1955 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 264 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new CallStatement(ROW((yyloc)), COL((yyloc)), (Call*)(yyvsp[-1].NExp)); }
#line 1961 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 265 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new Block(ROW((yyloc)), COL((yyloc)), new StatementList()); }
#line 1967 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 266 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new Break(ROW((yyloc)), COL((yyloc))); }
#line 1973 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 267 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new Block(ROW((yyloc)), COL((yyloc)), (yyvsp[-1].NStatementList)); }
#line 1979 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 268 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new While(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NExp), (yyvsp[0].NStatement)); }
#line 1985 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 269 "parser.y" /* yacc.c:1646  */
    {
		StatementList* body = new StatementList();
		body->push_back((yyvsp[-4].NStatement));
		body->push_back(new If(ROW((yyloc)), COL((yyloc)), new Not(ROW((yyloc)), COL((yyloc)), (yyvsp[-1].NExp)), new Break(ROW((yyloc)), COL((yyloc))), new Block(ROW((yyloc)), COL((yyloc)), new StatementList())));

		(yyval.NStatement) = new While(ROW((yyloc)), COL((yyloc)), new True(ROW((yyloc)), COL((yyloc))), new Block(ROW((yyloc)), COL((yyloc)), body));
	}
#line 1997 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 276 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new Switch(ROW((yyloc)), COL((yyloc)), (yyvsp[-4].NExp), (yyvsp[-1].NStatementList)); }
#line 2003 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 277 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new If(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NExp), (yyvsp[0].NStatement), new Block(ROW((yyloc)), COL((yyloc)), new StatementList())); }
#line 2009 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 278 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new If(ROW((yyloc)), COL((yyloc)), (yyvsp[-4].NExp), (yyvsp[-2].NStatement), (yyvsp[0].NStatement)); }
#line 2015 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 279 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = (yyvsp[0].NStatement); }
#line 2021 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 283 "parser.y" /* yacc.c:1646  */
    {
		StatementList* stLst = new StatementList();
		stLst->push_back((yyvsp[-6].NStatement));

		StatementList* bodyList = new StatementList();
		bodyList->push_back((yyvsp[0].NStatement));
		bodyList->push_back((yyvsp[-2].NStatement));
		stLst->push_back(new While(ROW((yyloc)), COL((yyloc)), (yyvsp[-4].NExp), new Block(ROW((yyloc)), COL((yyloc)), bodyList)));
		(yyval.NStatement) = new Block(ROW((yyloc)), COL((yyloc)), stLst);
	}
#line 2036 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 296 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new Block(ROW((yyloc)), COL((yyloc)), new StatementList()); }
#line 2042 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 297 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new LocalDeclStatement(ROW((yyloc)), COL((yyloc)), new LocalVarDecl(ROW((yyloc)), COL((yyloc)), (yyvsp[-3].NType), *(yyvsp[-2].Str), (yyvsp[0].NExp))); }
#line 2048 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 298 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = (yyvsp[0].NStatement); }
#line 2054 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 299 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new CallStatement(ROW((yyloc)), COL((yyloc)), (Call*)(yyvsp[0].NExp)); }
#line 2060 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 303 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new True(ROW((yyloc)), COL((yyloc))); }
#line 2066 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 304 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = (yyvsp[0].NExp); }
#line 2072 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 308 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new Block(ROW((yyloc)), COL((yyloc)), new StatementList()); }
#line 2078 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 309 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = (yyvsp[0].NStatement); }
#line 2084 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 310 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new CallStatement(ROW((yyloc)), COL((yyloc)), (Call*)(yyvsp[0].NExp)); }
#line 2090 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 314 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatementList) = new StatementList(); }
#line 2096 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 315 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatementList) = new StatementList(); (yyval.NStatementList)->push_back((yyvsp[0].NStatement)); }
#line 2102 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 316 "parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].NStatementList)->push_back((yyvsp[0].NStatement)); }
#line 2108 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 320 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = (yyvsp[0].NStatement); }
#line 2114 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 321 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new Case(ROW((yyloc)), COL((yyloc)), (yyvsp[-1].NExp)); }
#line 2120 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 322 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new Default(ROW((yyloc)), COL((yyloc))); }
#line 2126 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 326 "parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new Assign(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NExp), (yyvsp[0].NExp)); }
#line 2132 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 327 "parser.y" /* yacc.c:1646  */
    { 
		Exp* e = new IdentifierExp(ROW((yyloc)), COL((yyloc)), *(yyvsp[-2].Str));
		(yyval.NStatement) = new Assign(ROW((yyloc)), COL((yyloc)), e, new Plus(ROW((yyloc)), COL((yyloc)), e, new IntegerLiteral(ROW((yyloc)), COL((yyloc)), 1)));
	}
#line 2141 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 331 "parser.y" /* yacc.c:1646  */
    {
		Exp* e = new IdentifierExp(ROW((yyloc)), COL((yyloc)), *(yyvsp[0].Str));
		(yyval.NStatement) = new Assign(ROW((yyloc)), COL((yyloc)), e, new Plus(ROW((yyloc)), COL((yyloc)), e, new IntegerLiteral(ROW((yyloc)), COL((yyloc)), 1)));
	}
#line 2150 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 335 "parser.y" /* yacc.c:1646  */
    {
		Exp* e = new IdentifierExp(ROW((yyloc)), COL((yyloc)), *(yyvsp[-2].Str));
		(yyval.NStatement) = new Assign(ROW((yyloc)), COL((yyloc)), e, new Minus(ROW((yyloc)), COL((yyloc)), e, new IntegerLiteral(ROW((yyloc)), COL((yyloc)), 1))); 
	}
#line 2159 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 339 "parser.y" /* yacc.c:1646  */
    {
		Exp* e = new IdentifierExp(ROW((yyloc)), COL((yyloc)), *(yyvsp[0].Str));
		(yyval.NStatement) = new Assign(ROW((yyloc)), COL((yyloc)), e, new Minus(ROW((yyloc)), COL((yyloc)), e, new IntegerLiteral(ROW((yyloc)), COL((yyloc)), 1))); 
	}
#line 2168 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 346 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = (yyvsp[0].NExp); }
#line 2174 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 350 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Or(ROW((yyloc)), COL((yyloc)), (yyvsp[-3].NExp), (yyvsp[0].NExp)); }
#line 2180 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 351 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = (yyvsp[0].NExp); }
#line 2186 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 355 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new And(ROW((yyloc)), COL((yyloc)), (yyvsp[-3].NExp), (yyvsp[0].NExp)); }
#line 2192 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 356 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = (yyvsp[0].NExp); }
#line 2198 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 360 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Equals(ROW((yyloc)), COL((yyloc)), (yyvsp[-3].NExp), (yyvsp[0].NExp)); }
#line 2204 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 361 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Not(ROW((yyloc)), COL((yyloc)), new Equals(ROW((yyloc)), COL((yyloc)), (yyvsp[-3].NExp), (yyvsp[0].NExp))); }
#line 2210 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 362 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = (yyvsp[0].NExp); }
#line 2216 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 366 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new LessThan(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NExp), (yyvsp[0].NExp)); }
#line 2222 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 367 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new GreaterThan(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NExp), (yyvsp[0].NExp)); }
#line 2228 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 368 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Not(ROW((yyloc)), COL((yyloc)), new GreaterThan(ROW((yyloc)), COL((yyloc)), (yyvsp[-3].NExp), (yyvsp[0].NExp))); }
#line 2234 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 369 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Not(ROW((yyloc)), COL((yyloc)), new LessThan(ROW((yyloc)), COL((yyloc)), (yyvsp[-3].NExp), (yyvsp[0].NExp))); }
#line 2240 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 370 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new InstanceOf(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NExp), new IdentifierType(ROW((yyloc)), COL((yyloc)), *(yyvsp[0].Str))); }
#line 2246 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 371 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = (yyvsp[0].NExp); }
#line 2252 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 375 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Plus(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NExp), (yyvsp[0].NExp)); }
#line 2258 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 376 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Minus(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NExp), (yyvsp[0].NExp)); }
#line 2264 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 377 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = (yyvsp[0].NExp); }
#line 2270 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 381 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Times(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NExp), (yyvsp[0].NExp)); }
#line 2276 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 382 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Divide(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NExp), (yyvsp[0].NExp)); }
#line 2282 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 383 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Remainder(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NExp), (yyvsp[0].NExp)); }
#line 2288 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 384 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = (yyvsp[0].NExp); }
#line 2294 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 388 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = (yyvsp[0].NExp); }
#line 2300 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 389 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = (yyvsp[0].NExp); }
#line 2306 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 394 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Cast(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NType), (yyvsp[0].NExp)); }
#line 2312 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 395 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Cast(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NType), (yyvsp[0].NExp)); }
#line 2318 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 399 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Minus(ROW((yyloc)), COL((yyloc)), new IntegerLiteral(ROW((yyloc)), COL((yyloc)), 0), (yyvsp[0].NExp)); }
#line 2324 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 400 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Not(ROW((yyloc)), COL((yyloc)), (yyvsp[0].NExp)); }
#line 2330 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 401 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Plus(ROW((yyloc)), COL((yyloc)), new IntegerLiteral(ROW((yyloc)), COL((yyloc)), 0), (yyvsp[0].NExp)); }
#line 2336 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 402 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = (yyvsp[0].NExp); }
#line 2342 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 407 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new IdentifierExp(ROW((yyloc)), COL((yyloc)), *(yyvsp[0].Str)); }
#line 2348 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 408 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new ArrayLookup(ROW((yyloc)), COL((yyloc)), (yyvsp[-3].NExp), (yyvsp[-1].NExp)); }
#line 2354 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 410 "parser.y" /* yacc.c:1646  */
    { 
		if((yyvsp[0].Int) > 0){
			Type* arrayType = new ArrayType(ROW((yyloc)), COL((yyloc)), (yyvsp[-4].NType));

			for(int i = 0; i < (yyvsp[0].Int); ++i){
				arrayType = new ArrayType(ROW((yyloc)), COL((yyloc)), arrayType);
			}

			(yyval.NExp) = new NewArray(ROW((yyloc)), COL((yyloc)), arrayType, (yyvsp[-2].NExp));
		}
		else{
			(yyval.NExp) = new NewArray(ROW((yyloc)), COL((yyloc)), (yyvsp[-4].NType), (yyvsp[-2].NExp));
		}
	}
#line 2373 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 424 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new NewObject(ROW((yyloc)), COL((yyloc)), new IdentifierType(ROW((yyloc)), COL((yyloc)), *(yyvsp[-2].Str))); }
#line 2379 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 425 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new IntegerLiteral(ROW((yyloc)), COL((yyloc)), atoi((yyvsp[0].Str)->c_str())); }
#line 2385 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 426 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = (yyvsp[0].NExp); }
#line 2391 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 427 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new StringLiteral(ROW((yyloc)), COL((yyloc)), *(yyvsp[0].Str)); }
#line 2397 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 428 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new InstVarAccess(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NExp), *(yyvsp[0].Str)); }
#line 2403 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 429 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new This(ROW((yyloc)), COL((yyloc))); }
#line 2409 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 430 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new False(ROW((yyloc)), COL((yyloc))); }
#line 2415 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 431 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new True(ROW((yyloc)), COL((yyloc))); }
#line 2421 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 432 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Null(ROW((yyloc)), COL((yyloc))); }
#line 2427 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 433 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new IntegerLiteral(ROW((yyloc)), COL((yyloc)), int(*((yyvsp[0].Str)->c_str()))); }
#line 2433 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 434 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = (yyvsp[-1].NExp); }
#line 2439 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 438 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Call(ROW((yyloc)), COL((yyloc)), new This(ROW((yyloc)), COL((yyloc))), *(yyvsp[-2].Str), new ExpList()); }
#line 2445 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 439 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Call(ROW((yyloc)), COL((yyloc)), new This(ROW((yyloc)), COL((yyloc))), *(yyvsp[-3].Str), (yyvsp[-1].NExpList)); }
#line 2451 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 440 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Call(ROW((yyloc)), COL((yyloc)), new Super(ROW((yyloc)), COL((yyloc))), *(yyvsp[-2].Str), new ExpList()); }
#line 2457 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 441 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Call(ROW((yyloc)), COL((yyloc)), new Super(ROW((yyloc)), COL((yyloc))), *(yyvsp[-3].Str), (yyvsp[-1].NExpList)); }
#line 2463 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 442 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Call(ROW((yyloc)), COL((yyloc)), (yyvsp[-4].NExp), *(yyvsp[-2].Str), new ExpList()); }
#line 2469 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 443 "parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Call(ROW((yyloc)), COL((yyloc)), (yyvsp[-5].NExp), *(yyvsp[-3].Str), (yyvsp[-1].NExpList)); }
#line 2475 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 447 "parser.y" /* yacc.c:1646  */
    { (yyval.NExpList) = new ExpList(); (yyval.NExpList)->push_back((yyvsp[0].NExp)); }
#line 2481 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 448 "parser.y" /* yacc.c:1646  */
    { (yyval.NExpList)->push_back((yyvsp[0].NExp)); }
#line 2487 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 452 "parser.y" /* yacc.c:1646  */
    { (yyval.Int) = 0;}
#line 2493 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 453 "parser.y" /* yacc.c:1646  */
    { (yyval.Int) = 0; }
#line 2499 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 454 "parser.y" /* yacc.c:1646  */
    { ++(yyval.Int); }
#line 2505 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2509 "parser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[1] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 458 "parser.y" /* yacc.c:1906  */

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

	PrintVisitor* printVisitor = new PrintVisitor();

	RootProgram->accept(printVisitor);

	return 0;
}

void reportTok(char* out){
	/* printf("Line %d.%d: %s\n", 
		yylloc.first_line,yylloc.first_COL(@$)umn, out); */
}

void yyerror(const char* s) {
	fprintf(stderr, "Error on Line %d.%d: %s\n", 
		yylloc.first_line,yylloc.first_column,s);
	exit(1);
}
