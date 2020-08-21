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
#line 1 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:355  */

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

#line 117 "parser.tab.c" /* yacc.c:355  */

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
#line 30 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:355  */

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

#line 260 "parser.tab.c" /* yacc.c:355  */
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
#line 22 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:355  */

	extern Program* RootProgram;

#line 291 "parser.tab.c" /* yacc.c:355  */

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 297 "parser.tab.c" /* yacc.c:358  */
/* Unqualified %code blocks.  */
#line 26 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:359  */

	Program* RootProgram;

#line 303 "parser.tab.c" /* yacc.c:359  */

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
#define YYLAST   956

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  80
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  116
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  256

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
       0,   199,   199,   203,   204,   207,   208,   209,   210,   214,
     215,   219,   220,   221,   225,   226,   230,   234,   235,   236,
     237,   241,   248,   249,   250,   254,   255,   256,   260,   261,
     265,   269,   270,   271,   272,   273,   274,   275,   282,   283,
     284,   285,   289,   302,   303,   304,   305,   309,   310,   314,
     315,   316,   320,   321,   322,   326,   327,   328,   332,   333,
     337,   341,   345,   352,   356,   357,   361,   362,   366,   367,
     368,   372,   373,   374,   375,   376,   377,   381,   382,   383,
     387,   388,   389,   390,   394,   395,   400,   401,   405,   406,
     407,   408,   413,   414,   415,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   444,   445,   446,   447,
     448,   449,   453,   454,   458,   459,   460
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
  "method-decl", "formal-list", "formal-list-extended", "stmt-decl-0plus",
  "stmt-decl", "local-var-decl", "stmt", "for", "initialization",
  "termination", "increment", "case-0plus", "case", "assign", "exp",
  "exp8", "exp7", "exp6", "exp5", "exp4", "exp3", "exp2", "cast-exp",
  "unary-exp", "exp1", "callExp", "exp-list", "empty-bracket-list", YY_NULLPTR
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

#define YYPACT_NINF -148

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-148)))

