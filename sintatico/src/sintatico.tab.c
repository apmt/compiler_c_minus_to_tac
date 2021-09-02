/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 4 "src/sintatico.y"

	
#include <stdio.h>
#include "tradutor_utils.h"

#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define reset "\e[0m"

extern int yylex(void);
extern int yylex_destroy(void);
extern int yyerror(const char *s);
extern char* yytext;
extern int yylineno;

extern int coluna;


#line 89 "src/sintatico.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_LIB_SINTATICO_TAB_H_INCLUDED
# define YY_YY_LIB_SINTATICO_TAB_H_INCLUDED
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
    ID = 258,
    INT = 259,
    FLOAT = 260,
    LIST = 261,
    CONSTANTE_NIL = 262,
    TAIL_OR_NOT = 263,
    HEADER = 264,
    TAIL_POP = 265,
    MAP = 266,
    FILTER = 267,
    CONSTRUTOR = 268,
    READ = 269,
    WRITE = 270,
    WRITELN = 271,
    MAIN = 272,
    RETURN = 273,
    IF = 274,
    ELSE = 275,
    FOR = 276,
    AND = 277,
    OR = 278,
    LT = 279,
    LE = 280,
    EQ = 281,
    GT = 282,
    GE = 283,
    NE = 284,
    SOMA = 285,
    SUB = 286,
    MULT = 287,
    DIV = 288,
    VIRGULA = 289,
    PONTO_VIRGULA = 290,
    ASPA_SIMPLES = 291,
    ATRIB = 292,
    ABRE_PARENTESES = 293,
    FECHA_PARENTESES = 294,
    ABRE_CHAVES = 295,
    FECHA_CHAVES = 296,
    FLOAT_CONST = 297,
    INTEGER_CONST = 298,
    STRING_LITERAL = 299,
    STRING = 300,
    IFX = 301
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 31 "src/sintatico.y"

	char *val;
	struct t_token* token;
	struct t_node* node;

#line 194 "src/sintatico.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_LIB_SINTATICO_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

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
# define YYCOPY_NEEDED 1
#endif


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   4561

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  30
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  355

#define YYUNDEFTOK  2
#define YYMAXUTOK   301


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45,    46
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    77,    77,    83,    86,    92,    95,    98,   107,   113,
     120,   131,   135,   139,   140,   144,   145,   149,   153,   154,
     158,   159,   163,   167,   168,   169,   170,   171,   172,   176,
     180,   183,   190,   194,   196,   205,   206,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   221,   222,   223,   224,
     225,   229,   230,   231,   235,   236,   237,   241,   242,   243,
     244,   245,   246,   247,   251,   255,   256,   257,   258,   262,
     263,   264,   265,   269,   273,   276,   279,   282,   288,   289,
     290,   291,   292
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "INT", "FLOAT", "LIST",
  "CONSTANTE_NIL", "TAIL_OR_NOT", "HEADER", "TAIL_POP", "MAP", "FILTER",
  "CONSTRUTOR", "READ", "WRITE", "WRITELN", "MAIN", "RETURN", "IF", "ELSE",
  "FOR", "AND", "OR", "LT", "LE", "EQ", "GT", "GE", "NE", "SOMA", "SUB",
  "MULT", "DIV", "VIRGULA", "PONTO_VIRGULA", "ASPA_SIMPLES", "ATRIB",
  "ABRE_PARENTESES", "FECHA_PARENTESES", "ABRE_CHAVES", "FECHA_CHAVES",
  "FLOAT_CONST", "INTEGER_CONST", "STRING_LITERAL", "STRING", "IFX",
  "$accept", "programa", "lista_de_declaracoes", "declaracao",
  "declaracao_de_variavel", "lista_de_IDs", "declaracao_de_funcao",
  "definicao_de_funcao", "parametros", "lista_de_parametros", "parametro",
  "comando", "comandos", "bloco_de_comando", "comando_unico",
  "comando_condicional", "comando_iterativo", "comando_de_expressao",
  "expressao", "exp", "exp_list", "exp_aritmetica", "termo", "fator",
  "comando_de_atribuicao", "chamada_de_funcao", "exp_funcao",
  "chamada_de_retorno", "tipo_de_variavel", "constante", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301
};
# endif

