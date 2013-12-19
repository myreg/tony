/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_IDENT = 258,
     T_INT = 259,
     T_STRING = 260,
     T_EQUIV = 261,
     T_IMPLIES = 262,
     T_IMPLIED = 263,
     T_OR = 264,
     T_AND = 265,
     T_NOT = 266,
     T_ATLEAST = 267,
     T_ATMOST = 268,
     T_EXACTLY = 269,
     T_VARS = 270,
     T_INIT = 271,
     T_EXP = 272
   };
#endif
/* Tokens.  */
#define T_IDENT 258
#define T_INT 259
#define T_STRING 260
#define T_EQUIV 261
#define T_IMPLIES 262
#define T_IMPLIED 263
#define T_OR 264
#define T_AND 265
#define T_NOT 266
#define T_ATLEAST 267
#define T_ATMOST 268
#define T_EXACTLY 269
#define T_VARS 270
#define T_INIT 271
#define T_EXP 272




/* Copy the first part of user declarations.  */
#line 4 "cobra.ypp"

  #include <iostream>
  #include <cstdlib>
  #include <cctype>
  #include <cstring>
  #include <string>
  #include <vector>

  #include "formula.h"
  #include "parser.h"
  #include "game.h"

  #define YYERROR_VERBOSE
  extern "C" int yylex();
  extern "C" int yyparse();
  extern "C" int yylineno;
  extern "C" char* yytext;
  void yyerror (const char *error);

  extern Parser m;


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 47 "cobra.ypp"
{
  Formula* formula;
  FormulaList* formula_list;
  Variable* variable;
  VariableSet* variable_list;
  Parametrization* param_range;
  ParamRestrictions* param_restrictions;
  char*    tstr;
  int      tint;
}
/* Line 193 of yacc.c.  */
#line 163 "cobra.tab.cpp"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 176 "cobra.tab.cpp"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   163

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  17
/* YYNRULES -- Number of rules.  */
#define YYNRULES  54
/* YYNRULES -- Number of states.  */
#define YYNSTATES  132

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   272

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      21,    23,     2,     2,    22,    28,    25,    29,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      27,    18,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    26,    24,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    19,     2,    20,     2,     2,     2,     2,
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
      15,    16,    17
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    12,    18,    22,    34,
      36,    39,    43,    45,    47,    51,    55,    60,    62,    64,
      68,    72,    76,    78,    82,    85,    90,    94,    98,   100,
     104,   107,   111,   115,   119,   123,   127,   131,   135,   142,
     149,   156,   161,   166,   169,   171,   176,   184,   193,   196,
     198,   200,   202,   206,   210
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      31,     0,    -1,    32,    -1,    43,    -1,    33,    -1,    32,
      33,    -1,    15,    18,    19,    37,    20,    -1,    16,    18,
      43,    -1,    17,    21,     5,    22,    39,    22,    42,    23,
      19,    46,    20,    -1,     3,    -1,     3,    35,    -1,     3,
      24,    35,    -1,     4,    -1,     3,    -1,    35,    24,     4,
      -1,    35,    24,     3,    -1,    34,    25,    25,    34,    -1,
      34,    -1,    36,    -1,    37,    22,    34,    -1,    37,    22,
      36,    -1,    19,    37,    20,    -1,    38,    -1,    38,    26,
       4,    -1,    39,    38,    -1,    39,    38,    26,     4,    -1,
       4,    27,     4,    -1,    40,    27,     4,    -1,    40,    -1,
      41,    22,    40,    -1,    19,    20,    -1,    19,    41,    20,
      -1,    21,    43,    23,    -1,    43,    10,    43,    -1,    43,
       9,    43,    -1,    43,     7,    43,    -1,    43,     8,    43,
      -1,    43,     6,    43,    -1,    12,    28,     4,    21,    46,
      23,    -1,    13,    28,     4,    21,    46,    23,    -1,    14,
      28,     4,    21,    46,    23,    -1,    10,    21,    46,    23,
      -1,     9,    21,    46,    23,    -1,    11,    43,    -1,    34,
      -1,    34,    18,    18,    34,    -1,    29,     3,    18,     4,
      25,    25,     4,    -1,    44,    29,     3,    18,     4,    25,
      25,     4,    -1,    43,    44,    -1,    43,    -1,    45,    -1,
      36,    -1,    46,    22,    43,    -1,    46,    22,    45,    -1,
      46,    22,    36,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    76,    76,    77,    81,    82,    85,    87,    89,    94,
      96,    98,   102,   105,   109,   111,   116,   120,   122,   124,
     126,   131,   135,   137,   139,   141,   145,   147,   151,   153,
     157,   159,   163,   165,   167,   169,   171,   173,   175,   177,
     179,   181,   183,   185,   187,   189,   193,   196,   201,   205,
     208,   210,   212,   215,   218
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_IDENT", "T_INT", "T_STRING",
  "T_EQUIV", "T_IMPLIES", "T_IMPLIED", "T_OR", "T_AND", "T_NOT",
  "T_ATLEAST", "T_ATMOST", "T_EXACTLY", "T_VARS", "T_INIT", "T_EXP", "'='",
  "'{'", "'}'", "'('", "','", "')'", "'_'", "'.'", "'^'", "'<'", "'-'",
  "'/'", "$accept", "start", "assignments", "assignment", "variable",
  "variable_indices", "variable_range", "variable_list", "variable_set",
  "param_range", "param_restriction", "param_restriction_list",
  "param_restrictions_set", "formula", "formula_range_spec",
  "formula_range", "formula_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    61,   123,
     125,    40,    44,    41,    95,    46,    94,    60,    45,    47
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    30,    31,    31,    32,    32,    33,    33,    33,    34,
      34,    34,    35,    35,    35,    35,    36,    37,    37,    37,
      37,    38,    39,    39,    39,    39,    40,    40,    41,    41,
      42,    42,    43,    43,    43,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    43,    43,    44,    44,    45,    46,
      46,    46,    46,    46,    46
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     5,     3,    11,     1,
       2,     3,     1,     1,     3,     3,     4,     1,     1,     3,
       3,     3,     1,     3,     2,     4,     3,     3,     1,     3,
       2,     3,     3,     3,     3,     3,     3,     3,     6,     6,
       6,     4,     4,     2,     1,     4,     7,     8,     2,     1,
       1,     1,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     4,    44,     3,    13,    12,     0,
      10,     0,     0,    43,     0,     0,     0,     0,     0,     0,
       0,     1,     5,     0,     0,     0,     0,     0,     0,    11,
       0,    44,    51,    49,    50,     0,     0,     0,     0,     0,
       0,     7,     0,    32,     0,    37,    35,    36,    34,    33,
      15,    14,     0,     0,    48,     0,    42,    41,     0,     0,
       0,    17,    18,     0,     0,    45,     0,     0,     0,    54,
      52,    53,     0,     0,     0,     6,     0,     0,    22,     0,
      16,     0,     0,    38,    39,    40,    19,    20,     0,     0,
       0,    24,     0,     0,    21,    23,     0,     0,     0,     0,
       0,     0,    30,    28,     0,     0,    25,     0,     0,     0,
       0,    31,     0,     0,    46,     0,    26,    27,    29,     0,
      47,     8
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    12,    13,    14,    15,    20,    42,    73,    88,    89,
     113,   114,   107,    43,    64,    44,    45
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -46
static const yytype_int16 yypact[] =
{
      59,     4,     0,    11,    74,    15,    18,    36,    17,    85,
      95,    74,   100,    81,   -46,    99,    50,   -46,   -46,     7,
      94,    74,    74,   -46,   104,   115,   116,   102,    74,   117,
       8,   -46,   -46,   105,    74,    74,    74,    74,    74,    94,
      75,     9,   -46,    16,   -46,    31,    71,   103,   106,   107,
     122,    50,   108,   -46,   122,    50,    82,    72,    72,   119,
     -46,   -46,   101,   128,   109,    74,   -46,   -46,    74,    74,
      74,   110,   -46,    41,   113,   -46,   122,   118,   130,   -46,
      16,   -46,    88,    90,    92,   -46,   122,   122,   111,   -10,
     -46,   135,   123,   -46,   -46,   -46,   110,   -46,    79,   136,
     124,   120,   125,   138,   -46,   -46,    -1,   121,   141,   126,
     127,   129,   -46,   131,    84,   134,   -46,   143,   132,   144,
     145,   -46,   150,    74,   -46,   151,   -46,   -46,   131,    87,
     -46,   -46
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -46,   -46,   -46,   146,   -21,   142,   -45,    47,    73,   -46,
      38,   -46,   -46,     2,   -46,    98,   -18
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      41,    41,    16,   111,    46,    72,    23,    17,    18,    87,
      17,    18,   100,    30,    34,    35,    36,    37,    38,   112,
      79,    21,    34,    35,    36,    37,    38,    33,    19,    71,
      51,    53,    22,    75,    62,    27,    55,    56,    57,    58,
      59,    97,    72,    24,    41,    63,    25,    41,    41,    41,
      82,    83,    84,    65,    66,    90,    34,    35,    36,    37,
      38,    85,     1,    86,    26,    96,    71,    80,     2,     3,
       4,     5,     6,     7,     8,     9,    10,     1,    60,    61,
      11,    37,    38,     2,     3,     4,     5,     6,     7,    35,
      36,    37,    38,    65,    67,    11,     8,     9,    10,   104,
      31,    86,    41,    28,   121,   129,   122,   131,    47,    65,
      65,    93,    65,    94,    65,    95,    29,    33,    40,    48,
      49,    50,    52,    54,    68,     1,    76,    69,    70,    38,
      74,    77,    87,    92,    98,    62,    91,    99,    78,   102,
     105,   103,   110,   106,   115,   116,   108,   124,   126,   127,
     109,   117,   118,   123,   111,   130,   119,   125,   120,    32,
     128,    39,   101,    81
};