#define YYTABLE_NINF -93

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       0,   -60,    20,     0,  -148,    35,  -148,  -148,   -29,     5,
       1,  -148,  -148,     4,  -148,   -30,    10,  -148,  -148,  -148,
       5,    -7,   -25,    21,    32,  -148,  -148,    16,    15,    34,
    -148,  -148,  -148,    19,    27,    39,    -8,    42,    63,    57,
     454,    59,    82,   454,    89,   100,   107,   110,    98,  -148,
    -148,  -148,    83,  -148,    25,   636,   115,   798,   454,   121,
     114,  -148,    51,  -148,  -148,  -148,    55,   214,  -148,  -148,
    -148,  -148,   122,    96,   130,    28,   135,   454,   252,   454,
     798,   798,   531,  -148,   132,   150,   144,   113,   203,   798,
     825,   509,   825,   825,   154,   156,   146,   162,    29,   -14,
     123,     8,  -148,  -148,  -148,    -1,  -148,   329,   157,   159,
     225,   169,   172,   155,  -148,  -148,  -148,   798,   798,   161,
    -148,    61,    28,   353,   798,   430,   183,   186,    64,   174,
    -148,   175,   190,   191,   665,   193,   194,  -148,   104,    62,
    -148,  -148,  -148,   182,   199,   192,   206,   198,   690,   720,
     798,   798,   798,   798,   798,  -148,  -148,  -148,  -148,  -148,
      84,  -148,  -148,   798,  -148,   212,   222,  -148,    80,  -148,
     185,   798,   636,   636,   218,   798,   745,  -148,   219,   798,
     233,   877,   798,   798,   798,   798,  -148,   798,   123,   798,
     123,     8,     8,  -148,  -148,  -148,  -148,   798,   223,  -148,
     773,  -148,   235,   226,  -148,   285,   798,   232,  -148,  -148,
      88,   240,   238,   613,  -148,    -1,   162,    29,   -14,   -14,
     123,   123,  -148,  -148,  -148,    97,  -148,   245,   636,  -148,
     850,  -148,   241,   243,  -148,   798,   237,  -148,   541,  -148,
    -148,  -148,  -148,   250,  -148,   254,  -148,   251,   242,  -148,
    -148,  -148,   636,  -148,  -148,  -148
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
      25,    22,     0,    25,     0,     0,     0,     0,     0,   100,
     101,   102,     0,   103,     0,     0,     0,     0,    25,     0,
       0,    33,     7,    96,    98,   104,     0,     0,    26,    29,
      28,    41,     0,     0,    97,     0,    21,    25,     0,    25,
       0,     0,    43,    34,     0,     7,     0,    92,     0,     0,
       0,     0,     0,     0,    92,     0,    63,    65,    67,    70,
      76,    79,    83,    84,    85,    91,    97,     0,     0,     0,
       0,     0,     0,     0,    17,    27,    31,     0,     0,     0,
      32,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      45,    97,     0,     0,     0,     0,     0,    89,    92,     0,
      88,    90,   105,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    35,    62,    60,   106,   112,
       0,    61,    59,     0,    58,     0,    99,    23,     0,    18,
       0,     0,     0,     0,     0,    47,     0,    95,     0,     0,
       0,     0,     0,     0,     0,     0,    75,     0,    71,     0,
      72,    78,    77,    82,    80,    81,   107,     0,     0,    93,
       0,    24,     0,     0,    36,    39,     0,     0,    48,   108,
       0,   114,     0,    52,    86,    87,    64,    66,    69,    68,
      73,    74,   113,    30,   110,     0,    19,     0,     0,    44,
      49,   109,     0,    94,    37,     0,     0,    55,     0,    53,
     111,    20,    40,     0,    50,    97,   115,     0,     0,    57,
      38,    54,     0,   116,    56,    42
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -148,  -148,  -148,    43,   316,   300,    -2,  -148,  -148,   287,
    -148,    68,   -17,  -148,   -53,  -148,  -148,  -148,  -148,  -148,
      85,   -81,    18,  -148,   140,   141,     7,   -36,    56,    48,
     145,    90,   -40,   -34,  -147,  -148
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    66,     4,    16,    17,    18,    19,    37,
      76,    67,    68,    69,    70,    71,   129,   207,   243,   238,
     239,    72,   159,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   160,   233
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      73,   130,    88,    73,     1,   147,    74,    11,    11,    74,
      21,    12,    12,    11,    26,    73,     5,    12,    73,    11,
       6,    74,    11,    12,    74,    26,    12,    73,    11,   210,
      11,    11,    12,    74,    12,    12,    23,    73,    73,    73,
       8,    23,    73,    74,    74,    74,    24,    10,   131,    13,
     115,    29,    15,   225,    13,   148,    22,   149,    23,    15,
      13,   115,    20,    15,   152,   118,   153,    73,    41,    28,
      15,   119,    25,    74,    33,    95,    36,    36,    32,    35,
      14,    14,   154,    73,   145,    73,    14,    38,    30,    74,
     115,    74,    14,    34,   146,    14,     9,    86,   126,   127,
      40,    85,    42,    14,    14,    31,   115,   136,   115,    95,
     110,    78,   188,   190,   111,   112,   -92,    44,   121,   204,
     205,    23,   181,   -92,    43,   128,   107,    23,    23,    75,
      23,   113,    73,    73,   139,   164,   165,   167,    74,    74,
     174,   215,   170,    77,   196,   123,    23,   125,   231,   244,
      79,   220,   178,   221,   197,    84,   201,   240,   197,    80,
     237,   117,   118,   110,    -7,   168,    81,   197,   119,    82,
      -7,    83,   110,    73,    89,   242,   111,   112,   109,    74,
     137,   198,   140,   141,   108,   237,   150,   151,    73,   203,
      73,   218,   219,   208,    74,   116,   245,   212,    73,   255,
     193,   194,   195,   120,    74,   122,   191,   192,   132,   133,
     134,   135,    73,   110,   143,   222,   142,    11,    74,   144,
     163,    12,    45,    46,   229,    47,    48,    49,    50,    51,
      52,    53,   161,   156,    54,   157,   162,   166,    49,    50,
      51,    52,    53,   172,    55,    54,   173,   175,   -46,   176,
     182,   177,   179,   248,   180,    11,   183,   184,   202,    12,
      45,    46,    56,    47,    48,    49,    50,    51,    52,    53,
     124,   185,    54,    57,   186,    58,   114,    59,    60,   199,
      90,   200,    55,   206,    91,   158,   211,    61,    92,    93,
      62,    63,    64,    65,   213,   228,   223,   226,   234,   227,
      56,    94,    63,    64,    65,   230,   232,   241,   246,   247,
     252,    57,   249,    58,   -51,    59,    60,   254,   253,     7,
      27,    39,   216,   251,   217,    61,   214,     0,    62,    63,
      64,    65,    11,     0,     0,     0,    12,    45,    46,     0,
      47,    48,    49,    50,    51,    52,    53,     0,     0,    54,
       0,     0,     0,     0,     0,     0,    11,     0,     0,    55,
      12,    45,    46,     0,    47,    48,    49,    50,    51,    52,
      53,     0,     0,    54,     0,     0,     0,    56,     0,     0,
       0,     0,     0,    55,     0,     0,     0,     0,    57,     0,
      58,   155,    59,    60,     0,     0,     0,     0,     0,     0,
       0,    56,    61,     0,     0,    62,    63,    64,    65,     0,
       0,     0,    57,     0,    58,   169,    59,    60,     0,     0,
       0,     0,     0,     0,     0,     0,    61,     0,     0,    62,
      63,    64,    65,    11,     0,     0,     0,    12,    45,    46,
       0,    47,    48,    49,    50,    51,    52,    53,   171,     0,
      54,     0,     0,     0,     0,     0,     0,    11,     0,     0,
      55,    12,    45,    46,     0,    47,    48,    49,    50,    51,
      52,    53,     0,     0,    54,     0,     0,     0,    56,     0,
       0,     0,     0,     0,    55,     0,     0,     0,     0,    57,
       0,    58,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,    56,    61,     0,     0,    62,    63,    64,    65,
       0,     0,    11,    57,     0,    58,    12,    59,    60,     0,
       0,     0,    49,    50,    51,    52,    53,    61,     0,    54,
      62,    63,    64,    65,    11,     0,     0,     0,    12,     0,
       0,     0,     0,     0,    49,    50,    51,    52,    53,    45,
      46,    54,    47,    48,    49,    50,    51,    52,    53,     0,
       0,    54,     0,     0,    90,   235,     0,     0,    91,     0,
     236,    55,    92,    93,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   138,    63,    64,    65,    56,
      57,     0,     0,     0,    59,    60,     0,     0,     0,     0,
      57,     0,    58,   250,    59,    60,     0,    62,    63,    64,
      65,     0,     0,     0,    61,     0,     0,    87,    63,    64,
      65,    45,    46,     0,    47,    48,    49,    50,    51,    52,
      53,     0,     0,    54,     0,     0,     0,   235,     0,     0,
       0,     0,   236,    55,    45,    46,     0,    47,    48,    49,
      50,    51,    52,    53,     0,     0,    54,     0,     0,     0,
       0,    56,     0,     0,     0,     0,    55,     0,     0,     0,
       0,     0,    57,     0,    58,     0,    59,    60,    49,    50,
      51,    52,    53,     0,    56,    54,    61,     0,     0,    87,
      63,    64,    65,     0,     0,    57,     0,    58,     0,    59,
      60,     0,     0,    49,    50,    51,    52,    53,     0,    61,
      54,     0,    87,    63,    64,    65,     0,     0,     0,     0,
      90,     0,     0,     0,    91,     0,     0,     0,    92,    93,
       0,     0,    30,    49,    50,    51,    52,    53,     0,     0,
      54,    94,    63,    64,    65,    90,     0,     0,     0,    91,
       0,     0,     0,    92,    93,   187,     0,     0,    49,    50,
      51,    52,    53,     0,     0,    54,    94,    63,    64,    65,
       0,     0,     0,     0,     0,    90,     0,     0,     0,    91,
       0,     0,     0,    92,    93,   189,    49,    50,    51,    52,
      53,     0,     0,    54,     0,     0,    94,    63,    64,    65,
      90,     0,     0,     0,    91,   209,     0,     0,    92,    93,
       0,    49,    50,    51,    52,    53,     0,     0,    54,     0,
       0,    94,    63,    64,    65,     0,     0,     0,    90,     0,
       0,     0,    91,   224,     0,     0,    92,    93,    49,    50,
      51,    52,    53,     0,     0,    54,     0,     0,     0,    94,
      63,    64,    65,    90,     0,     0,     0,    91,     0,     0,
       0,    92,    93,    49,    50,    51,    52,    53,     0,     0,
      54,     0,     0,     0,    94,    63,    64,    65,     0,     0,
      90,     0,     0,     0,    57,     0,     0,     0,    92,    93,
      49,    50,    51,    52,    53,     0,     0,    54,     0,     0,
       0,    94,    63,    64,    65,     0,     0,     0,     0,    57,
       0,     0,     0,    59,    60,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,    63,    64,    65,
       0,     0,     0,     0,     0,     0,    91,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    94,    63,    64,    65
};

