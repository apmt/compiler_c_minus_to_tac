/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30705

/* Bison version string.  */
#define YYBISON_VERSION "3.7.5"

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

#define RED "\033[0;31m"
#define GRN "\033[0;32m"
#define reset "\033[0m"

extern int yylex(void);
extern int yylex_destroy(void);
extern int yyerror(const char *s);
extern char* yytext;
extern int yylineno;

extern int coluna;


#line 90 "src/sintatico.tab.c"

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

#include "sintatico.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_IFX = 3,                        /* IFX  */
  YYSYMBOL_ID = 4,                         /* ID  */
  YYSYMBOL_INT = 5,                        /* INT  */
  YYSYMBOL_FLOAT = 6,                      /* FLOAT  */
  YYSYMBOL_LIST = 7,                       /* LIST  */
  YYSYMBOL_CONSTANTE_NIL = 8,              /* CONSTANTE_NIL  */
  YYSYMBOL_TAIL_OR_NOT = 9,                /* TAIL_OR_NOT  */
  YYSYMBOL_HEADER = 10,                    /* HEADER  */
  YYSYMBOL_TAIL_POP = 11,                  /* TAIL_POP  */
  YYSYMBOL_MAP = 12,                       /* MAP  */
  YYSYMBOL_FILTER = 13,                    /* FILTER  */
  YYSYMBOL_CONSTRUTOR = 14,                /* CONSTRUTOR  */
  YYSYMBOL_READ = 15,                      /* READ  */
  YYSYMBOL_WRITE = 16,                     /* WRITE  */
  YYSYMBOL_WRITELN = 17,                   /* WRITELN  */
  YYSYMBOL_MAIN = 18,                      /* MAIN  */
  YYSYMBOL_RETURN = 19,                    /* RETURN  */
  YYSYMBOL_IF = 20,                        /* IF  */
  YYSYMBOL_ELSE = 21,                      /* ELSE  */
  YYSYMBOL_FOR = 22,                       /* FOR  */
  YYSYMBOL_AND = 23,                       /* AND  */
  YYSYMBOL_OR = 24,                        /* OR  */
  YYSYMBOL_LT = 25,                        /* LT  */
  YYSYMBOL_LE = 26,                        /* LE  */
  YYSYMBOL_EQ = 27,                        /* EQ  */
  YYSYMBOL_GT = 28,                        /* GT  */
  YYSYMBOL_GE = 29,                        /* GE  */
  YYSYMBOL_NE = 30,                        /* NE  */
  YYSYMBOL_SOMA = 31,                      /* SOMA  */
  YYSYMBOL_SUB = 32,                       /* SUB  */
  YYSYMBOL_MULT = 33,                      /* MULT  */
  YYSYMBOL_DIV = 34,                       /* DIV  */
  YYSYMBOL_VIRGULA = 35,                   /* VIRGULA  */
  YYSYMBOL_PONTO_VIRGULA = 36,             /* PONTO_VIRGULA  */
  YYSYMBOL_ASPA_SIMPLES = 37,              /* ASPA_SIMPLES  */
  YYSYMBOL_ATRIB = 38,                     /* ATRIB  */
  YYSYMBOL_ABRE_PARENTESES = 39,           /* ABRE_PARENTESES  */
  YYSYMBOL_FECHA_PARENTESES = 40,          /* FECHA_PARENTESES  */
  YYSYMBOL_ABRE_CHAVES = 41,               /* ABRE_CHAVES  */
  YYSYMBOL_FECHA_CHAVES = 42,              /* FECHA_CHAVES  */
  YYSYMBOL_FLOAT_CONST = 43,               /* FLOAT_CONST  */
  YYSYMBOL_INTEGER_CONST = 44,             /* INTEGER_CONST  */
  YYSYMBOL_STRING_LITERAL = 45,            /* STRING_LITERAL  */
  YYSYMBOL_STRING = 46,                    /* STRING  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_programa = 48,                  /* programa  */
  YYSYMBOL_lista_de_declaracoes = 49,      /* lista_de_declaracoes  */
  YYSYMBOL_declaracao = 50,                /* declaracao  */
  YYSYMBOL_declaracao_de_variavel = 51,    /* declaracao_de_variavel  */
  YYSYMBOL_lista_de_IDs = 52,              /* lista_de_IDs  */
  YYSYMBOL_declaracao_de_funcao = 53,      /* declaracao_de_funcao  */
  YYSYMBOL_definicao_de_funcao = 54,       /* definicao_de_funcao  */
  YYSYMBOL_parametros = 55,                /* parametros  */
  YYSYMBOL_lista_de_parametros = 56,       /* lista_de_parametros  */
  YYSYMBOL_parametro = 57,                 /* parametro  */
  YYSYMBOL_comando = 58,                   /* comando  */
  YYSYMBOL_comandos = 59,                  /* comandos  */
  YYSYMBOL_bloco_de_comando = 60,          /* bloco_de_comando  */
  YYSYMBOL_comando_unico = 61,             /* comando_unico  */
  YYSYMBOL_comando_condicional = 62,       /* comando_condicional  */
  YYSYMBOL_comando_iterativo = 63,         /* comando_iterativo  */
  YYSYMBOL_expressao_for = 64,             /* expressao_for  */
  YYSYMBOL_expressao = 65,                 /* expressao  */
  YYSYMBOL_exp = 66,                       /* exp  */
  YYSYMBOL_exp_list = 67,                  /* exp_list  */
  YYSYMBOL_exp_aritmetica = 68,            /* exp_aritmetica  */
  YYSYMBOL_termo = 69,                     /* termo  */
  YYSYMBOL_fator = 70,                     /* fator  */
  YYSYMBOL_comando_de_atribuicao = 71,     /* comando_de_atribuicao  */
  YYSYMBOL_exp_funcao = 72,                /* exp_funcao  */
  YYSYMBOL_chamada_de_retorno = 73,        /* chamada_de_retorno  */
  YYSYMBOL_tipo_de_variavel = 74,          /* tipo_de_variavel  */
  YYSYMBOL_constante = 75                  /* constante  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
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
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
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
#endif /* 1 */

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
#define YYLAST   5140

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  29
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  331

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   301


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
       0,    92,    92,   101,   106,   113,   118,   123,   129,   138,
     144,   152,   163,   171,   176,   183,   188,   196,   205,   210,
     215,   221,   226,   233,   241,   246,   251,   256,   261,   266,
     274,   279,   288,   298,   303,   311,   316,   321,   328,   333,
     338,   343,   348,   353,   358,   363,   368,   376,   381,   386,
     391,   400,   405,   410,   418,   423,   428,   436,   441,   445,
     449,   453,   457,   461,   465,   474,   483,   489,   493,   497,
     504,   511,   514,   517,   520,   526,   529,   532,   535,   538
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "IFX", "ID", "INT",
  "FLOAT", "LIST", "CONSTANTE_NIL", "TAIL_OR_NOT", "HEADER", "TAIL_POP",
  "MAP", "FILTER", "CONSTRUTOR", "READ", "WRITE", "WRITELN", "MAIN",
  "RETURN", "IF", "ELSE", "FOR", "AND", "OR", "LT", "LE", "EQ", "GT", "GE",
  "NE", "SOMA", "SUB", "MULT", "DIV", "VIRGULA", "PONTO_VIRGULA",
  "ASPA_SIMPLES", "ATRIB", "ABRE_PARENTESES", "FECHA_PARENTESES",
  "ABRE_CHAVES", "FECHA_CHAVES", "FLOAT_CONST", "INTEGER_CONST",
  "STRING_LITERAL", "STRING", "$accept", "programa",
  "lista_de_declaracoes", "declaracao", "declaracao_de_variavel",
  "lista_de_IDs", "declaracao_de_funcao", "definicao_de_funcao",
  "parametros", "lista_de_parametros", "parametro", "comando", "comandos",
  "bloco_de_comando", "comando_unico", "comando_condicional",
  "comando_iterativo", "expressao_for", "expressao", "exp", "exp_list",
  "exp_aritmetica", "termo", "fator", "comando_de_atribuicao",
  "exp_funcao", "chamada_de_retorno", "tipo_de_variavel", "constante", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
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
#endif

