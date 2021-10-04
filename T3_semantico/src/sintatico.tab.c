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
  YYSYMBOL_ID = 3,                         /* ID  */
  YYSYMBOL_INT = 4,                        /* INT  */
  YYSYMBOL_FLOAT = 5,                      /* FLOAT  */
  YYSYMBOL_LIST = 6,                       /* LIST  */
  YYSYMBOL_CONSTANTE_NIL = 7,              /* CONSTANTE_NIL  */
  YYSYMBOL_TAIL_OR_NOT = 8,                /* TAIL_OR_NOT  */
  YYSYMBOL_HEADER = 9,                     /* HEADER  */
  YYSYMBOL_TAIL_POP = 10,                  /* TAIL_POP  */
  YYSYMBOL_MAP = 11,                       /* MAP  */
  YYSYMBOL_FILTER = 12,                    /* FILTER  */
  YYSYMBOL_CONSTRUTOR = 13,                /* CONSTRUTOR  */
  YYSYMBOL_READ = 14,                      /* READ  */
  YYSYMBOL_WRITE = 15,                     /* WRITE  */
  YYSYMBOL_WRITELN = 16,                   /* WRITELN  */
  YYSYMBOL_MAIN = 17,                      /* MAIN  */
  YYSYMBOL_RETURN = 18,                    /* RETURN  */
  YYSYMBOL_IF = 19,                        /* IF  */
  YYSYMBOL_ELSE = 20,                      /* ELSE  */
  YYSYMBOL_FOR = 21,                       /* FOR  */
  YYSYMBOL_AND = 22,                       /* AND  */
  YYSYMBOL_OR = 23,                        /* OR  */
  YYSYMBOL_LT = 24,                        /* LT  */
  YYSYMBOL_LE = 25,                        /* LE  */
  YYSYMBOL_EQ = 26,                        /* EQ  */
  YYSYMBOL_GT = 27,                        /* GT  */
  YYSYMBOL_GE = 28,                        /* GE  */
  YYSYMBOL_NE = 29,                        /* NE  */
  YYSYMBOL_SOMA = 30,                      /* SOMA  */
  YYSYMBOL_SUB = 31,                       /* SUB  */
  YYSYMBOL_MULT = 32,                      /* MULT  */
  YYSYMBOL_DIV = 33,                       /* DIV  */
  YYSYMBOL_VIRGULA = 34,                   /* VIRGULA  */
  YYSYMBOL_PONTO_VIRGULA = 35,             /* PONTO_VIRGULA  */
  YYSYMBOL_ASPA_SIMPLES = 36,              /* ASPA_SIMPLES  */
  YYSYMBOL_ATRIB = 37,                     /* ATRIB  */
  YYSYMBOL_ABRE_PARENTESES = 38,           /* ABRE_PARENTESES  */
  YYSYMBOL_FECHA_PARENTESES = 39,          /* FECHA_PARENTESES  */
  YYSYMBOL_ABRE_CHAVES = 40,               /* ABRE_CHAVES  */
  YYSYMBOL_FECHA_CHAVES = 41,              /* FECHA_CHAVES  */
  YYSYMBOL_FLOAT_CONST = 42,               /* FLOAT_CONST  */
  YYSYMBOL_INTEGER_CONST = 43,             /* INTEGER_CONST  */
  YYSYMBOL_STRING_LITERAL = 44,            /* STRING_LITERAL  */
  YYSYMBOL_STRING = 45,                    /* STRING  */
  YYSYMBOL_IFX = 46,                       /* IFX  */
  YYSYMBOL_YYACCEPT = 47,                  /* $accept  */
  YYSYMBOL_programa = 48,                  /* programa  */
  YYSYMBOL_lista_de_declaracoes = 49,      /* lista_de_declaracoes  */
  YYSYMBOL_declaracao = 50,                /* declaracao  */
  YYSYMBOL_declaracao_de_variavel = 51,    /* declaracao_de_variavel  */
  YYSYMBOL_declaracao_de_funcao = 52,      /* declaracao_de_funcao  */
  YYSYMBOL_53_1 = 53,                      /* $@1  */
  YYSYMBOL_definicao_de_funcao = 54,       /* definicao_de_funcao  */
  YYSYMBOL_parametros = 55,                /* parametros  */
  YYSYMBOL_lista_de_parametros = 56,       /* lista_de_parametros  */
  YYSYMBOL_parametro = 57,                 /* parametro  */
  YYSYMBOL_tipo_de_variavel_id = 58,       /* tipo_de_variavel_id  */
  YYSYMBOL_id = 59,                        /* id  */
  YYSYMBOL_comando = 60,                   /* comando  */
  YYSYMBOL_comandos = 61,                  /* comandos  */
  YYSYMBOL_bloco_de_comando = 62,          /* bloco_de_comando  */
  YYSYMBOL_comando_unico = 63,             /* comando_unico  */
  YYSYMBOL_comando_condicional = 64,       /* comando_condicional  */
  YYSYMBOL_comando_iterativo = 65,         /* comando_iterativo  */
  YYSYMBOL_expressao_for = 66,             /* expressao_for  */
  YYSYMBOL_expressao = 67,                 /* expressao  */
  YYSYMBOL_exp = 68,                       /* exp  */
  YYSYMBOL_exp_list = 69,                  /* exp_list  */
  YYSYMBOL_exp_aritmetica = 70,            /* exp_aritmetica  */
  YYSYMBOL_termo = 71,                     /* termo  */
  YYSYMBOL_fator = 72,                     /* fator  */
  YYSYMBOL_comando_de_atribuicao = 73,     /* comando_de_atribuicao  */
  YYSYMBOL_func_call_exp = 74,             /* func_call_exp  */
  YYSYMBOL_func_call_parameters = 75,      /* func_call_parameters  */
  YYSYMBOL_chamada_de_retorno = 76,        /* chamada_de_retorno  */
  YYSYMBOL_tipo_de_variavel = 77,          /* tipo_de_variavel  */
  YYSYMBOL_list = 78,                      /* list  */
  YYSYMBOL_constante = 79                  /* constante  */
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
#define YYLAST   5046

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  339

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
       0,    92,    92,   101,   106,   113,   118,   123,   129,   140,
     140,   157,   165,   170,   177,   182,   190,   200,   207,   215,
     221,   226,   232,   237,   244,   253,   258,   263,   268,   273,
     278,   286,   291,   300,   310,   315,   323,   328,   335,   340,
     345,   350,   355,   360,   365,   370,   375,   383,   388,   393,
     398,   407,   412,   417,   425,   430,   435,   443,   448,   453,
     457,   461,   465,   469,   473,   477,   486,   495,   501,   505,
     509,   516,   521,   530,   537,   540,   543,   547,   550,   557,
     560,   563,   566
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
  "\"end of file\"", "error", "\"invalid token\"", "ID", "INT", "FLOAT",
  "LIST", "CONSTANTE_NIL", "TAIL_OR_NOT", "HEADER", "TAIL_POP", "MAP",
  "FILTER", "CONSTRUTOR", "READ", "WRITE", "WRITELN", "MAIN", "RETURN",
  "IF", "ELSE", "FOR", "AND", "OR", "LT", "LE", "EQ", "GT", "GE", "NE",
  "SOMA", "SUB", "MULT", "DIV", "VIRGULA", "PONTO_VIRGULA", "ASPA_SIMPLES",
  "ATRIB", "ABRE_PARENTESES", "FECHA_PARENTESES", "ABRE_CHAVES",
  "FECHA_CHAVES", "FLOAT_CONST", "INTEGER_CONST", "STRING_LITERAL",
  "STRING", "IFX", "$accept", "programa", "lista_de_declaracoes",
  "declaracao", "declaracao_de_variavel", "declaracao_de_funcao", "$@1",
  "definicao_de_funcao", "parametros", "lista_de_parametros", "parametro",
  "tipo_de_variavel_id", "id", "comando", "comandos", "bloco_de_comando",
  "comando_unico", "comando_condicional", "comando_iterativo",
  "expressao_for", "expressao", "exp", "exp_list", "exp_aritmetica",
  "termo", "fator", "comando_de_atribuicao", "func_call_exp",
  "func_call_parameters", "chamada_de_retorno", "tipo_de_variavel", "list",
  "constante", YY_NULLPTR
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