static const yytype_int16 yycheck[] =
{
      40,    82,    55,    43,     4,    19,    40,     3,     3,    43,
       6,     7,     7,     3,    16,    55,    76,     7,    58,     3,
       0,    55,     3,     7,    58,    27,     7,    67,     3,   176,
       3,     3,     7,    67,     7,     7,    66,    77,    78,    79,
       5,    66,    82,    77,    78,    79,    76,    76,    82,    44,
      67,    76,     9,   200,    44,    69,    13,    71,    66,    16,
      44,    78,    61,    20,    56,    66,    58,   107,    76,    76,
      27,    72,    62,   107,    59,    57,    33,    34,    62,    60,
      76,    76,    74,   123,    55,   125,    76,    60,    67,   123,
     107,   125,    76,    59,    65,    76,    61,    54,    80,    81,
      61,    76,    60,    76,    76,    73,   123,    89,   125,    91,
      59,    43,   148,   149,    63,    64,    65,    60,    75,   172,
     173,    66,    60,    72,    61,    82,    58,    66,    66,    70,
      66,    76,   172,   173,    91,   117,   118,    76,   172,   173,
      76,   181,   124,    61,    60,    77,    66,    79,    60,   230,
      61,   187,   134,   189,    70,    72,    76,    60,    70,    59,
     213,    65,    66,    59,    60,   122,    59,    70,    72,    59,
      66,    73,    59,   213,    59,   228,    63,    64,    64,   213,
      90,   163,    92,    93,    63,   238,    63,    64,   228,   171,
     230,   184,   185,   175,   228,    73,   230,   179,   238,   252,
     152,   153,   154,    73,   238,    70,   150,   151,    76,    59,
      66,     8,   252,    59,    68,   197,    60,     3,   252,    57,
      65,     7,     8,     9,   206,    11,    12,    13,    14,    15,
      16,    17,    63,    76,    20,    76,    64,    76,    13,    14,
      15,    16,    17,    60,    30,    20,    60,    73,    73,    59,
      68,    60,    59,   235,    60,     3,    57,    65,    73,     7,
       8,     9,    48,    11,    12,    13,    14,    15,    16,    17,
      18,    65,    20,    59,    76,    61,    62,    63,    64,    67,
      55,    59,    30,    65,    59,    60,    67,    73,    63,    64,
      76,    77,    78,    79,    61,    10,    73,    62,    60,    73,
      48,    76,    77,    78,    79,    73,    66,    62,    67,    66,
      60,    59,    75,    61,    60,    63,    64,    75,    67,     3,
      20,    34,   182,   238,   183,    73,   181,    -1,    76,    77,
      78,    79,     3,    -1,    -1,    -1,     7,     8,     9,    -1,
      11,    12,    13,    14,    15,    16,    17,    -1,    -1,    20,
      -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    30,
       7,     8,     9,    -1,    11,    12,    13,    14,    15,    16,
      17,    -1,    -1,    20,    -1,    -1,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    59,    -1,
      61,    62,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    48,    73,    -1,    -1,    76,    77,    78,    79,    -1,
      -1,    -1,    59,    -1,    61,    62,    63,    64,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    73,    -1,    -1,    76,
      77,    78,    79,     3,    -1,    -1,    -1,     7,     8,     9,
      -1,    11,    12,    13,    14,    15,    16,    17,    18,    -1,
      20,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      30,     7,     8,     9,    -1,    11,    12,    13,    14,    15,
      16,    17,    -1,    -1,    20,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    59,
      -1,    61,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    73,    -1,    -1,    76,    77,    78,    79,
      -1,    -1,     3,    59,    -1,    61,     7,    63,    64,    -1,
      -1,    -1,    13,    14,    15,    16,    17,    73,    -1,    20,
      76,    77,    78,    79,     3,    -1,    -1,    -1,     7,    -1,
      -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,     8,
       9,    20,    11,    12,    13,    14,    15,    16,    17,    -1,
      -1,    20,    -1,    -1,    55,    24,    -1,    -1,    59,    -1,
      29,    30,    63,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,    48,
      59,    -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,
      59,    -1,    61,    62,    63,    64,    -1,    76,    77,    78,
      79,    -1,    -1,    -1,    73,    -1,    -1,    76,    77,    78,
      79,     8,     9,    -1,    11,    12,    13,    14,    15,    16,
      17,    -1,    -1,    20,    -1,    -1,    -1,    24,    -1,    -1,
      -1,    -1,    29,    30,     8,     9,    -1,    11,    12,    13,
      14,    15,    16,    17,    -1,    -1,    20,    -1,    -1,    -1,
      -1,    48,    -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,
      -1,    -1,    59,    -1,    61,    -1,    63,    64,    13,    14,
      15,    16,    17,    -1,    48,    20,    73,    -1,    -1,    76,
      77,    78,    79,    -1,    -1,    59,    -1,    61,    -1,    63,
      64,    -1,    -1,    13,    14,    15,    16,    17,    -1,    73,
      20,    -1,    76,    77,    78,    79,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    59,    -1,    -1,    -1,    63,    64,
      -1,    -1,    67,    13,    14,    15,    16,    17,    -1,    -1,
      20,    76,    77,    78,    79,    55,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    63,    64,    65,    -1,    -1,    13,    14,
      15,    16,    17,    -1,    -1,    20,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    63,    64,    65,    13,    14,    15,    16,
      17,    -1,    -1,    20,    -1,    -1,    76,    77,    78,    79,
      55,    -1,    -1,    -1,    59,    60,    -1,    -1,    63,    64,
      -1,    13,    14,    15,    16,    17,    -1,    -1,    20,    -1,
      -1,    76,    77,    78,    79,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    59,    60,    -1,    -1,    63,    64,    13,    14,
      15,    16,    17,    -1,    -1,    20,    -1,    -1,    -1,    76,
      77,    78,    79,    55,    -1,    -1,    -1,    59,    -1,    -1,
      -1,    63,    64,    13,    14,    15,    16,    17,    -1,    -1,
      20,    -1,    -1,    -1,    76,    77,    78,    79,    -1,    -1,
      55,    -1,    -1,    -1,    59,    -1,    -1,    -1,    63,    64,
      13,    14,    15,    16,    17,    -1,    -1,    20,    -1,    -1,
      -1,    76,    77,    78,    79,    -1,    -1,    -1,    -1,    59,
      -1,    -1,    -1,    63,    64,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    78,    79,
      -1,    -1,    -1,    -1,    -1,    -1,    59,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    76,    77,    78,    79
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,    81,    82,    84,    76,     0,    84,     5,    61,
      76,     3,     7,    44,    76,    83,    85,    86,    87,    88,
      61,     6,    83,    66,    76,    62,    86,    85,    76,    76,
      67,    73,    62,    59,    59,    60,    83,    89,    60,    89,
      61,    76,    60,    61,    60,     8,     9,    11,    12,    13,
      14,    15,    16,    17,    20,    30,    48,    59,    61,    63,
      64,    73,    76,    77,    78,    79,    83,    91,    92,    93,
      94,    95,   101,   112,   113,    70,    90,    61,    91,    61,
      59,    59,    59,    73,    72,    76,    83,    76,    94,    59,
      55,    59,    63,    64,    76,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    91,    63,    64,
      59,    63,    64,    76,    62,    92,    73,    65,    66,    72,
      73,    83,    70,    91,    18,    91,   102,   102,    83,    96,
     101,   113,    76,    59,    66,     8,   102,   111,    76,    83,
     111,   111,    60,    68,    57,    55,    65,    19,    69,    71,
      63,    64,    56,    58,    74,    62,    76,    76,    60,   102,
     114,    63,    64,    65,   102,   102,    76,    76,    83,    62,
     102,    18,    60,    60,    76,    73,    59,    60,   102,    59,
      60,    60,    68,    57,    65,    65,    76,    65,   107,    65,
     107,   108,   108,   109,   109,   109,    60,    70,   102,    67,
      59,    76,    73,   102,    94,    94,    65,    97,   102,    60,
     114,    67,   102,    61,   110,   112,   104,   105,   106,   106,
     107,   107,   102,    73,    60,   114,    62,    73,    10,   102,
      73,    60,    66,   115,    60,    24,    29,    94,    99,   100,
      60,    62,    94,    98,   101,   113,    67,    66,   102,    75,
      62,   100,    60,    67,    75,    94
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    80,    81,    82,    82,    83,    83,    83,    83,    84,
      84,    85,    85,    85,    86,    86,    87,    88,    88,    88,
      88,    89,    90,    90,    90,    91,    91,    91,    92,    92,
      93,    94,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    95,    96,    96,    96,    96,    97,    97,    98,
      98,    98,    99,    99,    99,   100,   100,   100,   101,   101,
     101,   101,   101,   102,   103,   103,   104,   104,   105,   105,
     105,   106,   106,   106,   106,   106,   106,   107,   107,   107,
     108,   108,   108,   108,   109,   109,   110,   110,   111,   111,
     111,   111,   112,   112,   112,   112,   112,   112,   112,   112,
     112,   112,   112,   112,   112,   112,   113,   113,   113,   113,
     113,   113,   114,   114,   115,   115,   115
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     1,     3,     5,
       7,     0,     1,     2,     1,     1,     3,     8,     9,    11,
      12,     3,     0,     3,     4,     0,     1,     2,     1,     1,
       5,     2,     2,     1,     2,     3,     5,     6,     7,     5,
       7,     1,     9,     0,     4,     1,     1,     0,     1,     0,
       1,     1,     0,     1,     2,     1,     3,     2,     3,     3,
       3,     3,     3,     1,     4,     1,     4,     1,     4,     4,
       1,     3,     3,     4,     4,     3,     1,     3,     3,     1,
       3,     3,     3,     1,     1,     1,     4,     4,     2,     2,
       2,     1,     1,     4,     6,     4,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     3,     3,     4,     5,     6,
       5,     6,     1,     3,     0,     2,     3
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
#line 199 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { RootProgram = new Program((yyloc).first_line, COL((yyloc)), (yyvsp[0].NClassDeclList)); }
#line 1796 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 203 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NClassDeclList) = new ClassDeclList(); (yyval.NClassDeclList)->push_back((yyvsp[0].NClassDecl)); }
#line 1802 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 204 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].NClassDeclList)->push_back((yyvsp[0].NClassDecl)); }
#line 1808 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 207 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NType) = new IntegerType(ROW((yyloc)), COL((yyloc))); }
#line 1814 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 208 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NType) = new BooleanType(ROW((yyloc)), COL((yyloc))); }
#line 1820 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 209 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NType) = new IdentifierType(ROW((yyloc)), COL((yyloc)), *(yyvsp[0].Str)); }
#line 1826 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 210 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NType) = new ArrayType(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NType)); }
#line 1832 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 214 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NClassDecl) = new ClassDecl(ROW((yyloc)), COL((yyloc)), *(yyvsp[-3].Str), "Object", (yyvsp[-1].NDeclList)); }
#line 1838 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 215 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NClassDecl) = new ClassDecl(ROW((yyloc)), COL((yyloc)), *(yyvsp[-5].Str), *(yyvsp[-3].Str), (yyvsp[-1].NDeclList)); }
#line 1844 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 219 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NDeclList) = new DeclList(); }
#line 1850 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 220 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NDeclList) = new DeclList(); (yyval.NDeclList)->push_back((yyvsp[0].NDecl)); }
#line 1856 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 221 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].NDeclList)->push_back((yyvsp[0].NDecl)); }
#line 1862 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 225 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NDecl) = (yyvsp[0].NDecl); }
#line 1868 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 230 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NDecl) = new InstVarDecl(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NType), *(yyvsp[-1].Str)); }
#line 1874 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 234 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NDecl) = new MethodDeclVoid(ROW((yyloc)), COL((yyloc)), *(yyvsp[-5].Str), new VarDeclList(), (yyvsp[-1].NStatementList)); }
#line 1880 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 235 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NDecl) = new MethodDeclVoid(ROW((yyloc)), COL((yyloc)), *(yyvsp[-6].Str), (yyvsp[-4].NVarDeclList), (yyvsp[-1].NStatementList)); }
#line 1886 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 236 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NDecl) = new MethodDeclNonVoid(ROW((yyloc)), COL((yyloc)), (yyvsp[-9].NType), *(yyvsp[-8].Str), new VarDeclList(), (yyvsp[-4].NStatementList), (yyvsp[-2].NExp)); }
#line 1892 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 237 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NDecl) = new MethodDeclNonVoid(ROW((yyloc)), COL((yyloc)), (yyvsp[-10].NType), *(yyvsp[-9].Str), (yyvsp[-7].NVarDeclList), (yyvsp[-4].NStatementList), (yyvsp[-2].NExp)); }
#line 1898 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 241 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { 
		(yyvsp[0].NVarDeclList)->push_front(new FormalDecl(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NType), *(yyvsp[-1].Str)));
		(yyval.NVarDeclList) = (yyvsp[0].NVarDeclList);
	}