static const yytype_uint8 yycheck[] =
{
      21,    22,     0,     4,    22,    50,     4,     3,     4,    19,
       3,     4,    22,    11,     6,     7,     8,     9,    10,    20,
      65,    21,     6,     7,     8,     9,    10,    18,    24,    50,
      28,    23,    21,    54,    25,    18,    34,    35,    36,    37,
      38,    86,    87,    28,    65,    29,    28,    68,    69,    70,
      68,    69,    70,    22,    23,    76,     6,     7,     8,     9,
      10,    20,     3,    22,    28,    86,    87,    65,     9,    10,
      11,    12,    13,    14,    15,    16,    17,     3,     3,     4,
      21,     9,    10,     9,    10,    11,    12,    13,    14,     7,
       8,     9,    10,    22,    23,    21,    15,    16,    17,    20,
       0,    22,   123,    18,    20,   123,    22,    20,     4,    22,
      22,    23,    22,    23,    22,    23,    21,    18,    24,     4,
       4,    19,     5,    18,    21,     3,    25,    21,    21,    10,
      22,     3,    19,     3,    87,    25,    18,    26,    29,     4,
       4,    18,     4,    19,    23,     4,    26,     4,     4,     4,
      25,    25,    25,    19,     4,     4,    27,    25,    27,    13,
     122,    19,    89,    65
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    21,    31,    32,    33,    34,    43,     3,     4,    24,
      35,    21,    21,    43,    28,    28,    28,    18,    18,    21,
      43,     0,    33,    18,     6,     7,     8,     9,    10,    35,
      24,    34,    36,    43,    45,    46,    46,     4,     4,     4,
      19,    43,     5,    23,    18,    43,    43,    43,    43,    43,
       3,     4,    25,    29,    44,    22,    23,    23,    21,    21,
      21,    34,    36,    37,    22,    34,    25,     3,    29,    36,
      43,    45,    46,    46,    46,    20,    22,    19,    38,    39,
      34,    18,     3,    23,    23,    23,    34,    36,    37,    26,
      22,    38,     4,    18,    20,     4,    19,    42,    26,    25,
       4,     4,    20,    40,    41,    23,     4,    25,    25,    27,
      27,    20,    22,    19,     4,    25,     4,     4,    40,    46,
       4,    20
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 3:
#line 78 "cobra.ypp"
    {  m.setOnlyFormula((yyvsp[(1) - (1)].formula));  ;}
    break;

  case 6:
#line 86 "cobra.ypp"
    {  m.game().setVariables((yyvsp[(4) - (5)].variable_list));  ;}
    break;

  case 7:
#line 88 "cobra.ypp"
    {  m.game().setInit((yyvsp[(3) - (3)].formula));  ;}
    break;

  case 8:
#line 90 "cobra.ypp"
    {  (yyvsp[(5) - (11)].param_range)->addRestrictions((yyvsp[(7) - (11)].param_restrictions));
       m.game().addExperiment(m.get<Experiment>((yyvsp[(3) - (11)].tstr), (yyvsp[(5) - (11)].param_range), (yyvsp[(10) - (11)].formula_list))); ;}
    break;

  case 9:
#line 95 "cobra.ypp"
    { std::string x((yyvsp[(1) - (1)].tstr)); (yyval.variable) = m.get<Variable>(x); ;}
    break;

  case 10:
#line 97 "cobra.ypp"
    { std::string x((yyvsp[(1) - (2)].tstr)); (yyval.variable) = m.get<Variable>(x, m.variableIndices()); ;}
    break;

  case 11:
#line 99 "cobra.ypp"
    { std::string x((yyvsp[(1) - (3)].tstr)); (yyval.variable) = m.get<Variable>(x, m.variableIndices()); ;}
    break;

  case 12:
#line 103 "cobra.ypp"
    { m.variableIndices().clear();
        m.addVariableIndex((yyvsp[(1) - (1)].tint)); ;}
    break;

  case 13:
#line 106 "cobra.ypp"
    { m.variableIndices().clear();
        std::string x((yyvsp[(1) - (1)].tstr));
        m.addVariableNamedIndex(x); ;}
    break;

  case 14:
#line 110 "cobra.ypp"
    { m.addVariableIndex((yyvsp[(3) - (3)].tint)); ;}
    break;

  case 15:
#line 112 "cobra.ypp"
    { std::string x((yyvsp[(3) - (3)].tstr));
        m.addVariableNamedIndex(x); ;}
    break;

  case 16:
#line 117 "cobra.ypp"
    { (yyval.variable_list) = VariableSet::Range((yyvsp[(1) - (4)].variable), (yyvsp[(4) - (4)].variable)); ;}
    break;

  case 17:
#line 121 "cobra.ypp"
    { (yyval.variable_list) = m.get<VariableSet>(); (yyval.variable_list)->push_back((yyvsp[(1) - (1)].variable)); ;}
    break;

  case 18:
#line 123 "cobra.ypp"
    { (yyval.variable_list) = (yyvsp[(1) - (1)].variable_list); ;}
    break;

  case 19:
#line 125 "cobra.ypp"
    { (yyval.variable_list) = (yyvsp[(1) - (3)].variable_list); (yyval.variable_list)->push_back((yyvsp[(3) - (3)].variable)); ;}
    break;

  case 20:
#line 127 "cobra.ypp"
    { (yyval.variable_list) = (yyvsp[(1) - (3)].variable_list);
        (yyval.variable_list)->insert((yyval.variable_list)->begin(), (yyvsp[(3) - (3)].variable_list)->begin(), (yyvsp[(3) - (3)].variable_list)->end()); ;}
    break;

  case 21:
#line 132 "cobra.ypp"
    { (yyval.variable_list) = (yyvsp[(2) - (3)].variable_list); ;}
    break;

  case 22:
#line 136 "cobra.ypp"
    { (yyval.param_range) = m.get<Parametrization>(); (yyval.param_range)->push_back((yyvsp[(1) - (1)].variable_list)); ;}
    break;

  case 23:
#line 138 "cobra.ypp"
    { (yyval.param_range) = m.get<Parametrization>(); (yyval.param_range)->insert((yyval.param_range)->begin(), (yyvsp[(3) - (3)].tint), (yyvsp[(1) - (3)].variable_list)); ;}
    break;

  case 24:
#line 140 "cobra.ypp"
    { (yyval.param_range) = (yyvsp[(1) - (2)].param_range); (yyval.param_range)->push_back((yyvsp[(2) - (2)].variable_list)); ;}
    break;

  case 25:
#line 142 "cobra.ypp"
    { (yyval.param_range) = (yyvsp[(1) - (4)].param_range); (yyval.param_range)->insert((yyval.param_range)->begin(), (yyvsp[(4) - (4)].tint), (yyvsp[(2) - (4)].variable_list)); ;}
    break;

  case 26:
#line 146 "cobra.ypp"
    { (yyval.param_restrictions) = m.get<ParamRestrictions>((yyvsp[(1) - (3)].tint), (yyvsp[(3) - (3)].tint)); ;}
    break;

  case 27:
#line 148 "cobra.ypp"
    { (yyval.param_restrictions) = (yyvsp[(1) - (3)].param_restrictions); (yyval.param_restrictions)->add((yyval.param_restrictions)->last(), (yyvsp[(3) - (3)].tint)); ;}
    break;

  case 28:
#line 152 "cobra.ypp"
    { (yyval.param_restrictions) = (yyvsp[(1) - (1)].param_restrictions); ;}
    break;

  case 29:
#line 154 "cobra.ypp"
    { (yyval.param_restrictions) = (yyvsp[(1) - (3)].param_restrictions); (yyval.param_restrictions)->add((yyvsp[(3) - (3)].param_restrictions)); ;}
    break;

  case 30:
#line 158 "cobra.ypp"
    { (yyval.param_restrictions) = m.get<ParamRestrictions>(); ;}
    break;

  case 31:
#line 160 "cobra.ypp"
    { (yyval.param_restrictions) = (yyvsp[(2) - (3)].param_restrictions); ;}
    break;

  case 32:
#line 164 "cobra.ypp"
    { (yyval.formula) = (yyvsp[(2) - (3)].formula); ;}
    break;

  case 33:
#line 166 "cobra.ypp"
    { (yyval.formula) = m.get<AndOperator>({ (yyvsp[(1) - (3)].formula), (yyvsp[(3) - (3)].formula) }); ;}
    break;

  case 34:
#line 168 "cobra.ypp"
    { (yyval.formula) = m.get<OrOperator>({ (yyvsp[(1) - (3)].formula), (yyvsp[(3) - (3)].formula) }); ;}
    break;

  case 35:
#line 170 "cobra.ypp"
    { (yyval.formula) = m.get<ImpliesOperator>((yyvsp[(1) - (3)].formula), (yyvsp[(3) - (3)].formula)); ;}
    break;

  case 36:
#line 172 "cobra.ypp"
    { (yyval.formula) = m.get<ImpliesOperator>((yyvsp[(3) - (3)].formula), (yyvsp[(1) - (3)].formula)); ;}
    break;

  case 37:
#line 174 "cobra.ypp"
    { (yyval.formula) = m.get<EquivalenceOperator>((yyvsp[(1) - (3)].formula), (yyvsp[(3) - (3)].formula)); ;}
    break;

  case 38:
#line 176 "cobra.ypp"
    { (yyval.formula) = m.get<AtLeastOperator>((yyvsp[(3) - (6)].tint), (yyvsp[(5) - (6)].formula_list)); ;}
    break;

  case 39:
#line 178 "cobra.ypp"
    { (yyval.formula) = m.get<AtMostOperator>((yyvsp[(3) - (6)].tint), (yyvsp[(5) - (6)].formula_list)); ;}
    break;

  case 40:
#line 180 "cobra.ypp"
    { (yyval.formula) = m.get<ExactlyOperator>((yyvsp[(3) - (6)].tint), (yyvsp[(5) - (6)].formula_list)); ;}
    break;

  case 41:
#line 182 "cobra.ypp"
    { (yyval.formula) = m.get<AndOperator>((yyvsp[(3) - (4)].formula_list)); ;}
    break;

  case 42:
#line 184 "cobra.ypp"
    { (yyval.formula) = m.get<OrOperator>((yyvsp[(3) - (4)].formula_list)); ;}
    break;

  case 43:
#line 186 "cobra.ypp"
    { (yyval.formula) = m.get<NotOperator>((yyvsp[(2) - (2)].formula)); ;}
    break;

  case 44:
#line 188 "cobra.ypp"
    { (yyval.formula) = (yyvsp[(1) - (1)].variable); ;}
    break;

  case 45:
#line 190 "cobra.ypp"
    { (yyval.formula) = m.get<ParameterEq>((yyvsp[(1) - (4)].variable), (yyvsp[(4) - (4)].variable)); ;}
    break;

  case 46:
#line 194 "cobra.ypp"
    { std::string x((yyvsp[(2) - (7)].tstr));
        m.addFormulaListRange(x, (yyvsp[(4) - (7)].tint), (yyvsp[(7) - (7)].tint)); ;}
    break;

  case 47:
#line 197 "cobra.ypp"
    { std::string x((yyvsp[(3) - (8)].tstr));
        m.addFormulaListRange(x, (yyvsp[(5) - (8)].tint), (yyvsp[(8) - (8)].tint)); ;}
    break;

  case 48:
#line 202 "cobra.ypp"
    { (yyval.formula_list) = FormulaList::Range((yyvsp[(1) - (2)].formula)); ;}
    break;

  case 49:
#line 206 "cobra.ypp"
    { (yyval.formula_list) = m.get<FormulaList>();
        (yyval.formula_list)->push_back((yyvsp[(1) - (1)].formula)); ;}
    break;

  case 50:
#line 209 "cobra.ypp"
    { (yyval.formula_list) = (yyvsp[(1) - (1)].formula_list); ;}
    break;

  case 51:
#line 211 "cobra.ypp"
    { (yyval.formula_list) = (yyvsp[(1) - (1)].variable_list)->asFormulaList(); ;}
    break;

  case 52:
#line 213 "cobra.ypp"
    { (yyval.formula_list) = (yyvsp[(1) - (3)].formula_list);
        (yyval.formula_list)->push_back((yyvsp[(3) - (3)].formula)); ;}
    break;

  case 53:
#line 216 "cobra.ypp"
    { (yyval.formula_list) = (yyvsp[(1) - (3)].formula_list);
        (yyval.formula_list)->insert((yyval.formula_list)->end(), (yyvsp[(3) - (3)].formula_list)->begin(), (yyvsp[(3) - (3)].formula_list)->end()); ;}
    break;

  case 54:
#line 219 "cobra.ypp"
    { (yyval.formula_list) = (yyvsp[(1) - (3)].formula_list);
        auto list = (yyvsp[(3) - (3)].variable_list)->asFormulaList();
        (yyval.formula_list)->insert((yyval.formula_list)->end(), list->begin(), list->end()); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 1743 "cobra.tab.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 223 "cobra.ypp"


void yyerror(const char *error) {
  printf("%d: %s at %s\n", yylineno, error, yytext);
}
