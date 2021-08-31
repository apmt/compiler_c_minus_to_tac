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
#line 4 "sintatico.y"

#include <stdio.h>

extern int yylex(void);
extern int yyerror(const char *s);
extern char* yytext;
extern int yylineno;

extern int coluna;

#line 81 "sintatico.tab.c"

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
#ifndef YY_YY_SINTATICO_TAB_H_INCLUDED
# define YY_YY_SINTATICO_TAB_H_INCLUDED
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
    TOP_OR_NOT = 263,
    HEADER = 264,
    POP = 265,
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
    ASPA_SIMPLES = 289,
    VIRGULA = 290,
    PONTO_VIRGULA = 291,
    ATRIB = 292,
    ABRE_PARENTESES = 293,
    FECHA_PARENTESES = 294,
    ABRE_CHAVES = 295,
    FECHA_CHAVES = 296,
    CONSTANTE = 297,
    INTEGER = 298,
    STRING_LITERAL = 299,
    STRING = 300
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "sintatico.y"

	// node struct
	// tokens_especiais
	int intValue;
	float floatValue;
	char charValue;
	char* strValue;
	char* dataType;

#line 189 "sintatico.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTATICO_TAB_H_INCLUDED  */



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
#define YYLAST   3985

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  318

#define YYUNDEFTOK  2
#define YYMAXUTOK   300


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
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    65,    65,    71,    74,    80,    83,    86,    95,    99,
     106,   117,   121,   125,   126,   130,   131,   135,   139,   140,
     144,   145,   149,   153,   154,   155,   156,   157,   158,   162,
     166,   169,   176,   177,   181,   182,   183,   192,   193,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   209,   210,
     211,   215,   216,   217,   221,   222,   223,   224,   225,   229,
     233,   237,   238,   242,   243,   244,   248
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 1
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "INT", "FLOAT", "LIST",
  "CONSTANTE_NIL", "TOP_OR_NOT", "HEADER", "POP", "MAP", "FILTER",
  "CONSTRUTOR", "READ", "WRITE", "WRITELN", "MAIN", "RETURN", "IF", "ELSE",
  "FOR", "AND", "OR", "LT", "LE", "EQ", "GT", "GE", "NE", "SOMA", "SUB",
  "MULT", "DIV", "ASPA_SIMPLES", "VIRGULA", "PONTO_VIRGULA", "ATRIB",
  "ABRE_PARENTESES", "FECHA_PARENTESES", "ABRE_CHAVES", "FECHA_CHAVES",
  "CONSTANTE", "INTEGER", "STRING_LITERAL", "STRING", "$accept",
  "programa", "lista_de_declaracoes", "declaracao",
  "declaracao_de_variavel", "lista_de_IDs", "declaracao_de_funcao",
  "definicao_de_funcao", "parametros", "lista_de_parametros", "parametro",
  "comando", "comandos", "bloco_de_comando", "comando_unico",
  "comando_condicional", "comando_iterativo", "comando_de_expressao",
  "expressao", "exp", "exp_aritmetica", "termo", "fator",
  "comando_de_atribuicao", "chamada_de_funcao", "chamada_de_retorno",
  "tipo_de_variavel", "constante", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300
};
# endif