#line 1907 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 248 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    {(yyval.NVarDeclList) = new VarDeclList();}
#line 1913 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 249 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NVarDeclList) = new VarDeclList(); (yyval.NVarDeclList)->push_back(new FormalDecl(ROW((yyloc)), COL((yyloc)), (yyvsp[-1].NType), *(yyvsp[0].Str))); }
#line 1919 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 250 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NVarDeclList)->push_back(new FormalDecl(ROW((yyloc)), COL((yyloc)), (yyvsp[-1].NType), *(yyvsp[0].Str))); }
#line 1925 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 254 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatementList) = new StatementList(); }
#line 1931 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 255 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatementList) = new StatementList(); (yyval.NStatementList)->push_back((yyvsp[0].NStatement)); }
#line 1937 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 256 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].NStatementList)->push_back((yyvsp[0].NStatement)); }
#line 1943 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 260 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = (yyvsp[0].NStatement); }
#line 1949 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 261 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = (yyvsp[0].NStatement); }
#line 1955 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 265 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new LocalDeclStatement(ROW((yyloc)), COL((yyloc)), new LocalVarDecl(ROW((yyloc)), COL((yyloc)), (yyvsp[-4].NType), *(yyvsp[-3].Str), (yyvsp[-1].NExp))); }
#line 1961 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 269 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = (yyvsp[-1].NStatement); }
#line 1967 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 270 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new CallStatement(ROW((yyloc)), COL((yyloc)), (Call*)(yyvsp[-1].NExp)); }
#line 1973 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 271 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new Block(ROW((yyloc)), COL((yyloc)), new StatementList()); }
#line 1979 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 272 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new Break(ROW((yyloc)), COL((yyloc))); }
#line 1985 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 273 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new Block(ROW((yyloc)), COL((yyloc)), (yyvsp[-1].NStatementList)); }
#line 1991 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 274 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new While(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NExp), (yyvsp[0].NStatement)); }
#line 1997 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 275 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    {
		StatementList* body = new StatementList();
		body->push_back((yyvsp[-4].NStatement));
		body->push_back(new If(ROW((yyloc)), COL((yyloc)), new Not(ROW((yyloc)), COL((yyloc)), (yyvsp[-1].NExp)), new Break(ROW((yyloc)), COL((yyloc))), new Block(ROW((yyloc)), COL((yyloc)), new StatementList())));

		(yyval.NStatement) = new While(ROW((yyloc)), COL((yyloc)), new True(ROW((yyloc)), COL((yyloc))), new Block(ROW((yyloc)), COL((yyloc)), body));
	}