#define YYPACT_NINF (-225)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-83)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      39,    12,    61,  -225,   101,    27,    79,   109,   125,   153,
      99,    11,    13,    19,    26,   229,    16,   145,   157,    20,
      24,    -8,    69,   121,     1,   115,  1899,   292,   343,   136,
    1943,  1987,  4082,    45,  2861,  2861,  2861,    43,    66,    74,
     108,    83,    98,  2861,  2861,  2871,   356,  4138,  4163,  4188,
    2031,   105,   194,  2075,  2119,  2163,  2207,  2251,   113,    25,
    4684,  4663,  4213,  4238,  2295,  4263,  2339,  4288,   106,  4313,
    4338,  4363,   311,   311,   311,   134,   311,   401,  4388,  4413,
     353,   108,   940,  2383,  2861,  2861,  2861,  2861,  2861,  2861,
    2861,  2861,  2861,  2861,  2861,  2861,  2861,  2861,  2861,   117,
     132,   142,  2427,   155,   214,   162,   168,  4438,   177,   148,
     186,  1036,  1186,  4941,  4955,  4969,  4983,  4997,  5011,  4703,
    4722,  4741,  4463,  4488,  4513,  4538,  4563,  4588,  4613,  2779,
     108,   401,  2471,   940,  4638,   158,   184,   188,   211,  2823,
    1090,  2515,   182,  2823,  2559,   232,  1899,   274,  4110,   988,
    3436,  2871,  2871,  2871,   243,   249,   257,  2871,  2871,  2871,
    3459,  3482,  3505,   275,  1303,  3966,  3528,  3551,  3574,  3597,
    2603,   554,  2871,  2871,  2871,  2871,  2871,  2871,  2871,  2871,
     667,   529,  2909,  2909,  2909,   284,   285,   286,  2909,  2909,
    2871,  2932,  2956,  2980,   293,  1085,   215,  3942,  3004,  3028,
    3052,  3076,   488,   108,   296,   300,  1899,   587,   295,   222,
     769,  1142,  1266,  1367,   305,  1452,  1543,   837,   261,   319,
     219,   244,  2647,   324,   327,  3620,  3643,  3666,   311,   311,
     311,  3689,  3712,   855,   940,  2871,  2871,  2871,  2871,  2871,
    2871,  2871,   936,  1233,  1334,  4863,  4871,  4889,  4897,  4915,
    3100,  3124,  3148,   311,   311,   311,  3172,  3196,  4923,   940,
    2909,  2909,  2909,  2909,  2909,  2909,  2909,  2909,  2909,  2909,
    2909,  2909,  2909,  2909,  2909,   331,   311,   401,  2691,  1591,
     108,  1635,   311,  2735,   328,   329,   333,  3735,   277,  4025,
    4044,  4063,  3758,  3781,  3804,  3827,   334,   335,   344,  3220,
     312,  1490,  2907,  4755,  4773,  4791,  4809,  4827,  4845,   278,
    3987,  4006,  3244,  3268,  3292,  3316,  1679,   354,   362,  1723,
     363,   360,  3850,  3873,  3896,  3919,  3340,  3364,  3388,  3412,
    2779,   401,  1767,  1811,   368,  1090,   366,  2779,  1855
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
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -225,  -225,  -225,  -225,    -1,  -225,  -225,  -225,  -225,  -225,
     381,    -2,     2,  -124,  -142,   -22,  -126,  -123,  -122,  -113,
     382,  1162,   963,  1273,   813,   212,  -121,   493,  -224,  -120,
       9,  -225,   663
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     7,    50,     9,    19,    27,    20,    21,
      22,    51,   163,    53,    30,    54,    55,    56,    57,   105,
      58,    59,    60,    61,    62,    63,    64,    65,   110,    66,
     147,    12,    67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,     8,    28,   211,   222,   135,   212,   213,   215,   216,
     288,    11,     3,    18,    17,   141,   -76,    23,   137,   144,
      -9,    -9,   -77,    23,     5,     6,    25,   142,   145,   -78,
     -74,   -12,    52,    13,   145,   300,    68,    68,    68,    -4,
      -4,    26,    68,    -4,    -4,    68,    68,    84,    85,    86,
      87,    88,    89,    90,    91,    -9,   -81,   -81,   -81,   -13,
     -36,    -2,     4,    24,   278,     5,     6,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   104,
     -81,    72,   -75,    68,   194,    14,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    -7,    -7,   -15,    73,    -7,    -7,   210,   -15,    -3,
      -3,   148,    74,    -3,    -3,    33,    34,    35,    36,     5,
       6,    76,    37,    38,    39,    -5,    -5,   208,   207,    -5,
      -5,   209,    68,   104,    15,   194,    77,    16,    43,    44,
     170,    52,   218,   -37,    82,    52,    45,   221,    83,   224,
      47,    48,    49,    -6,    -6,   -16,   126,    -6,    -6,   -31,
     -16,   -31,   -31,   -31,   318,   -31,   -31,   -31,   -31,   102,
     -14,   127,   -31,   -31,   -31,   -14,   -31,   -31,   139,   -31,
     -18,   128,   -72,   -18,   194,   194,   194,   -72,   -31,   -31,
     194,   194,   -17,   -31,   129,   -17,   -31,   131,   -31,   -31,
     -31,   -31,   -31,   -35,   211,    68,   333,   212,   213,   215,
     216,   211,   132,   338,   212,   213,   215,   216,   334,   -34,
     133,   143,   336,   140,    52,   134,   268,   269,   270,    -8,
      -8,    81,    82,    -8,    -8,   220,   194,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,   -46,   -71,    69,    70,    71,   -46,
     -71,   130,    82,   -18,   -46,    78,    79,   167,   -18,   280,
      82,   194,   194,   194,   194,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   194,   194,   194,   223,   -17,   104,
      52,   228,    68,   -17,   167,   167,   167,   229,   167,   268,
     269,   270,   -10,   -10,   199,   230,   -10,   -10,   282,   234,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   210,   124,
     125,   133,   -49,   234,   149,   210,   325,   -49,   150,   151,
     152,   153,   253,   254,   255,   154,   155,   156,   208,   207,
     279,   259,   209,   104,   276,   208,   207,   218,   277,   209,
     281,   157,   158,   -11,   -11,   199,   133,   -11,   -11,   159,
     -37,   329,   167,   160,   161,   162,   -24,   -24,   -35,   -18,
     -24,   -24,   -17,   225,   226,   227,   316,   322,   323,   231,
     232,   167,   324,   326,   327,   172,   173,   174,   175,   176,
     177,   178,   179,   328,   167,   167,   167,   167,   167,   167,
     167,   167,   107,   330,   250,   251,   252,   331,   332,   -34,
     256,   257,   167,   335,    32,   337,    29,     0,    33,    34,
      35,    36,     0,     0,     0,    37,    38,    39,     0,     0,
       0,     0,    75,     0,     0,     0,     0,     0,     0,     0,
       0,    43,    44,     0,     0,     0,   -37,     0,     0,    45,
     167,   167,   167,    47,    48,    49,   199,   167,   167,   167,
     167,   167,   294,   295,    99,   100,   101,     0,   103,   106,
       0,     0,     0,   108,   109,   167,   167,   167,     0,     0,
       0,   199,   199,   199,   199,   199,   199,   199,   199,   199,
     199,   199,   199,   199,   199,   314,   315,     0,   167,   -21,
       0,   -21,   -21,   -21,   167,   -21,   -21,   -21,   -21,     0,
       0,     0,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,
       0,   214,   136,   106,     0,   138,     0,     0,   -21,   -21,
       0,     0,   219,   -21,     0,     0,   -21,     0,   -21,   -21,
     -21,   -21,   -21,     0,     0,     0,     0,     0,   168,     0,
     -81,   -81,   -81,     0,     0,     0,     0,   167,     0,     0,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,     0,   168,   168,   168,   -81,   168,
       0,     0,     0,     0,     0,   200,   172,   173,   174,   175,
     176,   177,   178,   179,     0,   275,     0,     0,   -27,     0,
     -27,   -27,   -27,   -36,   -27,   -27,   -27,   -27,     0,     0,
       0,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,     0,
     284,   285,   286,     0,     0,     0,   109,   -27,   -27,     0,
       0,     0,   -27,     0,     0,   -27,   200,   -27,   -27,   -27,
     -27,   -27,     0,   168,     0,   296,   297,   298,     0,     0,
       0,   109,     0,     0,   168,   168,   168,     0,     0,     0,
     168,   168,   168,     0,     0,     0,     0,     0,   317,   106,
       0,     0,   320,     0,   321,   168,   168,   168,   168,   168,
     168,   168,   168,     0,     0,   200,   200,   200,   -64,   -64,
     -64,   200,   200,   168,     0,     0,     0,     0,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,   -18,   -64,     0,   169,     0,
       0,     0,   214,   106,     0,     0,     0,   219,     0,   214,
       0,   168,   168,   168,     0,     0,     0,   200,   168,   168,
     168,   168,   168,   168,   168,   169,   169,   169,     0,   169,
       0,     0,     0,     0,     0,   201,   168,   168,   168,     0,
       0,     0,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   200,   200,   200,   200,     0,   168,
     -19,     0,   -19,   -19,   -19,   168,   -19,   -19,   -19,   -19,
       0,     0,     0,   -19,   -19,   -19,     0,   -19,   -19,   -19,
     -19,     0,     0,     0,     0,     0,   201,     0,     0,   -19,
     -19,     0,     0,   169,   -19,     0,     0,   -19,     0,   -19,
     -19,   -19,   -19,   -19,   169,   169,   169,     0,     0,     0,
     169,   169,   169,     0,     0,     0,     0,     0,   168,     0,
       0,     0,     0,     0,     0,   169,   169,   169,   169,   169,
     169,   169,   169,     0,     0,   201,   201,   201,   -64,   -64,
     -64,   201,   201,   169,     0,     0,     0,     0,   166,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,     0,     0,     0,   -18,   -18,   -64,   172,   173,   174,
     175,   176,   177,   178,   179,   166,   166,   166,     0,   166,
       0,   169,   169,   169,   287,   198,     0,   201,   169,   169,
     169,   169,   169,   169,   169,     0,     0,     0,   122,   123,
       0,     0,     0,     0,     0,     0,   169,   169,   169,     0,
       0,     0,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   201,   201,     0,   169,
       0,     0,     0,   180,     0,   169,   198,   181,   182,   183,
     184,     0,     0,   166,   185,   186,   187,     0,   -44,   -44,
     174,   175,   176,   177,   178,   179,     0,     0,     0,     0,
     188,   189,   166,     0,   -37,   -44,     0,     0,   190,   -37,
       0,     0,   191,   192,   193,   166,   166,   166,   166,   166,
     166,   166,   166,     0,     0,     0,     0,     0,   169,   -64,
     -64,   -64,     0,   166,     0,     0,     0,     0,   164,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,     0,     0,     0,   -18,   -64,     0,     0,
       0,     0,     0,     0,     0,   164,   164,   164,     0,   164,
       0,   166,   166,   166,     0,   196,     0,   198,   166,   166,
     166,   292,   293,     0,     0,   119,   120,   121,   -44,   -44,
      86,    87,    88,    89,    90,    91,   166,   166,   166,     0,
       0,   -44,   198,   198,   198,   198,   198,   198,   198,   198,
     198,   198,   198,   198,   312,   313,     0,     0,     0,   166,
       0,     0,     0,   217,     0,   166,   196,   150,   151,   152,
     153,     0,     0,   164,   154,   155,   156,   260,   261,   262,
     263,   264,   265,   266,   267,     0,     0,     0,     0,   -36,
     157,   158,   164,     0,   -36,     0,     0,     0,   159,   -37,
       0,     0,   160,   161,   162,   164,   164,   164,   164,   164,
     164,   164,   164,   -20,     0,   -20,   -20,   -20,   166,   -20,
     -20,   -20,   -20,   164,     0,     0,   -20,   -20,   -20,     0,
     -20,   -20,   -20,   -20,     0,     0,     0,     0,     0,     0,
       0,     0,   -20,   -20,     0,     0,     0,   -20,     0,     0,
     -20,     0,   -20,   -20,   -20,   -20,   -20,     0,     0,     0,
       0,   164,   164,   164,     0,     0,     0,   196,   289,   290,
     291,     0,     0,     0,     0,     0,     0,    80,   -45,   -45,
      86,    87,    88,    89,    90,    91,   164,   164,   164,     0,
       0,   -45,   196,   196,   196,   196,   196,   196,   196,   196,
     196,   309,   310,   311,   171,   171,   171,     0,   171,   164,
       0,     0,     0,     0,   195,   164,   111,   112,   113,   114,
     115,   116,   117,   118,     0,   -45,   -45,   174,   175,   176,
     177,   178,   179,     0,     0,     0,     0,   -25,     0,   -25,
     -25,   -25,   -45,   -25,   -25,   -25,   -25,     0,     0,     0,
     -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,     0,     0,
       0,     0,     0,     0,     0,   195,   -25,   -25,   164,     0,
       0,   -25,   171,     0,   -25,     0,   -25,   -25,   -25,   -25,
     -25,     0,     0,     0,   235,   236,   237,     0,   165,     0,
       0,   233,     0,     0,     0,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,     0,   242,   243,   244,   245,   246,   247,
     248,   249,   -46,     0,     0,   165,   165,   165,     0,   165,
       0,     0,   258,     0,     0,   197,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,     0,     0,     0,     0,   -26,     0,
     -26,   -26,   -26,   -39,   -26,   -26,   -26,   -26,     0,     0,
       0,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,     0,
     171,   171,   171,     0,     0,     0,   195,   -26,   -26,     0,
       0,     0,   -26,     0,     0,   -26,   197,   -26,   -26,   -26,
     -26,   -26,     0,   165,     0,   171,   171,   171,     0,     0,
       0,   195,   301,   302,   303,   304,   305,   306,   307,   308,
       0,     0,   165,     0,     0,     0,     0,     0,   171,     0,
       0,     0,     0,     0,   171,   165,   165,   165,   165,   165,
     165,   165,   165,   -29,     0,   -29,   -29,   -29,     0,   -29,
     -29,   -29,   -29,   165,     0,     0,   -29,   -29,   -29,     0,
     -29,   -29,   -29,   -29,     0,     0,     0,     0,     0,     0,
       0,     0,   -29,   -29,     0,     0,     0,   -29,     0,     0,
     -29,     0,   -29,   -29,   -29,   -29,   -29,   171,     0,     0,
       0,   165,   165,   165,     0,     0,     0,   197,   165,   165,
     165,     0,   -44,   -44,   262,   263,   264,   265,   266,   267,
       0,     0,     0,     0,   -44,     0,   165,   165,   165,   -44,
       0,     0,   197,   197,   197,   197,   197,   197,   197,   197,
     197,   197,   197,   197,   -28,     0,   -28,   -28,   -28,   165,
     -28,   -28,   -28,   -28,     0,   165,     0,   -28,   -28,   -28,
       0,   -28,   -28,   -28,   -28,     0,     0,     0,     0,     0,
       0,     0,     0,   -28,   -28,     0,     0,     0,   -28,     0,
       0,   -28,     0,   -28,   -28,   -28,   -28,   -28,     0,     0,
       0,     0,    -8,     0,    -8,    -8,    -8,     0,    -8,    -8,
      -8,    -8,     0,     0,     0,    -8,    -8,    -8,   165,    -8,
      -8,    -8,    -8,     0,     0,     0,     0,     0,     0,     0,
       0,    -8,    -8,     0,     0,     0,    -8,     0,     0,    -8,
       0,    -8,    -8,    -8,    -8,    -8,   -30,     0,   -30,   -30,
     -30,     0,   -30,   -30,   -30,   -30,     0,     0,     0,   -30,
     -30,   -30,     0,   -30,   -30,   -30,   -30,     0,     0,     0,
       0,     0,     0,     0,     0,   -30,   -30,     0,     0,     0,
     -30,     0,     0,   -30,     0,   -30,   -30,   -30,   -30,   -30,
     -73,     0,   -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,
       0,     0,     0,   -73,   -73,   -73,     0,   -73,   -73,   -73,
     -73,     0,     0,     0,     0,     0,     0,     0,     0,   -73,
     -73,     0,     0,     0,   -73,     0,     0,   -73,     0,   -73,
     -73,   -73,   -73,   -73,   -24,     0,   -24,   -24,   -24,     0,
     -24,   -24,   -24,   -24,     0,     0,     0,   -24,   -24,   -24,
       0,   -24,   -24,   -24,   -24,     0,     0,     0,     0,     0,
       0,     0,     0,   -24,   -24,     0,     0,     0,   -24,     0,
       0,   -24,     0,   -24,   -24,   -24,   -24,   -24,   -66,     0,
     -66,   -66,   -66,     0,   -66,   -66,   -66,   -66,     0,     0,
       0,   -66,   -66,   -66,     0,   -66,   -66,   -66,   -66,     0,
       0,     0,     0,     0,     0,     0,     0,   -66,   -66,     0,
       0,     0,   -66,     0,     0,   -66,     0,   -66,   -66,   -66,
     -66,   -66,   -31,     0,   -31,   -31,   -31,     0,   -31,   -31,
     -31,   -31,     0,     0,     0,   -31,   -31,   -31,     0,   -31,
     -31,   -31,   -31,     0,     0,     0,     0,     0,     0,     0,
       0,   -31,   -31,     0,     0,     0,   -31,     0,     0,   -31,
       0,   -31,   -31,   -31,   -31,   -31,   -33,     0,   -33,   -33,
     -33,     0,   -33,   -33,   -33,   -33,     0,     0,     0,   -33,
     -33,   -33,     0,   -33,   -33,   -33,   -33,     0,     0,     0,
       0,     0,     0,     0,     0,   -33,   -33,     0,     0,     0,
     -33,     0,     0,   -33,     0,   -33,   -33,   -33,   -33,   -33,
     -23,     0,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,
       0,     0,     0,   -23,   -23,   -23,     0,   -23,   -23,     0,
     -23,     0,     0,     0,     0,     0,     0,     0,     0,   -23,
     -23,     0,     0,     0,   -23,     0,     0,   -23,     0,   -23,
     -23,   -23,   -23,   -23,    31,     0,    32,     5,     6,     0,
      33,    34,    35,    36,     0,     0,     0,    37,    38,    39,
       0,    40,    41,     0,    42,     0,     0,     0,     0,     0,
       0,     0,     0,    43,    44,     0,     0,     0,   -37,     0,
       0,    45,     0,   146,    46,    47,    48,    49,   -21,     0,
     -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,     0,     0,
       0,   -21,   -21,   -21,     0,   -21,   -21,     0,   -21,     0,
       0,     0,     0,     0,     0,     0,     0,   -21,   -21,     0,
       0,     0,   -21,     0,     0,   -21,     0,   -21,   -21,   -21,
     -21,   -21,   -27,     0,   -27,   -27,   -27,     0,   -27,   -27,
     -27,   -27,     0,     0,     0,   -27,   -27,   -27,     0,   -27,
     -27,     0,   -27,     0,     0,     0,     0,     0,     0,     0,
       0,   -27,   -27,     0,     0,     0,   -27,     0,     0,   -27,
       0,   -27,   -27,   -27,   -27,   -27,   -22,     0,   -22,   -22,
     -22,     0,   -22,   -22,   -22,   -22,     0,     0,     0,   -22,
     -22,   -22,     0,   -22,   -22,     0,   -22,     0,     0,     0,
       0,     0,     0,     0,     0,   -22,   -22,     0,     0,     0,
     -22,     0,     0,   -22,     0,   -22,   -22,   -22,   -22,   -22,
     -19,     0,   -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,
       0,     0,     0,   -19,   -19,   -19,     0,   -19,   -19,     0,
     -19,     0,     0,     0,     0,     0,     0,     0,     0,   -19,
     -19,     0,     0,     0,   -19,     0,     0,   -19,     0,   -19,
     -19,   -19,   -19,   -19,   -20,     0,   -20,   -20,   -20,     0,
     -20,   -20,   -20,   -20,     0,     0,     0,   -20,   -20,   -20,
       0,   -20,   -20,     0,   -20,     0,     0,     0,     0,     0,
       0,     0,     0,   -20,   -20,     0,     0,     0,   -20,     0,
       0,   -20,     0,   -20,   -20,   -20,   -20,   -20,   -25,     0,
     -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,     0,     0,
       0,   -25,   -25,   -25,     0,   -25,   -25,     0,   -25,     0,
       0,     0,     0,     0,     0,     0,     0,   -25,   -25,     0,
       0,     0,   -25,     0,     0,   -25,     0,   -25,   -25,   -25,
     -25,   -25,   -26,     0,   -26,   -26,   -26,     0,   -26,   -26,
     -26,   -26,     0,     0,     0,   -26,   -26,   -26,     0,   -26,
     -26,     0,   -26,     0,     0,     0,     0,     0,     0,     0,
       0,   -26,   -26,     0,     0,     0,   -26,     0,     0,   -26,
       0,   -26,   -26,   -26,   -26,   -26,   -29,     0,   -29,   -29,
     -29,     0,   -29,   -29,   -29,   -29,     0,     0,     0,   -29,
     -29,   -29,     0,   -29,   -29,     0,   -29,     0,     0,     0,
       0,     0,     0,     0,     0,   -29,   -29,     0,     0,     0,
     -29,     0,     0,   -29,     0,   -29,   -29,   -29,   -29,   -29,
     -28,     0,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,
       0,     0,     0,   -28,   -28,   -28,     0,   -28,   -28,     0,
     -28,     0,     0,     0,     0,     0,     0,     0,     0,   -28,
     -28,     0,     0,     0,   -28,     0,     0,   -28,     0,   -28,
     -28,   -28,   -28,   -28,   -30,     0,   -30,   -30,   -30,     0,
     -30,   -30,   -30,   -30,     0,     0,     0,   -30,   -30,   -30,
       0,   -30,   -30,     0,   -30,     0,     0,     0,     0,     0,
       0,     0,     0,   -30,   -30,     0,     0,     0,   -30,     0,
       0,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -73,     0,
     -73,   -73,   -73,     0,   -73,   -73,   -73,   -73,     0,     0,
       0,   -73,   -73,   -73,     0,   -73,   -73,     0,   -73,     0,
       0,     0,     0,     0,     0,     0,     0,   -73,   -73,     0,
       0,     0,   -73,     0,     0,   -73,     0,   -73,   -73,   -73,
     -73,   -73,   -66,     0,   -66,   -66,   -66,     0,   -66,   -66,
     -66,   -66,     0,     0,     0,   -66,   -66,   -66,     0,   -66,
     -66,     0,   -66,     0,     0,     0,     0,     0,     0,     0,
       0,   -66,   -66,     0,     0,     0,   -66,     0,     0,   -66,
       0,   -66,   -66,   -66,   -66,   -66,   -32,     0,   -32,   -32,
     -32,     0,   -32,   -32,   -32,   -32,     0,     0,     0,   -32,
     -32,   -32,     0,   -32,   -32,     0,   -32,     0,     0,     0,
       0,     0,     0,     0,     0,   -32,   -32,     0,     0,     0,
     -32,     0,     0,   -32,     0,   -32,   -32,   -32,   -32,   -32,
     -33,     0,   -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,
       0,     0,     0,   -33,   -33,   -33,     0,   -33,   -33,     0,
     -33,     0,     0,     0,     0,     0,     0,     0,     0,   -33,
     -33,     0,     0,     0,   -33,     0,     0,   -33,     0,   -33,
     -33,   -33,   -33,   -33,    -8,     0,    -8,    -8,    -8,     0,
      -8,    -8,    -8,    -8,     0,     0,     0,    -8,    -8,    -8,
       0,    -8,    -8,     0,    -8,     0,     0,     0,     0,     0,
       0,     0,     0,    -8,    -8,     0,     0,     0,    -8,     0,
       0,    -8,     0,    -8,    -8,    -8,    -8,    -8,    31,     0,
      32,     5,     6,     0,    33,    34,    35,    36,     0,     0,
       0,    37,    38,    39,     0,    40,    41,     0,    42,     0,
       0,     0,     0,     0,     0,     0,     0,    43,    44,     0,
       0,     0,   -37,     0,     0,    45,     0,   146,   283,    47,
      48,    49,    31,     0,    32,     5,     6,     0,    33,    34,
      35,    36,     0,     0,     0,    37,    38,    39,     0,    40,
      41,     0,    42,     0,     0,     0,     0,     0,     0,     0,
       0,    43,    44,     0,     0,     0,   -37,     0,     0,    45,
       0,   146,   319,    47,    48,    49,   -24,     0,   -24,   -24,
     -24,     0,   -24,   -24,   -24,   -24,     0,     0,     0,   -24,
     -24,   -24,     0,   -24,   -24,     0,   -24,     0,     0,     0,
       0,     0,     0,     0,     0,   -24,   -24,     0,     0,     0,
     -24,     0,     0,   -24,     0,   -24,   -24,   -24,   -24,   -24,
     202,     0,    32,     5,     6,     0,    33,    34,    35,    36,
       0,     0,     0,    37,    38,    39,     0,   203,   204,     0,
     205,     0,     0,     0,     0,     0,     0,     0,     0,    43,
      44,     0,     0,     0,   -37,     0,     0,    45,     0,   206,
       0,    47,    48,    49,    31,     0,    32,     5,     6,     0,
      33,    34,    35,    36,     0,     0,     0,    37,    38,    39,
       0,    40,    41,     0,    42,     0,     0,     0,     0,     0,
       0,     0,     0,    43,    44,     0,     0,     0,   -37,     0,
       0,    45,     0,   146,   148,    47,    48,    49,    33,    34,
      35,    36,     0,     0,   149,    37,    38,    39,   150,   151,
     152,   153,     0,     0,     0,   154,   155,   156,     0,     0,
       0,    43,    44,     0,     0,     0,     0,     0,     0,    45,
       0,   157,   158,    47,    48,    49,     0,     0,     0,   159,
       0,     0,   180,   160,   161,   162,   181,   182,   183,   184,
       0,     0,     0,   185,   186,   187,     0,     0,     0,   -45,
     -45,   262,   263,   264,   265,   266,   267,     0,     0,   188,
     189,   -45,     0,   -80,   -80,   -80,   -45,   190,     0,     0,
       0,   191,   192,   193,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -79,   -79,   -79,
       0,   -80,     0,     0,     0,     0,     0,     0,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -82,   -82,   -82,     0,   -79,     0,     0,     0,     0,
       0,     0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -51,   -51,   -51,     0,   -82,
       0,     0,     0,     0,     0,     0,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   273,   274,   -51,   -54,
     -54,   -54,     0,   -51,     0,     0,     0,     0,     0,     0,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -58,   -58,   -58,     0,   -54,     0,     0,
       0,     0,     0,     0,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -57,   -57,   -57,
       0,   -58,     0,     0,     0,     0,     0,     0,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -61,   -61,   -61,     0,   -57,     0,     0,     0,     0,
       0,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -63,   -63,   -63,     0,   -61,
       0,     0,     0,     0,     0,     0,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -62,
     -62,   -62,     0,   -63,     0,     0,     0,     0,     0,     0,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -60,   -60,   -60,     0,   -62,     0,     0,
       0,     0,     0,     0,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -59,   -59,   -59,
       0,   -60,     0,     0,     0,     0,     0,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -65,   -65,   -65,     0,   -59,     0,     0,     0,     0,
       0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -52,   -52,   -52,     0,   -65,
       0,     0,     0,     0,     0,     0,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   273,   274,   -52,   -53,
     -53,   -53,     0,   -52,     0,     0,     0,     0,     0,     0,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     273,   274,   -53,   -55,   -55,   -55,     0,   -53,     0,     0,
       0,     0,     0,     0,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -56,   -56,   -56,
       0,   -55,     0,     0,     0,     0,     0,     0,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -68,   -68,   -68,     0,   -56,     0,     0,     0,     0,
       0,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -69,   -69,   -69,     0,   -68,
       0,     0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -70,
     -70,   -70,     0,   -69,     0,     0,     0,     0,     0,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -67,   -67,   -67,     0,   -70,     0,     0,
       0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -81,   -81,   -81,
       0,   -67,     0,     0,     0,     0,     0,     0,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -80,   -80,   -80,     0,     0,   -81,     0,     0,     0,     0,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -79,   -79,   -79,     0,     0,   -80,     0,
       0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -82,   -82,   -82,     0,
       0,   -79,     0,     0,     0,     0,     0,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -51,
     -51,   -51,     0,     0,   -82,     0,     0,     0,     0,     0,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     240,   241,   -54,   -54,   -54,     0,     0,   -51,     0,     0,
       0,     0,     0,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -58,   -58,   -58,     0,     0,
     -54,     0,     0,     0,     0,     0,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -57,   -57,
     -57,     0,     0,   -58,     0,     0,     0,     0,     0,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -61,   -61,   -61,     0,     0,   -57,     0,     0,     0,
       0,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -63,   -63,   -63,     0,     0,   -61,
       0,     0,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -62,   -62,   -62,
       0,     0,   -63,     0,     0,     0,     0,     0,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -60,   -60,   -60,     0,     0,   -62,     0,     0,     0,     0,
       0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -59,   -59,   -59,     0,     0,   -60,     0,
       0,     0,     0,     0,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -65,   -65,   -65,     0,
       0,   -59,     0,     0,     0,     0,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -52,
     -52,   -52,     0,     0,   -65,     0,     0,     0,     0,     0,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     240,   241,   -53,   -53,   -53,     0,     0,   -52,     0,     0,
       0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   240,   241,   -55,   -55,   -55,     0,     0,
     -53,     0,     0,     0,     0,     0,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -56,   -56,
     -56,     0,     0,   -55,     0,     0,     0,     0,     0,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -68,   -68,   -68,     0,     0,   -56,     0,     0,     0,
       0,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -69,   -69,   -69,     0,     0,   -68,
       0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -70,   -70,   -70,
       0,     0,   -69,     0,     0,     0,     0,     0,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -67,   -67,   -67,     0,     0,   -70,     0,     0,     0,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -50,   -50,   -50,     0,     0,   -67,     0,
       0,     0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   271,   272,     0,     0,   -50,   -50,   -50,   -50,
       0,   -50,     0,     0,     0,     0,     0,     0,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   238,   239,   268,   269,
     270,     0,     0,     0,     0,   -50,     0,     0,     0,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,   268,   269,   270,
       0,   -48,     0,     0,     0,     0,   -48,     0,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,   235,   236,   237,     0,
     -47,     0,     0,     0,     0,   -47,     0,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   235,   236,   237,     0,     0,
       0,     0,     0,     0,   -49,     0,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   235,   236,   237,     0,     0,     0,
       0,     0,     0,   -48,     0,   -47,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -64,   -64,   -64,     0,     0,     0,     0,
       0,     0,   -47,     0,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,     0,   -64,     0,   -18,
     -18,   -64,   -64,   -64,     0,     0,     0,     0,     0,     0,
       0,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,     0,   -64,     0,     0,   -18,   -80,
     -80,   -80,     0,     0,     0,     0,     0,     0,     0,     0,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,     0,   -80,   -79,   -79,   -79,     0,     0,     0,
       0,     0,     0,     0,     0,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,     0,   -79,   -82,
     -82,   -82,     0,     0,     0,     0,     0,     0,     0,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,     0,   -82,   -51,   -51,   -51,     0,     0,     0,
       0,     0,     0,     0,     0,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,    97,    98,     0,   -51,   -54,
     -54,   -54,     0,     0,     0,     0,     0,     0,     0,     0,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,     0,   -54,   -58,   -58,   -58,     0,     0,     0,
       0,     0,     0,     0,     0,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,     0,   -58,   -57,
     -57,   -57,     0,     0,     0,     0,     0,     0,     0,     0,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,     0,   -57,   -61,   -61,   -61,     0,     0,     0,
       0,     0,     0,     0,     0,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,   -61,   -63,
     -63,   -63,     0,     0,     0,     0,     0,     0,     0,     0,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,     0,   -63,   -62,   -62,   -62,     0,     0,     0,
       0,     0,     0,     0,     0,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,   -62,   -60,
     -60,   -60,     0,     0,     0,     0,     0,     0,     0,     0,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,     0,   -60,   -59,   -59,   -59,     0,     0,     0,
       0,     0,     0,     0,     0,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,   -59,   -65,
     -65,   -65,     0,     0,     0,     0,     0,     0,     0,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,     0,   -65,   -52,   -52,   -52,     0,     0,     0,
       0,     0,     0,     0,     0,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,    97,    98,     0,   -52,   -53,
     -53,   -53,     0,     0,     0,     0,     0,     0,     0,     0,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
      97,    98,     0,   -53,   -55,   -55,   -55,     0,     0,     0,
       0,     0,     0,     0,     0,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,     0,   -55,   -56,
     -56,   -56,     0,     0,     0,     0,     0,     0,     0,     0,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,     0,   -56,   -68,   -68,   -68,     0,     0,     0,
       0,     0,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,   -68,   -69,
     -69,   -69,     0,     0,     0,     0,     0,     0,     0,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,     0,   -69,   -70,   -70,   -70,     0,     0,     0,
       0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,   -67,
     -67,   -67,     0,     0,     0,     0,     0,     0,     0,     0,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,     0,   -67,   -50,   -50,   -50,     0,     0,     0,
       0,     0,     0,     0,     0,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,    95,    96,    92,    93,    94,   -50,     0,
       0,     0,     0,     0,     0,     0,   -46,   -46,   -46,   -46,
     -46,   -46,   -46,   -46,    92,    93,    94,     0,     0,   -46,
       0,     0,     0,     0,     0,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,    92,    93,    94,     0,     0,   -49,     0,
       0,     0,     0,     0,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,    92,    93,    94,     0,     0,   -48,     0,     0,
       0,     0,     0,   -47,   -47,   -47,   -47,   -47,   -47,   -47,
     -47,     0,     0,     0,     0,     0,   -47,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,     0,     0,     0,     0,   -39,
       0,     0,     0,     0,   -39,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,     0,     0,     0,     0,   -42,     0,     0,
       0,     0,   -42,   -40,   -40,   262,   263,   -40,   265,   266,
     -40,     0,     0,     0,     0,   -40,     0,     0,     0,     0,
     -40,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,
       0,     0,     0,   -38,     0,     0,     0,     0,   -38,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,     0,     0,
       0,   -43,     0,     0,     0,     0,   -43,   -41,   -41,   262,
     263,   -41,   265,   266,   -41,     0,     0,     0,     0,   -41,
       0,     0,     0,     0,   -41,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -42,   -40,   -40,   174,   175,   -40,   177,   178,
     -40,     0,   -42,     0,     0,     0,     0,     0,     0,     0,
     -40,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,   -38,     0,
       0,     0,     0,     0,     0,     0,   -43,   -41,   -41,   174,
     175,   -41,   177,   178,   -41,   172,   173,   174,   175,   176,
     177,   178,   179,     0,   -41,     0,     0,     0,     0,     0,
       0,     0,   299,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,     0,     0,     0,     0,     0,   -39,   -42,   -42,   -42,
     -42,   -42,   -42,   -42,   -42,     0,     0,     0,     0,     0,
     -42,   -40,   -40,    86,    87,   -40,    89,    90,   -40,     0,
       0,     0,     0,     0,   -40,   -38,   -38,   -38,   -38,   -38,
     -38,   -38,   -38,     0,     0,     0,     0,     0,   -38,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,   -43,     0,     0,     0,
       0,     0,   -43,   -41,   -41,    86,    87,   -41,    89,    90,
     -41,     0,     0,     0,     0,     0,   -41
};