#define YYPACT_NINF (-103)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-67)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     115,    17,   255,  -103,   270,    22,    31,    34,   423,   496,
     652,    53,    56,    87,    14,    67,   722,    25,   -12,    -7,
      72,   102,    37,   100,     0,    46,   772,     1,  2554,    42,
    2578,   779,  2602,   113,   200,    51,    70,    73,  2608,  2632,
    2656,  2662,  2686,  2710,  2716,  2740,  2764,   114,   409,    14,
     440,   516,   516,  2770,   517,  3694,   118,   539,  2933,  3709,
    3724,  3739,   651,    21,   138,  2047,   117,  3754,  3769,   574,
     516,  2794,   516,   516,   516,   516,   516,   516,   516,   516,
     516,   516,   516,   516,    10,    30,    40,    43,   140,   146,
    3784,   971,  1005,  3859,  3874,  3889,  3904,  3919,  3934,  3949,
    3799,  3814,  3829,  3844,   180,    59,    57,  2818,   263,   489,
      15,   489,  2824,   489,  2848,  2872,  2554,   142,  1448,   409,
     409,   517,  1481,   895,  1514,  1547,  1580,  3150,   517,   517,
     517,  3168,   349,  3186,  3204,  3222,  1037,   651,   651,   517,
    2952,  3384,  3366,  2970,  2988,  3006,   409,   409,   409,   409,
     409,   409,   409,   409,   517,   517,   517,   517,   517,   517,
     517,   517,   651,   110,   249,   153,   415,   154,   328,   152,
     166,  2554,   680,   728,   850,  2308,  2332,  2338,  2362,  2386,
     114,  2878,  2902,  1613,  1646,   713,   409,   409,   409,   409,
    3240,  3258,  1055,   517,   517,   517,   517,  3024,  3042,  3564,
     651,   651,   651,   651,   651,   651,   651,   651,   651,   651,
     651,   651,  2076,  2105,  2134,  2163,  2192,  2221,  2250,  2279,
    3572,  3590,  3598,  3616,  3624,  3642,  3650,  3668,  3402,   299,
     864,    14,  2392,   161,   651,    21,  2926,   204,  2932,  1679,
    1712,  1745,  1778,  1811,  3276,  3294,  3312,  3330,  3348,  3060,
    3420,  3438,  3456,  3474,  3492,  3510,  3528,  3546,  3078,  3096,
    3114,  3132,   139,   864,   864,   517,   603,   106,   789,   948,
    1087,  1184,   168,  2416,    45,    43,  2440,  2446,  1217,  1250,
    3676,   864,   864,   864,   864,   864,   864,   864,   864,   864,
     864,   864,   864,   173,   180,   406,  1283,  1128,  1844,  1873,
    1902,  1931,  1960,  1989,  2018,  1316,  1349,  1382,  1415,  2470,
    2494,   180,    61,   180,  2500,   180,  2524,  2548
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
       0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -103,  -103,  -103,  -103,    -1,   -41,  -103,  -103,   -44,  -103,
     195,  -100,  -102,   -17,  -101,   -94,   -89,   -80,   -32,   727,
     896,   557,   196,   -88,   -78,   -62,    -2,   384
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     8,    38,    13,    10,    26,    17,    18,
      19,    39,    30,    40,    41,    42,    43,    87,    88,    57,
      58,    59,    60,    44,    45,    46,    47,    61
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      11,     9,    56,   174,   108,    66,   117,   105,    29,   112,
     175,   114,    20,   115,   181,   176,   177,     3,     5,     6,
       7,    20,    85,    23,    50,   -63,   178,   -13,   -16,    51,
      84,   -36,   -16,   -36,   -64,   -17,   -15,   -65,   -36,   -17,
     -15,   -35,   179,   -35,   163,   162,    50,    20,   -35,   104,
     162,    51,    52,   -14,   113,   165,    12,    86,   -34,    54,
     -34,   -36,   136,    55,    22,   -34,   -36,   137,   -36,   236,
      21,   -35,   -36,   110,    52,    24,   -35,    25,   -35,   164,
     162,    54,   -35,    31,   294,    55,    28,   173,   -34,    62,
     138,   -10,   -10,   -34,    14,   -34,   162,   139,   109,   -34,
     315,   140,   180,   172,     5,     6,     7,   -59,    63,   -59,
     -59,   -59,   -59,   -36,   -22,    -4,    -4,    64,   -36,    -4,
      -4,    -4,    15,    16,   -59,   -59,   -59,   -59,   281,   282,
     283,   284,   285,   286,   287,   288,   233,    -9,    -9,   237,
     -57,   -36,   -57,   -57,   -57,   -57,   -59,   -59,   -36,   -36,
      48,    49,   -36,    70,    71,   275,    89,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -10,   -10,    70,   106,    15,   182,   -57,
     -57,   166,   107,   167,     5,     6,     7,   272,    70,   229,
     234,   230,   231,   174,   310,   295,    70,   273,   168,   169,
     175,   170,   274,    50,   235,   176,   177,   293,    51,   309,
     174,   314,   174,   316,   174,   317,   178,   175,    27,   175,
     171,   175,   176,   177,   176,   177,   176,   177,     0,    20,
       0,    52,   179,   178,     0,   178,    53,   178,    54,    15,
     277,     0,    55,   165,   125,     0,     0,    67,    68,   179,
     134,   179,   -35,   179,     0,    -2,     4,   -35,   144,     5,
       6,     7,     0,   312,   -29,     0,   -29,   -29,   -29,   -29,
      -7,    -7,     0,     0,    -7,    -7,    -7,   173,   102,   103,
     -35,   -29,   -29,   111,   -29,     0,     0,   -35,   -35,     0,
       0,   -35,   180,   172,   173,     0,   173,     0,   173,     0,
       0,   144,   -34,   -29,   -29,     0,     0,   -34,     0,   180,
     172,   180,   172,   180,   172,   183,   184,   134,     0,     0,
       0,     0,     0,     0,   190,   191,   134,     0,     0,     0,
     -34,    50,     0,   197,   198,   134,    51,   -34,   -34,     0,
       0,   -34,   125,   125,   125,   125,   125,   125,   125,   125,
     134,   134,   134,   134,   134,   134,   134,   134,   144,    52,
       0,     0,     0,     0,   232,     0,    54,     0,     0,     0,
      55,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   193,
     194,     0,   125,   125,   242,   243,     0,     0,   -47,   134,
     134,   247,   248,     0,     0,     0,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   260,   261,     0,   136,
       0,     0,   118,     0,   137,     0,   -31,   119,   -31,   -31,
     -31,   -31,     0,    -3,    -3,     0,   270,    -3,    -3,    -3,
     144,     0,   126,   -31,   -31,   -31,   -31,   138,   135,     0,
     120,     0,     0,     0,   139,   311,   145,   121,   140,     0,
       0,   122,     0,     0,     0,   -31,   -31,     0,     0,   278,
     279,   134,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,     0,   -57,   -57,   270,   270,   270,
     270,   270,   270,   270,   270,   270,   270,   307,   308,   145,
      32,   144,    33,     5,     6,     7,    -5,    -5,     0,     0,
      -5,    -5,    -5,   126,   126,   135,     0,    34,    35,     0,
      36,     0,   135,   135,   135,     0,     0,     0,     0,    50,
     127,   145,   145,   135,    51,   128,     0,     0,     0,   116,
     126,   126,   126,   126,   126,   126,   126,   126,   135,   135,
     135,   135,   135,   135,   135,   135,   145,    52,   129,     0,
       0,     0,     0,     0,    54,   130,     0,     0,    55,   131,
       0,    72,    73,    74,    75,    76,    77,    78,    79,     0,
     126,   126,   126,   126,   -38,   -38,     0,   135,   135,   135,
     135,     0,     0,     0,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   154,   155,   156,   157,
     158,   159,   160,   161,   -66,   124,   -66,   -66,   -66,   -66,
       0,   133,     0,    90,   271,     0,     0,     0,   145,   143,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   100,   101,     0,
       0,     0,     0,   -66,   -66,     0,     0,   271,   271,   135,
       0,     0,    -6,    -6,   136,     0,    -6,    -6,    -6,   137,
       0,     0,   143,     0,     0,   271,   271,   271,   271,   271,
     271,   271,   271,   271,   271,   271,   271,     0,   133,   145,
       0,   -25,   138,   -25,   -25,   -25,   -25,   133,     0,   139,
       0,     0,     0,   140,     0,     0,   133,     0,   -25,   -25,
     -25,   -25,     0,   124,   124,   124,   124,   124,   124,   124,
     124,   133,   133,   133,   133,   133,   133,   133,   133,   143,
     -25,   -25,    -8,    -8,     0,     0,    -8,    -8,    -8,   -18,
       0,   -18,   -18,   -18,   -18,   154,   155,   156,   157,   158,
     159,   160,   161,   240,   241,     0,   -18,   -18,   -18,   -18,
     245,   246,   239,     0,     0,     0,     0,   143,   143,   143,
     143,   143,   143,   143,   143,   258,   259,     0,   -18,   -18,
       0,     0,   -11,   -11,     0,    65,   -11,   -11,   -11,   -12,
     -12,    69,     0,   -12,   -12,   -12,     0,   269,     0,   141,
     -47,   143,   -47,   -47,   -47,   -47,     0,    91,     0,    92,
      93,    94,    95,    96,    97,    98,    99,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   289,
     290,     0,   133,     0,     0,     0,     0,     0,     0,   -47,
     -47,     0,   141,     0,     0,     0,     0,     0,   269,   269,
     269,   269,   269,   269,   269,   269,   305,   306,   185,     0,
       0,   -19,   143,   -19,   -19,   -19,   -19,   192,     0,     0,
       0,     0,     0,     0,     0,     0,   199,   262,   -19,   -19,
     -19,   -19,   263,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     -19,   -19,     0,     0,     0,   264,   -47,     0,   -47,   -47,
     -47,   -47,   265,     0,     0,     0,   266,     0,     0,     0,
       0,     0,     0,   -47,   -47,     0,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   186,   187,   250,   251,   252,
     253,   254,   255,   256,   257,   -47,   -47,     0,     0,     0,
       0,     0,     0,     0,   123,     0,     0,     0,     0,   -48,
     132,   -48,   -48,   -48,   -48,     0,     0,   267,   142,     0,
       0,   141,     0,     0,     0,     0,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     291,   292,     0,     0,     0,     0,     0,     0,   -48,   -48,
       0,     0,   280,    72,    73,    74,    75,    76,    77,    78,
      79,   142,     0,     0,     0,     0,   -37,   -37,   297,   298,
     299,   300,   301,   302,   303,   304,     0,   132,     0,     0,
       0,     0,   141,     0,     0,     0,   132,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   132,     0,     0,     0,     0,
     -45,   -45,   123,   123,   123,   123,   123,   123,   123,   123,
     132,   132,   132,   132,   132,   132,   132,   132,   142,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,     0,   -57,     0,     0,     0,   -57,   154,   155,   156,
     157,   158,   159,   160,   161,     0,     0,     0,   -51,     0,
     -51,   -51,   -51,   -51,   244,     0,   142,   142,   142,   142,
     142,   142,   142,   142,     0,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,     0,     0,     0,     0,     0,   268,   -51,   -51,   -45,
     142,   -45,   -45,   -45,   -45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,     0,
       0,   132,     0,     0,     0,     0,     0,     0,   -45,   -45,
       0,     0,     0,     0,     0,     0,     0,   268,   268,   268,
     268,   268,   268,   268,   268,   -54,     0,   -54,   -54,   -54,
     -54,   142,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -56,     0,
     -56,   -56,   -56,   -56,   -54,   -54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -55,     0,   -55,   -55,   -55,   -55,   -56,   -56,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -58,     0,   -58,   -58,   -58,   -58,
     -55,   -55,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -49,     0,   -49,
     -49,   -49,   -49,   -58,   -58,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   291,   292,
     -50,     0,   -50,   -50,   -50,   -50,   -49,   -49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   291,   292,   -52,     0,   -52,   -52,   -52,   -52,   -50,
     -50,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -53,     0,   -53,   -53,
     -53,   -53,   -52,   -52,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -57,
       0,   -57,   -57,   -57,   -57,   -53,   -53,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -57,   -57,     0,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -66,     0,   -66,   -66,   -66,   -66,   -57,   -57,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -66,
     -66,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -48,     0,   -48,   -48,   -48,
     -48,   -66,   -66,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -48,   -48,     0,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   188,   189,   -51,     0,
     -51,   -51,   -51,   -51,   -48,   -48,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   -51,   -51,     0,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -54,     0,   -54,   -54,   -54,   -54,   -51,   -51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -54,   -54,
       0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -56,     0,   -56,   -56,   -56,   -56,
     -54,   -54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   -56,   -56,     0,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -55,     0,   -55,
     -55,   -55,   -55,   -56,   -56,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   -55,   -55,     0,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -58,     0,   -58,   -58,   -58,   -58,   -55,   -55,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   -58,   -58,     0,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -49,     0,   -49,   -49,   -49,   -49,   -58,
     -58,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     -49,   -49,     0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   188,   189,   -50,     0,   -50,   -50,
     -50,   -50,   -49,   -49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   -50,   -50,     0,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   188,   189,   -52,
       0,   -52,   -52,   -52,   -52,   -50,   -50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   -52,   -52,     0,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -53,     0,   -53,   -53,   -53,   -53,   -52,   -52,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   -53,
     -53,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -46,     0,   -46,   -46,   -46,
     -46,   -53,   -53,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -40,     0,   -40,   -40,   -40,   -40,
       0,     0,     0,     0,   -46,   -46,     0,     0,     0,     0,
       0,   -40,   -40,   -40,   -40,   281,   282,   -40,   -40,   -40,
     -40,   -40,   -40,   -43,     0,   -43,   -43,   -43,   -43,     0,
       0,     0,     0,   -40,   -40,     0,     0,     0,     0,     0,
     -43,   -43,   -43,   -43,   281,   282,   -43,   -43,   -43,   -43,
     -43,   -43,   -41,     0,   -41,   -41,   -41,   -41,     0,     0,
       0,     0,   -43,   -43,     0,     0,     0,     0,     0,   -41,
     -41,   -41,   -41,   281,   282,   -41,   -41,   -41,   -41,   -41,
     -41,   -39,     0,   -39,   -39,   -39,   -39,     0,     0,     0,
       0,   -41,   -41,     0,     0,     0,     0,     0,   -39,   -39,
     -39,   -39,   281,   282,   -39,   -39,   -39,   -39,   -39,   -39,
     -44,     0,   -44,   -44,   -44,   -44,     0,     0,     0,     0,
     -39,   -39,     0,     0,     0,     0,     0,   -44,   -44,   -44,
     -44,   281,   282,   -44,   -44,   -44,   -44,   -44,   -44,   -42,
       0,   -42,   -42,   -42,   -42,     0,     0,     0,     0,   -44,
     -44,     0,     0,     0,     0,     0,   -42,   -42,   -42,   -42,
     281,   282,   -42,   -42,   -42,   -42,   -42,   -42,   -59,     0,
     -59,   -59,   -59,   -59,     0,     0,     0,     0,   -42,   -42,
       0,     0,     0,     0,     0,   -59,   -59,     0,   -59,   146,
     147,   148,   149,   150,   151,   152,   153,   -45,     0,   -45,
     -45,   -45,   -45,     0,     0,     0,     0,   -59,   -59,     0,
       0,     0,     0,     0,   -45,   -45,     0,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -46,     0,   -46,   -46,
     -46,   -46,     0,     0,     0,     0,   -45,   -45,     0,     0,
       0,     0,     0,   -46,   -46,     0,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -40,     0,   -40,   -40,   -40,
     -40,     0,     0,     0,     0,   -46,   -46,     0,     0,     0,
       0,     0,   -40,   -40,     0,   -40,   146,   147,   -40,   -40,
     -40,   -40,   -40,   -40,   -43,     0,   -43,   -43,   -43,   -43,
       0,     0,     0,     0,   -40,   -40,     0,     0,     0,     0,
       0,   -43,   -43,     0,   -43,   146,   147,   -43,   -43,   -43,
     -43,   -43,   -43,   -41,     0,   -41,   -41,   -41,   -41,     0,
       0,     0,     0,   -43,   -43,     0,     0,     0,     0,     0,
     -41,   -41,     0,   -41,   146,   147,   -41,   -41,   -41,   -41,
     -41,   -41,   -39,     0,   -39,   -39,   -39,   -39,     0,     0,
       0,     0,   -41,   -41,     0,     0,     0,     0,     0,   -39,
     -39,     0,   -39,   146,   147,   -39,   -39,   -39,   -39,   -39,
     -39,   -44,     0,   -44,   -44,   -44,   -44,     0,     0,     0,
       0,   -39,   -39,     0,     0,     0,     0,     0,   -44,   -44,
       0,   -44,   146,   147,   -44,   -44,   -44,   -44,   -44,   -44,
     -42,     0,   -42,   -42,   -42,   -42,     0,     0,     0,     0,
     -44,   -44,     0,     0,     0,     0,     0,   -42,   -42,     0,
     -42,   146,   147,   -42,   -42,   -42,   -42,   -42,   -42,   -23,
       0,   -23,   -23,   -23,   -23,     0,     0,     0,     0,   -42,
     -42,     0,     0,     0,     0,     0,   -23,   -23,   -23,   -23,
       0,     0,     0,   -24,     0,   -24,   -24,   -24,   -24,   -28,
       0,   -28,   -28,   -28,   -28,     0,     0,     0,   -23,   -23,
     -24,   -24,   -24,   -24,     0,     0,   -28,   -28,   -28,   -28,
       0,     0,     0,   -26,     0,   -26,   -26,   -26,   -26,     0,
       0,     0,   -24,   -24,     0,     0,     0,     0,   -28,   -28,
     -26,   -26,   -26,   -26,     0,     0,     0,   -27,     0,   -27,
     -27,   -27,   -27,   -62,     0,   -62,   -62,   -62,   -62,     0,
       0,     0,   -26,   -26,   -27,   -27,   -27,   -27,     0,     0,
     -62,   -62,   -62,   -62,     0,     0,     0,   -61,     0,   -61,
     -61,   -61,   -61,     0,     0,     0,   -27,   -27,     0,     0,
       0,     0,   -62,   -62,   -61,   -61,   -61,   -61,     0,     0,
       0,   -22,     0,   -22,   -22,   -22,   -22,    -8,     0,    -8,
      -8,    -8,    -8,     0,     0,     0,   -61,   -61,   -22,   -22,
     -22,   -22,     0,     0,    -8,    -8,    -8,    -8,     0,     0,
       0,   -60,     0,   -60,   -60,   -60,   -60,     0,     0,     0,
     -22,   -22,     0,     0,     0,     0,    -8,    -8,   -60,   -60,
     -60,   -60,     0,     0,     0,   -29,     0,   -29,   -29,   -29,
     -29,   -32,     0,   -32,   -32,   -32,   -32,     0,     0,     0,
     -60,   -60,   -29,   -29,   313,   -29,     0,     0,   -32,   -32,
     -32,   -32,     0,     0,     0,   -30,     0,   -30,   -30,   -30,
     -30,     0,     0,     0,   -29,   -29,     0,     0,     0,     0,
     -32,   -32,   -30,   -30,   -30,   -30,     0,     0,     0,   -33,
       0,   -33,   -33,   -33,   -33,   -21,     0,   -21,   -21,   -21,
     -21,     0,     0,     0,   -30,   -30,   -33,   -33,   -33,   -33,
       0,     0,   -21,   -21,     0,   -21,     0,     0,     0,    32,
       0,    33,     5,     6,     7,     0,     0,     0,   -33,   -33,
       0,     0,     0,     0,   -21,   -21,    34,    35,     0,    36,
       0,     0,     0,   -31,     0,   -31,   -31,   -31,   -31,   -25,
       0,   -25,   -25,   -25,   -25,     0,     0,     0,   116,    37,
     -31,   -31,     0,   -31,     0,     0,   -25,   -25,     0,   -25,
       0,     0,     0,   -20,     0,   -20,   -20,   -20,   -20,     0,
       0,     0,   -31,   -31,     0,     0,     0,     0,   -25,   -25,
     -20,   -20,     0,   -20,     0,     0,     0,   -18,     0,   -18,
     -18,   -18,   -18,   -19,     0,   -19,   -19,   -19,   -19,     0,
       0,     0,   -20,   -20,   -18,   -18,     0,   -18,     0,     0,
     -19,   -19,     0,   -19,     0,     0,     0,   -23,     0,   -23,
     -23,   -23,   -23,     0,     0,     0,   -18,   -18,     0,     0,
       0,     0,   -19,   -19,   -23,   -23,     0,   -23,     0,     0,
       0,   -24,     0,   -24,   -24,   -24,   -24,   -28,     0,   -28,
     -28,   -28,   -28,     0,     0,     0,   -23,   -23,   -24,   -24,
       0,   -24,     0,     0,   -28,   -28,     0,   -28,     0,     0,
       0,   -26,     0,   -26,   -26,   -26,   -26,     0,     0,     0,
     -24,   -24,     0,     0,     0,     0,   -28,   -28,   -26,   -26,
       0,   -26,     0,     0,     0,   -27,     0,   -27,   -27,   -27,
     -27,   -62,     0,   -62,   -62,   -62,   -62,     0,     0,     0,
     -26,   -26,   -27,   -27,     0,   -27,     0,     0,   -62,   -62,
       0,   -62,     0,     0,     0,   -61,     0,   -61,   -61,   -61,
     -61,     0,     0,     0,   -27,   -27,     0,     0,     0,     0,
     -62,   -62,   -61,   -61,     0,   -61,     0,     0,     0,   -60,
       0,   -60,   -60,   -60,   -60,   -32,     0,   -32,   -32,   -32,
     -32,     0,     0,     0,   -61,   -61,   -60,   -60,     0,   -60,
       0,     0,   -32,   -32,     0,   -32,     0,     0,     0,   -30,
       0,   -30,   -30,   -30,   -30,     0,     0,     0,   -60,   -60,
       0,     0,     0,     0,   -32,   -32,   -30,   -30,     0,   -30,
       0,     0,     0,   -33,     0,   -33,   -33,   -33,   -33,    32,
       0,    33,     5,     6,     7,     0,     0,     0,   -30,   -30,
     -33,   -33,     0,   -33,     0,     0,    34,    35,     0,    36,
       0,     0,     0,    -8,     0,    -8,    -8,    -8,    -8,     0,
       0,     0,   -33,   -33,     0,     0,     0,     0,   116,   238,
      -8,    -8,     0,    -8,     0,     0,     0,    32,     0,    33,
       5,     6,     7,   -22,     0,   -22,   -22,   -22,   -22,     0,
       0,     0,    -8,    -8,    34,    35,     0,    36,     0,     0,
     -22,   -22,     0,   -22,     0,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,    80,    81,     0,   116,   276,   -47,   -47,
       0,     0,   -22,   -22,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,     0,   -66,     0,     0,
       0,   -66,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   210,   211,     0,   -48,     0,     0,     0,   -48,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,     0,   -51,     0,     0,     0,   -51,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
       0,   -54,     0,     0,     0,   -54,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,   -56,
       0,     0,     0,   -56,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,     0,   -55,     0,     0,
       0,   -55,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,     0,   -58,     0,     0,     0,   -58,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     210,   211,     0,   -49,     0,     0,     0,   -49,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   210,   211,
       0,   -50,     0,     0,     0,   -50,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,   -52,
       0,     0,     0,   -52,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,     0,   -53,     0,     0,
       0,   -53,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,     0,     0,     0,     0,     0,   -57,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,     0,     0,     0,     0,   -66,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   195,   196,
       0,     0,     0,     0,     0,   -48,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,     0,
       0,     0,     0,   -51,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,     0,     0,     0,     0,
       0,   -54,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,     0,     0,     0,     0,     0,   -56,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,     0,     0,     0,     0,     0,   -55,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
       0,     0,     0,     0,     0,   -58,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   195,   196,     0,     0,
       0,     0,     0,   -49,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   195,   196,     0,     0,     0,     0,
       0,   -50,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,     0,     0,     0,     0,     0,   -52,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,     0,     0,     0,     0,     0,   -53,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   208,   209,     0,     0,
       0,   -47,     0,     0,     0,   -47,   200,   201,   202,   203,
     204,   205,   206,   207,     0,     0,     0,     0,     0,   -38,
       0,     0,     0,   -38,   200,   201,   202,   203,   204,   205,
     206,   207,     0,     0,     0,     0,     0,   -37,     0,     0,
       0,   -37,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
       0,     0,     0,     0,     0,   -45,     0,     0,     0,   -45,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,     0,
       0,     0,     0,   -46,     0,     0,     0,   -46,   200,   201,
     -40,   -40,   -40,   -40,   -40,   -40,     0,     0,     0,     0,
       0,   -40,     0,     0,     0,   -40,   200,   201,   -43,   -43,
     -43,   -43,   -43,   -43,     0,     0,     0,     0,     0,   -43,
       0,     0,     0,   -43,   200,   201,   -41,   -41,   -41,   -41,
     -41,   -41,     0,     0,     0,     0,     0,   -41,     0,     0,
       0,   -41,   200,   201,   -39,   -39,   -39,   -39,   -39,   -39,
       0,     0,     0,     0,     0,   -39,     0,     0,     0,   -39,
     200,   201,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,
       0,     0,     0,   -44,     0,     0,     0,   -44,   200,   201,
     -42,   -42,   -42,   -42,   -42,   -42,     0,     0,     0,     0,
       0,   -42,     0,     0,     0,   -42,   154,   155,   156,   157,
     158,   159,   160,   161,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,     0,   249,     0,     0,     0,     0,     0,     0,
       0,   -45,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,
     154,   155,   -40,   -40,   -40,   -40,   -40,   -40,     0,   -46,
       0,     0,     0,     0,     0,     0,     0,   -40,   154,   155,
     -43,   -43,   -43,   -43,   -43,   -43,   154,   155,   -41,   -41,
     -41,   -41,   -41,   -41,     0,   -43,     0,     0,     0,     0,
       0,     0,     0,   -41,   154,   155,   -39,   -39,   -39,   -39,
     -39,   -39,   154,   155,   -44,   -44,   -44,   -44,   -44,   -44,
       0,   -39,     0,     0,     0,     0,     0,     0,     0,   -44,
     154,   155,   -42,   -42,   -42,   -42,   -42,   -42,   154,   155,
     156,   157,   158,   159,   160,   161,     0,   -42,     0,     0,
       0,     0,     0,     0,     0,   296,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -66,
     -66,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,    82,    83,     0,   -48,   -48,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,   -51,
     -51,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,     0,   -54,   -54,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,   -56,
     -56,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,     0,   -55,   -55,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,   -58,
     -58,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,    82,    83,     0,   -49,   -49,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,    82,    83,     0,   -50,
     -50,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,     0,   -52,   -52,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,     0,   -53,
     -53,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,     0,
       0,     0,     0,     0,   -46,   -46,    72,    73,   -40,   -40,
     -40,   -40,   -40,   -40,     0,     0,     0,     0,     0,   -40,
     -40,    72,    73,   -43,   -43,   -43,   -43,   -43,   -43,     0,
       0,     0,     0,     0,   -43,   -43,    72,    73,   -41,   -41,
     -41,   -41,   -41,   -41,     0,     0,     0,     0,     0,   -41,
     -41,    72,    73,   -39,   -39,   -39,   -39,   -39,   -39,     0,
       0,     0,     0,     0,   -39,   -39,    72,    73,   -44,   -44,
     -44,   -44,   -44,   -44,     0,     0,     0,     0,     0,   -44,
     -44,    72,    73,   -42,   -42,   -42,   -42,   -42,   -42,     0,
       0,     0,     0,     0,   -42,   -42
};