#line 2009 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 282 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new Switch(ROW((yyloc)), COL((yyloc)), (yyvsp[-4].NExp), (yyvsp[-1].NStatementList)); }
#line 2015 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 283 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new If(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NExp), (yyvsp[0].NStatement), new Block(ROW((yyloc)), COL((yyloc)), new StatementList())); }
#line 2021 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 284 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new If(ROW((yyloc)), COL((yyloc)), (yyvsp[-4].NExp), (yyvsp[-2].NStatement), (yyvsp[0].NStatement)); }
#line 2027 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 285 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = (yyvsp[0].NStatement); }
#line 2033 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 289 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    {
		StatementList* stLst = new StatementList();
		stLst->push_back((yyvsp[-6].NStatement));

		StatementList* bodyList = new StatementList();
		bodyList->push_back((yyvsp[0].NStatement));
		bodyList->push_back((yyvsp[-2].NStatement));
		stLst->push_back(new While(ROW((yyloc)), COL((yyloc)), (yyvsp[-4].NExp), new Block(ROW((yyloc)), COL((yyloc)), bodyList)));
		(yyval.NStatement) = new Block(ROW((yyloc)), COL((yyloc)), stLst);
	}
#line 2048 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 302 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new Block(ROW((yyloc)), COL((yyloc)), new StatementList()); }
#line 2054 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 303 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new LocalDeclStatement(ROW((yyloc)), COL((yyloc)), new LocalVarDecl(ROW((yyloc)), COL((yyloc)), (yyvsp[-3].NType), *(yyvsp[-2].Str), (yyvsp[0].NExp))); }
#line 2060 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 304 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = (yyvsp[0].NStatement); }
#line 2066 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 305 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new CallStatement(ROW((yyloc)), COL((yyloc)), (Call*)(yyvsp[0].NExp)); }
#line 2072 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 309 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new True(ROW((yyloc)), COL((yyloc))); }
#line 2078 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 310 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = (yyvsp[0].NExp); }
#line 2084 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 314 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new Block(ROW((yyloc)), COL((yyloc)), new StatementList()); }
#line 2090 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 315 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = (yyvsp[0].NStatement); }
#line 2096 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 316 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new CallStatement(ROW((yyloc)), COL((yyloc)), (Call*)(yyvsp[0].NExp)); }
#line 2102 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 320 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatementList) = new StatementList(); }
#line 2108 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 321 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatementList) = new StatementList(); (yyval.NStatementList)->push_back((yyvsp[0].NStatement)); }
#line 2114 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 322 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyvsp[-1].NStatementList)->push_back((yyvsp[0].NStatement)); }
#line 2120 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 326 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = (yyvsp[0].NStatement); }
#line 2126 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 327 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new Case(ROW((yyloc)), COL((yyloc)), (yyvsp[-1].NExp)); }
#line 2132 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 328 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new Default(ROW((yyloc)), COL((yyloc))); }
#line 2138 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 332 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NStatement) = new Assign(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NExp), (yyvsp[0].NExp)); }
#line 2144 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 333 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { 
		Exp* e = new IdentifierExp(ROW((yyloc)), COL((yyloc)), *(yyvsp[-2].Str));
		(yyval.NStatement) = new Assign(ROW((yyloc)), COL((yyloc)), e, new Plus(ROW((yyloc)), COL((yyloc)), e, new IntegerLiteral(ROW((yyloc)), COL((yyloc)), 1)));
	}