static const yytype_int16 yycheck[] =
{
       2,     2,    24,   129,   146,   129,   129,   129,   129,   129,
     234,     2,     0,    11,     3,   139,     3,    19,   131,   143,
       4,     5,     3,    25,     4,     5,    34,   140,    19,     3,
       3,    39,    30,     6,    25,   259,    34,    35,    36,     0,
       1,    40,    40,     4,     5,    43,    44,    22,    23,    24,
      25,    26,    27,    28,    29,    39,    11,    12,    13,    39,
      35,     0,     1,    39,   206,     4,     5,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    77,
      35,    38,     3,    81,    82,     6,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,     0,     1,    34,    38,     4,     5,   129,    39,     0,
       1,     3,    38,     4,     5,     7,     8,     9,    10,     4,
       5,    38,    14,    15,    16,     0,     1,   129,   129,     4,
       5,   129,   130,   131,    35,   133,    38,    38,    30,    31,
      35,   139,   140,    35,    38,   143,    38,   145,    35,   147,
      42,    43,    44,     0,     1,    34,    39,     4,     5,     1,
      39,     3,     4,     5,   277,     7,     8,     9,    10,    35,
      34,    39,    14,    15,    16,    39,    18,    19,    20,    21,
      35,    39,    34,    38,   182,   183,   184,    39,    30,    31,
     188,   189,    35,    35,    39,    38,    38,    35,    40,    41,
      42,    43,    44,    35,   330,   203,   330,   330,   330,   330,
     330,   337,    35,   337,   337,   337,   337,   337,   331,    35,
      34,    39,   335,    35,   222,    39,    11,    12,    13,     0,
       1,    37,    38,     4,     5,     3,   234,    22,    23,    24,
      25,    26,    27,    28,    29,    34,    34,    35,    36,    34,
      39,    37,    38,    34,    39,    43,    44,    45,    39,    37,
      38,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,     3,    34,   277,
     278,    38,   280,    39,    72,    73,    74,    38,    76,    11,
      12,    13,     0,     1,    82,    38,     4,     5,    37,    38,
      22,    23,    24,    25,    26,    27,    28,    29,   330,    97,
      98,    34,    34,    38,     3,   337,    39,    39,     7,     8,
       9,    10,    38,    38,    38,    14,    15,    16,   330,   330,
      35,    38,   330,   331,    38,   337,   337,   335,    38,   337,
      35,    30,    31,     0,     1,   133,    34,     4,     5,    38,
      39,    39,   140,    42,    43,    44,     0,     1,    39,    35,
       4,     5,    35,   151,   152,   153,    35,    39,    39,   157,
     158,   159,    39,    39,    39,    22,    23,    24,    25,    26,
      27,    28,    29,    39,   172,   173,   174,   175,   176,   177,
     178,   179,    39,    39,   182,   183,   184,    35,    35,    39,
     188,   189,   190,    35,     3,    39,    25,    -1,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,    -1,
      -1,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    35,    -1,    -1,    38,
     228,   229,   230,    42,    43,    44,   234,   235,   236,   237,
     238,   239,   240,   241,    72,    73,    74,    -1,    76,    77,
      -1,    -1,    -1,    81,    82,   253,   254,   255,    -1,    -1,
      -1,   259,   260,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,    -1,   276,     1,
      -1,     3,     4,     5,   282,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    -1,    18,    19,    20,    21,
      -1,   129,   130,   131,    -1,   133,    -1,    -1,    30,    31,
      -1,    -1,   140,    35,    -1,    -1,    38,    -1,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    45,    -1,
      11,    12,    13,    -1,    -1,    -1,    -1,   335,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    72,    73,    74,    39,    76,
      -1,    -1,    -1,    -1,    -1,    82,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,   203,    -1,    -1,     1,    -1,
       3,     4,     5,    39,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    -1,    18,    19,    20,    21,    -1,
     228,   229,   230,    -1,    -1,    -1,   234,    30,    31,    -1,
      -1,    -1,    35,    -1,    -1,    38,   133,    40,    41,    42,
      43,    44,    -1,   140,    -1,   253,   254,   255,    -1,    -1,
      -1,   259,    -1,    -1,   151,   152,   153,    -1,    -1,    -1,
     157,   158,   159,    -1,    -1,    -1,    -1,    -1,   276,   277,
      -1,    -1,   280,    -1,   282,   172,   173,   174,   175,   176,
     177,   178,   179,    -1,    -1,   182,   183,   184,    11,    12,
      13,   188,   189,   190,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,    -1,    -1,    38,    39,    -1,    45,    -1,
      -1,    -1,   330,   331,    -1,    -1,    -1,   335,    -1,   337,
      -1,   228,   229,   230,    -1,    -1,    -1,   234,   235,   236,
     237,   238,   239,   240,   241,    72,    73,    74,    -1,    76,
      -1,    -1,    -1,    -1,    -1,    82,   253,   254,   255,    -1,
      -1,    -1,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,    -1,   276,
       1,    -1,     3,     4,     5,   282,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,   133,    -1,    -1,    30,
      31,    -1,    -1,   140,    35,    -1,    -1,    38,    -1,    40,
      41,    42,    43,    44,   151,   152,   153,    -1,    -1,    -1,
     157,   158,   159,    -1,    -1,    -1,    -1,    -1,   335,    -1,
      -1,    -1,    -1,    -1,    -1,   172,   173,   174,   175,   176,
     177,   178,   179,    -1,    -1,   182,   183,   184,    11,    12,
      13,   188,   189,   190,    -1,    -1,    -1,    -1,    45,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    -1,    -1,    37,    38,    39,    22,    23,    24,
      25,    26,    27,    28,    29,    72,    73,    74,    -1,    76,
      -1,   228,   229,   230,    39,    82,    -1,   234,   235,   236,
     237,   238,   239,   240,   241,    -1,    -1,    -1,    95,    96,
      -1,    -1,    -1,    -1,    -1,    -1,   253,   254,   255,    -1,
      -1,    -1,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,    -1,   276,
      -1,    -1,    -1,     3,    -1,   282,   133,     7,     8,     9,
      10,    -1,    -1,   140,    14,    15,    16,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      30,    31,   159,    -1,    34,    39,    -1,    -1,    38,    39,
      -1,    -1,    42,    43,    44,   172,   173,   174,   175,   176,
     177,   178,   179,    -1,    -1,    -1,    -1,    -1,   335,    11,
      12,    13,    -1,   190,    -1,    -1,    -1,    -1,    45,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    73,    74,    -1,    76,
      -1,   228,   229,   230,    -1,    82,    -1,   234,   235,   236,
     237,   238,   239,    -1,    -1,    92,    93,    94,    22,    23,
      24,    25,    26,    27,    28,    29,   253,   254,   255,    -1,
      -1,    35,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,    -1,    -1,    -1,   276,
      -1,    -1,    -1,     3,    -1,   282,   133,     7,     8,     9,
      10,    -1,    -1,   140,    14,    15,    16,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    34,
      30,    31,   159,    -1,    39,    -1,    -1,    -1,    38,    39,
      -1,    -1,    42,    43,    44,   172,   173,   174,   175,   176,
     177,   178,   179,     1,    -1,     3,     4,     5,   335,     7,
       8,     9,    10,   190,    -1,    -1,    14,    15,    16,    -1,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    -1,    35,    -1,    -1,
      38,    -1,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      -1,   228,   229,   230,    -1,    -1,    -1,   234,   235,   236,
     237,    -1,    -1,    -1,    -1,    -1,    -1,    45,    22,    23,
      24,    25,    26,    27,    28,    29,   253,   254,   255,    -1,
      -1,    35,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,    72,    73,    74,    -1,    76,   276,
      -1,    -1,    -1,    -1,    82,   282,    84,    85,    86,    87,
      88,    89,    90,    91,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,    39,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    -1,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   133,    30,    31,   335,    -1,
      -1,    35,   140,    -1,    38,    -1,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    11,    12,    13,    -1,    45,    -1,
      -1,   159,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,   172,   173,   174,   175,   176,   177,
     178,   179,    39,    -1,    -1,    72,    73,    74,    -1,    76,
      -1,    -1,   190,    -1,    -1,    82,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,    39,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    -1,    18,    19,    20,    21,    -1,
     228,   229,   230,    -1,    -1,    -1,   234,    30,    31,    -1,
      -1,    -1,    35,    -1,    -1,    38,   133,    40,    41,    42,
      43,    44,    -1,   140,    -1,   253,   254,   255,    -1,    -1,
      -1,   259,   260,   261,   262,   263,   264,   265,   266,   267,
      -1,    -1,   159,    -1,    -1,    -1,    -1,    -1,   276,    -1,
      -1,    -1,    -1,    -1,   282,   172,   173,   174,   175,   176,
     177,   178,   179,     1,    -1,     3,     4,     5,    -1,     7,
       8,     9,    10,   190,    -1,    -1,    14,    15,    16,    -1,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    -1,    35,    -1,    -1,
      38,    -1,    40,    41,    42,    43,    44,   335,    -1,    -1,
      -1,   228,   229,   230,    -1,    -1,    -1,   234,   235,   236,
     237,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    34,    -1,   253,   254,   255,    39,
      -1,    -1,   259,   260,   261,   262,   263,   264,   265,   266,
     267,   268,   269,   270,     1,    -1,     3,     4,     5,   276,
       7,     8,     9,    10,    -1,   282,    -1,    14,    15,    16,
      -1,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    35,    -1,
      -1,    38,    -1,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,     1,    -1,     3,     4,     5,    -1,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,   335,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    35,    -1,    -1,    38,
      -1,    40,    41,    42,    43,    44,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    16,    -1,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,
      35,    -1,    -1,    38,    -1,    40,    41,    42,    43,    44,
       1,    -1,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,    20,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,
      41,    42,    43,    44,     1,    -1,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    16,
      -1,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    35,    -1,
      -1,    38,    -1,    40,    41,    42,    43,    44,     1,    -1,
       3,     4,     5,    -1,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    -1,    18,    19,    20,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    35,    -1,    -1,    38,    -1,    40,    41,    42,
      43,    44,     1,    -1,     3,     4,     5,    -1,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    35,    -1,    -1,    38,
      -1,    40,    41,    42,    43,    44,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    16,    -1,    18,    19,    20,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,
      35,    -1,    -1,    38,    -1,    40,    41,    42,    43,    44,
       1,    -1,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,
      41,    42,    43,    44,     1,    -1,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    16,
      -1,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    35,    -1,
      -1,    38,    -1,    40,    41,    42,    43,    44,     1,    -1,
       3,     4,     5,    -1,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    -1,    18,    19,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    35,    -1,    -1,    38,    -1,    40,    41,    42,
      43,    44,     1,    -1,     3,     4,     5,    -1,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,    18,
      19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    35,    -1,    -1,    38,
      -1,    40,    41,    42,    43,    44,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,
      35,    -1,    -1,    38,    -1,    40,    41,    42,    43,    44,
       1,    -1,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,
      41,    42,    43,    44,     1,    -1,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    16,
      -1,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    35,    -1,
      -1,    38,    -1,    40,    41,    42,    43,    44,     1,    -1,
       3,     4,     5,    -1,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    -1,    18,    19,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    35,    -1,    -1,    38,    -1,    40,    41,    42,
      43,    44,     1,    -1,     3,     4,     5,    -1,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,    18,
      19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    35,    -1,    -1,    38,
      -1,    40,    41,    42,    43,    44,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,
      35,    -1,    -1,    38,    -1,    40,    41,    42,    43,    44,
       1,    -1,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,
      41,    42,    43,    44,     1,    -1,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    16,
      -1,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    35,    -1,
      -1,    38,    -1,    40,    41,    42,    43,    44,     1,    -1,
       3,     4,     5,    -1,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    -1,    18,    19,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    35,    -1,    -1,    38,    -1,    40,    41,    42,
      43,    44,     1,    -1,     3,     4,     5,    -1,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,    18,
      19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    35,    -1,    -1,    38,
      -1,    40,    41,    42,    43,    44,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,
      35,    -1,    -1,    38,    -1,    40,    41,    42,    43,    44,
       1,    -1,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,
      41,    42,    43,    44,     1,    -1,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    16,
      -1,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    35,    -1,
      -1,    38,    -1,    40,    41,    42,    43,    44,     1,    -1,
       3,     4,     5,    -1,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    -1,    18,    19,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    35,    -1,    -1,    38,    -1,    40,    41,    42,
      43,    44,     1,    -1,     3,     4,     5,    -1,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,    18,
      19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    35,    -1,    -1,    38,
      -1,    40,    41,    42,    43,    44,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,
      35,    -1,    -1,    38,    -1,    40,    41,    42,    43,    44,
       1,    -1,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,
      -1,    42,    43,    44,     1,    -1,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    16,
      -1,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    35,    -1,
      -1,    38,    -1,    40,     3,    42,    43,    44,     7,     8,
       9,    10,    -1,    -1,     3,    14,    15,    16,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    38,
      -1,    30,    31,    42,    43,    44,    -1,    -1,    -1,    38,
      -1,    -1,     3,    42,    43,    44,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    30,
      31,    34,    -1,    11,    12,    13,    39,    38,    -1,    -1,
      -1,    42,    43,    44,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    11,    12,    13,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
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
      26,    27,    28,    29,    30,    31,    32,    33,    34,    11,
      12,    13,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    11,    12,    13,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    11,    12,    13,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
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
      28,    29,    30,    31,    -1,    -1,    34,    11,    12,    13,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    11,    12,
      13,    -1,    -1,    -1,    -1,    39,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    11,    12,    13,
      -1,    34,    -1,    -1,    -1,    -1,    39,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    11,    12,    13,    -1,
      34,    -1,    -1,    -1,    -1,    39,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    -1,    35,    -1,    37,
      38,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    35,    -1,    -1,    38,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    11,    12,    13,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    11,    12,    13,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    11,    12,    13,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    11,    12,    13,    -1,    -1,    35,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    35,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    39,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    39,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      39,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    39,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    39,    22,    23,    24,    25,    26,
      27,    28,    29,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    22,    23,    24,    25,    26,    27,    28,    29,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    22,    23,    24,
      25,    26,    27,    28,    29,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    35,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      35,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    35,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    35,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    35,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    48,    49,     0,     1,     4,     5,    50,    51,    52,
      58,    77,    78,     6,     6,    35,    38,     3,    59,    53,
      55,    56,    57,    58,    39,    34,    40,    54,    62,    57,
      61,     1,     3,     7,     8,     9,    10,    14,    15,    16,
      18,    19,    21,    30,    31,    38,    41,    42,    43,    44,
      51,    58,    59,    60,    62,    63,    64,    65,    67,    68,
      69,    70,    71,    72,    73,    74,    76,    79,    59,    72,
      72,    72,    38,    38,    38,    67,    38,    38,    72,    72,
      68,    37,    38,    35,    22,    23,    24,    25,    26,    27,
      28,    29,    11,    12,    13,    30,    31,    32,    33,    67,
      67,    67,    35,    67,    59,    66,    67,    39,    67,    67,
      75,    68,    68,    68,    68,    68,    68,    68,    68,    69,
      69,    69,    71,    71,    72,    72,    39,    39,    39,    39,
      37,    35,    35,    34,    39,    60,    67,    66,    67,    20,
      35,    60,    66,    39,    60,    77,    40,    77,     3,     3,
       7,     8,     9,    10,    14,    15,    16,    30,    31,    38,
      42,    43,    44,    59,    69,    70,    71,    72,    74,    79,
      35,    68,    22,    23,    24,    25,    26,    27,    28,    29,
       3,     7,     8,     9,    10,    14,    15,    16,    30,    31,
      38,    42,    43,    44,    59,    68,    69,    70,    71,    72,
      74,    79,     1,    18,    19,    21,    40,    51,    58,    59,
      62,    63,    64,    65,    67,    73,    76,     3,    59,    67,
       3,    59,    61,     3,    59,    72,    72,    72,    38,    38,
      38,    72,    72,    68,    38,    11,    12,    13,    30,    31,
      32,    33,    68,    68,    68,    68,    68,    68,    68,    68,
      72,    72,    72,    38,    38,    38,    72,    72,    68,    38,
      22,    23,    24,    25,    26,    27,    28,    29,    11,    12,
      13,    30,    31,    32,    33,    67,    38,    38,    61,    35,
      37,    35,    37,    41,    67,    67,    67,    39,    75,    69,
      69,    69,    71,    71,    72,    72,    67,    67,    67,    39,
      75,    68,    68,    68,    68,    68,    68,    68,    68,    69,
      69,    69,    71,    71,    72,    72,    35,    67,    66,    41,
      67,    67,    39,    39,    39,    39,    39,    39,    39,    39,
      39,    35,    35,    60,    66,    35,    66,    39,    60
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    50,    51,    53,
      52,    54,    55,    55,    56,    56,    57,    58,    59,    60,
      60,    60,    61,    61,    62,    63,    63,    63,    63,    63,
      63,    64,    64,    65,    66,    66,    67,    67,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    69,    69,    69,
      69,    70,    70,    70,    71,    71,    71,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    73,    74,    74,    74,
      74,    75,    75,    76,    77,    77,    77,    78,    78,    79,
      79,    79,    79
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     2,     0,
       6,     1,     1,     0,     3,     1,     1,     2,     1,     1,
       1,     1,     2,     0,     3,     1,     1,     1,     1,     1,
       2,     5,     7,     9,     3,     1,     1,     0,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       1,     1,     3,     3,     1,     3,     3,     1,     1,     2,
       2,     2,     2,     2,     1,     3,     4,     4,     4,     4,
       4,     3,     1,     3,     1,     1,     1,     2,     2,     1,
       1,     1,     1
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
#line 2821 "src/sintatico.tab.c"
    break;

  case 3: /* lista_de_declaracoes: lista_de_declaracoes declaracao  */
#line 101 "src/sintatico.y"
                                          {
		(yyval.node) = novo_node("lista_de_declaracoes", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 2831 "src/sintatico.tab.c"
    break;

  case 4: /* lista_de_declaracoes: %empty  */
#line 106 "src/sintatico.y"
                        {
		(yyval.node) = (t_node*)0;
		// $$ = novo_node("lista_de_declaracoes", -1, -1);
	}
#line 2840 "src/sintatico.tab.c"
    break;

  case 5: /* declaracao: declaracao_de_variavel  */
#line 113 "src/sintatico.y"
                                 {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("declaracao", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 2850 "src/sintatico.tab.c"
    break;

  case 6: /* declaracao: declaracao_de_funcao  */
#line 118 "src/sintatico.y"
                               {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("declaracao", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 2860 "src/sintatico.tab.c"
    break;

  case 7: /* declaracao: error  */
#line 123 "src/sintatico.y"
                {
		yyerrok;
	}
#line 2868 "src/sintatico.tab.c"
    break;

  case 8: /* declaracao_de_variavel: tipo_de_variavel_id PONTO_VIRGULA  */
#line 129 "src/sintatico.y"
                                          {
		(yyval.node) = novo_node("declaracao_de_variavel", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));

		var_ou_func_atual = "Variavel";
		incrementa_tabela(nome_id_atual);
	}
#line 2880 "src/sintatico.tab.c"
    break;

  case 9: /* $@1: %empty  */
#line 140 "src/sintatico.y"
                                              {
		  incrementa_escopo();
		  
		  var_ou_func_atual = "funcao";
		  incrementa_tabela(nome_id_atual);
	  }
#line 2891 "src/sintatico.tab.c"
    break;

  case 10: /* declaracao_de_funcao: tipo_de_variavel_id ABRE_PARENTESES $@1 parametros FECHA_PARENTESES definicao_de_funcao  */
#line 145 "src/sintatico.y"
                                                            {
		(yyval.node) = novo_node("declaracao_de_funcao", -1, -1);
		// coloca_node_filho($$, $5);
		// coloca_node_filho($$, $3);
		// coloca_node_filho($$, $1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), (yyvsp[-5].node));
	  }
#line 2905 "src/sintatico.tab.c"
    break;

  case 11: /* definicao_de_funcao: bloco_de_comando  */
#line 157 "src/sintatico.y"
                         {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("definicao_de_funcao", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 2915 "src/sintatico.tab.c"
    break;

  case 12: /* parametros: lista_de_parametros  */
#line 165 "src/sintatico.y"
                              {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("parametros", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 2925 "src/sintatico.tab.c"
    break;

  case 13: /* parametros: %empty  */
#line 170 "src/sintatico.y"
                        {
		(yyval.node) = (t_node*)0;
		// $$ = novo_node("parametros", -1, -1);
	}
#line 2934 "src/sintatico.tab.c"
    break;

  case 14: /* lista_de_parametros: lista_de_parametros VIRGULA parametro  */
#line 177 "src/sintatico.y"
                                                {
		(yyval.node) = novo_node("lista_de_parametros", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 2944 "src/sintatico.tab.c"
    break;

  case 15: /* lista_de_parametros: parametro  */
#line 182 "src/sintatico.y"
                    {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("lista_de_parametros", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 2954 "src/sintatico.tab.c"
    break;

  case 16: /* parametro: tipo_de_variavel_id  */
#line 190 "src/sintatico.y"
                              {
		(yyval.node) = novo_node("parametro", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));

		var_ou_func_atual = "Variavel (parametro)";
		incrementa_tabela(nome_id_atual);
	  }
#line 2966 "src/sintatico.tab.c"
    break;

  case 17: /* tipo_de_variavel_id: tipo_de_variavel id  */
#line 200 "src/sintatico.y"
                            {
		(yyval.node) = novo_node(nome_tipo_atual, yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 2975 "src/sintatico.tab.c"
    break;

  case 18: /* id: ID  */
#line 207 "src/sintatico.y"
           {
		// printf(">>%s, %d, %s\n", nome_id_atual, yylineno, var_ou_func_str);
		// incrementa_tabela(nome_id_atual);
		(yyval.node) = novo_node(nome_id_atual, yylineno, coluna);
	}
#line 2985 "src/sintatico.tab.c"
    break;

  case 19: /* comando: bloco_de_comando  */
#line 215 "src/sintatico.y"
                           {
		(yyval.node) = (yyvsp[0].node);
		incrementa_escopo();
		// $$ = novo_node("comando", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 2996 "src/sintatico.tab.c"
    break;

  case 20: /* comando: comando_unico  */
#line 221 "src/sintatico.y"
                        {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3006 "src/sintatico.tab.c"
    break;

  case 21: /* comando: error  */
#line 226 "src/sintatico.y"
                {
		yyerrok;
	}
#line 3014 "src/sintatico.tab.c"
    break;

  case 22: /* comandos: comandos comando  */
#line 232 "src/sintatico.y"
                           {
		(yyval.node) = novo_node("comandos", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3024 "src/sintatico.tab.c"
    break;

  case 23: /* comandos: %empty  */
#line 237 "src/sintatico.y"
                    {
		(yyval.node) = (t_node*)0;
		// $$ = novo_node("comandos", -1, -1);
	}
#line 3033 "src/sintatico.tab.c"
    break;

  case 24: /* bloco_de_comando: ABRE_CHAVES comandos FECHA_CHAVES  */
#line 244 "src/sintatico.y"
                                            {
		// $$ = $2;
		(yyval.node) = novo_node("BLOCO", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
		decrementa_escopo();
	}
#line 3044 "src/sintatico.tab.c"
    break;

  case 25: /* comando_unico: comando_condicional  */
#line 253 "src/sintatico.y"
                              {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3054 "src/sintatico.tab.c"
    break;

  case 26: /* comando_unico: comando_iterativo  */
#line 258 "src/sintatico.y"
                            {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3064 "src/sintatico.tab.c"
    break;

  case 27: /* comando_unico: declaracao_de_variavel  */
#line 263 "src/sintatico.y"
                                 {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3074 "src/sintatico.tab.c"
    break;

  case 28: /* comando_unico: chamada_de_retorno  */
#line 268 "src/sintatico.y"
                             {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3084 "src/sintatico.tab.c"
    break;

  case 29: /* comando_unico: comando_de_atribuicao  */
#line 273 "src/sintatico.y"
                                {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3094 "src/sintatico.tab.c"
    break;

  case 30: /* comando_unico: expressao PONTO_VIRGULA  */
#line 278 "src/sintatico.y"
                                  {
		(yyval.node) = (yyvsp[-1].node);
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3104 "src/sintatico.tab.c"
    break;

  case 31: /* comando_condicional: IF ABRE_PARENTESES expressao FECHA_PARENTESES comando  */
#line 286 "src/sintatico.y"
                                                                          {
		(yyval.node) = novo_node("IF", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3114 "src/sintatico.tab.c"
    break;

  case 32: /* comando_condicional: IF ABRE_PARENTESES expressao FECHA_PARENTESES comando ELSE comando  */
#line 291 "src/sintatico.y"
                                                                             {
		(yyval.node) = novo_node("IF_ELSE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), (yyvsp[-4].node));
	}
#line 3125 "src/sintatico.tab.c"
    break;

  case 33: /* comando_iterativo: FOR ABRE_PARENTESES expressao_for PONTO_VIRGULA expressao_for PONTO_VIRGULA expressao_for FECHA_PARENTESES comando  */
#line 300 "src/sintatico.y"
                                                                                                                             {
		(yyval.node) = novo_node("FOR", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), (yyvsp[-4].node));
		coloca_node_filho((yyval.node), (yyvsp[-6].node));
	}
#line 3137 "src/sintatico.tab.c"
    break;

  case 34: /* expressao_for: id ATRIB expressao  */
#line 310 "src/sintatico.y"
                           {
		(yyval.node) = novo_node("ATRIB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3147 "src/sintatico.tab.c"
    break;

  case 35: /* expressao_for: expressao  */
#line 315 "src/sintatico.y"
                    {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("expressao_for", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3157 "src/sintatico.tab.c"
    break;

  case 36: /* expressao: exp  */
#line 323 "src/sintatico.y"
            {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("expressao", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3167 "src/sintatico.tab.c"
    break;

  case 37: /* expressao: %empty  */
#line 328 "src/sintatico.y"
                        {
		(yyval.node) = (t_node*)0;
		// $$ = novo_node("expressao", -1, -1);
	}
#line 3176 "src/sintatico.tab.c"
    break;

  case 38: /* exp: exp GT exp  */
#line 335 "src/sintatico.y"
                   {
		(yyval.node) = novo_node("GT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3186 "src/sintatico.tab.c"
    break;

  case 39: /* exp: exp LT exp  */
#line 340 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("LT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3196 "src/sintatico.tab.c"
    break;

  case 40: /* exp: exp EQ exp  */
#line 345 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("EQ", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3206 "src/sintatico.tab.c"
    break;

  case 41: /* exp: exp NE exp  */
#line 350 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("NE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3216 "src/sintatico.tab.c"
    break;

  case 42: /* exp: exp LE exp  */
#line 355 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("LE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3226 "src/sintatico.tab.c"
    break;

  case 43: /* exp: exp GE exp  */
#line 360 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("GE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3236 "src/sintatico.tab.c"
    break;

  case 44: /* exp: exp AND exp  */
#line 365 "src/sintatico.y"
                      {
		(yyval.node) = novo_node("AND", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3246 "src/sintatico.tab.c"
    break;

  case 45: /* exp: exp OR exp  */
#line 370 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("OR", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3256 "src/sintatico.tab.c"
    break;

  case 46: /* exp: exp_list  */
#line 375 "src/sintatico.y"
                   {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("exp", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3266 "src/sintatico.tab.c"
    break;

  case 47: /* exp_list: exp_list CONSTRUTOR exp_list  */
#line 383 "src/sintatico.y"
                                     {
		(yyval.node) = novo_node("CONSTRUTOR", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3276 "src/sintatico.tab.c"
    break;

  case 48: /* exp_list: exp_list FILTER exp_list  */
#line 388 "src/sintatico.y"
                                   {
		(yyval.node) = novo_node("FILTER", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3286 "src/sintatico.tab.c"
    break;

  case 49: /* exp_list: exp_list MAP exp_list  */
#line 393 "src/sintatico.y"
                                {
		(yyval.node) = novo_node("MAP", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3296 "src/sintatico.tab.c"
    break;

  case 50: /* exp_list: exp_aritmetica  */
#line 398 "src/sintatico.y"
                         {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("exp_list", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3306 "src/sintatico.tab.c"
    break;

  case 51: /* exp_aritmetica: termo  */
#line 407 "src/sintatico.y"
              {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("exp_aritmetica", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3316 "src/sintatico.tab.c"
    break;

  case 52: /* exp_aritmetica: exp_aritmetica SOMA termo  */
#line 412 "src/sintatico.y"
                                    {
		(yyval.node) = novo_node("SOMA", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3326 "src/sintatico.tab.c"
    break;

  case 53: /* exp_aritmetica: exp_aritmetica SUB termo  */
#line 417 "src/sintatico.y"
                                   {
		(yyval.node) = novo_node("SUB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3336 "src/sintatico.tab.c"
    break;

  case 54: /* termo: fator  */
#line 425 "src/sintatico.y"
              {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("termo", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3346 "src/sintatico.tab.c"
    break;

  case 55: /* termo: termo MULT fator  */
#line 430 "src/sintatico.y"
                           {
		(yyval.node) = novo_node("MULT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3356 "src/sintatico.tab.c"
    break;

  case 56: /* termo: termo DIV fator  */
#line 435 "src/sintatico.y"
                          {
		(yyval.node) = novo_node("DIV", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3366 "src/sintatico.tab.c"
    break;

  case 57: /* fator: constante  */
#line 443 "src/sintatico.y"
                  {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("fator", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3376 "src/sintatico.tab.c"
    break;

  case 58: /* fator: func_call_exp  */
#line 448 "src/sintatico.y"
                        {
		// $$ = $1;
		(yyval.node) = novo_node("func_call_exp", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3386 "src/sintatico.tab.c"
    break;

  case 59: /* fator: SUB fator  */
#line 453 "src/sintatico.y"
                    {
		(yyval.node) = novo_node("SUB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3395 "src/sintatico.tab.c"
    break;

  case 60: /* fator: SOMA fator  */
#line 457 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("SOMA", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3404 "src/sintatico.tab.c"
    break;

  case 61: /* fator: TAIL_OR_NOT fator  */
#line 461 "src/sintatico.y"
                            {
		(yyval.node) = novo_node("TAIL_NOT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3413 "src/sintatico.tab.c"
    break;

  case 62: /* fator: TAIL_POP fator  */
#line 465 "src/sintatico.y"
                         {
		(yyval.node) = novo_node("TAIL_POP", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3422 "src/sintatico.tab.c"
    break;

  case 63: /* fator: HEADER fator  */
#line 469 "src/sintatico.y"
                       {
		(yyval.node) = novo_node("HEADER", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3431 "src/sintatico.tab.c"
    break;

  case 64: /* fator: ID  */
#line 473 "src/sintatico.y"
             {
		verifica_contexto(nome_id_atual);
		(yyval.node) = novo_node(nome_id_atual, yylineno, coluna);
	}
#line 3440 "src/sintatico.tab.c"
    break;

  case 65: /* fator: ABRE_PARENTESES exp FECHA_PARENTESES  */
#line 477 "src/sintatico.y"
                                               {
		// $$ = $2;
		(yyval.node) = novo_node("fator", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3450 "src/sintatico.tab.c"
    break;

  case 66: /* comando_de_atribuicao: id ATRIB expressao PONTO_VIRGULA  */
#line 486 "src/sintatico.y"
                                     {
		verifica_contexto((yyvsp[-3].node)->nome);
		(yyval.node) = novo_node("ATRIB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
		coloca_node_filho((yyval.node), (yyvsp[-3].node));
	}
#line 3461 "src/sintatico.tab.c"
    break;

  case 67: /* func_call_exp: id ABRE_PARENTESES func_call_parameters FECHA_PARENTESES  */
#line 495 "src/sintatico.y"
                                                                   {
		verifica_contexto((yyvsp[-3].node)->nome);
		(yyval.node) = novo_node("my_func_call_exp", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
		coloca_node_filho((yyval.node), (yyvsp[-3].node));
	}
#line 3472 "src/sintatico.tab.c"
    break;

  case 68: /* func_call_exp: READ ABRE_PARENTESES expressao FECHA_PARENTESES  */
#line 501 "src/sintatico.y"
                                                           {
		(yyval.node) = novo_node("READ", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3481 "src/sintatico.tab.c"
    break;

  case 69: /* func_call_exp: WRITE ABRE_PARENTESES expressao FECHA_PARENTESES  */
#line 505 "src/sintatico.y"
                                                            {
		(yyval.node) = novo_node("WRITE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3490 "src/sintatico.tab.c"
    break;

  case 70: /* func_call_exp: WRITELN ABRE_PARENTESES expressao FECHA_PARENTESES  */
#line 509 "src/sintatico.y"
                                                              {
		(yyval.node) = novo_node("WRITELN", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3499 "src/sintatico.tab.c"
    break;

  case 71: /* func_call_parameters: func_call_parameters VIRGULA expressao  */
#line 516 "src/sintatico.y"
                                               {
		(yyval.node) = novo_node("lista_de_expressao", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3509 "src/sintatico.tab.c"
    break;

  case 72: /* func_call_parameters: expressao  */
#line 521 "src/sintatico.y"
                    {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("lista_de_parametros", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3519 "src/sintatico.tab.c"
    break;

  case 73: /* chamada_de_retorno: RETURN expressao PONTO_VIRGULA  */
#line 530 "src/sintatico.y"
                                       {
		(yyval.node) = novo_node("RETURN", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3528 "src/sintatico.tab.c"
    break;

  case 74: /* tipo_de_variavel: INT  */
#line 537 "src/sintatico.y"
              {
		strcpy(nome_tipo_atual, "INT");
	  }
#line 3536 "src/sintatico.tab.c"
    break;

  case 75: /* tipo_de_variavel: FLOAT  */
#line 540 "src/sintatico.y"
                {
		strcpy(nome_tipo_atual, "FLOAT");
	  }
#line 3544 "src/sintatico.tab.c"
    break;

  case 77: /* list: INT LIST  */
#line 547 "src/sintatico.y"
                   {
		strcpy(nome_tipo_atual, "LIST (int)");
	  }
#line 3552 "src/sintatico.tab.c"
    break;

  case 78: /* list: FLOAT LIST  */
#line 550 "src/sintatico.y"
                     {
		strcpy(nome_tipo_atual, "LIST (float)");
	  }
#line 3560 "src/sintatico.tab.c"
    break;

  case 79: /* constante: INTEGER_CONST  */
#line 557 "src/sintatico.y"
                      {
		(yyval.node) = novo_node("INTEGER_CONST", yylineno, coluna);
	}
#line 3568 "src/sintatico.tab.c"
    break;

  case 80: /* constante: FLOAT_CONST  */
#line 560 "src/sintatico.y"
                      {
		(yyval.node) = novo_node("FLOAT_CONST", yylineno, coluna);
	}
#line 3576 "src/sintatico.tab.c"
    break;

  case 81: /* constante: CONSTANTE_NIL  */
#line 563 "src/sintatico.y"
                        {
		(yyval.node) = novo_node("CONSTANTE_NIL", yylineno, coluna);
	}
#line 3584 "src/sintatico.tab.c"
    break;

  case 82: /* constante: STRING_LITERAL  */
#line 566 "src/sintatico.y"
                         {
		(yyval.node) = novo_node("STRING_LITERAL", yylineno, coluna);
	}
#line 3592 "src/sintatico.tab.c"
    break;


#line 3596 "src/sintatico.tab.c"

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

#line 572 "src/sintatico.y"


int yyerror (const char* s) {
	fprintf (stderr, RED"yylineno: %d, na coluna: %d, %s\n"reset, yylineno, coluna, s);
  	return 0;
}

int main()
{
	// printf("1:  ");
	yyparse();
	yylex_destroy();

	mostra_tabela_simbolos();
	destroi_tabela_simbolos();

	printf("\n");
	tree_output_file = fopen("tree_output_file.txt","w");
    fprintf(tree_output_file,"[PROGRAMA");
	imprime_ast(ast, 0);
	destroi_arvore(ast);
    fprintf(tree_output_file,"]");
	fclose(tree_output_file);

	return 0;
}