static const yytype_int16 yycheck[] =
{
       2,     2,    34,   104,   104,    49,    47,    87,    25,   109,
     104,   111,    14,   113,   116,   104,   104,     0,     4,     5,
       6,    23,     1,    35,     3,     3,   104,    39,    35,     8,
      62,     1,    39,     3,     3,    35,    35,     3,     8,    39,
      39,     1,   104,     3,     1,    35,     3,    49,     8,    39,
      35,     8,    31,    39,    39,    87,     3,    36,     1,    38,
       3,    31,     3,    42,    39,     8,    36,     8,    38,   171,
       3,    31,    42,   105,    31,     3,    36,    40,    38,    36,
      35,    38,    42,    41,    39,    42,    40,   104,    31,    38,
      31,    35,    36,    36,    38,    38,    35,    38,    39,    42,
      39,    42,   104,   104,     4,     5,     6,     1,    38,     3,
       4,     5,     6,     3,    41,     0,     1,     3,     8,     4,
       5,     6,    35,    36,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,   168,    35,    36,   180,
       1,    31,     3,     4,     5,     6,    40,    41,    38,    39,
      37,    38,    42,    35,    36,   235,    39,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    35,    36,    35,    36,    35,    36,    40,
      41,     1,    36,     3,     4,     5,     6,   231,    35,    36,
      38,    37,    38,   294,   294,   275,    35,    36,    18,    19,
     294,    21,   234,     3,    38,   294,   294,    39,     8,    36,
     311,   311,   313,   313,   315,   315,   294,   311,    23,   313,
      40,   315,   311,   311,   313,   313,   315,   315,    -1,   231,
      -1,    31,   294,   311,    -1,   313,    36,   315,    38,    35,
      36,    -1,    42,   275,    48,    -1,    -1,    51,    52,   311,
      54,   313,     3,   315,    -1,     0,     1,     8,    62,     4,
       5,     6,    -1,   295,     1,    -1,     3,     4,     5,     6,
       0,     1,    -1,    -1,     4,     5,     6,   294,    82,    83,
      31,    18,    19,    20,    21,    -1,    -1,    38,    39,    -1,
      -1,    42,   294,   294,   311,    -1,   313,    -1,   315,    -1,
      -1,   105,     3,    40,    41,    -1,    -1,     8,    -1,   311,
     311,   313,   313,   315,   315,   119,   120,   121,    -1,    -1,
      -1,    -1,    -1,    -1,   128,   129,   130,    -1,    -1,    -1,
      31,     3,    -1,   137,   138,   139,     8,    38,    39,    -1,
      -1,    42,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,    31,
      -1,    -1,    -1,    -1,    36,    -1,    38,    -1,    -1,    -1,
      42,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,   186,   187,   188,   189,    -1,    -1,    39,   193,
     194,   195,   196,    -1,    -1,    -1,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,    -1,     3,
      -1,    -1,     3,    -1,     8,    -1,     1,     8,     3,     4,
       5,     6,    -1,     0,     1,    -1,   230,     4,     5,     6,
     234,    -1,    48,    18,    19,    20,    21,    31,    54,    -1,
      31,    -1,    -1,    -1,    38,    39,    62,    38,    42,    -1,
      -1,    42,    -1,    -1,    -1,    40,    41,    -1,    -1,   263,
     264,   265,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    35,    36,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,   291,   292,   105,
       1,   295,     3,     4,     5,     6,     0,     1,    -1,    -1,
       4,     5,     6,   119,   120,   121,    -1,    18,    19,    -1,
      21,    -1,   128,   129,   130,    -1,    -1,    -1,    -1,     3,
       3,   137,   138,   139,     8,     8,    -1,    -1,    -1,    40,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,    31,    31,    -1,
      -1,    -1,    -1,    -1,    38,    38,    -1,    -1,    42,    42,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
     186,   187,   188,   189,    35,    36,    -1,   193,   194,   195,
     196,    -1,    -1,    -1,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,    22,    23,    24,    25,
      26,    27,    28,    29,     1,    48,     3,     4,     5,     6,
      -1,    54,    -1,    39,   230,    -1,    -1,    -1,   234,    62,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    80,    81,    -1,
      -1,    -1,    -1,    40,    41,    -1,    -1,   263,   264,   265,
      -1,    -1,     0,     1,     3,    -1,     4,     5,     6,     8,
      -1,    -1,   105,    -1,    -1,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,    -1,   121,   295,
      -1,     1,    31,     3,     4,     5,     6,   130,    -1,    38,
      -1,    -1,    -1,    42,    -1,    -1,   139,    -1,    18,    19,
      20,    21,    -1,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
      40,    41,     0,     1,    -1,    -1,     4,     5,     6,     1,
      -1,     3,     4,     5,     6,    22,    23,    24,    25,    26,
      27,    28,    29,   186,   187,    -1,    18,    19,    20,    21,
     193,   194,    39,    -1,    -1,    -1,    -1,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,    -1,    40,    41,
      -1,    -1,     0,     1,    -1,    48,     4,     5,     6,     0,
       1,    54,    -1,     4,     5,     6,    -1,   230,    -1,    62,
       1,   234,     3,     4,     5,     6,    -1,    70,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,   265,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      41,    -1,   105,    -1,    -1,    -1,    -1,    -1,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   121,    -1,
      -1,     1,   295,     3,     4,     5,     6,   130,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   139,     3,    18,    19,
      20,    21,     8,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
      40,    41,    -1,    -1,    -1,    31,     1,    -1,     3,     4,
       5,     6,    38,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    19,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,   200,   201,   202,
     203,   204,   205,   206,   207,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,     1,
      54,     3,     4,     5,     6,    -1,    -1,   230,    62,    -1,
      -1,   234,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    -1,   265,    22,    23,    24,    25,    26,    27,    28,
      29,   105,    -1,    -1,    -1,    -1,    35,    36,   281,   282,
     283,   284,   285,   286,   287,   288,    -1,   121,    -1,    -1,
      -1,    -1,   295,    -1,    -1,    -1,   130,    22,    23,    24,
      25,    26,    27,    28,    29,   139,    -1,    -1,    -1,    -1,
      35,    36,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    35,    -1,    -1,    -1,    39,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,     6,    39,    -1,   200,   201,   202,   203,
     204,   205,   206,   207,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,   230,    40,    41,     1,
     234,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,   265,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   281,   282,   283,
     284,   285,   286,   287,   288,     1,    -1,     3,     4,     5,
       6,   295,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,     1,    -1,
       3,     4,     5,     6,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,     1,    -1,     3,     4,     5,     6,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,     1,    -1,     3,     4,     5,     6,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,     1,    -1,     3,
       4,     5,     6,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
       1,    -1,     3,     4,     5,     6,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,     1,    -1,     3,     4,     5,     6,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,     1,    -1,     3,     4,
       5,     6,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,     1,
      -1,     3,     4,     5,     6,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,     1,    -1,     3,     4,     5,     6,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,     1,    -1,     3,     4,     5,
       6,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,     1,    -1,
       3,     4,     5,     6,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,     1,    -1,     3,     4,     5,     6,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,     1,    -1,     3,     4,     5,     6,
      40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    19,    -1,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,     1,    -1,     3,
       4,     5,     6,    40,    41,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    18,    19,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
       1,    -1,     3,     4,     5,     6,    40,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,     1,    -1,     3,     4,     5,     6,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      18,    19,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,     1,    -1,     3,     4,
       5,     6,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    18,    19,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,     1,
      -1,     3,     4,     5,     6,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,     1,    -1,     3,     4,     5,     6,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    18,
      19,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,     1,    -1,     3,     4,     5,
       6,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      40,    41,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    40,
      41,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     1,    -1,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    40,    41,
      -1,    -1,    -1,    -1,    -1,    18,    19,    -1,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    -1,    40,    41,    -1,
      -1,    -1,    -1,    -1,    18,    19,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     1,    -1,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,
      -1,    -1,    -1,    18,    19,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     1,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,
      -1,    -1,    18,    19,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     1,    -1,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,
      -1,    18,    19,    -1,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,
      18,    19,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     1,    -1,     3,     4,     5,     6,    -1,    -1,
      -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    18,
      19,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    40,    41,    -1,    -1,    -1,    -1,    -1,    18,    19,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,
      40,    41,    -1,    -1,    -1,    -1,    -1,    18,    19,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    40,
      41,    -1,    -1,    -1,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    40,    41,
      18,    19,    20,    21,    -1,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    40,    41,
      18,    19,    20,    21,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    40,    41,    18,    19,    20,    21,    -1,    -1,
      18,    19,    20,    21,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    40,    41,    -1,    -1,
      -1,    -1,    40,    41,    18,    19,    20,    21,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    40,    41,    18,    19,
      20,    21,    -1,    -1,    18,    19,    20,    21,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      40,    41,    -1,    -1,    -1,    -1,    40,    41,    18,    19,
      20,    21,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      40,    41,    18,    19,    20,    21,    -1,    -1,    18,    19,
      20,    21,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,
      40,    41,    18,    19,    20,    21,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     1,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    40,    41,    18,    19,    20,    21,
      -1,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    40,    41,
      -1,    -1,    -1,    -1,    40,    41,    18,    19,    -1,    21,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    40,    41,
      18,    19,    -1,    21,    -1,    -1,    18,    19,    -1,    21,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    40,    41,
      18,    19,    -1,    21,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    40,    41,    18,    19,    -1,    21,    -1,    -1,
      18,    19,    -1,    21,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    40,    41,    -1,    -1,
      -1,    -1,    40,    41,    18,    19,    -1,    21,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,     1,    -1,     3,
       4,     5,     6,    -1,    -1,    -1,    40,    41,    18,    19,
      -1,    21,    -1,    -1,    18,    19,    -1,    21,    -1,    -1,
      -1,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      40,    41,    -1,    -1,    -1,    -1,    40,    41,    18,    19,
      -1,    21,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,     1,    -1,     3,     4,     5,     6,    -1,    -1,    -1,
      40,    41,    18,    19,    -1,    21,    -1,    -1,    18,    19,
      -1,    21,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,    -1,
      40,    41,    18,    19,    -1,    21,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,     1,    -1,     3,     4,     5,
       6,    -1,    -1,    -1,    40,    41,    18,    19,    -1,    21,
      -1,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    40,    41,
      -1,    -1,    -1,    -1,    40,    41,    18,    19,    -1,    21,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    40,    41,
      18,    19,    -1,    21,    -1,    -1,    18,    19,    -1,    21,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    40,    41,    -1,    -1,    -1,    -1,    40,    41,
      18,    19,    -1,    21,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,     1,    -1,     3,     4,     5,     6,    -1,
      -1,    -1,    40,    41,    18,    19,    -1,    21,    -1,    -1,
      18,    19,    -1,    21,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    40,    41,    35,    36,
      -1,    -1,    40,    41,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,    35,    -1,    -1,
      -1,    39,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    35,    -1,    -1,    -1,    39,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    -1,    -1,    -1,    39,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    -1,    -1,    -1,    39,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      -1,    -1,    -1,    39,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,    35,    -1,    -1,
      -1,    39,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    35,    -1,    -1,    -1,    39,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    -1,    -1,    -1,    39,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    -1,    -1,    -1,    39,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      -1,    -1,    -1,    39,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,    35,    -1,    -1,
      -1,    39,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    -1,    -1,    -1,    -1,    39,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    -1,
      -1,    -1,    -1,    39,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,    -1,    -1,    -1,
      -1,    39,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,    39,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    39,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    39,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    39,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    39,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    39,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    39,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    39,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    35,
      -1,    -1,    -1,    39,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,
      -1,    39,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,    39,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    35,    -1,    -1,    -1,    39,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    39,    22,    23,    24,    25,
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
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      36,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      36,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      36,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      36,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      36,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      36,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    35,    36,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    35,
      36,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    35,    36,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    35,
      36,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    35,    36,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    35,
      36,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    35,    36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    47,    48,     0,     1,     4,     5,     6,    49,    50,
      52,    72,     3,    51,    38,    35,    36,    54,    55,    56,
      72,     3,    39,    35,     3,    40,    53,    56,    40,    59,
      58,    41,     1,     3,    18,    19,    21,    41,    50,    57,
      59,    60,    61,    62,    69,    70,    71,    72,    37,    38,
       3,     8,    31,    36,    38,    42,    64,    65,    66,    67,
      68,    73,    38,    38,     3,    65,    54,    68,    68,    65,
      35,    36,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    64,     1,    36,    63,    64,    39,
      39,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      67,    67,    68,    68,    39,    63,    36,    36,    57,    39,
      64,    20,    57,    39,    57,    57,    40,    51,     3,     8,
      31,    38,    42,    66,    67,    68,    73,     3,     8,    31,
      38,    42,    66,    67,    68,    73,     3,     8,    31,    38,
      42,    65,    66,    67,    68,    73,    22,    23,    24,    25,
      26,    27,    28,    29,    22,    23,    24,    25,    26,    27,
      28,    29,    35,     1,    36,    64,     1,     3,    18,    19,
      21,    40,    50,    59,    60,    61,    62,    69,    70,    71,
      72,    58,    36,    68,    68,    65,    30,    31,    32,    33,
      68,    68,    65,    30,    31,    32,    33,    68,    68,    65,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    36,
      37,    38,    36,    64,    38,    38,    58,    51,    41,    39,
      67,    67,    68,    68,    39,    67,    67,    68,    68,    39,
      65,    65,    65,    65,    65,    65,    65,    65,    67,    67,
      68,    68,     3,     8,    31,    38,    42,    65,    66,    67,
      68,    73,    54,    36,    64,    63,    41,    36,    68,    68,
      65,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    39,    39,    63,    39,    65,    65,    65,
      65,    65,    65,    65,    65,    67,    67,    68,    68,    36,
      57,    39,    64,    20,    57,    39,    57,    57
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    49,    50,    51,
      51,    52,    53,    54,    54,    55,    55,    56,    57,    57,
      58,    58,    59,    60,    60,    60,    60,    60,    60,    61,
      61,    61,    62,    62,    63,    63,    63,    64,    64,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    66,    66,
      66,    67,    67,    67,    68,    68,    68,    68,    68,    69,
      70,    71,    71,    72,    72,    72,    73
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     3,     3,
       1,     6,     3,     1,     0,     3,     1,     2,     1,     1,
       2,     0,     3,     1,     1,     1,     1,     1,     1,     5,
       7,     1,     6,     7,     2,     1,     1,     3,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     1,     1,     3,
       3,     1,     3,     3,     1,     2,     2,     1,     3,     3,
       5,     3,     2,     1,     1,     1,     1
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
#line 65 "sintatico.y"
                             {
		// $$ = $1
	}
#line 2523 "sintatico.tab.c"
    break;

  case 3:
#line 71 "sintatico.y"
                                          {
		// $$ = create_node($1, $2);
		}
#line 2531 "sintatico.tab.c"
    break;

  case 4:
#line 74 "sintatico.y"
                        {
		// $$ = null
		}
#line 2539 "sintatico.tab.c"
    break;

  case 5:
#line 80 "sintatico.y"
                                 {
		// $$ = $1
	}
#line 2547 "sintatico.tab.c"
    break;

  case 6:
#line 83 "sintatico.y"
                               {
		// $$ = $1
	}
#line 2555 "sintatico.tab.c"
    break;

  case 7:
#line 86 "sintatico.y"
                {
		// yyerror/print
		// erro sintatico
		// print erro na linha tal
		// coluna, yylineno
	}
#line 2566 "sintatico.tab.c"
    break;

  case 9:
#line 99 "sintatico.y"
                                  {
		  // Código C $$ lista_de_IDs
		  // $1 lista_de_IDs
		  // $2 VIRGULA
		  // $3 ID
		  // $$ = create_node($1, $3);
	  }
#line 2578 "sintatico.tab.c"
    break;

  case 10:
#line 107 "sintatico.y"
        {
		  // Código C $$ lista_de_IDs
		  // $1 lista_de_IDs
		  // $2 VIRGULA
		  // $3 ID
		//   $$ = create_node($1);
	  }
#line 2590 "sintatico.tab.c"
    break;

  case 29:
#line 162 "sintatico.y"
                                                                {
		// 
		// $$ = create_node(tipo_node, $3, $5);
		}
#line 2599 "sintatico.tab.c"
    break;

  case 30:
#line 166 "sintatico.y"
                                                                             {
		// $$ = create_node($3, $5, $7);
		}
#line 2607 "sintatico.tab.c"
    break;

  case 31:
#line 169 "sintatico.y"
                {
		// print erro na linha tal
		// coluna, yylineno
	}
#line 2616 "sintatico.tab.c"
    break;

  case 36:
#line 183 "sintatico.y"
                {
		// errado: expected ;
		// print erro na linha tal
		// coluna, yylineno
	}
#line 2626 "sintatico.tab.c"
    break;


#line 2630 "sintatico.tab.c"

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
#line 252 "sintatico.y"


int yyerror (const char* s) {
	fprintf (stderr, "%s\n", s);
}

int main(int argc, char **argv)
{
  yyparse();
  return 0;
}