#line 2153 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 337 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    {
		Exp* e = new IdentifierExp(ROW((yyloc)), COL((yyloc)), *(yyvsp[0].Str));
		(yyval.NStatement) = new Assign(ROW((yyloc)), COL((yyloc)), e, new Plus(ROW((yyloc)), COL((yyloc)), e, new IntegerLiteral(ROW((yyloc)), COL((yyloc)), 1)));
	}
#line 2162 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 341 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    {
		Exp* e = new IdentifierExp(ROW((yyloc)), COL((yyloc)), *(yyvsp[-2].Str));
		(yyval.NStatement) = new Assign(ROW((yyloc)), COL((yyloc)), e, new Minus(ROW((yyloc)), COL((yyloc)), e, new IntegerLiteral(ROW((yyloc)), COL((yyloc)), 1))); 
	}
#line 2171 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 345 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    {
		Exp* e = new IdentifierExp(ROW((yyloc)), COL((yyloc)), *(yyvsp[0].Str));
		(yyval.NStatement) = new Assign(ROW((yyloc)), COL((yyloc)), e, new Minus(ROW((yyloc)), COL((yyloc)), e, new IntegerLiteral(ROW((yyloc)), COL((yyloc)), 1))); 
	}
#line 2180 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 352 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = (yyvsp[0].NExp); }
#line 2186 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 356 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Or(ROW((yyloc)), COL((yyloc)), (yyvsp[-3].NExp), (yyvsp[0].NExp)); }
#line 2192 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 357 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = (yyvsp[0].NExp); }
#line 2198 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 361 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new And(ROW((yyloc)), COL((yyloc)), (yyvsp[-3].NExp), (yyvsp[0].NExp)); }
#line 2204 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 362 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = (yyvsp[0].NExp); }
#line 2210 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 366 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Equals(ROW((yyloc)), COL((yyloc)), (yyvsp[-3].NExp), (yyvsp[0].NExp)); }
#line 2216 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 367 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Not(ROW((yyloc)), COL((yyloc)), new Equals(ROW((yyloc)), COL((yyloc)), (yyvsp[-3].NExp), (yyvsp[0].NExp))); }
#line 2222 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 368 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = (yyvsp[0].NExp); }
#line 2228 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 372 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new LessThan(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NExp), (yyvsp[0].NExp)); }
#line 2234 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 373 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new GreaterThan(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NExp), (yyvsp[0].NExp)); }
#line 2240 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 374 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Not(ROW((yyloc)), COL((yyloc)), new GreaterThan(ROW((yyloc)), COL((yyloc)), (yyvsp[-3].NExp), (yyvsp[0].NExp))); }
#line 2246 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 375 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Not(ROW((yyloc)), COL((yyloc)), new LessThan(ROW((yyloc)), COL((yyloc)), (yyvsp[-3].NExp), (yyvsp[0].NExp))); }
#line 2252 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 376 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new InstanceOf(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NExp), new IdentifierType(ROW((yyloc)), COL((yyloc)), *(yyvsp[0].Str))); }
#line 2258 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 377 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = (yyvsp[0].NExp); }
#line 2264 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 381 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Plus(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NExp), (yyvsp[0].NExp)); }
#line 2270 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 382 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Minus(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NExp), (yyvsp[0].NExp)); }
#line 2276 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 383 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = (yyvsp[0].NExp); }
#line 2282 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 387 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Times(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NExp), (yyvsp[0].NExp)); }
#line 2288 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 388 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Divide(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NExp), (yyvsp[0].NExp)); }
#line 2294 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 389 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Remainder(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NExp), (yyvsp[0].NExp)); }
#line 2300 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 390 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = (yyvsp[0].NExp); }
#line 2306 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 394 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = (yyvsp[0].NExp); }
#line 2312 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 395 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = (yyvsp[0].NExp); }
#line 2318 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 400 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Cast(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NType), (yyvsp[0].NExp)); }
#line 2324 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 401 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Cast(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NType), (yyvsp[0].NExp)); }
#line 2330 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 405 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Minus(ROW((yyloc)), COL((yyloc)), new IntegerLiteral(ROW((yyloc)), COL((yyloc)), 0), (yyvsp[0].NExp)); }
#line 2336 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 406 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Not(ROW((yyloc)), COL((yyloc)), (yyvsp[0].NExp)); }
#line 2342 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 407 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Plus(ROW((yyloc)), COL((yyloc)), new IntegerLiteral(ROW((yyloc)), COL((yyloc)), 0), (yyvsp[0].NExp)); }
#line 2348 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 408 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = (yyvsp[0].NExp); }
#line 2354 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 413 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new IdentifierExp(ROW((yyloc)), COL((yyloc)), *(yyvsp[0].Str)); }
#line 2360 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 414 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new ArrayLookup(ROW((yyloc)), COL((yyloc)), (yyvsp[-3].NExp), (yyvsp[-1].NExp)); }
#line 2366 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 416 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
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
#line 2385 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 430 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new NewObject(ROW((yyloc)), COL((yyloc)), new IdentifierType(ROW((yyloc)), COL((yyloc)), *(yyvsp[-2].Str))); }
#line 2391 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 431 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new IntegerLiteral(ROW((yyloc)), COL((yyloc)), atoi((yyvsp[0].Str)->c_str())); }
#line 2397 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 432 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = (yyvsp[0].NExp); }
#line 2403 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 433 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new StringLiteral(ROW((yyloc)), COL((yyloc)), *(yyvsp[0].Str)); }
#line 2409 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 434 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new InstVarAccess(ROW((yyloc)), COL((yyloc)), (yyvsp[-2].NExp), *(yyvsp[0].Str)); }
#line 2415 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 435 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new This(ROW((yyloc)), COL((yyloc))); }
#line 2421 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 436 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new False(ROW((yyloc)), COL((yyloc))); }
#line 2427 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 437 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new True(ROW((yyloc)), COL((yyloc))); }
#line 2433 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 438 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Null(ROW((yyloc)), COL((yyloc))); }
#line 2439 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 439 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new IntegerLiteral(ROW((yyloc)), COL((yyloc)), int(*((yyvsp[0].Str)->c_str()))); }
#line 2445 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 440 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = (yyvsp[-1].NExp); }
#line 2451 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 444 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Call(ROW((yyloc)), COL((yyloc)), new This(ROW((yyloc)), COL((yyloc))), *(yyvsp[-2].Str), new ExpList()); }
#line 2457 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 445 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Call(ROW((yyloc)), COL((yyloc)), new This(ROW((yyloc)), COL((yyloc))), *(yyvsp[-3].Str), (yyvsp[-1].NExpList)); }
#line 2463 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 446 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Call(ROW((yyloc)), COL((yyloc)), new Super(ROW((yyloc)), COL((yyloc))), *(yyvsp[-2].Str), new ExpList()); }
#line 2469 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 447 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Call(ROW((yyloc)), COL((yyloc)), new Super(ROW((yyloc)), COL((yyloc))), *(yyvsp[-3].Str), (yyvsp[-1].NExpList)); }
#line 2475 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 448 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Call(ROW((yyloc)), COL((yyloc)), (yyvsp[-4].NExp), *(yyvsp[-2].Str), new ExpList()); }
#line 2481 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 449 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExp) = new Call(ROW((yyloc)), COL((yyloc)), (yyvsp[-5].NExp), *(yyvsp[-3].Str), (yyvsp[-1].NExpList)); }
#line 2487 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 453 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExpList) = new ExpList(); (yyval.NExpList)->push_back((yyvsp[0].NExp)); }
#line 2493 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 454 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.NExpList)->push_back((yyvsp[0].NExp)); }
#line 2499 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 458 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.Int) = 0;}
#line 2505 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 459 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { (yyval.Int) = 0; }
#line 2511 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 460 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1646  */
    { ++(yyval.Int); }
