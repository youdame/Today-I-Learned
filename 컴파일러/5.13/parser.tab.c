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
     TIDENT = 258,
     TNUMBER = 259,
     TCONST = 260,
     TELSE = 261,
     TIF = 262,
     TINT = 263,
     TRETURN = 264,
     TVOID = 265,
     TWHILE = 266,
     TADD_ASSIGN = 267,
     TSUB_ASSIGN = 268,
     TMUL_ASSIGN = 269,
     TDIV_ASSIGN = 270,
     TMOD_ASSIGN = 271,
     TOR = 272,
     TAND = 273,
     TEQUAL = 274,
     TNOTEQUAL = 275,
     TGREATE = 276,
     TLESSE = 277,
     TINC = 278,
     TDEC = 279,
     TBEGIN = 280,
     TEND = 281,
     TASSIGN = 282,
     TADD = 283,
     TNUM = 284,
     TSEMI = 285,
     TDOT = 286,
     TERROR = 287,
     LOWER_THAN_ELSE = 288
   };
#endif
/* Tokens.  */
#define TIDENT 258
#define TNUMBER 259
#define TCONST 260
#define TELSE 261
#define TIF 262
#define TINT 263
#define TRETURN 264
#define TVOID 265
#define TWHILE 266
#define TADD_ASSIGN 267
#define TSUB_ASSIGN 268
#define TMUL_ASSIGN 269
#define TDIV_ASSIGN 270
#define TMOD_ASSIGN 271
#define TOR 272
#define TAND 273
#define TEQUAL 274
#define TNOTEQUAL 275
#define TGREATE 276
#define TLESSE 277
#define TINC 278
#define TDEC 279
#define TBEGIN 280
#define TEND 281
#define TASSIGN 282
#define TADD 283
#define TNUM 284
#define TSEMI 285
#define TDOT 286
#define TERROR 287
#define LOWER_THAN_ELSE 288