#define YYPACT_NINF (-141)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-80)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      57,    21,    75,  -141,   103,    49,    95,   116,   127,   137,
      30,    38,    50,   -27,   -25,    12,    61,   149,    34,    -4,
      20,    63,   -16,    41,    27,    56,  1844,   151,   175,    94,
    1889,  1934,  4168,  4280,   375,   375,   375,    53,    84,   105,
      62,   114,   147,   375,   375,  2827,   177,  4305,  4330,  4355,
    1979,  2024,  2069,  2114,  2159,  2204,    77,  4978,  4855,  4830,
    4380,  4405,  2249,  4430,  2294,   198,  4455,    62,   799,  4252,
    4480,  4505,  4530,   799,   799,   799,    79,   799,   998,  4555,
    4580,   540,   375,  2339,   375,   375,   375,   375,   375,   375,
     375,   375,   375,   375,   375,   375,   375,   375,   375,   100,
     201,   152,   153,   170,   171,  2384,   210,  4196,   168,   218,
    4605,  4992,  5006,  5020,  5034,  5048,  5062,  5076,  5090,  5104,
    4874,  4893,  4912,  4630,  4655,  4680,  4705,  2429,  4730,  4755,
    4780,  4805,  2744,    62,   998,   274,   238,   176,  2789,  1111,
    2474,   190,  2789,  2519,  1844,  2914,  3465,  2827,  2827,  2827,
     194,   204,   224,  2827,  2827,  2827,  3488,  3511,  3534,  4092,
    3995,  3557,  3580,  3603,  3626,   265,  2890,  2937,  2837,  2837,
    2837,   231,   249,   258,  2837,  2837,  2827,  2961,  2985,  3009,
       0,  4016,  3971,  3033,  3057,  3081,  3105,  2827,  2827,  2827,
    2827,  2827,  2827,  2827,  2827,  2837,   328,  4224,    62,   275,
     281,  1844,   434,   756,   955,  1349,  1394,   306,  1439,  1484,
     198,  2861,   216,  2564,   799,  3649,  3672,  3695,   799,   799,
     799,  3718,  3741,   641,  2827,  2827,  2827,  2827,  2827,  2827,
    2827,  2609,   799,  3129,  3153,  3177,   799,   799,   799,  3201,
    3225,  1150,  2837,  2837,  2837,  2837,  2837,  2837,  2837,  2837,
    2837,  2837,  2837,  2837,  2837,  2837,  2837,  1228,  1250,  1269,
    1277,  4926,  4934,  4952,  4960,    60,    62,   316,   799,   998,
    2654,  1529,   318,   799,  2699,   220,   222,   232,   236,  3764,
    4111,  4130,  4149,  3787,  3810,  3833,  3856,   246,   252,   264,
     272,  3249,   144,   457,   591,   622,   662,   797,   847,  1169,
    4035,  4054,  4073,  3273,  3297,  3321,  3345,   320,  1574,   291,
     225,  1619,  1664,   300,  3879,  3902,  3925,  3948,  3369,  3393,
    3417,  3441,  1709,  2744,   998,  1754,   241,  1111,   263,  2744,
    1799
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
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -141,  -141,  -141,  -141,    -1,   -62,  -141,  -141,  -141,  -141,
     287,   -95,  -140,   -21,   -94,   -91,   -83,   -75,   191,   864,
     994,  1094,   674,   -29,   -82,   357,   -81,    -2,   485
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,     2,     7,    50,    14,     9,    27,    18,    19,
      20,    51,    30,    52,    53,    54,    55,   108,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,     8,    28,   165,   213,    70,    71,    72,   -10,   -10,
      16,    17,    15,    21,    79,    80,   162,     5,     6,    -9,
      -9,     3,    21,   242,   243,   244,   245,   246,   247,   248,
     249,    24,     5,     6,    13,   -36,   -13,   135,   204,   184,
     -36,   205,   -73,   140,   184,   184,   184,   143,   184,   206,
     208,   209,   -14,   -71,   -74,   -16,    11,    -4,    -4,   137,
     -16,   270,    -4,    -4,   141,    22,    69,    25,   125,   126,
      33,    34,    35,    36,    23,    -2,     4,    37,    38,    39,
       5,     6,    26,   242,   243,   244,   245,   246,   247,   248,
     249,   -17,    73,    43,    44,   -35,   -17,   -37,   -37,   -72,
     -35,    45,    12,    -7,    -7,    47,    48,    49,    -7,    -7,
     184,   203,    82,    83,    82,   105,    -3,    -3,   215,   216,
     217,    -3,    -3,    74,   221,   222,   162,    -5,    -5,   -15,
     210,   202,    -5,    -5,   -15,   -10,   -10,    -6,    -6,   233,
     234,   235,    -6,    -6,    75,   239,   240,   162,   272,    -8,
      -8,   -11,   -11,    77,    -8,    -8,   -11,   -11,   162,   162,
     162,   162,   162,   162,   162,   162,   184,   -44,   -44,   244,
     245,   246,   247,   248,   249,   -12,   -12,   -23,   -23,   -44,
     -12,   -12,   -23,   -23,   -44,   184,    78,   195,   195,   184,
     184,   184,   128,   129,   310,   162,   162,   162,   162,   162,
     285,   286,    99,   184,   134,   195,   195,   184,   184,   184,
     130,   131,   139,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   184,   184,   305,   306,   325,   204,
     142,    76,   205,   218,   330,   204,    82,   127,   205,   184,
     206,   208,   209,   219,   184,   195,   206,   208,   209,   326,
     132,   195,   328,    82,   -34,   195,   -34,   195,   100,   101,
     314,   324,   315,   220,   102,   103,   104,   195,   106,   109,
     236,   195,   316,    82,   -33,   -30,   317,   327,   -30,   -30,
     -30,   195,   -30,   -30,   -30,   -30,   318,   195,   237,   -30,
     -30,   -30,   319,   -30,   -30,   138,   -30,   238,   184,   195,
      16,   231,   203,   329,   320,   -30,   -30,   195,   203,   -30,
     -30,    29,   321,   -30,   268,   -30,   -30,   -30,   -30,   -30,
     269,   210,   202,   207,   136,   109,   195,   210,   202,   -20,
     212,   323,   -20,   -20,   -20,   195,   -20,   -20,   -20,   -20,
     -33,    82,   271,   -20,   -20,   -20,     0,   -20,   -20,   -20,
     -20,    82,   308,    16,   312,    82,   322,     0,     0,   -20,
     -20,     0,     0,   -20,   -20,     0,     0,   -20,     0,   -20,
     -20,   -20,   -20,   -20,     0,     0,     0,     0,     0,    69,
       0,     0,     0,    33,    34,    35,    36,     0,     0,   267,
      37,    38,    39,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   163,     0,     0,   275,    43,    44,     0,   276,
     277,   278,     0,     0,    45,     0,     0,     0,    47,    48,
      49,     0,     0,   287,     0,   185,     0,   288,   289,   290,
     185,   185,   185,     0,   185,   -26,     0,     0,   -26,   -26,
     -26,     0,   -26,   -26,   -26,   -26,     0,     0,     0,   -26,
     -26,   -26,     0,   -26,   -26,   -26,   -26,   307,     0,   309,
     109,     0,     0,     0,   313,   -26,   -26,     0,     0,   -26,
     -26,     0,     0,   -26,     0,   -26,   -26,   -26,   -26,   -26,
     -45,   -45,   244,   245,   246,   247,   248,   249,     0,     0,
       0,     0,   -45,     0,     0,     0,   185,   -45,     0,     0,
       0,     0,     0,     0,   163,   163,   163,     0,     0,     0,
     163,   163,   163,     0,   207,   109,     0,     0,   212,     0,
     207,     0,     0,     0,     0,   185,   185,   185,     0,     0,
     164,   185,   185,   163,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   163,   163,   163,   163,   163,   163,
     163,   163,   185,   186,     0,     0,     0,     0,   186,   186,
     186,     0,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   185,     0,     0,     0,   185,   185,   185,     0,     0,
     110,   163,   163,   163,   163,   163,   163,   163,     0,   185,
       0,     0,     0,   185,   185,   185,     0,     0,     0,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,     0,     0,   186,   185,   -39,     0,     0,     0,
     185,   -39,   164,   164,   164,     0,     0,     0,   164,   164,
     164,     0,     0,     0,     0,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   186,   186,   186,     0,   -42,     0,   186,
     186,   164,   -42,     0,   187,   188,   189,   190,   191,   192,
     193,   194,   164,   164,   164,   164,   164,   164,   164,   164,
     186,   279,     0,     0,   185,   -40,   -40,   244,   245,   -40,
     247,   248,   -40,     0,     0,     0,     0,   -40,     0,   186,
       0,     0,   -40,   186,   186,   186,     0,     0,     0,   164,
     164,   164,   164,   164,   164,   164,     0,   186,     0,   161,
       0,   186,   186,   186,     0,     0,     0,   186,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   186,   186,   186,
     186,   186,   183,     0,     0,     0,     0,   183,   183,   183,
       0,   183,     0,   186,     0,     0,     0,   -18,   186,     0,
     -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,     0,   123,
     124,   -18,   -18,   -18,     0,   -18,   -18,   -18,   -18,     0,
       0,     0,     0,     0,     0,     0,     0,   -18,   -18,     0,
       0,   -18,   -18,     0,     0,   -18,     0,   -18,   -18,   -18,
     -18,   -18,     0,   166,     0,     0,     0,   167,   168,   169,
     170,     0,   186,   183,   171,   172,   173,     0,     0,     0,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,   161,
     174,   175,   -38,     0,   -37,     0,     0,   -38,   176,   -37,
       0,     0,   177,   178,   179,     0,     0,     0,     0,     0,
     161,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   161,   161,   161,   161,   161,   161,   161,   161,   183,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,     0,
       0,     0,   -43,     0,     0,     0,     0,   -43,   183,     0,
       0,     0,   183,   183,   183,     0,     0,     0,   161,   161,
     161,   283,   284,     0,     0,     0,   183,     0,     0,    81,
     183,   183,   183,     0,     0,     0,   183,   183,   183,   183,
     183,   183,   183,   183,   183,   183,   183,   303,   304,     0,
       0,     0,   180,     0,     0,     0,     0,   180,   180,   180,
       0,   180,   183,     0,     0,     0,   111,   183,   112,   113,
     114,   115,   116,   117,   118,   119,   -19,     0,     0,   -19,
     -19,   -19,     0,   -19,   -19,   -19,   -19,     0,     0,     0,
     -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,     0,     0,
       0,     0,     0,     0,     0,     0,   -19,   -19,     0,     0,
     -19,   -19,     0,     0,   -19,     0,   -19,   -19,   -19,   -19,
     -19,   183,   107,   180,     0,     0,    33,    34,    35,    36,
       0,     0,     0,    37,    38,    39,     0,     0,     0,   223,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    43,
      44,     0,     0,   -37,   -37,     0,     0,    45,     0,   159,
     241,    47,    48,    49,     0,     0,     0,     0,     0,     0,
       0,   257,   258,   259,   260,   261,   262,   263,   264,   265,
       0,     0,   181,     0,     0,     0,     0,   181,   181,   181,
       0,   181,     0,     0,     0,     0,     0,     0,   180,     0,
       0,     0,   180,   180,   180,     0,   120,   121,   122,     0,
       0,     0,     0,     0,     0,     0,   180,     0,     0,     0,
     180,   180,   180,     0,     0,     0,   292,   293,   294,   295,
     296,   297,   298,   299,     0,   211,     0,     0,     0,   167,
     168,   169,   170,     0,     0,     0,   171,   172,   173,     0,
       0,     0,   180,   181,     0,     0,     0,   180,     0,   160,
       0,     0,   174,   175,     0,     0,   -37,     0,     0,   159,
     176,   -37,     0,     0,   177,   178,   179,     0,     0,     0,
       0,     0,   182,     0,     0,     0,     0,   182,   182,   182,
     159,   182,     0,   187,   188,   189,   190,   191,   192,   193,
     194,   159,   159,   159,   159,   159,   159,   159,   159,   181,
     291,   180,   -41,   -41,   244,   245,   -41,   247,   248,   -41,
       0,     0,     0,     0,   -41,     0,     0,     0,   181,   -41,
       0,     0,   181,   181,   181,     0,     0,     0,   280,   281,
     282,     0,     0,     0,     0,     0,   181,     0,     0,     0,
     181,   181,   181,   182,     0,     0,   181,   181,   181,   181,
     181,   181,   181,   181,   300,   301,   302,     0,     0,   160,
       0,   -44,   -44,   189,   190,   191,   192,   193,   194,     0,
       0,     0,   181,     0,     0,     0,     0,   181,   -44,     0,
     160,     0,     0,   -45,   -45,   189,   190,   191,   192,   193,
     194,   160,   160,   160,   160,   160,   160,   160,   160,   182,
     -45,     0,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   182,   -39,
       0,     0,   182,   182,   182,     0,     0,   -42,   160,   160,
     160,   181,     0,     0,     0,     0,   182,     0,     0,     0,
     182,   182,   182,     0,     0,     0,   182,   182,   182,   182,
     182,   182,   182,   182,   182,   182,   182,     0,     0,     0,
     -24,     0,     0,   -24,   -24,   -24,     0,   -24,   -24,   -24,
     -24,     0,   182,     0,   -24,   -24,   -24,   182,   -24,   -24,
     -24,   -24,     0,     0,     0,     0,     0,     0,     0,     0,
     -24,   -24,     0,     0,   -24,   -24,     0,     0,   -24,     0,
     -24,   -24,   -24,   -24,   -24,   -25,     0,     0,   -25,   -25,
     -25,     0,   -25,   -25,   -25,   -25,     0,     0,     0,   -25,
     -25,   -25,     0,   -25,   -25,   -25,   -25,     0,     0,     0,
       0,   182,     0,     0,     0,   -25,   -25,     0,     0,   -25,
     -25,     0,     0,   -25,     0,   -25,   -25,   -25,   -25,   -25,
     -28,     0,     0,   -28,   -28,   -28,     0,   -28,   -28,   -28,
     -28,     0,     0,     0,   -28,   -28,   -28,     0,   -28,   -28,
     -28,   -28,     0,     0,     0,     0,     0,     0,     0,     0,
     -28,   -28,     0,     0,   -28,   -28,     0,     0,   -28,     0,
     -28,   -28,   -28,   -28,   -28,   -27,     0,     0,   -27,   -27,
     -27,     0,   -27,   -27,   -27,   -27,     0,     0,     0,   -27,
     -27,   -27,     0,   -27,   -27,   -27,   -27,     0,     0,     0,
       0,     0,     0,     0,     0,   -27,   -27,     0,     0,   -27,
     -27,     0,     0,   -27,     0,   -27,   -27,   -27,   -27,   -27,
     -29,     0,     0,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,     0,     0,     0,   -29,   -29,   -29,     0,   -29,   -29,
     -29,   -29,     0,     0,     0,     0,     0,     0,     0,     0,
     -29,   -29,     0,     0,   -29,   -29,     0,     0,   -29,     0,
     -29,   -29,   -29,   -29,   -29,   -70,     0,     0,   -70,   -70,
     -70,     0,   -70,   -70,   -70,   -70,     0,     0,     0,   -70,
     -70,   -70,     0,   -70,   -70,   -70,   -70,     0,     0,     0,
       0,     0,     0,     0,     0,   -70,   -70,     0,     0,   -70,
     -70,     0,     0,   -70,     0,   -70,   -70,   -70,   -70,   -70,
     -23,     0,     0,   -23,   -23,   -23,     0,   -23,   -23,   -23,
     -23,     0,     0,     0,   -23,   -23,   -23,     0,   -23,   -23,
     -23,   -23,     0,     0,     0,     0,     0,     0,     0,     0,
     -23,   -23,     0,     0,   -23,   -23,     0,     0,   -23,     0,
     -23,   -23,   -23,   -23,   -23,    -8,     0,     0,    -8,    -8,
      -8,     0,    -8,    -8,    -8,    -8,     0,     0,     0,    -8,
      -8,    -8,     0,    -8,    -8,    -8,    -8,     0,     0,     0,
       0,     0,     0,     0,     0,    -8,    -8,     0,     0,    -8,
      -8,     0,     0,    -8,     0,    -8,    -8,    -8,    -8,    -8,
     -65,     0,     0,   -65,   -65,   -65,     0,   -65,   -65,   -65,
     -65,     0,     0,     0,   -65,   -65,   -65,     0,   -65,   -65,
     -65,   -65,     0,     0,     0,     0,     0,     0,     0,     0,
     -65,   -65,     0,     0,   -65,   -65,     0,     0,   -65,     0,
     -65,   -65,   -65,   -65,   -65,   -30,     0,     0,   -30,   -30,
     -30,     0,   -30,   -30,   -30,   -30,     0,     0,     0,   -30,
     -30,   -30,     0,   -30,   -30,   -30,   -30,     0,     0,     0,
       0,     0,     0,     0,     0,   -30,   -30,     0,     0,   -30,
     -30,     0,     0,   -30,     0,   -30,   -30,   -30,   -30,   -30,
     -32,     0,     0,   -32,   -32,   -32,     0,   -32,   -32,   -32,
     -32,     0,     0,     0,   -32,   -32,   -32,     0,   -32,   -32,
     -32,   -32,     0,     0,     0,     0,     0,     0,     0,     0,
     -32,   -32,     0,     0,   -32,   -32,     0,     0,   -32,     0,
     -32,   -32,   -32,   -32,   -32,   -22,     0,     0,   -22,   -22,
     -22,     0,   -22,   -22,   -22,   -22,     0,     0,     0,   -22,
     -22,   -22,     0,   -22,   -22,     0,   -22,     0,     0,     0,
       0,     0,     0,     0,     0,   -22,   -22,     0,     0,   -22,
     -22,     0,     0,   -22,     0,   -22,   -22,   -22,   -22,   -22,
      31,     0,     0,    32,     5,     6,     0,    33,    34,    35,
      36,     0,     0,     0,    37,    38,    39,     0,    40,    41,
       0,    42,     0,     0,     0,     0,     0,     0,     0,     0,
      43,    44,     0,     0,   -37,   -37,     0,     0,    45,     0,
     144,    46,    47,    48,    49,   -20,     0,     0,   -20,   -20,
     -20,     0,   -20,   -20,   -20,   -20,     0,     0,     0,   -20,
     -20,   -20,     0,   -20,   -20,     0,   -20,     0,     0,     0,
       0,     0,     0,     0,     0,   -20,   -20,     0,     0,   -20,
     -20,     0,     0,   -20,     0,   -20,   -20,   -20,   -20,   -20,
     -26,     0,     0,   -26,   -26,   -26,     0,   -26,   -26,   -26,
     -26,     0,     0,     0,   -26,   -26,   -26,     0,   -26,   -26,
       0,   -26,     0,     0,     0,     0,     0,     0,     0,     0,
     -26,   -26,     0,     0,   -26,   -26,     0,     0,   -26,     0,
     -26,   -26,   -26,   -26,   -26,   -21,     0,     0,   -21,   -21,
     -21,     0,   -21,   -21,   -21,   -21,     0,     0,     0,   -21,
     -21,   -21,     0,   -21,   -21,     0,   -21,     0,     0,     0,
       0,     0,     0,     0,     0,   -21,   -21,     0,     0,   -21,
     -21,     0,     0,   -21,     0,   -21,   -21,   -21,   -21,   -21,
     -18,     0,     0,   -18,   -18,   -18,     0,   -18,   -18,   -18,
     -18,     0,     0,     0,   -18,   -18,   -18,     0,   -18,   -18,
       0,   -18,     0,     0,     0,     0,     0,     0,     0,     0,
     -18,   -18,     0,     0,   -18,   -18,     0,     0,   -18,     0,
     -18,   -18,   -18,   -18,   -18,   -19,     0,     0,   -19,   -19,
     -19,     0,   -19,   -19,   -19,   -19,     0,     0,     0,   -19,
     -19,   -19,     0,   -19,   -19,     0,   -19,     0,     0,     0,
       0,     0,     0,     0,     0,   -19,   -19,     0,     0,   -19,
     -19,     0,     0,   -19,     0,   -19,   -19,   -19,   -19,   -19,
     -24,     0,     0,   -24,   -24,   -24,     0,   -24,   -24,   -24,
     -24,     0,     0,     0,   -24,   -24,   -24,     0,   -24,   -24,
       0,   -24,     0,     0,     0,     0,     0,     0,     0,     0,
     -24,   -24,     0,     0,   -24,   -24,     0,     0,   -24,     0,
     -24,   -24,   -24,   -24,   -24,   -25,     0,     0,   -25,   -25,
     -25,     0,   -25,   -25,   -25,   -25,     0,     0,     0,   -25,
     -25,   -25,     0,   -25,   -25,     0,   -25,     0,     0,     0,
       0,     0,     0,     0,     0,   -25,   -25,     0,     0,   -25,
     -25,     0,     0,   -25,     0,   -25,   -25,   -25,   -25,   -25,
     -28,     0,     0,   -28,   -28,   -28,     0,   -28,   -28,   -28,
     -28,     0,     0,     0,   -28,   -28,   -28,     0,   -28,   -28,
       0,   -28,     0,     0,     0,     0,     0,     0,     0,     0,
     -28,   -28,     0,     0,   -28,   -28,     0,     0,   -28,     0,
     -28,   -28,   -28,   -28,   -28,   -27,     0,     0,   -27,   -27,
     -27,     0,   -27,   -27,   -27,   -27,     0,     0,     0,   -27,
     -27,   -27,     0,   -27,   -27,     0,   -27,     0,     0,     0,
       0,     0,     0,     0,     0,   -27,   -27,     0,     0,   -27,
     -27,     0,     0,   -27,     0,   -27,   -27,   -27,   -27,   -27,
     -29,     0,     0,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,     0,     0,     0,   -29,   -29,   -29,     0,   -29,   -29,
       0,   -29,     0,     0,     0,     0,     0,     0,     0,     0,
     -29,   -29,     0,     0,   -29,   -29,     0,     0,   -29,     0,
     -29,   -29,   -29,   -29,   -29,   -70,     0,     0,   -70,   -70,
     -70,     0,   -70,   -70,   -70,   -70,     0,     0,     0,   -70,
     -70,   -70,     0,   -70,   -70,     0,   -70,     0,     0,     0,
       0,     0,     0,     0,     0,   -70,   -70,     0,     0,   -70,
     -70,     0,     0,   -70,     0,   -70,   -70,   -70,   -70,   -70,
     -65,     0,     0,   -65,   -65,   -65,     0,   -65,   -65,   -65,
     -65,     0,     0,     0,   -65,   -65,   -65,     0,   -65,   -65,
       0,   -65,     0,     0,     0,     0,     0,     0,     0,     0,
     -65,   -65,     0,     0,   -65,   -65,     0,     0,   -65,     0,
     -65,   -65,   -65,   -65,   -65,   -31,     0,     0,   -31,   -31,
     -31,     0,   -31,   -31,   -31,   -31,     0,     0,     0,   -31,
     -31,   -31,     0,   -31,   -31,     0,   -31,     0,     0,     0,
       0,     0,     0,     0,     0,   -31,   -31,     0,     0,   -31,
     -31,     0,     0,   -31,     0,   -31,   -31,   -31,   -31,   -31,
     -32,     0,     0,   -32,   -32,   -32,     0,   -32,   -32,   -32,
     -32,     0,     0,     0,   -32,   -32,   -32,     0,   -32,   -32,
       0,   -32,     0,     0,     0,     0,     0,     0,     0,     0,
     -32,   -32,     0,     0,   -32,   -32,     0,     0,   -32,     0,
     -32,   -32,   -32,   -32,   -32,    31,     0,     0,    32,     5,
       6,     0,    33,    34,    35,    36,     0,     0,     0,    37,
      38,    39,     0,    40,    41,     0,    42,     0,     0,     0,
       0,     0,     0,     0,     0,    43,    44,     0,     0,   -37,
     -37,     0,     0,    45,     0,   144,   274,    47,    48,    49,
      -8,     0,     0,    -8,    -8,    -8,     0,    -8,    -8,    -8,
      -8,     0,     0,     0,    -8,    -8,    -8,     0,    -8,    -8,
       0,    -8,     0,     0,     0,     0,     0,     0,     0,     0,
      -8,    -8,     0,     0,    -8,    -8,     0,     0,    -8,     0,
      -8,    -8,    -8,    -8,    -8,    31,     0,     0,    32,     5,
       6,     0,    33,    34,    35,    36,     0,     0,     0,    37,
      38,    39,     0,    40,    41,     0,    42,     0,     0,     0,
       0,     0,     0,     0,     0,    43,    44,     0,     0,   -37,
     -37,     0,     0,    45,     0,   144,   311,    47,    48,    49,
     -23,     0,     0,   -23,   -23,   -23,     0,   -23,   -23,   -23,
     -23,     0,     0,     0,   -23,   -23,   -23,     0,   -23,   -23,
       0,   -23,     0,     0,     0,     0,     0,     0,     0,     0,
     -23,   -23,     0,     0,   -23,   -23,     0,     0,   -23,     0,
     -23,   -23,   -23,   -23,   -23,   196,     0,     0,   197,     5,
       6,     0,    33,    34,    35,    36,     0,     0,     0,    37,
      38,    39,     0,   198,   199,     0,   200,     0,     0,     0,
       0,     0,     0,     0,     0,    43,    44,     0,     0,   -37,
     -37,     0,     0,    45,     0,   201,     0,    47,    48,    49,
      31,     0,     0,    32,     5,     6,     0,    33,    34,    35,
      36,     0,     0,     0,    37,    38,    39,     0,    40,    41,
       0,    42,     0,     0,     0,     0,     0,     0,     0,     0,
      43,    44,     0,     0,   -37,   -37,     0,     0,    45,     0,
     144,   145,    47,    48,    49,   146,   147,   148,   149,     0,
       0,   166,   150,   151,   152,   167,   168,   169,   170,     0,
       0,     0,   171,   172,   173,     0,     0,     0,   153,   154,
       0,     0,     0,     0,     0,     0,   155,     0,   174,   175,
     156,   157,   158,   -63,   -63,   -63,   176,     0,     0,     0,
     177,   178,   179,     0,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,   273,
     232,   -63,   -63,   -63,   -63,     0,     0,     0,     0,     0,
       0,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   232,
     -63,     0,     0,     0,     0,     0,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -77,
     -77,   -77,     0,   214,   -63,     0,     0,     0,     0,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -76,   -76,   -76,     0,   -77,     0,     0,
       0,     0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -75,   -75,   -75,
       0,   -76,     0,     0,     0,     0,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -78,   -78,   -78,     0,   -75,     0,     0,     0,     0,
       0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -51,   -51,   -51,     0,   -78,
       0,     0,     0,     0,     0,     0,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   255,   256,   -51,   -54,
     -54,   -54,     0,   -51,     0,     0,     0,     0,     0,     0,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -79,   -79,   -79,     0,   -54,     0,     0,
       0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -57,   -57,   -57,
       0,   -79,     0,     0,     0,     0,     0,     0,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -60,   -60,   -60,     0,   -57,     0,     0,     0,     0,
       0,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -62,   -62,   -62,     0,   -60,
       0,     0,     0,     0,     0,     0,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -61,
     -61,   -61,     0,   -62,     0,     0,     0,     0,     0,     0,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -59,   -59,   -59,     0,   -61,     0,     0,
       0,     0,     0,     0,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -58,   -58,   -58,
       0,   -59,     0,     0,     0,     0,     0,     0,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -64,   -64,   -64,     0,   -58,     0,     0,     0,     0,
       0,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -52,   -52,   -52,     0,   -64,
       0,     0,     0,     0,     0,     0,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   255,   256,   -52,   -53,
     -53,   -53,     0,   -52,     0,     0,     0,     0,     0,     0,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     255,   256,   -53,   -55,   -55,   -55,     0,   -53,     0,     0,
       0,     0,     0,     0,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -56,   -56,   -56,
       0,   -55,     0,     0,     0,     0,     0,     0,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -66,   -66,   -66,     0,   -56,     0,     0,     0,     0,
       0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -67,   -67,   -67,     0,   -66,
       0,     0,     0,     0,     0,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -68,
     -68,   -68,     0,   -67,     0,     0,     0,     0,     0,     0,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -69,   -69,   -69,     0,   -68,     0,     0,
       0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -77,   -77,   -77,
       0,   -69,     0,     0,     0,     0,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -76,   -76,   -76,     0,     0,   -77,     0,     0,     0,     0,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -75,   -75,   -75,     0,     0,   -76,     0,
       0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -78,   -78,   -78,     0,
       0,   -75,     0,     0,     0,     0,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -51,
     -51,   -51,     0,     0,   -78,     0,     0,     0,     0,     0,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     229,   230,   -54,   -54,   -54,     0,     0,   -51,     0,     0,
       0,     0,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -79,   -79,   -79,     0,     0,
     -54,     0,     0,     0,     0,     0,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -57,   -57,
     -57,     0,     0,   -79,     0,     0,     0,     0,     0,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -60,   -60,   -60,     0,     0,   -57,     0,     0,     0,
       0,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -62,   -62,   -62,     0,     0,   -60,
       0,     0,     0,     0,     0,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -61,   -61,   -61,
       0,     0,   -62,     0,     0,     0,     0,     0,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -59,   -59,   -59,     0,     0,   -61,     0,     0,     0,     0,
       0,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -58,   -58,   -58,     0,     0,   -59,     0,
       0,     0,     0,     0,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -64,   -64,   -64,     0,
       0,   -58,     0,     0,     0,     0,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -52,
     -52,   -52,     0,     0,   -64,     0,     0,     0,     0,     0,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     229,   230,   -53,   -53,   -53,     0,     0,   -52,     0,     0,
       0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   229,   230,   -55,   -55,   -55,     0,     0,
     -53,     0,     0,     0,     0,     0,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -56,   -56,
     -56,     0,     0,   -55,     0,     0,     0,     0,     0,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -66,   -66,   -66,     0,     0,   -56,     0,     0,     0,
       0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -67,   -67,   -67,     0,     0,   -66,
       0,     0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -68,   -68,   -68,
       0,     0,   -67,     0,     0,     0,     0,     0,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -69,   -69,   -69,     0,     0,   -68,     0,     0,     0,     0,
       0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -50,   -50,   -50,     0,     0,   -69,     0,
       0,     0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   253,   254,     0,     0,   -50,   -50,   -50,   -50,
       0,   -50,     0,     0,     0,     0,     0,     0,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   227,   228,   250,   251,
     252,     0,     0,     0,     0,   -50,     0,     0,     0,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   250,   251,   252,
       0,   -46,     0,     0,     0,     0,   -46,     0,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   250,   251,   252,     0,
     -49,     0,     0,     0,     0,   -49,     0,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   250,   251,   252,     0,   -48,
       0,     0,     0,     0,   -48,     0,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   224,   225,   226,     0,   -47,     0,
       0,     0,     0,   -47,     0,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   224,   225,   226,     0,     0,     0,     0,
       0,     0,   -46,     0,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   224,   225,   226,     0,     0,     0,     0,     0,
       0,   -49,     0,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   224,   225,   226,     0,     0,     0,     0,     0,     0,
     -48,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -63,   -63,   -63,     0,     0,     0,     0,     0,     0,   -47,
       0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,     0,    67,    68,   -63,   -63,
     -63,     0,     0,     0,     0,     0,     0,     0,     0,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,   133,    68,   -63,   -63,   -63,     0,
       0,     0,     0,     0,     0,     0,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,     0,   266,    68,   -63,   -63,   -63,     0,     0,     0,
       0,     0,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,
       0,    68,   -77,   -77,   -77,     0,     0,     0,     0,     0,
       0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -76,   -76,   -76,
       0,     0,     0,     0,     0,     0,     0,     0,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -75,   -75,   -75,     0,     0,     0,     0,     0,
       0,     0,     0,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -78,   -78,   -78,
       0,     0,     0,     0,     0,     0,     0,     0,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -51,   -51,   -51,     0,     0,     0,     0,     0,
       0,     0,     0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,    97,    98,   -51,   -51,   -54,   -54,   -54,
       0,     0,     0,     0,     0,     0,     0,     0,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -79,   -79,   -79,     0,     0,     0,     0,     0,
       0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -57,   -57,   -57,
       0,     0,     0,     0,     0,     0,     0,     0,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -60,   -60,   -60,     0,     0,     0,     0,     0,
       0,     0,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -62,   -62,   -62,
       0,     0,     0,     0,     0,     0,     0,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -61,   -61,   -61,     0,     0,     0,     0,     0,
       0,     0,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -59,   -59,   -59,
       0,     0,     0,     0,     0,     0,     0,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -58,   -58,   -58,     0,     0,     0,     0,     0,
       0,     0,     0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -64,   -64,   -64,
       0,     0,     0,     0,     0,     0,     0,     0,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -52,   -52,   -52,     0,     0,     0,     0,     0,
       0,     0,     0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,    97,    98,   -52,   -52,   -53,   -53,   -53,
       0,     0,     0,     0,     0,     0,     0,     0,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,    97,    98,
     -53,   -53,   -55,   -55,   -55,     0,     0,     0,     0,     0,
       0,     0,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -56,   -56,   -56,
       0,     0,     0,     0,     0,     0,     0,     0,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -66,   -66,   -66,     0,     0,     0,     0,     0,
       0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -67,   -67,   -67,
       0,     0,     0,     0,     0,     0,     0,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -68,   -68,   -68,     0,     0,     0,     0,     0,
       0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -69,   -69,   -69,
       0,     0,     0,     0,     0,     0,     0,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -50,   -50,   -50,     0,     0,     0,     0,     0,
       0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,    95,    96,     0,     0,   -50,   -50,    92,    93,    94,
       0,     0,     0,     0,     0,     0,     0,     0,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,    92,    93,    94,     0,
     -46,   -46,     0,     0,     0,     0,     0,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,    92,    93,    94,     0,   -49,
     -49,     0,     0,     0,     0,     0,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,    92,    93,    94,     0,   -48,   -48,
       0,     0,     0,     0,     0,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,     0,     0,     0,     0,   -47,   -47,   -40,
     -40,   189,   190,   -40,   192,   193,   -40,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,     0,   -40,     0,     0,     0,
       0,     0,     0,     0,   -38,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -41,   -41,   189,   190,   -41,   192,   193,
     -41,     0,   -43,     0,     0,     0,     0,     0,     0,     0,
     -41,    84,    85,    86,    87,    88,    89,    90,    91,     0,
       0,     0,     0,   -36,   -36,    84,    85,    86,    87,    88,
      89,    90,    91,     0,     0,     0,     0,   -35,   -35,   -44,
     -44,    86,    87,    88,    89,    90,    91,     0,     0,     0,
       0,   -44,   -44,   -45,   -45,    86,    87,    88,    89,    90,
      91,     0,     0,     0,     0,   -45,   -45,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,     0,     0,     0,     0,   -39,
     -39,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,
       0,     0,     0,   -42,   -42,   -40,   -40,    86,    87,   -40,
      89,    90,   -40,     0,     0,     0,     0,   -40,   -40,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,
       0,   -38,   -38,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,     0,     0,     0,     0,   -43,   -43,   -41,   -41,    86,
      87,   -41,    89,    90,   -41,     0,     0,     0,     0,   -41,
     -41
};