#define YYPACT_NINF (-154)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-83)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      11,     8,    48,  -154,    94,    44,    57,   105,   129,   140,
      36,    51,    59,   153,   -11,     5,    85,   178,    52,     3,
       6,   100,    41,    67,    73,   109,  1718,   185,   193,   133,
    1746,  1774,    77,    78,    90,   104,    58,   108,   127,   207,
    1802,  1830,  1858,  1886,  1914,  1942,  1970,  1998,  2026,   192,
      58,  1012,  1012,  1012,  1012,  3565,  3593,   161,   161,   161,
     168,   224,   261,   161,   775,  3618,  3643,  3668,   101,   746,
    4143,  4118,  3693,  3718,  3743,  3768,  1012,   266,   139,   249,
     175,   194,   195,   206,  1012,  3793,  3818,  3843,  1012,  1012,
    1012,  3868,  4304,    58,  2054,    58,    58,    58,    58,    58,
      58,    58,    58,    58,    58,    58,   161,   161,   161,   161,
     227,   401,  1114,   251,  2082,    62,   197,   209,   252,   231,
     264,   268,   289,  3893,  1063,  2363,  4442,  4456,  4470,  4484,
    4498,  4512,  4526,  4162,  4181,  4200,  3918,  3943,  3968,  3993,
     361,  1012,  1185,  2110,  2138,  2166,  2194,  4018,  4043,  4068,
    4093,   716,   292,   437,   437,  2222,  2250,  1718,   277,  2382,
    1148,   536,   536,   536,   287,   298,   309,   536,   775,  2406,
    2430,  2454,     7,  3413,   560,  2478,  2502,  2526,  2550,  2574,
    2909,   664,   664,   664,   343,   347,   367,   664,   775,  2932,
    2955,  2978,  3489,  3392,  3001,  3024,  3047,  3070,  1012,   775,
     775,   775,   775,   775,   775,   775,   775,  1228,   280,   836,
     301,   368,   369,   380,    58,   381,   382,  1718,   897,   956,
    1062,  1298,  1326,  1354,  1382,  1410,   192,  2278,  2306,  1012,
    2597,  2621,  2645,  1012,  1012,  1012,  2669,  4312,  1012,  1012,
    1012,  1012,  1012,  1012,  1012,  1012,  1012,  1012,  1012,   536,
     536,   536,   536,  1012,  3093,  3116,  3139,  1012,  1012,  1012,
    3162,  4330,   775,   775,   775,   664,   664,   664,   664,    98,
    4338,  4356,  4364,  4382,  4390,  4408,  4416,  4434,  1266,    58,
    1012,  1012,  1012,  1012,   311,  1012,   266,  2334,   325,  2362,
     295,   296,   303,   319,  2693,   442,   636,   900,  4214,  4232,
    4250,  4268,  4286,  3432,  3451,  3470,  2717,  2741,  2765,  2789,
     322,   333,   335,   339,  3185,  3508,  3527,  3546,  3208,  3231,
    3254,  3277,   336,   415,   423,   446,   464,  1438,   465,  1114,
    1466,  1494,  2813,  2837,  2861,  2885,  3300,  3323,  3346,  3369,
    1522,   328,   386,   387,   396,   361,  1012,  1550,  1578,  1606,
    1634,  1662,   467,   361,  1690
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -154,  -154,  -154,  -154,    -1,   -42,  -154,  -154,  -154,  -154,
     189,  -126,  -153,   -21,  -135,  -115,  -114,  -106,   -33,   665,
     785,   905,   545,    54,  -102,   -82,   291,   -81,    -2,   425
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     7,    40,    14,     9,    27,    18,    19,
      20,    41,    30,    42,    43,    44,    45,   112,   113,   172,
     173,   174,   175,   176,    46,    47,   177,    48,    49,   178
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,     8,    28,    68,   227,   220,   141,   158,     3,     5,
       6,    -4,    -4,    21,   151,    -4,    -4,    79,    80,    81,
      82,    83,    21,    16,    17,   221,   222,   155,   156,   238,
     239,   240,   241,   242,   243,   244,   245,    24,   223,    13,
     -16,   -36,   -13,   110,   -14,   -16,   -36,   -74,    -2,     4,
      11,   119,     5,     6,   -76,   120,   121,   122,   224,   225,
     -75,    55,   -77,    12,   287,    56,    57,    58,    59,   -46,
     -46,   -46,    60,    61,    62,    -9,    -9,     5,     6,   208,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,    22,    63,
      73,    23,   -46,   -46,    -7,    -7,    64,   143,    -7,    -7,
      65,    66,    67,    25,    73,    -3,    -3,    26,   152,    -3,
      -3,    85,    86,    87,    50,    51,    52,    91,   195,   219,
     238,   239,   240,   241,   242,   243,   244,   245,    53,    -5,
      -5,    73,   -35,    -5,    -5,    93,    94,   -35,   226,   218,
      -6,    -6,    54,   -17,    -6,    -6,    76,    73,   -17,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,   138,   139,    55,    77,    73,   -15,    56,    57,
      58,    59,   -15,   -10,   -10,    60,    61,    62,    -8,    -8,
     329,   284,    -8,    -8,   288,   -11,   -11,   -10,   -10,   -11,
     -11,    15,    63,   -12,   -12,    78,   290,   -12,   -12,    64,
     291,   292,   293,    65,    66,    67,    88,   -22,   -22,   198,
     220,   -22,   -22,    29,   115,   230,   231,   232,   220,   351,
     310,   236,   195,   346,   311,   312,   313,   354,   198,   198,
     221,   222,   144,   116,   117,   254,   255,   256,   221,   222,
     198,   260,   195,   223,   145,   118,   322,   323,   324,   325,
     326,   223,   328,   195,   195,   195,   195,   195,   195,   195,
     195,   198,    89,   224,   225,   198,   140,   111,    73,    55,
     147,   224,   225,    56,    57,    58,    59,   -46,   -46,   -46,
      60,    61,    62,    93,   114,    93,   142,   146,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   208,    63,   198,    90,
     -46,   -46,   198,   148,    64,   308,   309,   149,    65,    66,
      67,    16,   228,   352,    93,   278,   195,   195,   195,   195,
     195,   320,   321,   198,   219,   233,   198,    74,   150,   198,
     198,   154,   219,    73,   332,   333,   234,   198,   279,   280,
      73,    74,   334,   226,   218,    93,   327,   235,    74,    74,
      74,   226,   218,   198,    74,   196,   198,     0,   335,    16,
     331,   336,   209,   347,   210,     5,     6,   198,    74,   198,
      93,   340,   337,   198,   338,   211,   212,   213,   339,   214,
     215,   257,   216,    73,    74,   258,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,   217,   -34,    74,   -34,   259,   281,   282,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   283,   285,
     286,   348,   349,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,   350,   -34,     0,     0,   -34,   -34,     0,    31,   -34,
      32,     5,     6,   -34,   -34,   -34,     0,     0,     0,   198,
       0,    33,    34,    35,   341,    36,    37,   198,    38,   196,
       0,    75,   342,     0,   -43,   -43,   240,   241,   242,   243,
     244,   245,   196,   196,   196,    75,   -43,   157,   196,   196,
     198,   -43,    75,    75,    75,   343,     0,     0,    75,   197,
     196,   196,   196,   196,   196,   196,   196,   196,   198,   198,
       0,   198,    75,   344,   345,    74,   353,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    75,     0,
      75,    75,    75,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,     0,     0,    75,     0,   159,
       0,     0,     0,   160,   161,   162,   163,     0,     0,     0,
     164,   165,   166,   196,   196,   196,   196,   196,   196,   196,
       0,     0,     0,     0,     0,     0,     0,   167,     0,     0,
      74,   -50,   -50,   -50,   168,     0,     0,    74,   169,   170,
     171,    72,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     249,   250,     0,   197,   -50,    72,     0,     0,     0,   -50,
       0,     0,     0,     0,     0,     0,   197,   197,   197,   194,
       0,     0,   197,   197,     0,     0,     0,     0,     0,     0,
      74,     0,    72,     0,   197,   197,   197,   197,   197,   197,
     197,   197,     0,     0,     0,     0,     0,     0,    72,    75,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,   136,   137,     0,     0,     0,     0,    72,   -44,   -44,
     240,   241,   242,   243,   244,   245,     0,   179,     0,     0,
     -44,   180,   181,   182,   183,   -44,     0,     0,   184,   185,
     186,     0,     0,     0,     0,     0,     0,   197,   197,   197,
     197,   197,   197,   197,     0,   187,     0,     0,     0,     0,
       0,    69,   188,     0,    75,     0,   189,   190,   191,     0,
       0,    75,     0,   194,     0,    69,     0,   -29,     0,   -29,
     -29,   -29,     0,     0,     0,     0,     0,     0,     0,    92,
     -29,   -29,   -29,   194,   -29,   -29,   153,   -29,     0,     0,
       0,     0,    69,     0,   194,   194,   194,   194,   194,   194,
     194,   194,     0,     0,    75,     0,   -29,   -29,   124,    72,
     125,   126,   127,   128,   129,   130,   131,   132,    95,    96,
      97,    98,    99,   100,   101,   102,     0,    69,   179,     0,
     -36,   -36,   180,   181,   182,   183,   -46,   -46,   -46,   184,
     185,   186,     0,     0,   306,   307,     0,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,     0,   187,   194,   194,   194,
     318,   319,     0,   188,   -46,     0,     0,   189,   190,   191,
       0,    70,     0,     0,    72,     0,     0,     0,     0,     0,
       0,    72,     0,   237,     0,    70,     0,   -31,     0,   -31,
     -31,   -31,     0,     0,     0,     0,     0,     0,     0,   192,
     -31,   -31,   -31,   261,   -31,   -31,   -31,   -31,     0,     0,
       0,     0,    70,   269,   270,   271,   272,   273,   274,   275,
     276,   277,     0,     0,    72,     0,   -31,   -31,    70,    69,
      70,    70,    70,    70,    70,    70,    70,    70,   133,   134,
     135,     0,     0,     0,     0,     0,     0,    70,   -25,     0,
     -25,   -25,   -25,   295,   296,   297,   298,   299,   300,   301,
     302,   -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,     0,
       0,     0,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,
       0,     0,     0,     0,   -38,     0,     0,   -25,   -25,   -38,
       0,    71,     0,     0,    69,     0,     0,     0,     0,     0,
       0,    69,     0,   192,     0,    71,     0,   -18,     0,   -18,
     -18,   -18,     0,     0,     0,     0,     0,     0,     0,   193,
     -18,   -18,   -18,   192,   -18,   -18,   -18,   -18,     0,     0,
       0,     0,    71,     0,   192,   192,   192,   192,   192,   192,
     192,   192,     0,     0,    69,     0,   -18,   -18,    71,    70,
      71,    71,    71,    71,    71,    71,    71,    71,    71,    71,
      71,     0,     0,     0,     0,   159,     0,    71,     0,   160,
     161,   162,   163,   -46,   -46,   -46,   164,   165,   166,     0,
       0,   303,   304,   305,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,     0,   167,     0,     0,   -46,   315,   316,   317,
     168,   -46,     0,     0,   169,   170,   171,     0,     0,     0,
       0,     0,     0,   -19,    70,   -19,   -19,   -19,     0,     0,
       0,    70,     0,   193,     0,     0,   -19,   -19,   -19,     0,
     -19,   -19,   -19,   -19,     0,    95,    96,    97,    98,    99,
     100,   101,   102,   193,     0,     0,     0,   -35,   -35,     0,
       0,     0,   -19,   -19,   193,   193,   193,   193,   193,   193,
     193,   193,     0,     0,    70,   207,     0,    55,     0,    71,
       0,    56,    57,    58,    59,   -46,   -46,   -46,    60,    61,
      62,     0,     0,     0,     0,     0,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,     0,    63,     0,     0,   -46,   -46,
       0,     0,    64,     0,     0,     0,    65,    66,    67,   -80,
     -80,   -80,     0,     0,     0,     0,     0,   193,   193,   193,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,     0,    71,     0,   -33,   -80,   -33,     0,
       0,    71,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,     0,     0,     0,     0,     0,   -33,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,     0,   -33,     0,     0,   -33,
     -33,     0,     0,   -33,     0,     0,     0,   -33,   -33,   -33,
       0,   -34,     0,     0,    71,   -34,   -34,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,     0,     0,     0,     0,     0,
     -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,   -34,
       0,     0,   -34,     0,     0,     0,   -34,   -34,     0,   -33,
     -34,   -34,   -34,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,     0,     0,     0,     0,     0,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,     0,   -33,     0,   -23,
     -33,   -23,   -23,   -23,   -33,   -33,     0,     0,   -33,   -33,
     -33,     0,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,
       0,     0,     0,     0,     0,     0,     0,   -24,     0,   -24,
     -24,   -24,     0,     0,     0,     0,     0,     0,   -23,   -23,
     -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,     0,     0,
       0,     0,     0,     0,     0,   -28,     0,   -28,   -28,   -28,
       0,     0,     0,     0,     0,     0,   -24,   -24,   -28,   -28,
     -28,     0,   -28,   -28,   -28,   -28,     0,     0,     0,     0,
       0,     0,     0,   -26,     0,   -26,   -26,   -26,     0,     0,
       0,     0,     0,     0,   -28,   -28,   -26,   -26,   -26,     0,
     -26,   -26,   -26,   -26,     0,     0,     0,     0,     0,     0,
       0,   -27,     0,   -27,   -27,   -27,     0,     0,     0,     0,
       0,     0,   -26,   -26,   -27,   -27,   -27,     0,   -27,   -27,
     -27,   -27,     0,     0,     0,     0,     0,     0,     0,   -73,
       0,   -73,   -73,   -73,     0,     0,     0,     0,     0,     0,
     -27,   -27,   -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,
       0,     0,     0,     0,     0,     0,     0,   -22,     0,   -22,
     -22,   -22,     0,     0,     0,     0,     0,     0,   -73,   -73,
     -22,   -22,   -22,     0,   -22,   -22,   -22,   -22,     0,     0,
       0,     0,     0,     0,     0,    -8,     0,    -8,    -8,    -8,
       0,     0,     0,     0,     0,     0,   -22,   -22,    -8,    -8,
      -8,     0,    -8,    -8,    -8,    -8,     0,     0,     0,     0,
       0,     0,     0,   -64,     0,   -64,   -64,   -64,     0,     0,
       0,     0,     0,     0,    -8,    -8,   -64,   -64,   -64,     0,
     -64,   -64,   -64,   -64,     0,     0,     0,     0,     0,     0,
       0,   -65,     0,   -65,   -65,   -65,     0,     0,     0,     0,
       0,     0,   -64,   -64,   -65,   -65,   -65,     0,   -65,   -65,
     -65,   -65,     0,     0,     0,     0,     0,     0,     0,   -66,
       0,   -66,   -66,   -66,     0,     0,     0,     0,     0,     0,
     -65,   -65,   -66,   -66,   -66,     0,   -66,   -66,   -66,   -66,
       0,     0,     0,     0,     0,     0,     0,   -67,     0,   -67,
     -67,   -67,     0,     0,     0,     0,     0,     0,   -66,   -66,
     -67,   -67,   -67,     0,   -67,   -67,   -67,   -67,     0,     0,
       0,     0,     0,     0,     0,   -68,     0,   -68,   -68,   -68,
       0,     0,     0,     0,     0,     0,   -67,   -67,   -68,   -68,
     -68,     0,   -68,   -68,   -68,   -68,     0,     0,     0,     0,
       0,     0,     0,   -29,     0,   -29,   -29,   -29,     0,     0,
       0,     0,     0,     0,   -68,   -68,   -29,   -29,   -29,     0,
     -29,   -29,   -29,   -29,     0,     0,     0,     0,     0,     0,
       0,   -32,     0,   -32,   -32,   -32,     0,     0,     0,     0,
       0,     0,   -29,   -29,   -32,   -32,   -32,     0,   -32,   -32,
     -32,   -32,     0,     0,     0,     0,     0,     0,     0,   -21,
       0,   -21,   -21,   -21,     0,     0,     0,     0,     0,     0,
     -32,   -32,   -21,   -21,   -21,     0,   -21,   -21,     0,   -21,
       0,     0,     0,     0,     0,     0,     0,    31,     0,    32,
       5,     6,     0,     0,     0,     0,     0,     0,   -21,   -21,
      33,    34,    35,     0,    36,    37,     0,    38,     0,     0,
       0,     0,     0,     0,     0,   -31,     0,   -31,   -31,   -31,
       0,     0,     0,     0,     0,     0,   157,    39,   -31,   -31,
     -31,     0,   -31,   -31,     0,   -31,     0,     0,     0,     0,
       0,     0,     0,   -25,     0,   -25,   -25,   -25,     0,     0,
       0,     0,     0,     0,   -31,   -31,   -25,   -25,   -25,     0,
     -25,   -25,     0,   -25,     0,     0,     0,     0,     0,     0,
       0,   -20,     0,   -20,   -20,   -20,     0,     0,     0,     0,
       0,     0,   -25,   -25,   -20,   -20,   -20,     0,   -20,   -20,
       0,   -20,     0,     0,     0,     0,     0,     0,     0,   -18,
       0,   -18,   -18,   -18,     0,     0,     0,     0,     0,     0,
     -20,   -20,   -18,   -18,   -18,     0,   -18,   -18,     0,   -18,
       0,     0,     0,     0,     0,     0,     0,   -19,     0,   -19,
     -19,   -19,     0,     0,     0,     0,     0,     0,   -18,   -18,
     -19,   -19,   -19,     0,   -19,   -19,     0,   -19,     0,     0,
       0,     0,     0,     0,     0,   -23,     0,   -23,   -23,   -23,
       0,     0,     0,     0,     0,     0,   -19,   -19,   -23,   -23,
     -23,     0,   -23,   -23,     0,   -23,     0,     0,     0,     0,
       0,     0,     0,   -24,     0,   -24,   -24,   -24,     0,     0,
       0,     0,     0,     0,   -23,   -23,   -24,   -24,   -24,     0,
     -24,   -24,     0,   -24,     0,     0,     0,     0,     0,     0,
       0,   -28,     0,   -28,   -28,   -28,     0,     0,     0,     0,
       0,     0,   -24,   -24,   -28,   -28,   -28,     0,   -28,   -28,
       0,   -28,     0,     0,     0,     0,     0,     0,     0,   -26,
       0,   -26,   -26,   -26,     0,     0,     0,     0,     0,     0,
     -28,   -28,   -26,   -26,   -26,     0,   -26,   -26,     0,   -26,
       0,     0,     0,     0,     0,     0,     0,   -27,     0,   -27,
     -27,   -27,     0,     0,     0,     0,     0,     0,   -26,   -26,
     -27,   -27,   -27,     0,   -27,   -27,     0,   -27,     0,     0,
       0,     0,     0,     0,     0,   -73,     0,   -73,   -73,   -73,
       0,     0,     0,     0,     0,     0,   -27,   -27,   -73,   -73,
     -73,     0,   -73,   -73,     0,   -73,     0,     0,     0,     0,
       0,     0,     0,   -64,     0,   -64,   -64,   -64,     0,     0,
       0,     0,     0,     0,   -73,   -73,   -64,   -64,   -64,     0,
     -64,   -64,     0,   -64,     0,     0,     0,     0,     0,     0,
       0,   -65,     0,   -65,   -65,   -65,     0,     0,     0,     0,
       0,     0,   -64,   -64,   -65,   -65,   -65,     0,   -65,   -65,
       0,   -65,     0,     0,     0,     0,     0,     0,     0,   -66,
       0,   -66,   -66,   -66,     0,     0,     0,     0,     0,     0,
     -65,   -65,   -66,   -66,   -66,     0,   -66,   -66,     0,   -66,
       0,     0,     0,     0,     0,     0,     0,   -67,     0,   -67,
     -67,   -67,     0,     0,     0,     0,     0,     0,   -66,   -66,
     -67,   -67,   -67,     0,   -67,   -67,     0,   -67,     0,     0,
       0,     0,     0,     0,     0,   -68,     0,   -68,   -68,   -68,
       0,     0,     0,     0,     0,     0,   -67,   -67,   -68,   -68,
     -68,     0,   -68,   -68,     0,   -68,     0,     0,     0,     0,
       0,     0,     0,   -30,     0,   -30,   -30,   -30,     0,     0,
       0,     0,     0,     0,   -68,   -68,   -30,   -30,   -30,     0,
     -30,   -30,     0,   -30,     0,     0,     0,     0,     0,     0,
       0,   -32,     0,   -32,   -32,   -32,     0,     0,     0,     0,
       0,     0,   -30,   -30,   -32,   -32,   -32,     0,   -32,   -32,
       0,   -32,     0,     0,     0,     0,     0,     0,     0,    31,
       0,    32,     5,     6,     0,     0,     0,     0,     0,     0,
     -32,   -32,    33,    34,    35,     0,    36,    37,     0,    38,
       0,     0,     0,     0,     0,     0,     0,    -8,     0,    -8,
      -8,    -8,     0,     0,     0,     0,     0,     0,   157,   289,
      -8,    -8,    -8,     0,    -8,    -8,     0,    -8,     0,     0,
       0,     0,     0,     0,     0,    31,     0,    32,     5,     6,
       0,     0,     0,     0,     0,     0,    -8,    -8,    33,    34,
      35,     0,    36,    37,     0,    38,     0,     0,     0,     0,
       0,     0,     0,   -22,     0,   -22,   -22,   -22,     0,     0,
       0,     0,     0,     0,   157,   330,   -22,   -22,   -22,     0,
     -22,   -22,     0,   -22,     0,   -43,   -43,    97,    98,    99,
     100,   101,   102,   -62,   -62,   -62,     0,   -43,   -43,     0,
       0,     0,   -22,   -22,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -79,   -79,   -79,
     229,   -62,     0,     0,     0,     0,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -78,   -78,   -78,     0,   -79,     0,     0,     0,     0,
       0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -81,   -81,   -81,     0,   -78,
       0,     0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -51,
     -51,   -51,     0,   -81,     0,     0,     0,     0,     0,     0,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     251,   252,   -51,   -54,   -54,   -54,     0,   -51,     0,     0,
       0,     0,     0,     0,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -82,   -82,   -82,
       0,   -54,     0,     0,     0,     0,     0,     0,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -57,   -57,   -57,     0,   -82,     0,     0,     0,     0,
       0,     0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -62,   -62,   -62,     0,   -57,
       0,     0,     0,     0,     0,     0,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -59,   -59,
     -59,     0,   253,   -62,     0,     0,     0,     0,     0,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -61,   -61,   -61,     0,   -59,     0,     0,     0,
       0,     0,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -60,   -60,   -60,     0,
     -61,     0,     0,     0,     0,     0,     0,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -58,   -58,   -58,     0,   -60,     0,     0,     0,     0,     0,
       0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -63,   -63,   -63,     0,   -58,     0,
       0,     0,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -52,   -52,
     -52,     0,   -63,     0,     0,     0,     0,     0,     0,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   251,
     252,   -52,   -53,   -53,   -53,     0,   -52,     0,     0,     0,
       0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   251,   252,   -53,   -55,   -55,   -55,     0,
     -53,     0,     0,     0,     0,     0,     0,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -56,   -56,   -56,     0,   -55,     0,     0,     0,     0,     0,
       0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -69,   -69,   -69,     0,   -56,     0,
       0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -70,   -70,
     -70,     0,   -69,     0,     0,     0,     0,     0,     0,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -71,   -71,   -71,     0,   -70,     0,     0,     0,
       0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -72,   -72,   -72,     0,
     -71,     0,     0,     0,     0,     0,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -80,   -80,   -80,     0,   -72,     0,     0,     0,     0,     0,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -79,   -79,   -79,     0,     0,   -80,     0,
       0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -78,   -78,   -78,     0,
       0,   -79,     0,     0,     0,     0,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -81,
     -81,   -81,     0,     0,   -78,     0,     0,     0,     0,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -51,   -51,   -51,     0,     0,   -81,     0,     0,
       0,     0,     0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   267,   268,   -54,   -54,   -54,     0,     0,
     -51,     0,     0,     0,     0,     0,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -82,   -82,
     -82,     0,     0,   -54,     0,     0,     0,     0,     0,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -57,   -57,   -57,     0,     0,   -82,     0,     0,     0,
       0,     0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -59,   -59,   -59,     0,     0,   -57,
       0,     0,     0,     0,     0,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -61,   -61,   -61,
       0,     0,   -59,     0,     0,     0,     0,     0,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -60,   -60,   -60,     0,     0,   -61,     0,     0,     0,     0,
       0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -58,   -58,   -58,     0,     0,   -60,     0,
       0,     0,     0,     0,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -63,   -63,   -63,     0,
       0,   -58,     0,     0,     0,     0,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -52,
     -52,   -52,     0,     0,   -63,     0,     0,     0,     0,     0,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     267,   268,   -53,   -53,   -53,     0,     0,   -52,     0,     0,
       0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   267,   268,   -55,   -55,   -55,     0,     0,
     -53,     0,     0,     0,     0,     0,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -56,   -56,
     -56,     0,     0,   -55,     0,     0,     0,     0,     0,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -69,   -69,   -69,     0,     0,   -56,     0,     0,     0,
       0,     0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -70,   -70,   -70,     0,     0,   -69,
       0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -71,   -71,   -71,
       0,     0,   -70,     0,     0,     0,     0,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -72,   -72,   -72,     0,     0,   -71,     0,     0,     0,     0,
       0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -50,   -50,   -50,     0,     0,   -72,     0,
       0,     0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   265,   266,   246,   247,   248,     0,     0,     0,
       0,   -50,     0,     0,     0,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   246,   247,   248,     0,   -45,     0,     0,
       0,     0,   -45,     0,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   246,   247,   248,     0,   -49,     0,     0,     0,
       0,   -49,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   246,   247,   248,     0,   -48,     0,     0,     0,     0,
     -48,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     262,   263,   264,     0,   -47,     0,     0,     0,     0,   -47,
       0,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   262,
     263,   264,     0,     0,     0,     0,     0,     0,   -45,     0,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   262,   263,
     264,     0,     0,     0,     0,     0,     0,   -49,     0,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   262,   263,   264,
       0,     0,     0,     0,     0,     0,   -48,     0,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -62,   -62,   -62,     0,
       0,     0,     0,     0,     0,   -47,     0,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,     0,     0,    84,   -80,   -80,   -80,     0,     0,     0,
       0,     0,     0,     0,     0,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -79,
     -79,   -79,     0,     0,     0,     0,     0,     0,     0,     0,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -78,   -78,   -78,     0,     0,     0,
       0,     0,     0,     0,     0,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -81,
     -81,   -81,     0,     0,     0,     0,     0,     0,     0,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -51,   -51,   -51,     0,     0,     0,
       0,     0,     0,     0,     0,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   108,   109,   -51,   -51,   -54,
     -54,   -54,     0,     0,     0,     0,     0,     0,     0,     0,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -82,   -82,   -82,     0,     0,     0,
       0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -57,
     -57,   -57,     0,     0,     0,     0,     0,     0,     0,     0,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -59,   -59,   -59,     0,     0,     0,
       0,     0,     0,     0,     0,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -61,
     -61,   -61,     0,     0,     0,     0,     0,     0,     0,     0,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -60,   -60,   -60,     0,     0,     0,
       0,     0,     0,     0,     0,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -58,
     -58,   -58,     0,     0,     0,     0,     0,     0,     0,     0,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -63,   -63,   -63,     0,     0,     0,
       0,     0,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -52,
     -52,   -52,     0,     0,     0,     0,     0,     0,     0,     0,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     108,   109,   -52,   -52,   -53,   -53,   -53,     0,     0,     0,
       0,     0,     0,     0,     0,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   108,   109,   -53,   -53,   -55,
     -55,   -55,     0,     0,     0,     0,     0,     0,     0,     0,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -56,   -56,   -56,     0,     0,     0,
       0,     0,     0,     0,     0,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -69,
     -69,   -69,     0,     0,     0,     0,     0,     0,     0,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -70,   -70,   -70,     0,     0,     0,
       0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -71,
     -71,   -71,     0,     0,     0,     0,     0,     0,     0,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -72,   -72,   -72,     0,     0,     0,
       0,     0,     0,     0,     0,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -50,
     -50,   -50,     0,     0,     0,     0,     0,     0,     0,     0,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   106,   107,
       0,     0,   -50,   -50,   103,   104,   105,     0,     0,     0,
       0,     0,     0,     0,     0,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   103,   104,   105,     0,   -45,   -45,     0,
       0,     0,     0,     0,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   103,   104,   105,     0,   -49,   -49,     0,     0,
       0,     0,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   103,   104,   105,     0,   -48,   -48,     0,     0,     0,
       0,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
       0,     0,     0,     0,   -47,   -47,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,     0,     0,     0,     0,   -41,     0,
       0,     0,     0,   -41,   -39,   -39,   240,   241,   -39,   243,
     244,   -39,     0,     0,     0,     0,   -39,     0,     0,     0,
       0,   -39,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
       0,     0,     0,     0,   -37,     0,     0,     0,     0,   -37,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,     0,
       0,     0,   -42,     0,     0,     0,     0,   -42,   -40,   -40,
     240,   241,   -40,   243,   244,   -40,     0,     0,     0,     0,
     -40,     0,     0,     0,     0,   -40,   199,   200,   201,   202,
     203,   204,   205,   206,   199,   200,   201,   202,   203,   204,
     205,   206,     0,   123,     0,     0,     0,     0,     0,     0,
       0,   294,   199,   200,   201,   202,   203,   204,   205,   206,
     -43,   -43,   201,   202,   203,   204,   205,   206,     0,   314,
       0,     0,     0,     0,     0,     0,     0,   -43,   -44,   -44,
     201,   202,   203,   204,   205,   206,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,     0,   -44,     0,     0,     0,     0,
       0,     0,     0,   -38,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,   -41,   -39,   -39,   201,   202,   -39,   204,   205,   -39,
       0,   -41,     0,     0,     0,     0,     0,     0,     0,   -39,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,   -42,     0,   -37,     0,     0,
       0,     0,     0,     0,     0,   -42,   -40,   -40,   201,   202,
     -40,   204,   205,   -40,   -44,   -44,    97,    98,    99,   100,
     101,   102,     0,   -40,     0,     0,   -44,   -44,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,
     -38,   -38,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
       0,     0,     0,     0,   -41,   -41,   -39,   -39,    97,    98,
     -39,   100,   101,   -39,     0,     0,     0,     0,   -39,   -39,
     -37,   -37,   -37,   -37,   -37,   -37,   -37,   -37,     0,     0,
       0,     0,   -37,   -37,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,     0,     0,     0,     0,   -42,   -42,   -40,   -40,
      97,    98,   -40,   100,   101,   -40,     0,     0,     0,     0,
     -40,   -40
};