#line 2517 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2521 "parser.tab.c" /* yacc.c:1646  */
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
#line 464 "/home/don/Desktop/german-java-cmake/parser.y" /* yacc.c:1906  */

int main(int argc, char **argv){
	// open file
	FILE *myfile = fopen(argv[1], "r");

	//make sure file is valid
	if(!myfile){
		printf("%s", "Can't open file\n");
		return -1;
	}

	// set lex to read from file
	yyin = myfile;

	//lex through the input
	do	{
		yyparse();
	} while(!feof(yyin));

	PrintVisitor* printVisitor = new PrintVisitor();
	ErrorMsg* errorMsg = new ErrorMsg(argv[1]);
	Sem1Visitor* sem1Visitor = new Sem1Visitor(errorMsg);

	printVisitor->visit(RootProgram);
	sem1Visitor->visit(RootProgram);
	(new Sem2Visitor(sem1Visitor->getGlobalSymTab(), errorMsg))->visit(RootProgram);
	(new Sem3Visitor(sem1Visitor->getGlobalSymTab(), errorMsg))->visit(RootProgram);

	if(!(errorMsg->anyErrors)){
		std::cout<<"Compilation succeeded for " + errorMsg->filename + "\n";
	}
	else{
		std::cout<<"Compilation failed for " + errorMsg->filename + "\n";
	}

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