static const yytype_int16 yycheck[] =
{
       2,     2,    23,    65,   144,    34,    35,    36,    35,    36,
      35,    36,    39,    15,    43,    44,    45,     5,     6,    35,
      36,     0,    24,    23,    24,    25,    26,    27,    28,    29,
      30,    35,     5,     6,     4,    35,    40,   132,   132,    68,
      40,   132,     4,   138,    73,    74,    75,   142,    77,   132,
     132,   132,    40,     4,     4,    35,     7,     0,     1,   134,
      40,   201,     5,     6,   139,     4,     4,     4,    97,    98,
       8,     9,    10,    11,    40,     0,     1,    15,    16,    17,
       5,     6,    41,    23,    24,    25,    26,    27,    28,    29,
      30,    35,    39,    31,    32,    35,    40,    35,    36,     4,
      40,    39,     7,     0,     1,    43,    44,    45,     5,     6,
     139,   132,    35,    36,    35,    36,     0,     1,   147,   148,
     149,     5,     6,    39,   153,   154,   155,     0,     1,    35,
     132,   132,     5,     6,    40,    35,    36,     0,     1,   168,
     169,   170,     5,     6,    39,   174,   175,   176,   210,     0,
       1,     0,     1,    39,     5,     6,     5,     6,   187,   188,
     189,   190,   191,   192,   193,   194,   195,    23,    24,    25,
      26,    27,    28,    29,    30,     0,     1,     0,     1,    35,
       5,     6,     5,     6,    40,   214,    39,    35,    35,   218,
     219,   220,    40,    40,   269,   224,   225,   226,   227,   228,
     229,   230,     4,   232,    36,    35,    35,   236,   237,   238,
      40,    40,    36,   242,   243,   244,   245,   246,   247,   248,
     249,   250,   251,   252,   253,   254,   255,   256,   323,   323,
      40,    40,   323,    39,   329,   329,    35,    36,   329,   268,
     323,   323,   323,    39,   273,    35,   329,   329,   329,   324,
      40,    35,   327,    35,    36,    35,    40,    35,    67,    68,
      40,    36,    40,    39,    73,    74,    75,    35,    77,    78,
      39,    35,    40,    35,    36,     1,    40,    36,     4,     5,
       6,    35,     8,     9,    10,    11,    40,    35,    39,    15,
      16,    17,    40,    19,    20,    21,    22,    39,   327,    35,
      35,    36,   323,    40,    40,    31,    32,    35,   329,    35,
      36,    24,    40,    39,    39,    41,    42,    43,    44,    45,
      39,   323,   323,   132,   133,   134,    35,   329,   329,     1,
     139,    40,     4,     5,     6,    35,     8,     9,    10,    11,
      40,    35,    36,    15,    16,    17,    -1,    19,    20,    21,
      22,    35,    36,    35,    36,    35,    36,    -1,    -1,    31,
      32,    -1,    -1,    35,    36,    -1,    -1,    39,    -1,    41,
      42,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,     4,
      -1,    -1,    -1,     8,     9,    10,    11,    -1,    -1,   198,
      15,    16,    17,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,   214,    31,    32,    -1,   218,
     219,   220,    -1,    -1,    39,    -1,    -1,    -1,    43,    44,
      45,    -1,    -1,   232,    -1,    68,    -1,   236,   237,   238,
      73,    74,    75,    -1,    77,     1,    -1,    -1,     4,     5,
       6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,    15,
      16,    17,    -1,    19,    20,    21,    22,   266,    -1,   268,
     269,    -1,    -1,    -1,   273,    31,    32,    -1,    -1,    35,
      36,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    -1,   139,    40,    -1,    -1,
      -1,    -1,    -1,    -1,   147,   148,   149,    -1,    -1,    -1,
     153,   154,   155,    -1,   323,   324,    -1,    -1,   327,    -1,
     329,    -1,    -1,    -1,    -1,   168,   169,   170,    -1,    -1,
      45,   174,   175,   176,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   187,   188,   189,   190,   191,   192,
     193,   194,   195,    68,    -1,    -1,    -1,    -1,    73,    74,
      75,    -1,    77,    23,    24,    25,    26,    27,    28,    29,
      30,   214,    -1,    -1,    -1,   218,   219,   220,    -1,    -1,
      40,   224,   225,   226,   227,   228,   229,   230,    -1,   232,
      -1,    -1,    -1,   236,   237,   238,    -1,    -1,    -1,   242,
     243,   244,   245,   246,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,   139,   268,    35,    -1,    -1,    -1,
     273,    40,   147,   148,   149,    -1,    -1,    -1,   153,   154,
     155,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,   168,   169,   170,    -1,    35,    -1,   174,
     175,   176,    40,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,   187,   188,   189,   190,   191,   192,   193,   194,
     195,    40,    -1,    -1,   327,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    35,    -1,   214,
      -1,    -1,    40,   218,   219,   220,    -1,    -1,    -1,   224,
     225,   226,   227,   228,   229,   230,    -1,   232,    -1,    45,
      -1,   236,   237,   238,    -1,    -1,    -1,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,    68,    -1,    -1,    -1,    -1,    73,    74,    75,
      -1,    77,    -1,   268,    -1,    -1,    -1,     1,   273,    -1,
       4,     5,     6,    -1,     8,     9,    10,    11,    -1,    95,
      96,    15,    16,    17,    -1,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,
      -1,    35,    36,    -1,    -1,    39,    -1,    41,    42,    43,
      44,    45,    -1,     4,    -1,    -1,    -1,     8,     9,    10,
      11,    -1,   327,   139,    15,    16,    17,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,   155,
      31,    32,    35,    -1,    35,    -1,    -1,    40,    39,    40,
      -1,    -1,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,
     176,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   187,   188,   189,   190,   191,   192,   193,   194,   195,
      23,    24,    25,    26,    27,    28,    29,    30,    -1,    -1,
      -1,    -1,    35,    -1,    -1,    -1,    -1,    40,   214,    -1,
      -1,    -1,   218,   219,   220,    -1,    -1,    -1,   224,   225,
     226,   227,   228,    -1,    -1,    -1,   232,    -1,    -1,    45,
     236,   237,   238,    -1,    -1,    -1,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,   253,   254,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,    75,
      -1,    77,   268,    -1,    -1,    -1,    82,   273,    84,    85,
      86,    87,    88,    89,    90,    91,     1,    -1,    -1,     4,
       5,     6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,
      15,    16,    17,    -1,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,
      35,    36,    -1,    -1,    39,    -1,    41,    42,    43,    44,
      45,   327,     4,   139,    -1,    -1,     8,     9,    10,    11,
      -1,    -1,    -1,    15,    16,    17,    -1,    -1,    -1,   155,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      32,    -1,    -1,    35,    36,    -1,    -1,    39,    -1,    45,
     176,    43,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   187,   188,   189,   190,   191,   192,   193,   194,   195,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,    75,
      -1,    77,    -1,    -1,    -1,    -1,    -1,    -1,   214,    -1,
      -1,    -1,   218,   219,   220,    -1,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,
     236,   237,   238,    -1,    -1,    -1,   242,   243,   244,   245,
     246,   247,   248,   249,    -1,     4,    -1,    -1,    -1,     8,
       9,    10,    11,    -1,    -1,    -1,    15,    16,    17,    -1,
      -1,    -1,   268,   139,    -1,    -1,    -1,   273,    -1,    45,
      -1,    -1,    31,    32,    -1,    -1,    35,    -1,    -1,   155,
      39,    40,    -1,    -1,    43,    44,    45,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    73,    74,    75,
     176,    77,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,   187,   188,   189,   190,   191,   192,   193,   194,   195,
      40,   327,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,    -1,    -1,    -1,    35,    -1,    -1,    -1,   214,    40,
      -1,    -1,   218,   219,   220,    -1,    -1,    -1,   224,   225,
     226,    -1,    -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,
     236,   237,   238,   139,    -1,    -1,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,   155,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,   268,    -1,    -1,    -1,    -1,   273,    40,    -1,
     176,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,   187,   188,   189,   190,   191,   192,   193,   194,   195,
      40,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      23,    24,    25,    26,    27,    28,    29,    30,   214,    40,
      -1,    -1,   218,   219,   220,    -1,    -1,    40,   224,   225,
     226,   327,    -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,
     236,   237,   238,    -1,    -1,    -1,   242,   243,   244,   245,
     246,   247,   248,   249,   250,   251,   252,    -1,    -1,    -1,
       1,    -1,    -1,     4,     5,     6,    -1,     8,     9,    10,
      11,    -1,   268,    -1,    15,    16,    17,   273,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    35,    36,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,     1,    -1,    -1,     4,     5,
       6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,    15,
      16,    17,    -1,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,   327,    -1,    -1,    -1,    31,    32,    -1,    -1,    35,
      36,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
       1,    -1,    -1,     4,     5,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    35,    36,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,     1,    -1,    -1,     4,     5,
       6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,    15,
      16,    17,    -1,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    35,
      36,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
       1,    -1,    -1,     4,     5,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    35,    36,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,     1,    -1,    -1,     4,     5,
       6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,    15,
      16,    17,    -1,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    35,
      36,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
       1,    -1,    -1,     4,     5,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    35,    36,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,     1,    -1,    -1,     4,     5,
       6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,    15,
      16,    17,    -1,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    35,
      36,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
       1,    -1,    -1,     4,     5,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    35,    36,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,     1,    -1,    -1,     4,     5,
       6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,    15,
      16,    17,    -1,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    35,
      36,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
       1,    -1,    -1,     4,     5,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    35,    36,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,     1,    -1,    -1,     4,     5,
       6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    35,
      36,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
       1,    -1,    -1,     4,     5,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    35,    36,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,     1,    -1,    -1,     4,     5,
       6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    35,
      36,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
       1,    -1,    -1,     4,     5,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    35,    36,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,     1,    -1,    -1,     4,     5,
       6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    35,
      36,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
       1,    -1,    -1,     4,     5,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    35,    36,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,     1,    -1,    -1,     4,     5,
       6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    35,
      36,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
       1,    -1,    -1,     4,     5,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    35,    36,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,     1,    -1,    -1,     4,     5,
       6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    35,
      36,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
       1,    -1,    -1,     4,     5,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    35,    36,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,     1,    -1,    -1,     4,     5,
       6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    35,
      36,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
       1,    -1,    -1,     4,     5,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    35,    36,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,     1,    -1,    -1,     4,     5,
       6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    35,
      36,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
       1,    -1,    -1,     4,     5,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    35,    36,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,     1,    -1,    -1,     4,     5,
       6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    35,
      36,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
       1,    -1,    -1,     4,     5,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    35,    36,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,     1,    -1,    -1,     4,     5,
       6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    35,
      36,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
       1,    -1,    -1,     4,     5,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    35,    36,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,     1,    -1,    -1,     4,     5,
       6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    35,
      36,    -1,    -1,    39,    -1,    41,    42,    43,    44,    45,
       1,    -1,    -1,     4,     5,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    35,    36,    -1,    -1,    39,    -1,
      41,    42,    43,    44,    45,     1,    -1,    -1,     4,     5,
       6,    -1,     8,     9,    10,    11,    -1,    -1,    -1,    15,
      16,    17,    -1,    19,    20,    -1,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    -1,    -1,    35,
      36,    -1,    -1,    39,    -1,    41,    -1,    43,    44,    45,
       1,    -1,    -1,     4,     5,     6,    -1,     8,     9,    10,
      11,    -1,    -1,    -1,    15,    16,    17,    -1,    19,    20,
      -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    35,    36,    -1,    -1,    39,    -1,
      41,     4,    43,    44,    45,     8,     9,    10,    11,    -1,
      -1,     4,    15,    16,    17,     8,     9,    10,    11,    -1,
      -1,    -1,    15,    16,    17,    -1,    -1,    -1,    31,    32,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    31,    32,
      43,    44,    45,    12,    13,    14,    39,    -1,    -1,    -1,
      43,    44,    45,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    38,
      39,    40,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    12,    13,    14,    39,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    12,
      13,    14,    -1,    39,    40,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    12,    13,    14,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    12,    13,    14,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    12,    13,    14,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    12,    13,    14,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    12,
      13,    14,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    12,    13,    14,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    12,    13,    14,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    12,    13,    14,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    12,    13,    14,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    12,
      13,    14,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    12,    13,    14,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    12,    13,    14,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    12,    13,    14,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    12,    13,    14,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    12,
      13,    14,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    12,    13,    14,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    12,    13,    14,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    12,    13,    14,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    12,    13,    14,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    12,
      13,    14,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    12,    13,    14,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    12,    13,    14,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      12,    13,    14,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    12,    13,    14,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    12,    13,    14,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    12,
      13,    14,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    12,    13,    14,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    12,    13,    14,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    12,    13,
      14,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    12,    13,    14,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    12,    13,    14,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    12,    13,    14,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      12,    13,    14,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    12,    13,    14,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    12,    13,    14,    -1,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    12,
      13,    14,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    12,    13,    14,    -1,    -1,    40,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    12,    13,    14,    -1,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    12,    13,
      14,    -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    12,    13,    14,    -1,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    12,    13,    14,    -1,    -1,    40,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    12,    13,    14,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      12,    13,    14,    -1,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    12,    13,    14,    -1,    -1,    40,    -1,
      -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    12,    13,    14,
      -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    12,    13,
      14,    -1,    -1,    -1,    -1,    40,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    12,    13,    14,
      -1,    35,    -1,    -1,    -1,    -1,    40,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    12,    13,    14,    -1,
      35,    -1,    -1,    -1,    -1,    40,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    12,    13,    14,    -1,    35,
      -1,    -1,    -1,    -1,    40,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    12,    13,    14,    -1,    35,    -1,
      -1,    -1,    -1,    40,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    12,    13,    14,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    -1,    23,    24,    25,    26,    27,    28,
      29,    30,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    -1,    23,    24,    25,    26,    27,    28,    29,    30,
      12,    13,    14,    -1,    -1,    -1,    -1,    -1,    -1,    40,
      -1,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    12,    13,
      14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    39,    12,    13,    14,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    39,    12,    13,    14,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      -1,    39,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    12,    13,    14,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    36,    12,    13,    14,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,
      25,    26,    27,    28,    29,    30,    12,    13,    14,    -1,
      35,    36,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      26,    27,    28,    29,    30,    12,    13,    14,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    12,    13,    14,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    35,    36,    23,
      24,    25,    26,    27,    28,    29,    30,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    40,    23,    24,    25,    26,    27,
      28,    29,    30,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      40,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    35,    36,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    35,    36,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    35,    36,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    35,    36,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    35,
      36,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    35,    36,    23,    24,    25,    26,    27,
      28,    29,    30,    -1,    -1,    -1,    -1,    35,    36,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
      -1,    35,    36,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    -1,    -1,    -1,    35,    36,    23,    24,    25,
      26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,    35,
      36
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    48,    49,     0,     1,     5,     6,    50,    51,    53,
      74,     7,     7,     4,    52,    39,    35,    36,    55,    56,
      57,    74,     4,    40,    35,     4,    41,    54,    60,    57,
      59,     1,     4,     8,     9,    10,    11,    15,    16,    17,
      19,    20,    22,    31,    32,    39,    42,    43,    44,    45,
      51,    58,    60,    61,    62,    63,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    38,    39,     4,
      70,    70,    70,    39,    39,    39,    65,    39,    39,    70,
      70,    66,    35,    36,    23,    24,    25,    26,    27,    28,
      29,    30,    12,    13,    14,    31,    32,    33,    34,     4,
      65,    65,    65,    65,    65,    36,    65,     4,    64,    65,
      40,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      67,    67,    67,    69,    69,    70,    70,    36,    40,    40,
      40,    40,    40,    38,    36,    58,    65,    64,    21,    36,
      58,    64,    40,    58,    41,     4,     8,     9,    10,    11,
      15,    16,    17,    31,    32,    39,    43,    44,    45,    67,
      68,    69,    70,    72,    75,    52,     4,     8,     9,    10,
      11,    15,    16,    17,    31,    32,    39,    43,    44,    45,
      66,    67,    68,    69,    70,    72,    75,    23,    24,    25,
      26,    27,    28,    29,    30,    35,     1,     4,    19,    20,
      22,    41,    51,    60,    61,    62,    63,    65,    71,    73,
      74,     4,    65,    59,    39,    70,    70,    70,    39,    39,
      39,    70,    70,    66,    12,    13,    14,    31,    32,    33,
      34,    36,    39,    70,    70,    70,    39,    39,    39,    70,
      70,    66,    23,    24,    25,    26,    27,    28,    29,    30,
      12,    13,    14,    31,    32,    33,    34,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    38,    65,    39,    39,
      59,    36,    52,    38,    42,    65,    65,    65,    65,    40,
      67,    67,    67,    69,    69,    70,    70,    65,    65,    65,
      65,    40,    66,    66,    66,    66,    66,    66,    66,    66,
      67,    67,    67,    69,    69,    70,    70,    65,    36,    65,
      64,    42,    36,    65,    40,    40,    40,    40,    40,    40,
      40,    40,    36,    40,    36,    58,    64,    36,    64,    40,
      58
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    50,    51,    52,
      52,    53,    54,    55,    55,    56,    56,    57,    58,    58,
      58,    59,    59,    60,    61,    61,    61,    61,    61,    61,
      62,    62,    63,    64,    64,    65,    65,    65,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    67,    67,    67,
      67,    68,    68,    68,    69,    69,    69,    70,    70,    70,
      70,    70,    70,    70,    70,    71,    72,    72,    72,    72,
      73,    74,    74,    74,    74,    75,    75,    75,    75,    75
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     3,     3,
       1,     6,     1,     1,     0,     3,     1,     2,     1,     1,
       1,     2,     0,     3,     1,     1,     1,     1,     1,     2,
       5,     7,     9,     3,     1,     3,     1,     0,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       1,     1,     3,     3,     1,     3,     3,     1,     2,     2,
       2,     2,     2,     1,     3,     4,     4,     4,     4,     4,
       3,     1,     1,     2,     2,     1,     1,     1,     1,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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
   required.  Return YYENOMEM if memory is exhausted.  */
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
          return YYENOMEM;
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
          return YYENOMEM;
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
#define YY_LAC_ESTABLISH                                                \
do {                                                                    \
  if (!yy_lac_established)                                              \
    {                                                                   \
      YYDPRINTF ((stderr,                                               \
                  "LAC: initial context established for %s\n",          \
                  yysymbol_name (yytoken)));                            \
      yy_lac_established = 1;                                           \
      switch (yy_lac (yyesa, &yyes, &yyes_capacity, yyssp, yytoken))    \
        {                                                               \
        case YYENOMEM:                                                  \
          goto yyexhaustedlab;                                          \
        case 1:                                                         \
          goto yyerrlab;                                                \
        }                                                               \
    }                                                                   \
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
      YYDPRINTF ((stderr, "LAC: initial context discarded due to "       \
                  Event "\n"));                                          \
      yy_lac_established = 0;                                            \
    }                                                                    \
} while (0)
#else
# define YY_LAC_DISCARD(Event) yy_lac_established = 0
#endif