static const yytype_int16 yycheck[] =
{
       2,     2,    23,    36,   157,   140,   112,    49,     0,     4,
       5,     0,     1,    15,   140,     4,     5,    50,    51,    52,
      53,    54,    24,    34,    35,   140,   140,   153,   154,    22,
      23,    24,    25,    26,    27,    28,    29,    34,   140,     3,
      34,    34,    39,    76,    39,    39,    39,     3,     0,     1,
       6,    84,     4,     5,     3,    88,    89,    90,   140,   140,
       3,     3,     3,     6,   217,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    34,    35,     4,     5,   112,
      22,    23,    24,    25,    26,    27,    28,    29,     3,    31,
      36,    39,    34,    35,     0,     1,    38,    35,     4,     5,
      42,    43,    44,     3,    50,     0,     1,    40,   141,     4,
       5,    57,    58,    59,    37,    38,    38,    63,    64,   140,
      22,    23,    24,    25,    26,    27,    28,    29,    38,     0,
       1,    77,    34,     4,     5,    34,    35,    39,   140,   140,
       0,     1,    38,    34,     4,     5,    38,    93,    39,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,     3,    38,   112,    34,     7,     8,
       9,    10,    39,    34,    35,    14,    15,    16,     0,     1,
     286,   214,     4,     5,   226,     0,     1,    34,    35,     4,
       5,    38,    31,     0,     1,     3,   229,     4,     5,    38,
     233,   234,   235,    42,    43,    44,    38,     0,     1,    34,
     345,     4,     5,    24,    39,   161,   162,   163,   353,   345,
     253,   167,   168,   329,   257,   258,   259,   353,    34,    34,
     345,   345,    35,    39,    39,   181,   182,   183,   353,   353,
      34,   187,   188,   345,    35,    39,   279,   280,   281,   282,
     283,   353,   285,   199,   200,   201,   202,   203,   204,   205,
     206,    34,    38,   345,   345,    34,    39,     1,   214,     3,
      39,   353,   353,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    34,    35,    34,    35,    35,    22,    23,
      24,    25,    26,    27,    28,    29,   329,    31,    34,    38,
      34,    35,    34,    39,    38,   251,   252,    39,    42,    43,
      44,    34,    35,   346,    34,    35,   262,   263,   264,   265,
     266,   267,   268,    34,   345,    38,    34,    36,    39,    34,
      34,    39,   353,   279,    39,    39,    38,    34,    37,    38,
     286,    50,    39,   345,   345,    34,    35,    38,    57,    58,
      59,   353,   353,    34,    63,    64,    34,    -1,    39,    34,
      35,    39,     1,    35,     3,     4,     5,    34,    77,    34,
      34,    35,    39,    34,    39,    14,    15,    16,    39,    18,
      19,    38,    21,   329,    93,    38,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,    40,     1,   112,     3,    38,    38,    38,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    38,    38,
      38,    35,    35,    22,    23,    24,    25,    26,    27,    28,
      29,    35,    31,    -1,    -1,    34,    35,    -1,     1,    38,
       3,     4,     5,    42,    43,    44,    -1,    -1,    -1,    34,
      -1,    14,    15,    16,    39,    18,    19,    34,    21,   168,
      -1,    36,    39,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,   181,   182,   183,    50,    34,    40,   187,   188,
      34,    39,    57,    58,    59,    39,    -1,    -1,    63,    64,
     199,   200,   201,   202,   203,   204,   205,   206,    34,    34,
      -1,    34,    77,    39,    39,   214,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    -1,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,    -1,    -1,   112,    -1,     3,
      -1,    -1,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,   262,   263,   264,   265,   266,   267,   268,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,
     279,    11,    12,    13,    38,    -1,    -1,   286,    42,    43,
      44,    36,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,   168,    34,    50,    -1,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,   181,   182,   183,    64,
      -1,    -1,   187,   188,    -1,    -1,    -1,    -1,    -1,    -1,
     329,    -1,    77,    -1,   199,   200,   201,   202,   203,   204,
     205,   206,    -1,    -1,    -1,    -1,    -1,    -1,    93,   214,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,    -1,    -1,    -1,    -1,   112,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,     3,    -1,    -1,
      34,     7,     8,     9,    10,    39,    -1,    -1,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,   262,   263,   264,
     265,   266,   267,   268,    -1,    31,    -1,    -1,    -1,    -1,
      -1,    36,    38,    -1,   279,    -1,    42,    43,    44,    -1,
      -1,   286,    -1,   168,    -1,    50,    -1,     1,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      14,    15,    16,   188,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    77,    -1,   199,   200,   201,   202,   203,   204,
     205,   206,    -1,    -1,   329,    -1,    40,    41,    93,   214,
      95,    96,    97,    98,    99,   100,   101,   102,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,   112,     3,    -1,
      34,    35,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    -1,    -1,   249,   250,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,   262,   263,   264,
     265,   266,    -1,    38,    39,    -1,    -1,    42,    43,    44,
      -1,    36,    -1,    -1,   279,    -1,    -1,    -1,    -1,    -1,
      -1,   286,    -1,   168,    -1,    50,    -1,     1,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      14,    15,    16,   188,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    77,   198,   199,   200,   201,   202,   203,   204,
     205,   206,    -1,    -1,   329,    -1,    40,    41,    93,   214,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,    -1,    -1,    -1,    -1,    -1,    -1,   112,     1,    -1,
       3,     4,     5,   238,   239,   240,   241,   242,   243,   244,
     245,    14,    15,    16,    -1,    18,    19,    20,    21,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    40,    41,    39,
      -1,    36,    -1,    -1,   279,    -1,    -1,    -1,    -1,    -1,
      -1,   286,    -1,   168,    -1,    50,    -1,     1,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      14,    15,    16,   188,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    77,    -1,   199,   200,   201,   202,   203,   204,
     205,   206,    -1,    -1,   329,    -1,    40,    41,    93,   214,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,    -1,    -1,    -1,    -1,     3,    -1,   112,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    -1,
      -1,   246,   247,   248,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    31,    -1,    -1,    34,   262,   263,   264,
      38,    39,    -1,    -1,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,     1,   279,     3,     4,     5,    -1,    -1,
      -1,   286,    -1,   168,    -1,    -1,    14,    15,    16,    -1,
      18,    19,    20,    21,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,   188,    -1,    -1,    -1,    34,    35,    -1,
      -1,    -1,    40,    41,   199,   200,   201,   202,   203,   204,
     205,   206,    -1,    -1,   329,     1,    -1,     3,    -1,   214,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    31,    -1,    -1,    34,    35,
      -1,    -1,    38,    -1,    -1,    -1,    42,    43,    44,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,   262,   263,   264,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,   279,    -1,     1,    39,     3,    -1,
      -1,   286,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,    -1,    -1,    34,
      35,    -1,    -1,    38,    -1,    -1,    -1,    42,    43,    44,
      -1,     3,    -1,    -1,   329,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    31,
      -1,    -1,    34,    -1,    -1,    -1,    38,    39,    -1,     3,
      42,    43,    44,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    31,    -1,     1,
      34,     3,     4,     5,    38,    39,    -1,    -1,    42,    43,
      44,    -1,    14,    15,    16,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      14,    15,    16,    -1,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    14,    15,
      16,    -1,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    14,    15,    16,    -1,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    14,    15,    16,    -1,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    14,    15,    16,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      14,    15,    16,    -1,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    14,    15,
      16,    -1,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    14,    15,    16,    -1,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    14,    15,    16,    -1,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    14,    15,    16,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      14,    15,    16,    -1,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    14,    15,
      16,    -1,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    14,    15,    16,    -1,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    14,    15,    16,    -1,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    14,    15,    16,    -1,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      14,    15,    16,    -1,    18,    19,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    14,    15,
      16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    14,    15,    16,    -1,
      18,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    14,    15,    16,    -1,    18,    19,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    14,    15,    16,    -1,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      14,    15,    16,    -1,    18,    19,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    14,    15,
      16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    14,    15,    16,    -1,
      18,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    14,    15,    16,    -1,    18,    19,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    14,    15,    16,    -1,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      14,    15,    16,    -1,    18,    19,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    14,    15,
      16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    14,    15,    16,    -1,
      18,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    14,    15,    16,    -1,    18,    19,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    14,    15,    16,    -1,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      14,    15,    16,    -1,    18,    19,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    14,    15,
      16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    14,    15,    16,    -1,
      18,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    14,    15,    16,    -1,    18,    19,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    41,    14,    15,    16,    -1,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      14,    15,    16,    -1,    18,    19,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    14,    15,
      16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    41,    14,    15,    16,    -1,
      18,    19,    -1,    21,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    11,    12,    13,    -1,    34,    35,    -1,
      -1,    -1,    40,    41,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    11,    12,    13,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    11,    12,    13,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    11,    12,    13,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    11,
      12,    13,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    11,    12,    13,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    11,    12,    13,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    11,    12,    13,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    11,    12,    13,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    11,    12,
      13,    -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    11,    12,    13,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    11,    12,    13,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      11,    12,    13,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    11,    12,    13,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    11,    12,
      13,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    11,    12,    13,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    11,    12,    13,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      11,    12,    13,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    11,    12,    13,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    11,    12,
      13,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    11,    12,    13,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    11,    12,    13,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      11,    12,    13,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    11,    12,    13,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    11,    12,    13,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    11,
      12,    13,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    11,    12,    13,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    11,    12,    13,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    11,    12,
      13,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    11,    12,    13,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    11,    12,    13,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    11,    12,    13,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      11,    12,    13,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    11,    12,    13,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    11,    12,    13,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    11,
      12,    13,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    11,    12,    13,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    11,    12,    13,    -1,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    11,    12,
      13,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    11,    12,    13,    -1,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    11,    12,    13,    -1,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    11,    12,    13,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      11,    12,    13,    -1,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    11,    12,    13,    -1,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    11,    12,    13,    -1,    -1,    -1,
      -1,    39,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    11,    12,    13,    -1,    34,    -1,    -1,
      -1,    -1,    39,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    11,    12,    13,    -1,    34,    -1,    -1,    -1,
      -1,    39,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    11,    12,    13,    -1,    34,    -1,    -1,    -1,    -1,
      39,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      11,    12,    13,    -1,    34,    -1,    -1,    -1,    -1,    39,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    -1,    -1,    38,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    34,    35,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    11,    12,    13,    -1,    34,    35,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    11,    12,    13,    -1,    34,    35,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    11,    12,    13,    -1,    34,    35,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    34,    35,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    39,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    39,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    39,    22,    23,    24,    25,
      26,    27,    28,    29,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    22,    23,    24,    25,    26,    27,    28,    29,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    22,    23,
      24,    25,    26,    27,    28,    29,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    22,    23,    24,    25,    26,    27,
      28,    29,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      22,    23,    24,    25,    26,    27,    28,    29,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    22,    23,    24,    25,
      26,    27,    28,    29,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    39,    -1,    -1,    34,    35,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      34,    35,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    34,    35,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    34,    35,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    34,    35,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    34,    35,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      34,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    48,    49,     0,     1,     4,     5,    50,    51,    53,
      75,     6,     6,     3,    52,    38,    34,    35,    55,    56,
      57,    75,     3,    39,    34,     3,    40,    54,    60,    57,
      59,     1,     3,    14,    15,    16,    18,    19,    21,    41,
      51,    58,    60,    61,    62,    63,    71,    72,    74,    75,
      37,    38,    38,    38,    38,     3,     7,     8,     9,    10,
      14,    15,    16,    31,    38,    42,    43,    44,    65,    66,
      67,    68,    69,    70,    73,    76,    38,    38,     3,    65,
      65,    65,    65,    65,    38,    70,    70,    70,    38,    38,
      38,    70,    66,    34,    35,    22,    23,    24,    25,    26,
      27,    28,    29,    11,    12,    13,    30,    31,    32,    33,
      65,     1,    64,    65,    35,    39,    39,    39,    39,    65,
      65,    65,    65,    39,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    67,    67,    67,    69,    69,    70,    70,
      39,    64,    35,    35,    35,    35,    35,    39,    39,    39,
      39,    58,    65,    20,    39,    58,    58,    40,    52,     3,
       7,     8,     9,    10,    14,    15,    16,    31,    38,    42,
      43,    44,    66,    67,    68,    69,    70,    73,    76,     3,
       7,     8,     9,    10,    14,    15,    16,    31,    38,    42,
      43,    44,    67,    68,    69,    70,    73,    76,    34,    22,
      23,    24,    25,    26,    27,    28,    29,     1,    65,     1,
       3,    14,    15,    16,    18,    19,    21,    40,    51,    60,
      61,    62,    63,    71,    72,    74,    75,    59,    35,    38,
      70,    70,    70,    38,    38,    38,    70,    66,    22,    23,
      24,    25,    26,    27,    28,    29,    11,    12,    13,    30,
      31,    32,    33,    38,    70,    70,    70,    38,    38,    38,
      70,    66,    11,    12,    13,    30,    31,    32,    33,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    35,    37,
      38,    38,    38,    38,    65,    38,    38,    59,    52,    41,
      65,    65,    65,    65,    39,    66,    66,    66,    66,    66,
      66,    66,    66,    67,    67,    67,    69,    69,    70,    70,
      65,    65,    65,    65,    39,    67,    67,    67,    69,    69,
      70,    70,    65,    65,    65,    65,    65,    35,    65,    64,
      41,    35,    39,    39,    39,    39,    39,    39,    39,    39,
      35,    39,    39,    39,    39,    39,    64,    35,    35,    35,
      35,    58,    65,    39,    58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    50,    51,    52,
      52,    53,    54,    55,    55,    56,    56,    57,    58,    58,
      59,    59,    60,    61,    61,    61,    61,    61,    61,    62,
      62,    62,    63,    64,    64,    65,    65,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    67,    67,    67,    67,
      67,    68,    68,    68,    69,    69,    69,    70,    70,    70,
      70,    70,    70,    70,    71,    72,    72,    72,    72,    73,
      73,    73,    73,    74,    75,    75,    75,    75,    76,    76,
      76,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     3,     3,
       1,     6,     1,     1,     0,     3,     1,     2,     1,     1,
       2,     0,     3,     1,     1,     1,     1,     1,     1,     5,
       7,     1,     7,     2,     1,     3,     1,     3,     3,     3,
       3,     3,     3,     3,     3,     1,     0,     3,     3,     3,
       1,     1,     3,     3,     1,     3,     3,     1,     2,     2,
       2,     2,     1,     3,     4,     5,     5,     5,     5,     4,
       4,     4,     4,     3,     1,     1,     2,     2,     1,     1,
       1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        YY_LAC_DISCARD ("YYBACKUP");                              \
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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
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

/* Given a state stack such that *YYBOTTOM is its bottom, such that
   *YYTOP is either its top or is YYTOP_EMPTY to indicate an empty
   stack, and such that *YYCAPACITY is the maximum number of elements it
   can hold without a reallocation, make sure there is enough room to
   store YYADD more elements.  If not, allocate a new stack using
   YYSTACK_ALLOC, copy the existing elements, and adjust *YYBOTTOM,
   *YYTOP, and *YYCAPACITY to reflect the new capacity and memory
   location.  If *YYBOTTOM != YYBOTTOM_NO_FREE, then free the old stack
   using YYSTACK_FREE.  Return 0 if successful or if no reallocation is
   required.  Return 1 if memory is exhausted.  */
static int
yy_lac_stack_realloc (YYPTRDIFF_T *yycapacity, YYPTRDIFF_T yyadd,
#if YYDEBUG
                      char const *yydebug_prefix,
                      char const *yydebug_suffix,
#endif
                      yy_state_t **yybottom,
                      yy_state_t *yybottom_no_free,
                      yy_state_t **yytop, yy_state_t *yytop_empty)
{
  YYPTRDIFF_T yysize_old =
    *yytop == yytop_empty ? 0 : *yytop - *yybottom + 1;
  YYPTRDIFF_T yysize_new = yysize_old + yyadd;
  if (*yycapacity < yysize_new)
    {
      YYPTRDIFF_T yyalloc = 2 * yysize_new;
      yy_state_t *yybottom_new;
      /* Use YYMAXDEPTH for maximum stack size given that the stack
         should never need to grow larger than the main state stack
         needs to grow without LAC.  */
      if (YYMAXDEPTH < yysize_new)
        {
          YYDPRINTF ((stderr, "%smax size exceeded%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (YYMAXDEPTH < yyalloc)
        yyalloc = YYMAXDEPTH;
      yybottom_new =
        YY_CAST (yy_state_t *,
                 YYSTACK_ALLOC (YY_CAST (YYSIZE_T,
                                         yyalloc * YYSIZEOF (*yybottom_new))));
      if (!yybottom_new)
        {
          YYDPRINTF ((stderr, "%srealloc failed%s", yydebug_prefix,
                      yydebug_suffix));
          return 1;
        }
      if (*yytop != yytop_empty)
        {
          YYCOPY (yybottom_new, *yybottom, yysize_old);
          *yytop = yybottom_new + (yysize_old - 1);
        }
      if (*yybottom != yybottom_no_free)
        YYSTACK_FREE (*yybottom);
      *yybottom = yybottom_new;
      *yycapacity = yyalloc;
    }
  return 0;
}

/* Establish the initial context for the current lookahead if no initial
   context is currently established.

   We define a context as a snapshot of the parser stacks.  We define
   the initial context for a lookahead as the context in which the
   parser initially examines that lookahead in order to select a
   syntactic action.  Thus, if the lookahead eventually proves
   syntactically unacceptable (possibly in a later context reached via a
   series of reductions), the initial context can be used to determine
   the exact set of tokens that would be syntactically acceptable in the
   lookahead's place.  Moreover, it is the context after which any
   further semantic actions would be erroneous because they would be
   determined by a syntactically unacceptable token.

   YY_LAC_ESTABLISH should be invoked when a reduction is about to be
   performed in an inconsistent state (which, for the purposes of LAC,
   includes consistent states that don't know they're consistent because
   their default reductions have been disabled).  Iff there is a
   lookahead token, it should also be invoked before reporting a syntax
   error.  This latter case is for the sake of the debugging output.

   For parse.lac=full, the implementation of YY_LAC_ESTABLISH is as
   follows.  If no initial context is currently established for the
   current lookahead, then check if that lookahead can eventually be
   shifted if syntactic actions continue from the current context.
   Report a syntax error if it cannot.  */
#define YY_LAC_ESTABLISH                                         \
do {                                                             \
  if (!yy_lac_established)                                       \
    {                                                            \
      YYDPRINTF ((stderr,                                        \
                  "LAC: initial context established for %s\n",   \
                  yytname[yytoken]));                            \
      yy_lac_established = 1;                                    \
      {                                                          \
        int yy_lac_status =                                      \
          yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken); \
        if (yy_lac_status == 2)                                  \
          goto yyexhaustedlab;                                   \
        if (yy_lac_status == 1)                                  \
          goto yyerrlab;                                         \
      }                                                          \
    }                                                            \
} while (0)

/* Discard any previous initial lookahead context because of Event,
   which may be a lookahead change or an invalidation of the currently
   established initial context for the current lookahead.

   The most common example of a lookahead change is a shift.  An example
   of both cases is syntax error recovery.  That is, a syntax error
   occurs when the lookahead is syntactically erroneous for the
   currently established initial context, so error recovery manipulates
   the parser stacks to try to find a new initial context in which the
   current lookahead is syntactically acceptable.  If it fails to find
   such a context, it discards the lookahead.  */
#if YYDEBUG
# define YY_LAC_DISCARD(Event)                                           \
do {                                                                     \
  if (yy_lac_established)                                                \
    {                                                                    \
      if (yydebug)                                                       \
        YYFPRINTF (stderr, "LAC: initial context discarded due to "      \
                   Event "\n");                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return 2 if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yy_state_t *yyesa, yy_state_t **yyes,
        YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, int yytoken)
{
  yy_state_t *yyes_prev = yyssp;
  yy_state_t *yyesp = yyes_prev;
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yytname[yytoken]));
  if (yytoken == YYUNDEFTOK)
    {
      YYDPRINTF ((stderr, " Always Err\n"));
      return 1;
    }
  while (1)
    {
      int yyrule = yypact[+*yyesp];
      if (yypact_value_is_default (yyrule)
          || (yyrule += yytoken) < 0 || YYLAST < yyrule
          || yycheck[yyrule] != yytoken)
        {
          yyrule = yydefact[+*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          yyrule = yytable[yyrule];
          if (yytable_value_is_error (yyrule))
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
          if (0 < yyrule)
            {
              YYDPRINTF ((stderr, " S%d\n", yyrule));
              return 0;
            }
          yyrule = -yyrule;
        }
      {
        YYPTRDIFF_T yylen = yyr2[yyrule];
        YYDPRINTF ((stderr, " R%d", yyrule - 1));
        if (yyesp != yyes_prev)
          {
            YYPTRDIFF_T yysize = yyesp - *yyes + 1;
            if (yylen < yysize)
              {
                yyesp -= yylen;
                yylen = 0;
              }
            else
              {
                yylen -= yysize;
                yyesp = yyes_prev;
              }
          }
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      {
        yy_state_fast_t yystate;
        {
          const int yylhs = yyr1[yyrule] - YYNTOKENS;
          const int yyi = yypgoto[yylhs] + *yyesp;
          yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyesp
                     ? yytable[yyi]
                     : yydefgoto[yylhs]);
        }
        if (yyesp == yyes_prev)
          {
            yyesp = *yyes;
            YY_IGNORE_USELESS_CAST_BEGIN
            *yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        else
          {
            if (yy_lac_stack_realloc (yyes_capacity, 1,
#if YYDEBUG
                                      " (", ")",
#endif
                                      yyes, yyesa, &yyesp, yyes_prev))
              {
                YYDPRINTF ((stderr, "\n"));
                return 2;
              }
            YY_IGNORE_USELESS_CAST_BEGIN
            *++yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store or if
   yy_lac returned 2.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyesa, yy_state_t **yyes,
                YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          int yyx;

          for (yyx = 0; yyx < YYNTOKENS; ++yyx)
            if (yyx != YYTERROR && yyx != YYUNDEFTOK)
              {
                {
                  int yy_lac_status = yy_lac (yyesa, yyes, yyes_capacity,
                                              yyssp, yyx);
                  if (yy_lac_status == 2)
                    return 2;
                  if (yy_lac_status == 1)
                    continue;
                }
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
# if YYDEBUG
      else if (yydebug)
        YYFPRINTF (stderr, "No expected tokens.\n");
# endif
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
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
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

    yy_state_t yyesa[20];
    yy_state_t *yyes;
    YYPTRDIFF_T yyes_capacity;

  int yy_lac_established = 0;
  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  yyes = yyesa;
  yyes_capacity = 20;
  if (YYMAXDEPTH < yyes_capacity)
    yyes_capacity = YYMAXDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
    {
      YY_LAC_ESTABLISH;
      goto yydefault;
    }
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      YY_LAC_ESTABLISH;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  YY_LAC_DISCARD ("shift");
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
| yyreduce -- do a reduction.  |
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


  YY_REDUCE_PRINT (yyn);
  {
    int yychar_backup = yychar;
    switch (yyn)
      {
  case 2:
#line 77 "src/sintatico.y"
                             {
		// $$ = $1;
	}
#line 2662 "src/sintatico.tab.c"
    break;

  case 3:
#line 83 "src/sintatico.y"
                                          {
		// $$ = create_node($1, $2);
		}
#line 2670 "src/sintatico.tab.c"
    break;

  case 4:
#line 86 "src/sintatico.y"
                        {
		(yyval.node) = NULL;
	}
#line 2678 "src/sintatico.tab.c"
    break;

  case 5:
#line 92 "src/sintatico.y"
                                 {
		// $$ = $1
	}
#line 2686 "src/sintatico.tab.c"
    break;

  case 6:
#line 95 "src/sintatico.y"
                               {
	// 	// $$ = $1
	}
#line 2694 "src/sintatico.tab.c"
    break;

  case 7:
#line 98 "src/sintatico.y"
                {
		// yyerror/print
		// erro sintatico
		// print erro na linha tal
		// coluna, yylineno
	}
#line 2705 "src/sintatico.tab.c"
    break;

  case 8:
#line 107 "src/sintatico.y"
                                                      {
	  }
#line 2712 "src/sintatico.tab.c"
    break;

  case 9:
#line 113 "src/sintatico.y"
                                  {
		  // Código C $$ lista_de_IDs
		  // $1 lista_de_IDs
		  // $2 VIRGULA
		  // $3 ID
		  // $$ = create_node($1, $3);
	  }
#line 2724 "src/sintatico.tab.c"
    break;

  case 10:
#line 121 "src/sintatico.y"
        {
		  // Código C $$ lista_de_IDs
		  // $1 lista_de_IDs
		  // $2 VIRGULA
		  // $3 ID
		//   $$ = create_node($1);
	  }
#line 2736 "src/sintatico.tab.c"
    break;

  case 29:
#line 176 "src/sintatico.y"
                                                                          {
		// 
		// $$ = create_node(tipo_node, $3, $5);
		}
#line 2745 "src/sintatico.tab.c"
    break;

  case 30:
#line 180 "src/sintatico.y"
                                                                             {
		// $$ = create_node($3, $5, $7);
		}
#line 2753 "src/sintatico.tab.c"
    break;

  case 31:
#line 183 "src/sintatico.y"
                {
		// print erro na linha tal
		// coluna, yylineno
	}
#line 2762 "src/sintatico.tab.c"
    break;

  case 34:
#line 196 "src/sintatico.y"
                {
		// errado: expected ;
		// print erro na linha tal
		// coluna, yylineno
	}
#line 2772 "src/sintatico.tab.c"
    break;

  case 74:
#line 273 "src/sintatico.y"
              {
		// $$ create_node($1);
	  }
#line 2780 "src/sintatico.tab.c"
    break;

  case 75:
#line 276 "src/sintatico.y"
                {
		// $$ create_node($1);
	  }
#line 2788 "src/sintatico.tab.c"
    break;

  case 76:
#line 279 "src/sintatico.y"
                   {
		// $$ create_node($1);
	  }
#line 2796 "src/sintatico.tab.c"
    break;

  case 77:
#line 282 "src/sintatico.y"
                     {
	// $$ create_node($1);
	}
#line 2804 "src/sintatico.tab.c"
    break;


#line 2808 "src/sintatico.tab.c"

        default: break;
      }
    if (yychar_backup != yychar)
      YY_LAC_DISCARD ("yychar change");
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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
                                        yyesa, &yyes, &yyes_capacity, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
                      yytoken, &yylval);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  /* If the stack popping above didn't lose the initial context for the
     current lookahead token, the shift below will for sure.  */
  YY_LAC_DISCARD ("error recovery");

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


#if 1
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 296 "src/sintatico.y"


int yyerror (const char* s) {
	fprintf (stderr, RED"linha: %d, na coluna: %d, %s\n"reset, yylineno, coluna, s);
  	return 0;
}

int main(int argc, char **argv)
{
  yyparse();
  yylex_destroy();
  return 0;
}