/* Copy the first part of user declarations.  */
#line 1 "parser.y"

    /* yacc source for Mini C */ 
    #include <ctype.h>
    #include <stdlib.h>
    #include <stdio.h>
    void semantic(int);
    void reportError(const char* message);
    void yyerror(const char *s);  // yyerror 함수 선언 추가
    extern int yylex(void);              // yylex 함수 선언 추가



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
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 184 "parser.tab.c"

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
#define YYFINAL  15
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   186

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNRULES -- Number of states.  */
#define YYNSTATES  154

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   288

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,     2,     2,    49,     2,     2,
      34,    35,    47,    45,    36,    46,     2,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    39,
      44,    42,    43,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,     2,    41,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    37,     2,    38,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    17,    21,
      23,    25,    28,    30,    32,    34,    36,    38,    40,    44,
      46,    47,    49,    53,    56,    61,    63,    64,    66,    69,
      73,    75,    79,    81,    83,    88,    90,    91,    93,    94,
      96,    99,   101,   103,   105,   107,   109,   112,   115,   117,
     118,   124,   132,   137,   143,   147,   149,   151,   155,   159,
     163,   167,   171,   175,   177,   181,   183,   187,   189,   193,
     197,   199,   203,   207,   211,   215,   217,   221,   225,   227,
     231,   235,   239,   241,   244,   247,   250,   253,   255,   260,
     265,   268,   271,   273,   274,   276,   278,   282,   284,   286
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,    53,    -1,    54,    -1,    53,    54,    -1,
      55,    -1,    70,    -1,    56,    67,    -1,    57,    62,    63,
      -1,    58,    -1,    59,    -1,    58,    59,    -1,    60,    -1,
      61,    -1,     5,    -1,     8,    -1,    10,    -1,     3,    -1,
      34,    64,    35,    -1,    65,    -1,    -1,    66,    -1,    65,
      36,    66,    -1,    57,    73,    -1,    37,    68,    75,    38,
      -1,    69,    -1,    -1,    70,    -1,    69,    70,    -1,    57,
      71,    39,    -1,    72,    -1,    71,    36,    72,    -1,    73,
      -1,     3,    -1,     3,    40,    74,    41,    -1,     4,    -1,
      -1,    76,    -1,    -1,    77,    -1,    76,    77,    -1,    67,
      -1,    78,    -1,    80,    -1,    81,    -1,    82,    -1,    79,
      39,    -1,    79,     1,    -1,    83,    -1,    -1,     7,    34,
      83,    35,    77,    -1,     7,    34,    83,    35,    77,     6,
      77,    -1,     7,    34,     1,    35,    -1,    11,    34,    83,
      35,    77,    -1,     9,    79,    39,    -1,    84,    -1,    85,
      -1,    91,    42,    84,    -1,    91,    12,    84,    -1,    91,
      13,    84,    -1,    91,    14,    84,    -1,    91,    15,    84,
      -1,    91,    16,    84,    -1,    86,    -1,    85,    17,    86,
      -1,    87,    -1,    86,    18,    87,    -1,    88,    -1,    87,
      19,    88,    -1,    87,    20,    88,    -1,    89,    -1,    88,
      43,    89,    -1,    88,    44,    89,    -1,    88,    21,    89,
      -1,    88,    22,    89,    -1,    90,    -1,    89,    45,    90,
      -1,    89,    46,    90,    -1,    91,    -1,    90,    47,    91,
      -1,    90,    48,    91,    -1,    90,    49,    91,    -1,    92,
      -1,    46,    91,    -1,    50,    91,    -1,    23,    91,    -1,
      24,    91,    -1,    96,    -1,    92,    40,    83,    41,    -1,
      92,    34,    93,    35,    -1,    92,    23,    -1,    92,    24,
      -1,    94,    -1,    -1,    95,    -1,    84,    -1,    95,    36,
      84,    -1,     3,    -1,     4,    -1,    34,    83,    35,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    21,    21,    24,    25,    27,    28,    30,    32,    34,
      36,    37,    39,    40,    42,    44,    45,    47,    49,    51,
      52,    54,    55,    57,    59,    61,    62,    64,    65,    67,
      69,    70,    72,    74,    75,    77,    78,    80,    81,    83,
      84,    86,    87,    88,    89,    90,    92,    93,    96,    97,
      99,   100,   101,   103,   105,   107,   109,   110,   111,   112,
     113,   114,   115,   117,   118,   120,   121,   123,   124,   125,
     127,   128,   129,   130,   131,   133,   134,   135,   137,   138,
     139,   140,   142,   143,   144,   145,   146,   148,   149,   150,
     151,   152,   154,   155,   157,   158,   159,   161,   162,   163
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TIDENT", "TNUMBER", "TCONST", "TELSE",
  "TIF", "TINT", "TRETURN", "TVOID", "TWHILE", "TADD_ASSIGN",
  "TSUB_ASSIGN", "TMUL_ASSIGN", "TDIV_ASSIGN", "TMOD_ASSIGN", "TOR",
  "TAND", "TEQUAL", "TNOTEQUAL", "TGREATE", "TLESSE", "TINC", "TDEC",
  "TBEGIN", "TEND", "TASSIGN", "TADD", "TNUM", "TSEMI", "TDOT", "TERROR",
  "LOWER_THAN_ELSE", "'('", "')'", "','", "'{'", "'}'", "';'", "'['",
  "']'", "'='", "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "'%'", "'!'",
  "$accept", "mini_c", "translation_unit", "external_dcl", "function_def",
  "function_header", "dcl_spec", "dcl_specifiers", "dcl_specifier",
  "type_qualifier", "type_specifier", "function_name", "formal_param",
  "opt_formal_param", "formal_param_list", "param_dcl", "compound_st",
  "opt_dcl_list", "declaration_list", "declaration", "init_dcl_list",
  "init_declarator", "declarator", "opt_number", "opt_stat_list",
  "statement_list", "statement", "expression_st", "opt_expression",
  "if_st", "while_st", "return_st", "expression", "assignment_exp",
  "logical_or_exp", "logical_and_exp", "equality_exp", "relational_exp",
  "additive_exp", "multiplicative_exp", "unary_exp", "postfix_exp",
  "opt_actual_param", "actual_param", "actual_param_list", "primary_exp", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,    40,    41,    44,   123,   125,    59,
      91,    93,    61,    62,    60,    43,    45,    42,    47,    37,
      33
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    53,    54,    54,    55,    56,    57,
      58,    58,    59,    59,    60,    61,    61,    62,    63,    64,
      64,    65,    65,    66,    67,    68,    68,    69,    69,    70,
      71,    71,    72,    73,    73,    74,    74,    75,    75,    76,
      76,    77,    77,    77,    77,    77,    78,    78,    79,    79,
      80,    80,    80,    81,    82,    83,    84,    84,    84,    84,
      84,    84,    84,    85,    85,    86,    86,    87,    87,    87,
      88,    88,    88,    88,    88,    89,    89,    89,    90,    90,
      90,    90,    91,    91,    91,    91,    91,    92,    92,    92,
      92,    92,    93,    93,    94,    95,    95,    96,    96,    96
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     2,     3,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       0,     1,     3,     2,     4,     1,     0,     1,     2,     3,
       1,     3,     1,     1,     4,     1,     0,     1,     0,     1,
       2,     1,     1,     1,     1,     1,     2,     2,     1,     0,
       5,     7,     4,     5,     3,     1,     1,     3,     3,     3,
       3,     3,     3,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     2,     2,     2,     2,     1,     4,     4,
       2,     2,     1,     0,     1,     1,     3,     1,     1,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    14,    15,    16,     0,     2,     3,     5,     0,     0,
       9,    10,    12,    13,     6,     1,     4,    26,     7,    33,
       0,     0,    30,    32,    11,     0,    49,    25,    27,    36,
      20,     8,     0,    29,    33,    97,    98,     0,    49,     0,
       0,     0,     0,     0,     0,    41,     0,    49,    39,    42,
       0,    43,    44,    45,    48,    55,    56,    63,    65,    67,
      70,    75,    78,    82,    87,    28,    35,     0,     0,     0,
      19,    21,    31,     0,     0,     0,    85,    86,     0,    83,
      84,    24,    40,    47,    46,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    90,    91,    93,     0,    34,    23,
      18,     0,     0,     0,    54,     0,    99,    64,    78,    66,
      68,    69,    73,    74,    71,    72,    76,    77,    79,    80,
      81,    58,    59,    60,    61,    62,    57,    95,     0,    92,
      94,     0,    22,    52,    49,    49,    89,     0,    88,    50,
      53,    96,    49,    51
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    20,    31,    69,    70,    71,    45,    26,    27,    14,
      21,    22,    23,    67,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,   138,   139,   140,    64
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -84
static const yytype_int16 yypact[] =
{
      82,   -84,   -84,   -84,    12,    82,   -84,   -84,    -8,    44,
      82,   -84,   -84,   -84,   -84,   -84,   -84,    82,   -84,     6,
      29,   -26,   -84,   -84,   -84,    65,    62,    82,   -84,    66,
      82,   -84,    65,   -84,    49,   -84,   -84,    57,   136,    59,
     136,   136,   136,   136,   136,   -84,    56,   100,   -84,   -84,
       4,   -84,   -84,   -84,   -84,   -84,    93,    95,    17,   -13,
      -1,    34,    64,    -2,   -84,   -84,   -84,    73,    65,    80,
      81,   -84,   -84,    38,    77,   136,   -84,   -84,    83,   -84,
     -84,   -84,   -84,   -84,   -84,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   -84,   -84,   136,   136,   -84,   -84,
     -84,    82,    84,    85,   -84,    91,   -84,    95,   -84,    17,
     -13,   -13,    -1,    -1,    -1,    -1,    34,    34,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,    96,   -84,
      92,    89,   -84,   -84,   118,   118,   -84,   136,   -84,   126,
     -84,   -84,   118,   -84
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -84,   -84,   -84,   128,   -84,   -84,   -16,   -84,   125,   -84,
     -84,   -84,   -84,   -84,   -84,    25,   135,   -84,   -84,     7,
     -84,   112,    79,   -84,   -84,   -84,   -47,   -84,   107,   -84,
     -84,   -84,   -40,   -83,   -84,    63,    67,    14,   -64,   -19,
     -37,   -84,   -84,   -84,   -84,   -84
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -39
static const yytype_int16 yytable[] =
{
      82,    25,    78,    76,    77,    83,    79,    80,    89,    90,
      32,    25,    15,    33,    68,   131,   132,   133,   134,   135,
     136,   104,   105,   137,    28,   122,   123,   124,   125,    17,
      91,    92,   106,   113,    65,   115,    87,    88,   107,   112,
     -17,    35,    36,    84,    93,    94,    29,    19,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   128,   129,
     130,    40,    41,    30,   151,    35,    36,   141,    34,    37,
      66,    38,    42,    39,   126,   127,    98,    99,   100,   101,
     102,    95,    96,    97,    43,    40,    41,     1,    44,    29,
       2,    73,     3,    75,    81,    68,    42,   149,   150,    17,
     -38,   120,   121,    35,    36,   153,   103,    37,    43,    38,
      85,    39,    44,    86,   108,   110,   114,   111,   116,   143,
     144,    35,    36,    40,    41,    37,   145,    38,   147,    39,
     148,   146,   152,    16,    42,    24,   142,    17,   -37,    35,
      36,    40,    41,    18,    72,    74,    43,   109,   117,     0,
      44,     0,    42,   119,     0,    17,     0,     0,     0,    40,
      41,     0,     0,     0,    43,     0,     0,     0,    44,     0,
      42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    43,     0,     0,     0,    44
};

static const yytype_int16 yycheck[] =
{
      47,    17,    42,    40,    41,     1,    43,    44,    21,    22,
      36,    27,     0,    39,    30,    98,    99,   100,   101,   102,
     103,    23,    24,   106,    17,    89,    90,    91,    92,    37,
      43,    44,    34,    73,    27,    75,    19,    20,    40,     1,
      34,     3,     4,    39,    45,    46,    40,     3,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    23,    24,    34,   147,     3,     4,   107,     3,     7,
       4,     9,    34,    11,    93,    94,    12,    13,    14,    15,
      16,    47,    48,    49,    46,    23,    24,     5,    50,    40,
       8,    34,    10,    34,    38,   111,    34,   144,   145,    37,
      38,    87,    88,     3,     4,   152,    42,     7,    46,     9,
      17,    11,    50,    18,    41,    35,    39,    36,    35,    35,
      35,     3,     4,    23,    24,     7,    35,     9,    36,    11,
      41,    35,     6,     5,    34,    10,   111,    37,    38,     3,
       4,    23,    24,     8,    32,    38,    46,    68,    85,    -1,
      50,    -1,    34,    86,    -1,    37,    -1,    -1,    -1,    23,
      24,    -1,    -1,    -1,    46,    -1,    -1,    -1,    50,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    46,    -1,    -1,    -1,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,     8,    10,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    70,     0,    54,    37,    67,     3,
      62,    71,    72,    73,    59,    57,    68,    69,    70,    40,
      34,    63,    36,    39,     3,     3,     4,     7,     9,    11,
      23,    24,    34,    46,    50,    67,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    96,    70,     4,    74,    57,    64,
      65,    66,    72,    34,    79,    34,    91,    91,    83,    91,
      91,    38,    77,     1,    39,    17,    18,    19,    20,    21,
      22,    43,    44,    45,    46,    47,    48,    49,    12,    13,
      14,    15,    16,    42,    23,    24,    34,    40,    41,    73,
      35,    36,     1,    83,    39,    83,    35,    86,    91,    87,
      88,    88,    89,    89,    89,    89,    90,    90,    91,    91,
      91,    84,    84,    84,    84,    84,    84,    84,    93,    94,
      95,    83,    66,    35,    35,    35,    35,    36,    41,    77,
      77,    84,     6,    77
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
        case 2:
#line 21 "parser.y"
    { semantic(1); ;}
    break;

  case 3:
#line 24 "parser.y"
    { semantic(2); ;}
    break;

  case 4:
#line 25 "parser.y"
    { semantic(3); ;}
    break;

  case 5:
#line 27 "parser.y"
    { semantic(4); ;}
    break;

  case 6:
#line 28 "parser.y"
    { semantic(5); ;}
    break;

  case 7:
#line 30 "parser.y"
    { semantic(6); ;}
    break;

  case 8:
#line 32 "parser.y"
    { semantic(7); ;}
    break;

  case 9:
#line 34 "parser.y"
    { semantic(8); ;}
    break;

  case 10:
#line 36 "parser.y"
    { semantic(9); ;}
    break;

  case 11:
#line 37 "parser.y"
    { semantic(10); ;}
    break;

  case 12:
#line 39 "parser.y"
    { semantic(11); ;}
    break;

  case 13:
#line 40 "parser.y"
    { semantic(12); ;}
    break;

  case 14:
#line 42 "parser.y"
    { semantic(13); ;}
    break;

  case 15:
#line 44 "parser.y"
    { semantic(14); ;}
    break;

  case 16:
#line 45 "parser.y"
    { semantic(15); ;}
    break;

  case 17:
#line 47 "parser.y"
    { semantic(16); ;}
    break;

  case 18:
#line 49 "parser.y"
    { semantic(17); ;}
    break;

  case 19:
#line 51 "parser.y"
    { semantic(18); ;}
    break;

  case 20:
#line 52 "parser.y"
    { semantic(19); ;}
    break;

  case 21:
#line 54 "parser.y"
    { semantic(20); ;}
    break;

  case 22:
#line 55 "parser.y"
    { semantic(21); ;}
    break;

  case 23:
#line 57 "parser.y"
    { semantic(22); ;}
    break;

  case 24:
#line 59 "parser.y"
    { semantic(23); ;}
    break;

  case 25:
#line 61 "parser.y"
    { semantic(24); ;}
    break;

  case 26:
#line 62 "parser.y"
    { semantic(25); ;}
    break;

  case 27:
#line 64 "parser.y"
    { semantic(26); ;}
    break;

  case 28:
#line 65 "parser.y"
    { semantic(27); ;}
    break;

  case 29:
#line 67 "parser.y"
    { semantic(28); ;}
    break;

  case 30:
#line 69 "parser.y"
    { semantic(29); ;}
    break;

  case 31:
#line 70 "parser.y"
    { semantic(30); ;}
    break;

  case 32:
#line 72 "parser.y"
    { semantic(31); ;}
    break;

  case 33:
#line 74 "parser.y"
    { semantic(33); ;}
    break;

  case 34:
#line 75 "parser.y"
    { semantic(34); ;}
    break;

  case 35:
#line 77 "parser.y"
    { semantic(35); ;}
    break;

  case 36:
#line 78 "parser.y"
    { semantic(36); ;}
    break;

  case 37:
#line 80 "parser.y"
    { semantic(37); ;}
    break;

  case 38:
#line 81 "parser.y"
    { semantic(38); ;}
    break;

  case 39:
#line 83 "parser.y"
    { semantic(39); ;}
    break;

  case 40:
#line 84 "parser.y"
    { semantic(40); ;}
    break;

  case 41:
#line 86 "parser.y"
    { semantic(41); ;}
    break;

  case 42:
#line 87 "parser.y"
    { semantic(42); ;}
    break;

  case 43:
#line 88 "parser.y"
    { semantic(43); ;}
    break;

  case 44:
#line 89 "parser.y"
    { semantic(44); ;}
    break;

  case 45:
#line 90 "parser.y"
    { semantic(45); ;}
    break;

  case 46:
#line 92 "parser.y"
    { semantic(46); ;}
    break;

  case 47:
#line 93 "parser.y"
    {reportError("error message");;}
    break;

  case 48:
#line 96 "parser.y"
    { semantic(47); ;}
    break;

  case 49:
#line 97 "parser.y"
    { semantic(48); ;}
    break;

  case 50:
#line 99 "parser.y"
    {semantic(49);;}
    break;

  case 51:
#line 100 "parser.y"
    { semantic(50); ;}
    break;

  case 52:
#line 101 "parser.y"
    { reportError("error message");;}
    break;

  case 53:
#line 103 "parser.y"
    { semantic(51); ;}
    break;

  case 54:
#line 105 "parser.y"
    { semantic(52); ;}
    break;

  case 55:
#line 107 "parser.y"
    { semantic(53); ;}
    break;

  case 56:
#line 109 "parser.y"
    { semantic(54); ;}
    break;

  case 57:
#line 110 "parser.y"
    { semantic(55); ;}
    break;

  case 58:
#line 111 "parser.y"
    { semantic(56); ;}
    break;

  case 59:
#line 112 "parser.y"
    { semantic(57); ;}
    break;

  case 60:
#line 113 "parser.y"
    { semantic(58); ;}
    break;

  case 61:
#line 114 "parser.y"
    { semantic(59); ;}
    break;

  case 62:
#line 115 "parser.y"
    { semantic(60); ;}
    break;

  case 63:
#line 117 "parser.y"
    { semantic(61); ;}
    break;

  case 64:
#line 118 "parser.y"
    { semantic(62); ;}
    break;

  case 65:
#line 120 "parser.y"
    { semantic(63); ;}
    break;

  case 66:
#line 121 "parser.y"
    { semantic(64); ;}
    break;

  case 67:
#line 123 "parser.y"
    { semantic(65); ;}
    break;

  case 68:
#line 124 "parser.y"
    { semantic(66); ;}
    break;

  case 69:
#line 125 "parser.y"
    { semantic(67); ;}
    break;

  case 70:
#line 127 "parser.y"
    { semantic(68); ;}
    break;

  case 71:
#line 128 "parser.y"
    { semantic(69); ;}
    break;

  case 72:
#line 129 "parser.y"
    { semantic(70); ;}
    break;

  case 73:
#line 130 "parser.y"
    { semantic(71); ;}
    break;

  case 74:
#line 131 "parser.y"
    { semantic(72); ;}
    break;

  case 75:
#line 133 "parser.y"
    { semantic(73); ;}
    break;

  case 76:
#line 134 "parser.y"
    { semantic(74); ;}
    break;

  case 77:
#line 135 "parser.y"
    { semantic(75); ;}
    break;

  case 78:
#line 137 "parser.y"
    { semantic(76); ;}
    break;

  case 79:
#line 138 "parser.y"
    { semantic(77); ;}
    break;

  case 80:
#line 139 "parser.y"
    { semantic(78); ;}
    break;

  case 81:
#line 140 "parser.y"
    { semantic(79); ;}
    break;

  case 82:
#line 142 "parser.y"
    { semantic(80); ;}
    break;

  case 83:
#line 143 "parser.y"
    { semantic(81); ;}
    break;

  case 84:
#line 144 "parser.y"
    { semantic(82); ;}
    break;

  case 85:
#line 145 "parser.y"
    { semantic(83); ;}
    break;

  case 86:
#line 146 "parser.y"
    { semantic(84); ;}
    break;

  case 87:
#line 148 "parser.y"
    { semantic(85); ;}
    break;

  case 88:
#line 149 "parser.y"
    { semantic(86); ;}
    break;

  case 89:
#line 150 "parser.y"
    { semantic(87); ;}
    break;

  case 90:
#line 151 "parser.y"
    { semantic(88); ;}
    break;

  case 91:
#line 152 "parser.y"
    { semantic(89); ;}
    break;

  case 92:
#line 154 "parser.y"
    { semantic(90); ;}
    break;

  case 93:
#line 155 "parser.y"
    { semantic(91); ;}
    break;

  case 94:
#line 157 "parser.y"
    { semantic(92); ;}
    break;

  case 95:
#line 158 "parser.y"
    { semantic(93); ;}
    break;

  case 96:
#line 159 "parser.y"
    { semantic(94); ;}
    break;

  case 97:
#line 161 "parser.y"
    { semantic(95); ;}
    break;

  case 98:
#line 162 "parser.y"
    { semantic(96); ;}
    break;

  case 99:
#line 163 "parser.y"
    { semantic(97); ;}
    break;


/* Line 1267 of yacc.c.  */
#line 2030 "parser.tab.c"
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


#line 165 "parser.y"

void yyerror(const char *s)  // yyerror 함수 정의 수정
{
    printf("%s\n", s);
}
void semantic(int n)
{
    printf("reduced rule number = %d\n", n);
}
void reportError(const char* message) {
    printf("%s", message);
}
int main()
{
    printf("start of parser\n");
    yyparse();
    printf("end of parser\n");
    return 0;
}