/* Given the stack whose top is *YYSSP, return 0 iff YYTOKEN can
   eventually (after perhaps some reductions) be shifted, return 1 if
   not, or return YYENOMEM if memory is exhausted.  As preconditions and
   postconditions: *YYES_CAPACITY is the allocated size of the array to
   which *YYES points, and either *YYES = YYESA or *YYES points to an
   array allocated with YYSTACK_ALLOC.  yy_lac may overwrite the
   contents of either array, alter *YYES and *YYES_CAPACITY, and free
   any old *YYES other than YYESA.  */
static int
yy_lac (yy_state_t *yyesa, yy_state_t **yyes,
        YYPTRDIFF_T *yyes_capacity, yy_state_t *yyssp, yysymbol_kind_t yytoken)
{
  yy_state_t *yyes_prev = yyssp;
  yy_state_t *yyesp = yyes_prev;
  /* Reduce until we encounter a shift and thereby accept the token.  */
  YYDPRINTF ((stderr, "LAC: checking lookahead %s:", yysymbol_name (yytoken)));
  if (yytoken == YYSYMBOL_YYUNDEF)
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
          /* Use the default action.  */
          yyrule = yydefact[+*yyesp];
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, " Err\n"));
              return 1;
            }
        }
      else
        {
          /* Use the action from yytable.  */
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
      /* By now we know we have to simulate a reduce.  */
      YYDPRINTF ((stderr, " R%d", yyrule - 1));
      {
        /* Pop the corresponding number of values from the stack.  */
        YYPTRDIFF_T yylen = yyr2[yyrule];
        /* First pop from the LAC stack as many tokens as possible.  */
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
                yyesp = yyes_prev;
                yylen -= yysize;
              }
          }
        /* Only afterwards look at the main stack.  */
        if (yylen)
          yyesp = yyes_prev -= yylen;
      }
      /* Push the resulting state of the reduction.  */
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
                return YYENOMEM;
              }
            YY_IGNORE_USELESS_CAST_BEGIN
            *++yyesp = YY_CAST (yy_state_t, yystate);
            YY_IGNORE_USELESS_CAST_END
          }
        YYDPRINTF ((stderr, " G%d", yystate));
      }
    }
}

/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yy_state_t *yyesa;
  yy_state_t **yyes;
  YYPTRDIFF_T *yyes_capacity;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;

  int yyx;
  for (yyx = 0; yyx < YYNTOKENS; ++yyx)
    {
      yysymbol_kind_t yysym = YY_CAST (yysymbol_kind_t, yyx);
      if (yysym != YYSYMBOL_YYerror && yysym != YYSYMBOL_YYUNDEF)
        switch (yy_lac (yyctx->yyesa, yyctx->yyes, yyctx->yyes_capacity, yyctx->yyssp, yysym))
          {
          case YYENOMEM:
            return YYENOMEM;
          case 1:
            continue;
          default:
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = yysym;
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
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
# endif
#endif

#ifndef yytnamerr
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
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
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
       In the first two cases, it might appear that the current syntax
       error should have been detected in the previous state when yy_lac
       was invoked.  However, at that time, there might have been a
       different syntax error that discarded a different initial context
       during error recovery, leaving behind the current lookahead.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      YYDPRINTF ((stderr, "Constructing syntax error message\n"));
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else if (yyn == 0)
        YYDPRINTF ((stderr, "No expected tokens.\n"));
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.  In order to see if a particular token T is a
   valid looakhead, invoke yy_lac (YYESA, YYES, YYES_CAPACITY, YYSSP, T).

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store or if
   yy_lac returned YYENOMEM.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
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
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
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
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
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


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

    yy_state_t yyesa[20];
    yy_state_t *yyes = yyesa;
    YYPTRDIFF_T yyes_capacity = 20 < YYMAXDEPTH ? 20 : YYMAXDEPTH;

  /* Whether LAC context is established.  A Boolean.  */
  int yy_lac_established = 0;
  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

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
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* programa: lista_de_declaracoes  */
#line 92 "src/sintatico.y"
                             {
		ast = (yyval.node);
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("programa", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 2831 "src/sintatico.tab.c"
    break;

  case 3: /* lista_de_declaracoes: lista_de_declaracoes declaracao  */
#line 101 "src/sintatico.y"
                                          {
		(yyval.node) = novo_node("lista_de_declaracoes", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 2841 "src/sintatico.tab.c"
    break;

  case 4: /* lista_de_declaracoes: %empty  */
#line 106 "src/sintatico.y"
                        {
		// $$ = (t_node*)0;
		(yyval.node) = novo_node("parametros", -1, -1);
	}
#line 2850 "src/sintatico.tab.c"
    break;

  case 5: /* declaracao: declaracao_de_variavel  */
#line 113 "src/sintatico.y"
                                 {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("declaracao", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 2860 "src/sintatico.tab.c"
    break;

  case 6: /* declaracao: declaracao_de_funcao  */
#line 118 "src/sintatico.y"
                               {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("declaracao", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 2870 "src/sintatico.tab.c"
    break;

  case 7: /* declaracao: error  */
#line 123 "src/sintatico.y"
                {
		yyerrok;
	}
#line 2878 "src/sintatico.tab.c"
    break;

  case 8: /* declaracao_de_variavel: tipo_de_variavel lista_de_IDs PONTO_VIRGULA  */
#line 129 "src/sintatico.y"
                                                    {
		(yyval.node) = novo_node("declaracao_de_variavel", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 2888 "src/sintatico.tab.c"
    break;

  case 9: /* lista_de_IDs: lista_de_IDs VIRGULA ID  */
#line 138 "src/sintatico.y"
                                  {
		incrementa_tabela((yyvsp[0].node)->nome);
		(yyval.node) = novo_node("lista_de_IDs", -1, -1);
		coloca_node_filho((yyval.node), novo_node("ID", yylineno, coluna));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	  }
#line 2899 "src/sintatico.tab.c"
    break;

  case 10: /* lista_de_IDs: ID  */
#line 145 "src/sintatico.y"
        {
		incrementa_tabela((yyvsp[0].node)->nome);
		(yyval.node) = novo_node("ID", yylineno, coluna);
	}
#line 2908 "src/sintatico.tab.c"
    break;

  case 11: /* declaracao_de_funcao: tipo_de_variavel ID ABRE_PARENTESES parametros FECHA_PARENTESES definicao_de_funcao  */
#line 152 "src/sintatico.y"
                                                                                              {
		incrementa_tabela((yyvsp[-4].node)->nome);
		(yyval.node) = novo_node("declaracao_de_funcao", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), novo_node("ID", yylineno, coluna));
		coloca_node_filho((yyval.node), (yyvsp[-5].node));
	  }
#line 2921 "src/sintatico.tab.c"
    break;

  case 12: /* definicao_de_funcao: bloco_de_comando  */
#line 163 "src/sintatico.y"
                         {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("definicao_de_funcao", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 2931 "src/sintatico.tab.c"
    break;

  case 13: /* parametros: lista_de_parametros  */
#line 171 "src/sintatico.y"
                              {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("parametros", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 2941 "src/sintatico.tab.c"
    break;

  case 14: /* parametros: %empty  */
#line 176 "src/sintatico.y"
                        {
		// $$ = (t_node*)0;
		(yyval.node) = novo_node("parametros", -1, -1);
	}
#line 2950 "src/sintatico.tab.c"
    break;

  case 15: /* lista_de_parametros: lista_de_parametros VIRGULA parametro  */
#line 183 "src/sintatico.y"
                                                {
		(yyval.node) = novo_node("lista_de_parametros", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 2960 "src/sintatico.tab.c"
    break;

  case 16: /* lista_de_parametros: parametro  */
#line 188 "src/sintatico.y"
                    {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("lista_de_parametros", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 2970 "src/sintatico.tab.c"
    break;

  case 17: /* parametro: tipo_de_variavel ID  */
#line 196 "src/sintatico.y"
                              {
		incrementa_tabela((yyvsp[0].node)->nome);
		(yyval.node) = novo_node("parametro", -1, -1);
		coloca_node_filho((yyval.node), novo_node("ID", yylineno, coluna));
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	  }
#line 2981 "src/sintatico.tab.c"
    break;

  case 18: /* comando: bloco_de_comando  */
#line 205 "src/sintatico.y"
                           {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 2991 "src/sintatico.tab.c"
    break;

  case 19: /* comando: comando_unico  */
#line 210 "src/sintatico.y"
                        {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3001 "src/sintatico.tab.c"
    break;

  case 20: /* comando: error  */
#line 215 "src/sintatico.y"
                {
		yyerrok;
	}
#line 3009 "src/sintatico.tab.c"
    break;

  case 21: /* comandos: comandos comando  */
#line 221 "src/sintatico.y"
                           {
		(yyval.node) = novo_node("comandos", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3019 "src/sintatico.tab.c"
    break;

  case 22: /* comandos: %empty  */
#line 226 "src/sintatico.y"
                    {
		// $$ = (t_node*)0;
		(yyval.node) = novo_node("comandos", -1, -1);
	}
#line 3028 "src/sintatico.tab.c"
    break;

  case 23: /* bloco_de_comando: ABRE_CHAVES comandos FECHA_CHAVES  */
#line 233 "src/sintatico.y"
                                            {
		(yyval.node) = (yyvsp[-1].node);
		// $$ = novo_node("bloco_de_comando", -1, -1);
		// coloca_node_filho($$, $2);
	}
#line 3038 "src/sintatico.tab.c"
    break;

  case 24: /* comando_unico: comando_condicional  */
#line 241 "src/sintatico.y"
                              {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3048 "src/sintatico.tab.c"
    break;

  case 25: /* comando_unico: comando_iterativo  */
#line 246 "src/sintatico.y"
                            {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3058 "src/sintatico.tab.c"
    break;

  case 26: /* comando_unico: declaracao_de_variavel  */
#line 251 "src/sintatico.y"
                                 {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3068 "src/sintatico.tab.c"
    break;

  case 27: /* comando_unico: chamada_de_retorno  */
#line 256 "src/sintatico.y"
                             {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3078 "src/sintatico.tab.c"
    break;

  case 28: /* comando_unico: comando_de_atribuicao  */
#line 261 "src/sintatico.y"
                                {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3088 "src/sintatico.tab.c"
    break;

  case 29: /* comando_unico: expressao PONTO_VIRGULA  */
#line 266 "src/sintatico.y"
                                  {
		(yyval.node) = (yyvsp[-1].node);
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3098 "src/sintatico.tab.c"
    break;

  case 30: /* comando_condicional: IF ABRE_PARENTESES expressao FECHA_PARENTESES comando  */
#line 274 "src/sintatico.y"
                                                                          {
		(yyval.node) = novo_node("IF", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3108 "src/sintatico.tab.c"
    break;

  case 31: /* comando_condicional: IF ABRE_PARENTESES expressao FECHA_PARENTESES comando ELSE comando  */
#line 279 "src/sintatico.y"
                                                                             {
		(yyval.node) = novo_node("IF-ELSE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), (yyvsp[-4].node));
	}
#line 3119 "src/sintatico.tab.c"
    break;

  case 32: /* comando_iterativo: FOR ABRE_PARENTESES expressao_for PONTO_VIRGULA expressao_for PONTO_VIRGULA expressao_for FECHA_PARENTESES comando  */
#line 288 "src/sintatico.y"
                                                                                                                             {
		(yyval.node) = novo_node("FOR", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), (yyvsp[-4].node));
		coloca_node_filho((yyval.node), (yyvsp[-6].node));
	}
#line 3131 "src/sintatico.tab.c"
    break;

  case 33: /* expressao_for: ID ATRIB expressao  */
#line 298 "src/sintatico.y"
                           {
		(yyval.node) = novo_node("ATRIB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), novo_node("ID", yylineno, coluna));
	}
#line 3141 "src/sintatico.tab.c"
    break;

  case 34: /* expressao_for: expressao  */
#line 303 "src/sintatico.y"
                    {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("expressao_for", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3151 "src/sintatico.tab.c"
    break;

  case 35: /* expressao: expressao VIRGULA exp  */
#line 311 "src/sintatico.y"
                              {
		(yyval.node) = novo_node("expressao", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3161 "src/sintatico.tab.c"
    break;

  case 36: /* expressao: exp  */
#line 316 "src/sintatico.y"
              {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("expressao", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3171 "src/sintatico.tab.c"
    break;

  case 37: /* expressao: %empty  */
#line 321 "src/sintatico.y"
                        {
		// $$ = (t_node*)0;
		(yyval.node) = novo_node("expressao", -1, -1);
	}
#line 3180 "src/sintatico.tab.c"
    break;

  case 38: /* exp: exp GT exp  */
#line 328 "src/sintatico.y"
                   {
		(yyval.node) = novo_node("GT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3190 "src/sintatico.tab.c"
    break;

  case 39: /* exp: exp LT exp  */
#line 333 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("LT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3200 "src/sintatico.tab.c"
    break;

  case 40: /* exp: exp EQ exp  */
#line 338 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("EQ", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3210 "src/sintatico.tab.c"
    break;

  case 41: /* exp: exp NE exp  */
#line 343 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("NE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3220 "src/sintatico.tab.c"
    break;

  case 42: /* exp: exp LE exp  */
#line 348 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("LE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3230 "src/sintatico.tab.c"
    break;

  case 43: /* exp: exp GE exp  */
#line 353 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("GE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3240 "src/sintatico.tab.c"
    break;

  case 44: /* exp: exp AND exp  */
#line 358 "src/sintatico.y"
                      {
		(yyval.node) = novo_node("AND", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3250 "src/sintatico.tab.c"
    break;

  case 45: /* exp: exp OR exp  */
#line 363 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("OR", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3260 "src/sintatico.tab.c"
    break;

  case 46: /* exp: exp_list  */
#line 368 "src/sintatico.y"
                   {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("exp", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3270 "src/sintatico.tab.c"
    break;

  case 47: /* exp_list: exp_list CONSTRUTOR exp_list  */
#line 376 "src/sintatico.y"
                                     {
		(yyval.node) = novo_node("CONSTRUTOR", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3280 "src/sintatico.tab.c"
    break;

  case 48: /* exp_list: exp_list FILTER exp_list  */
#line 381 "src/sintatico.y"
                                   {
		(yyval.node) = novo_node("FILTER", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3290 "src/sintatico.tab.c"
    break;

  case 49: /* exp_list: exp_list MAP exp_list  */
#line 386 "src/sintatico.y"
                                {
		(yyval.node) = novo_node("MAP", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3300 "src/sintatico.tab.c"
    break;

  case 50: /* exp_list: exp_aritmetica  */
#line 391 "src/sintatico.y"
                         {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("exp_list", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3310 "src/sintatico.tab.c"
    break;

  case 51: /* exp_aritmetica: termo  */
#line 400 "src/sintatico.y"
              {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("exp_aritmetica", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3320 "src/sintatico.tab.c"
    break;

  case 52: /* exp_aritmetica: exp_aritmetica SOMA termo  */
#line 405 "src/sintatico.y"
                                    {
		(yyval.node) = novo_node("SOMA", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3330 "src/sintatico.tab.c"
    break;

  case 53: /* exp_aritmetica: exp_aritmetica SUB termo  */
#line 410 "src/sintatico.y"
                                   {
		(yyval.node) = novo_node("SUB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3340 "src/sintatico.tab.c"
    break;

  case 54: /* termo: fator  */
#line 418 "src/sintatico.y"
              {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("termo", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3350 "src/sintatico.tab.c"
    break;

  case 55: /* termo: termo MULT fator  */
#line 423 "src/sintatico.y"
                           {
		(yyval.node) = novo_node("MULT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3360 "src/sintatico.tab.c"
    break;

  case 56: /* termo: termo DIV fator  */
#line 428 "src/sintatico.y"
                          {
		(yyval.node) = novo_node("DIV", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3370 "src/sintatico.tab.c"
    break;

  case 57: /* fator: constante  */
#line 436 "src/sintatico.y"
                  {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("fator", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3380 "src/sintatico.tab.c"
    break;

  case 58: /* fator: SUB fator  */
#line 441 "src/sintatico.y"
                    {
		(yyval.node) = novo_node("SUB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3389 "src/sintatico.tab.c"
    break;

  case 59: /* fator: SOMA fator  */
#line 445 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("SOMA", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3398 "src/sintatico.tab.c"
    break;

  case 60: /* fator: TAIL_OR_NOT fator  */
#line 449 "src/sintatico.y"
                            {
		(yyval.node) = novo_node("TAIL_OR_NOT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3407 "src/sintatico.tab.c"
    break;

  case 61: /* fator: TAIL_POP fator  */
#line 453 "src/sintatico.y"
                         {
		(yyval.node) = novo_node("TAIL_POP", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3416 "src/sintatico.tab.c"
    break;

  case 62: /* fator: HEADER fator  */
#line 457 "src/sintatico.y"
                       {
		(yyval.node) = novo_node("HEADER", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3425 "src/sintatico.tab.c"
    break;

  case 63: /* fator: ID  */
#line 461 "src/sintatico.y"
             {
		verifica_contexto((yyvsp[0].node)->nome);
		(yyval.node) = novo_node("ID", yylineno, coluna);
	}
#line 3434 "src/sintatico.tab.c"
    break;

  case 64: /* fator: ABRE_PARENTESES exp FECHA_PARENTESES  */
#line 465 "src/sintatico.y"
                                               {
		// $$ = $2;
		(yyval.node) = novo_node("fator", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3444 "src/sintatico.tab.c"
    break;

  case 65: /* comando_de_atribuicao: ID ATRIB expressao PONTO_VIRGULA  */
#line 474 "src/sintatico.y"
                                     {
		verifica_contexto((yyvsp[-3].node)->nome);
		(yyval.node) = novo_node("ATRIB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
		coloca_node_filho((yyval.node), novo_node("ID", yylineno, coluna));
	}
#line 3455 "src/sintatico.tab.c"
    break;

  case 66: /* exp_funcao: ID ABRE_PARENTESES expressao FECHA_PARENTESES  */
#line 483 "src/sintatico.y"
                                                        {
		verifica_contexto((yyvsp[-3].node)->nome);
		(yyval.node) = novo_node("exp_funcao", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
		coloca_node_filho((yyval.node), novo_node("ID", yylineno, coluna));
	}
#line 3466 "src/sintatico.tab.c"
    break;

  case 67: /* exp_funcao: READ ABRE_PARENTESES expressao FECHA_PARENTESES  */
#line 489 "src/sintatico.y"
                                                           {
		(yyval.node) = novo_node("READ", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3475 "src/sintatico.tab.c"
    break;

  case 68: /* exp_funcao: WRITE ABRE_PARENTESES expressao FECHA_PARENTESES  */
#line 493 "src/sintatico.y"
                                                            {
		(yyval.node) = novo_node("WRITE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3484 "src/sintatico.tab.c"
    break;

  case 69: /* exp_funcao: WRITELN ABRE_PARENTESES expressao FECHA_PARENTESES  */
#line 497 "src/sintatico.y"
                                                              {
		(yyval.node) = novo_node("WRITELN", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3493 "src/sintatico.tab.c"
    break;

  case 70: /* chamada_de_retorno: RETURN expressao PONTO_VIRGULA  */
#line 504 "src/sintatico.y"
                                       {
		(yyval.node) = novo_node("RETURN", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3502 "src/sintatico.tab.c"
    break;

  case 71: /* tipo_de_variavel: INT  */
#line 511 "src/sintatico.y"
              {
		(yyval.node) = novo_node("INT", yylineno, coluna);
	  }
#line 3510 "src/sintatico.tab.c"
    break;

  case 72: /* tipo_de_variavel: FLOAT  */
#line 514 "src/sintatico.y"
                {
		(yyval.node) = novo_node("FLOAT", yylineno, coluna);
	  }
#line 3518 "src/sintatico.tab.c"
    break;

  case 73: /* tipo_de_variavel: INT LIST  */
#line 517 "src/sintatico.y"
                   {
		(yyval.node) = novo_node("INT LIST", yylineno, coluna);
	  }
#line 3526 "src/sintatico.tab.c"
    break;

  case 74: /* tipo_de_variavel: FLOAT LIST  */
#line 520 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("FLOAT LIST", yylineno, coluna);
	}
#line 3534 "src/sintatico.tab.c"
    break;

  case 75: /* constante: INTEGER_CONST  */
#line 526 "src/sintatico.y"
                      {
		(yyval.node) = novo_node("INTEGER_CONST", yylineno, coluna);
	}
#line 3542 "src/sintatico.tab.c"
    break;

  case 76: /* constante: FLOAT_CONST  */
#line 529 "src/sintatico.y"
                      {
		(yyval.node) = novo_node("FLOAT_CONST", yylineno, coluna);
	}
#line 3550 "src/sintatico.tab.c"
    break;

  case 77: /* constante: CONSTANTE_NIL  */
#line 532 "src/sintatico.y"
                        {
		(yyval.node) = novo_node("CONSTANTE_NIL", yylineno, coluna);
	}
#line 3558 "src/sintatico.tab.c"
    break;

  case 78: /* constante: STRING_LITERAL  */
#line 535 "src/sintatico.y"
                         {
		(yyval.node) = novo_node("STRING_LITERAL", yylineno, coluna);
	}
#line 3566 "src/sintatico.tab.c"
    break;

  case 79: /* constante: exp_funcao  */
#line 538 "src/sintatico.y"
                     {
		// $$ = $1;
		(yyval.node) = novo_node("constante", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3576 "src/sintatico.tab.c"
    break;


#line 3580 "src/sintatico.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yyesa, &yyes, &yyes_capacity, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        if (yychar != YYEMPTY)
          YY_LAC_ESTABLISH;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          goto yyexhaustedlab;
      }
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
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
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yyes != yyesa)
    YYSTACK_FREE (yyes);
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 546 "src/sintatico.y"


int yyerror (const char* s) {
	fprintf (stderr, RED"yylineno: %d, na coluna: %d, %s\n"reset, yylineno, coluna, s);
  	return 0;
}

int main()
{
	printf("1:  ");
	yyparse();
	yylex_destroy();

	mostra_tabela_simbolos();
	destroi_tabela_simbolos();

	printf("\n");
	tree_output_file = fopen("tree_output_file.txt","w");
	imprime_ast(ast, 0);
	destroi_arvore(ast);
	fclose(tree_output_file);

	return 0;
}
