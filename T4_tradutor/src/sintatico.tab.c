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

extern int yylex(void);
extern int yylex_destroy(void);
extern int yyerror(const char *s);
extern char* yytext;
extern int yylineno;
extern FILE* yyin;


#line 85 "src/sintatico.tab.c"

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
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_programa = 47,                  /* programa  */
  YYSYMBOL_lista_de_declaracoes = 48,      /* lista_de_declaracoes  */
  YYSYMBOL_declaracao = 49,                /* declaracao  */
  YYSYMBOL_declaracao_de_variavel = 50,    /* declaracao_de_variavel  */
  YYSYMBOL_51_1 = 51,                      /* $@1  */
  YYSYMBOL_declaracao_de_funcao = 52,      /* declaracao_de_funcao  */
  YYSYMBOL_53_2 = 53,                      /* $@2  */
  YYSYMBOL_definicao_de_funcao = 54,       /* definicao_de_funcao  */
  YYSYMBOL_parametros = 55,                /* parametros  */
  YYSYMBOL_lista_de_parametros = 56,       /* lista_de_parametros  */
  YYSYMBOL_parametro = 57,                 /* parametro  */
  YYSYMBOL_tipo_de_variavel_id = 58,       /* tipo_de_variavel_id  */
  YYSYMBOL_id = 59,                        /* id  */
  YYSYMBOL_comando = 60,                   /* comando  */
  YYSYMBOL_61_3 = 61,                      /* $@3  */
  YYSYMBOL_comandos = 62,                  /* comandos  */
  YYSYMBOL_bloco_de_comando = 63,          /* bloco_de_comando  */
  YYSYMBOL_comando_unico = 64,             /* comando_unico  */
  YYSYMBOL_comando_condicional = 65,       /* comando_condicional  */
  YYSYMBOL_comando_iterativo = 66,         /* comando_iterativo  */
  YYSYMBOL_expressao_for = 67,             /* expressao_for  */
  YYSYMBOL_exp_or_empty = 68,              /* exp_or_empty  */
  YYSYMBOL_exp = 69,                       /* exp  */
  YYSYMBOL_exp_list = 70,                  /* exp_list  */
  YYSYMBOL_exp_aritmetica = 71,            /* exp_aritmetica  */
  YYSYMBOL_termo = 72,                     /* termo  */
  YYSYMBOL_fator = 73,                     /* fator  */
  YYSYMBOL_comando_de_atribuicao = 74,     /* comando_de_atribuicao  */
  YYSYMBOL_func_call_exp = 75,             /* func_call_exp  */
  YYSYMBOL_func_call_parameters = 76,      /* func_call_parameters  */
  YYSYMBOL_chamada_de_retorno = 77,        /* chamada_de_retorno  */
  YYSYMBOL_tipo_de_variavel = 78,          /* tipo_de_variavel  */
  YYSYMBOL_list = 79,                      /* list  */
  YYSYMBOL_constante = 80                  /* constante  */
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
#define YYLAST   7014

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  85
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  517

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


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
      45
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    82,    82,    89,    94,   100,   103,   106,   112,   112,
     123,   123,   136,   142,   145,   151,   156,   162,   172,   179,
     185,   185,   188,   191,   197,   202,   208,   216,   219,   222,
     225,   228,   234,   239,   248,   258,   263,   269,   272,   278,
     281,   286,   291,   296,   301,   306,   311,   316,   321,   327,
     332,   337,   342,   349,   352,   357,   365,   368,   373,   381,
     384,   387,   391,   395,   399,   403,   407,   411,   418,   427,
     436,   443,   448,   452,   459,   466,   477,   484,   485,   486,
     490,   491,   496,   499,   502,   505
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
  "STRING", "$accept", "programa", "lista_de_declaracoes", "declaracao",
  "declaracao_de_variavel", "$@1", "declaracao_de_funcao", "$@2",
  "definicao_de_funcao", "parametros", "lista_de_parametros", "parametro",
  "tipo_de_variavel_id", "id", "comando", "$@3", "comandos",
  "bloco_de_comando", "comando_unico", "comando_condicional",
  "comando_iterativo", "expressao_for", "exp_or_empty", "exp", "exp_list",
  "exp_aritmetica", "termo", "fator", "comando_de_atribuicao",
  "func_call_exp", "func_call_parameters", "chamada_de_retorno",
  "tipo_de_variavel", "list", "constante", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300
};
#endif

#define YYPACT_NINF (-257)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-86)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      37,    15,    45,  -257,    70,    76,    99,   109,   123,   131,
      87,    14,    28,    30,    32,    12,    21,   104,   116,   145,
       0,    29,   -28,   -26,   -25,    63,    48,  1057,   163,   221,
      42,  2004,  2103,  4482,  4538,    77,    77,    77,    40,    50,
      73,  1006,    80,   106,    77,    77,  1422,   239,  4563,  4588,
    4613,  2158,   112,   100,  2208,   118,  2255,  1099,  2299,   121,
    1332,  1252,  5113,  4638,  4663,  2343,  4688,  2387,  4713,   122,
    4738,  4763,  4788,   167,  1422,  1422,  6475,  1422,    13,  4813,
    4838,   625,  1006,   872,  2431,  2475,  1006,  1006,  1006,  1006,
    1006,  1006,  1006,  1006,    77,    77,    77,    77,    77,    77,
      77,   147,   711,  1080,  2519,  1453,   115,   173,   178,  4863,
    6489,  4888,   296,    55,  6503,  6517,  6531,  6545,  6559,  6573,
    6587,  6601,  1918,  5134,  5153,  4913,  4938,  4963,  4988,  5013,
    5038,  5063,  1128,  1006,    13,  2563,  1870,  5088,  1696,  6615,
     180,  5427,  3047,  1566,  6629,   181,  3091,  2607,   179,   220,
    4510,   240,  3877,  1306,  1306,  1306,   204,   209,   210,   212,
    1306,  1306,  1422,  3900,  3923,  3946,   217,  5859,   445,   806,
    3969,  3992,  4015,  4038,   222,  1057,   219,  1422,  1422,  1422,
    1422,  1422,  1422,  1422,  1422,  3301,  3325,  1369,  1369,  1369,
     218,   223,   242,   251,  1369,  1369,  1422,  3349,  3373,  3397,
     253,  5445,  1957,  1492,  3421,  3445,  3469,  3493,  1870,  1870,
    1870,  1870,  1870,  1870,  1870,  1870,  6293,  1006,   255,  6307,
     112,   124,   252,  6321,  6335,   225,  6349,  6363,  6643,  1006,
     256,  6657,   112,   136,   257,  6671,  6685,   260,  6699,  6713,
     752,   143,   261,  5867,    56,    65,   294,   299,  4061,  4084,
    4107,   167,  1422,  1422,  1422,  4130,  4153,  5885,  1727,  1306,
    1306,  1306,  1306,  1306,  1306,  1306,  2651,  2695,  5893,  5911,
    5919,  5937,  5945,  5963,  5971,  5989,  3517,  3541,  3565,   167,
    1422,  1422,  1422,  3589,  3613,  5997,  1803,  1369,  1369,  1369,
    1369,  1369,  1369,  1369,  5463,  5481,  5499,  5517,  5535,  5553,
    5571,  5589,  6727,    13,   301,  1006,  1057,  6377,  6391,  6741,
      13,   303,  1006,  1057,  6755,  6769,  1422,   302,  6015,  6023,
    6041,  4176,  4199,    78,   911,  1538,  4463,  4222,  4245,  4268,
    4291,  2739,   304,  6049,  6067,  6075,  3637,  3661,    95,  4406,
    4425,  4444,  3685,  3709,  3733,  3757,  6405,   305,  6419,  6783,
    2783,  6797,   307,  6811,  6825,  2827,  6093,  4314,  4337,  4360,
    3135,  4383,  3781,  3805,  3829,  3179,  3853,    13,  6433,  6447,
      13,  6839,  6853,   170,  1006,   258,  1420,   112,   151,  2070,
     308,  5239,  5257,   312,  5275,  5293,    38,  1006,   313,   529,
     112,   190,   603,   315,   839,   963,   317,  1513,  1608,   318,
     321,  6867,    13,   322,  1006,  3223,  1057,  5311,  5329,  6881,
      13,   324,  1006,  3267,  1057,  1654,  1775,  1566,  1566,  5347,
     325,  5365,  6895,  6101,  1006,   326,  6119,   112,   192,  6127,
     327,  6145,  6153,   330,  6171,  6179,  2871,  1842,   333,  5167,
    6909,  5607,  1006,   331,  5625,   112,   208,  5643,   334,  5661,
    5679,   335,  5697,  5715,  2915,   323,   336,    13,  5383,  6923,
      13,   341,  1006,  1057,  6197,  6205,  5401,    13,  5185,  6937,
      13,   342,  1006,  1057,  5733,  5751,  5203,  1128,  3047,   344,
    6223,   345,  6231,  6951,  2959,   346,  5769,   349,  5787,  6965,
    3003,  6461,  6979,  1566,    13,  6249,  6257,  1566,    13,  5805,
    5823,   352,   350,   353,   359,  3135,  1566,  3179,  1566,  5419,
     356,  5221,   363,  3223,  3267,  6275,  5841
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
       0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -257,  -257,  -257,  -257,     1,   -45,  -257,  -257,  -257,  -257,
    -257,   372,    -2,    23,  -106,   -59,  -165,   -43,   -16,  1874,
      82,   502,   185,   765,  1571,  1713,  1410,   534,   254,  1037,
    -256,   295,    -1,  -257,  1209
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     7,    51,    15,     9,    16,    28,    21,
      22,    23,    52,    69,    54,    55,    31,    29,    56,    57,
      58,   107,   108,    60,    61,    62,    63,    64,    65,    66,
     113,    67,   149,    12,    68
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,    11,   323,     8,     5,     6,    26,   174,   -16,   -17,
     267,   -13,    84,   -16,   -17,     3,    33,    17,    24,   148,
      34,    35,    36,    37,    24,   148,   138,    38,    39,    40,
     338,   -79,    42,   -80,    18,   -81,   144,    -4,    -4,   -14,
     147,    -4,    -4,    44,    45,    -2,     4,    19,   -38,     5,
       6,    46,     5,     6,    53,    48,    49,    50,   -23,    20,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,    25,   166,
      -7,    -7,   -23,   222,    -7,    -7,   -15,   -23,    73,   -77,
     150,   -15,    13,   234,    34,    35,    36,    37,    74,   136,
     -19,    38,    39,    40,   137,   -19,   101,   166,   166,   -18,
     166,   106,   -78,    27,   -18,    14,   200,    44,    45,    -3,
      -3,    75,   136,    -3,    -3,    46,   223,   361,    77,    48,
      49,    50,    -8,    -5,    -5,   -10,   235,    -5,    -5,   136,
     220,    -6,    -6,   219,   366,    -6,    -6,    82,    83,   -19,
     232,   350,   -19,   231,    78,    -9,    -9,    -8,   355,    -9,
      -9,   -18,   133,    83,   -18,   221,    85,   106,   175,   200,
      83,   305,    83,   -11,   -11,   233,   241,   -11,   -11,    53,
     176,   245,   247,   312,    83,   304,   166,   166,   166,   307,
     316,   258,   244,   166,   166,   166,   129,   311,   404,    83,
     -23,   314,   -23,   -23,   -23,   -23,   -23,   -23,   -23,   -23,
     166,   166,   166,   166,   166,   166,   166,   166,   134,   -23,
     200,   200,   200,   -36,   224,   143,    59,   200,   200,   166,
     146,   -12,   -12,   246,   236,   -12,   -12,   412,    83,   462,
      83,   200,   200,   200,   200,   200,   200,   200,   200,   -26,
     -26,   436,   251,   -26,   -26,   472,    83,   252,   253,   454,
     254,   -66,   -66,   -66,   379,   258,   279,   266,   -19,   392,
     308,   280,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   317,   166,   166,   166,   -19,   -66,
     281,   200,   166,   166,   166,   166,   166,   166,   166,   282,
      53,   286,   306,   303,   310,   315,   402,   313,   484,   429,
     -36,   380,   332,   166,   166,   166,   393,   447,   490,   200,
     200,   200,   200,   200,   200,   200,   200,   225,   208,   209,
     210,   211,   212,   213,   214,   215,   106,   237,   242,   -19,
     -75,    59,   403,   106,   -18,   -75,   348,   407,   353,   166,
     367,   357,   370,   362,   381,   411,   430,   408,   406,   394,
     415,   410,   416,   417,   448,   414,   418,   421,   377,   439,
     457,   376,   477,   390,   460,   465,   389,   463,   467,   470,
     475,   491,   492,    53,   473,   478,   482,   488,    53,   493,
     494,   497,   461,   378,   498,   506,   226,   464,   391,   431,
     106,   505,   507,   106,   508,   513,   238,   449,    30,   509,
     471,   511,   514,   427,     0,   474,   426,   515,   516,     0,
       0,   445,     0,     0,   444,     0,     0,     0,   222,   234,
       0,     0,     0,     0,     0,   106,     0,   227,   428,     0,
       0,     0,     0,   106,     0,     0,   446,   239,     0,     0,
     241,   241,   382,     0,     0,     0,   380,   395,   393,     0,
       0,     0,    59,     0,   430,   448,   259,   260,   261,    53,
       0,   223,   235,     0,     0,     0,     0,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   220,   232,    53,   219,   231,
     106,     0,     0,   106,   -48,     0,     0,   432,     0,   381,
     106,   394,     0,   106,     0,   450,     0,   431,   449,     0,
     221,   233,     0,   377,     0,   390,   376,    53,   389,     0,
       0,   427,   445,    53,   426,   444,   241,   106,     0,     0,
     241,   106,     0,     0,     0,     0,     0,     0,   378,   241,
     391,   241,     0,     0,     0,    59,   428,   446,     0,     0,
      59,     0,     0,     0,     0,   383,     0,     0,     0,   -28,
     396,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   224,
     236,     0,     0,   -28,     0,     0,     0,     0,   -28,    70,
      71,    72,     0,     0,     0,     0,     0,     0,    79,    80,
     171,     0,     0,     0,     0,     0,     0,   382,     0,   395,
     433,     0,     0,     0,     0,   432,   450,     0,   451,     0,
       0,     0,   242,   242,     0,     0,     0,     0,   171,   171,
       0,   171,     0,     0,   384,     0,     0,   205,     0,   397,
       0,    59,     0,   413,     0,   -32,   -32,   -32,   -32,   -32,
     -32,   -32,   -32,   127,   128,     0,   140,   -32,     0,    59,
       0,     0,   -32,     0,     0,   145,     0,   177,   178,   179,
     180,   181,   182,   183,   184,   385,     0,     0,     0,   434,
     398,     0,   225,   237,   109,     0,     0,   452,     0,    59,
     205,     0,     0,     0,     0,    59,     0,   171,   242,     0,
       0,     0,   242,     0,     0,     0,     0,   248,   249,   250,
     383,   242,   396,   242,   255,   256,   171,     0,   433,   451,
     435,     0,     0,     0,     0,     0,     0,     0,   453,     0,
       0,   171,   171,   171,   171,   171,   171,   171,   171,     0,
       0,   276,   277,   278,     0,     0,     0,     0,   283,   284,
     171,   226,   238,   177,   178,   179,   180,   181,   182,   183,
     184,     0,   205,   205,   205,   205,   205,   205,   205,   205,
     130,     0,     0,     0,     0,     0,     0,     0,     0,   384,
       0,   397,     0,   -66,   -66,   -66,     0,   434,   452,     0,
       0,     0,   227,   239,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   171,   171,   171,   -19,
     -19,   -66,   205,   171,   171,   171,   171,   171,   329,   330,
     385,     0,   398,     0,     0,   347,    76,     0,   435,   453,
       0,    81,   352,     0,   171,   171,   171,   -52,   -52,   -52,
     205,   205,   205,   205,   205,   205,   344,   345,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   262,   263,     0,   102,
     103,     0,   105,     0,     0,   -52,     0,   110,   112,     0,
     171,   114,   115,   116,   117,   118,   119,   120,   121,   -22,
       0,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   399,
       0,     0,   400,   -22,     0,   185,     0,     0,   -22,   186,
     187,   188,   189,     0,     0,     0,   190,   191,   192,     0,
       0,   193,     0,     0,     0,     0,     0,     0,   139,     0,
       0,   141,   194,   195,   420,     0,     0,     0,   243,     0,
     196,   111,   438,     0,   197,   198,   199,     0,     0,   455,
     456,     0,   259,   260,   261,     0,     0,   257,     0,     0,
       0,     0,     0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,     0,   268,   269,   270,   271,   272,   273,   274,   275,
     -51,   171,   171,     0,     0,     0,     0,     0,     0,   479,
       0,   285,   481,     0,     0,     0,     0,     0,     0,   485,
       0,     0,   487,   294,   295,   296,   297,   298,   299,   300,
     301,     0,   302,   -27,     0,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,     0,   309,   501,   502,   -27,     0,   503,
     504,     0,   -27,     0,     0,     0,     0,     0,   510,   150,
     512,     0,     0,    34,    35,    36,    37,   318,   319,   320,
      38,    39,    40,   112,     0,    42,     0,   171,     0,     0,
       0,   171,     0,     0,     0,     0,    44,    45,     0,     0,
     171,     0,   171,     0,    46,   333,   334,   335,    48,    49,
      50,   112,     0,     0,     0,     0,     0,     0,   -25,     0,
     -25,   -25,   -25,     0,   -25,   -25,   -25,   -25,     0,     0,
     349,   -25,   -25,   -25,     0,   -25,   -25,   354,   -25,     0,
       0,   356,     0,   172,     0,     0,     0,   -25,   -25,     0,
       0,     0,   -25,     0,     0,   -25,     0,   -25,   -25,   -25,
     -25,   -25,   177,   178,   179,   180,   181,   182,   183,   184,
       0,   172,   172,     0,   172,     0,     0,     0,     0,   131,
     206,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   216,
       0,    33,     5,     6,   -39,    34,    35,    36,    37,   401,
       0,     0,    38,    39,    40,     0,   217,    42,     0,   218,
       0,     0,   409,     0,     0,     0,     0,     0,    44,    45,
       0,     0,     0,   -38,     0,     0,    46,     0,   -20,   422,
      48,    49,    50,   206,     0,     0,     0,   440,     0,     0,
     172,     0,   243,   243,     0,     0,     0,     0,     0,   459,
     172,   172,   172,     0,     0,     0,     0,   172,   172,   172,
       0,     0,     0,     0,     0,     0,     0,   469,     0,     0,
       0,     0,     0,     0,   172,   172,   172,   172,   172,   172,
     172,   172,     0,     0,   206,   206,   206,   483,     0,     0,
       0,   206,   206,   172,     0,     0,     0,   489,     0,     0,
       0,     0,     0,     0,     0,   206,   206,   206,   206,   206,
     206,   206,   206,     0,     0,   173,     0,     0,   243,     0,
       0,     0,   243,    94,    95,    96,     0,     0,     0,     0,
       0,   243,     0,   243,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,     0,   173,   173,     0,   173,   -48,     0,   172,
     172,   172,   207,     0,     0,   206,   172,   172,   172,   172,
     172,   172,   172,     0,     0,     0,     0,     0,     0,   151,
       0,     0,     0,   152,   153,   154,   155,   172,   172,   172,
     156,   157,   158,   206,   206,   206,   206,   206,   206,   206,
     206,     0,     0,     0,     0,     0,   160,   161,     0,     0,
       0,     0,     0,     0,   162,   207,     0,     0,   163,   164,
     165,     0,   173,   172,    86,    87,    88,    89,    90,    91,
      92,    93,   173,   173,   173,     0,     0,   -37,     0,   173,
     173,   173,   185,     0,     0,     0,   186,   187,   188,   189,
       0,     0,     0,   190,   191,   192,   173,   173,   173,   173,
     173,   173,   173,   173,     0,     0,   207,   207,   207,   194,
     195,     0,     0,   207,   207,   173,     0,   196,     0,     0,
       0,   197,   198,   199,     0,     0,     0,   207,   207,   207,
     207,   207,   207,   207,   207,   151,     0,     0,     0,   152,
     153,   154,   155,     0,     0,     0,   156,   157,   158,     0,
     -28,   159,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,
       0,     0,   160,   161,   172,   172,   170,     0,     0,   -28,
     162,   173,   173,   173,   163,   164,   165,   207,   173,   173,
     173,   173,   173,   173,   173,   177,   178,   179,   180,   181,
     182,   183,   184,     0,   170,   170,     0,   170,     0,   173,
     173,   173,   132,   204,     0,   207,   207,   207,   207,   207,
     207,   207,   207,   -52,   -52,   -52,     0,   125,   126,     0,
       0,     0,     0,     0,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   290,   291,     0,   173,   -52,     0,     0,     0,
     172,   -52,     0,   -30,   172,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,   172,     0,   172,   204,   -30,     0,   259,
     260,   261,   -30,   170,     0,     0,     0,     0,     0,     0,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,     0,   240,
       0,     0,   170,   152,   153,   154,   155,   -50,     0,     0,
     156,   157,   158,     0,     0,   159,     0,   170,   170,   170,
     170,   170,   170,   170,   170,     0,   160,   161,     0,     0,
       0,     0,     0,     0,   162,   -38,   170,     0,   163,   164,
     165,     0,     0,     0,     0,     0,     0,   168,   204,   204,
     204,   204,   204,   204,   204,   204,   173,   173,   -29,     0,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,
       0,     0,   -29,     0,     0,   168,   168,   -29,   168,     0,
       0,     0,     0,     0,   202,     0,     0,     0,     0,     0,
       0,     0,   170,   170,   170,   122,   123,   124,   204,   170,
     170,   170,   327,   328,   -21,     0,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,     0,     0,     0,     0,   -21,     0,
     170,   170,   170,   -21,     0,     0,   204,   204,   204,   204,
     342,   343,   173,     0,     0,     0,   173,   202,     0,     0,
       0,     0,     0,     0,   168,   173,   142,   173,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,   -32,   170,     0,     0,     0,
     185,   -32,     0,   168,   186,   187,   188,   189,     0,     0,
       0,   190,   191,   192,     0,     0,   193,     0,   168,   168,
     168,   168,   168,   168,   168,   168,     0,   194,   195,   169,
       0,     0,     0,     0,     0,   196,   322,   168,     0,   197,
     198,   199,     0,     0,     0,     0,     0,     0,     0,   202,
     202,   202,   202,   202,   202,   202,   202,   169,   169,     0,
     169,     0,     0,     0,     0,   -31,   203,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,     0,   185,     0,     0,   -31,
     186,   187,   188,   189,   -31,     0,     0,   190,   191,   192,
       0,     0,   193,   168,   168,   168,     0,   170,   170,   202,
     324,   325,   326,   194,   195,     0,     0,     0,     0,     0,
       0,   196,   337,     0,     0,   197,   198,   199,     0,   203,
       0,   168,   168,   168,     0,     0,   169,   202,   339,   340,
     341,     0,   -76,     0,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,     0,   185,     0,   169,   -76,   186,   187,   188,
     189,   -76,     0,     0,   190,   191,   192,   168,     0,   193,
     169,   169,   169,   169,   169,   169,   169,   169,     0,     0,
     194,   195,     0,   170,     0,     0,     0,   170,   196,   169,
       0,     0,   197,   198,   199,     0,   170,     0,   170,     0,
     167,   203,   203,   203,   203,   203,   203,   203,   203,    94,
      95,    96,     0,     0,     0,     0,     0,     0,     0,     0,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   167,   167,
       0,   167,     0,   -51,     0,     0,     0,   201,     0,     0,
       0,     0,     0,     0,     0,   169,   169,   169,   287,   288,
     289,   203,   169,   169,   169,     0,     0,     0,     0,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,   168,   168,
       0,   -48,     0,   169,   169,   169,   -48,     0,     0,   203,
     203,   203,   203,     0,     0,    32,     0,    33,     5,     6,
     201,    34,    35,    36,    37,     0,     0,   167,    38,    39,
      40,     0,    41,    42,     0,    43,     0,     0,     0,   169,
       0,     0,     0,     0,    44,    45,   167,     0,     0,   -38,
       0,     0,    46,     0,   -20,    47,    48,    49,    50,     0,
       0,   167,   167,   167,   167,   167,   167,   167,   167,     0,
       0,     0,     0,     0,   168,     0,     0,     0,   168,     0,
     167,     0,     0,     0,     0,     0,     0,   168,     0,   168,
       0,     0,   201,   201,   201,   201,   201,   201,   201,   201,
     405,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
       0,     0,     0,     0,   -23,     0,   -23,   -23,   -23,   -32,
     -23,   -23,   -23,   -23,     0,     0,     0,   -23,   -23,   -23,
       0,   -23,   -23,     0,   -23,     0,   167,   167,   167,     0,
     169,   169,   201,   -23,   -23,     0,     0,     0,   -23,     0,
       0,   -23,     0,   -23,   -23,   -23,   -23,   -23,     0,     0,
       0,     0,     0,     0,   167,   167,   167,     0,     0,   -28,
     201,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,     0,
       0,     0,   -28,   -28,   -28,     0,   -28,   -28,     0,   -28,
       0,     0,     0,     0,     0,     0,     0,     0,   -28,   -28,
     167,     0,     0,   -28,     0,     0,   -28,     0,   -28,   -28,
     -28,   -28,   -28,     0,     0,     0,   169,     0,     0,   -24,
     169,   -24,   -24,   -24,     0,   -24,   -24,   -24,   -24,   169,
       0,   169,   -24,   -24,   -24,     0,   -24,   -24,     0,   -24,
       0,     0,     0,     0,     0,     0,     0,     0,   -24,   -24,
       0,     0,     0,   -24,     0,     0,   -24,     0,   -24,   -24,
     -24,   -24,   -24,     0,     0,     0,   -22,     0,   -22,   -22,
     -22,     0,   -22,   -22,   -22,   -22,     0,     0,     0,   -22,
     -22,   -22,     0,   -22,   -22,     0,   -22,     0,     0,     0,
       0,     0,     0,     0,     0,   -22,   -22,     0,     0,     0,
     -22,   167,   167,   -22,     0,   -22,   -22,   -22,   -22,   -22,
     -27,     0,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,
       0,     0,     0,   -27,   -27,   -27,     0,   -27,   -27,     0,
     -27,     0,     0,     0,     0,     0,     0,     0,     0,   -27,
     -27,     0,     0,     0,   -27,     0,     0,   -27,     0,   -27,
     -27,   -27,   -27,   -27,   -30,     0,   -30,   -30,   -30,     0,
     -30,   -30,   -30,   -30,     0,     0,     0,   -30,   -30,   -30,
       0,   -30,   -30,     0,   -30,     0,     0,   167,     0,     0,
       0,   167,     0,   -30,   -30,     0,     0,     0,   -30,     0,
     167,   -30,   167,   -30,   -30,   -30,   -30,   -30,   -29,     0,
     -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,     0,     0,
       0,   -29,   -29,   -29,     0,   -29,   -29,     0,   -29,     0,
       0,     0,     0,     0,     0,     0,     0,   -29,   -29,     0,
       0,     0,   -29,     0,     0,   -29,     0,   -29,   -29,   -29,
     -29,   -29,   -21,     0,   -21,   -21,   -21,     0,   -21,   -21,
     -21,   -21,     0,     0,     0,   -21,   -21,   -21,     0,   -21,
     -21,     0,   -21,     0,     0,     0,     0,     0,     0,     0,
       0,   -21,   -21,     0,     0,     0,   -21,     0,     0,   -21,
       0,   -21,   -21,   -21,   -21,   -21,   -31,     0,   -31,   -31,
     -31,     0,   -31,   -31,   -31,   -31,     0,     0,     0,   -31,
     -31,   -31,     0,   -31,   -31,     0,   -31,     0,     0,     0,
       0,     0,     0,     0,     0,   -31,   -31,     0,     0,     0,
     -31,     0,     0,   -31,     0,   -31,   -31,   -31,   -31,   -31,
     -76,     0,   -76,   -76,   -76,     0,   -76,   -76,   -76,   -76,
       0,     0,     0,   -76,   -76,   -76,     0,   -76,   -76,     0,
     -76,     0,     0,     0,     0,     0,     0,     0,     0,   -76,
     -76,     0,     0,     0,   -76,     0,     0,   -76,     0,   -76,
     -76,   -76,   -76,   -76,   -68,     0,   -68,   -68,   -68,     0,
     -68,   -68,   -68,   -68,     0,     0,     0,   -68,   -68,   -68,
       0,   -68,   -68,     0,   -68,     0,     0,     0,     0,     0,
       0,     0,     0,   -68,   -68,     0,     0,     0,   -68,     0,
       0,   -68,     0,   -68,   -68,   -68,   -68,   -68,   -34,     0,
     -34,   -34,   -34,     0,   -34,   -34,   -34,   -34,     0,     0,
       0,   -34,   -34,   -34,     0,   -34,   -34,     0,   -34,     0,
       0,     0,     0,     0,     0,     0,     0,   -34,   -34,     0,
       0,     0,   -34,     0,     0,   -34,     0,   -34,   -34,   -34,
     -34,   -34,    -9,     0,    -9,    -9,    -9,     0,    -9,    -9,
      -9,    -9,     0,     0,     0,    -9,    -9,    -9,     0,    -9,
      -9,     0,    -9,     0,     0,     0,     0,     0,     0,     0,
       0,    -9,    -9,     0,     0,     0,    -9,     0,     0,    -9,
       0,    -9,    -9,    -9,    -9,    -9,    32,     0,    33,     5,
       6,     0,    34,    35,    36,    37,     0,     0,     0,    38,
      39,    40,     0,    41,    42,     0,    43,     0,     0,     0,
       0,     0,     0,     0,     0,    44,    45,     0,     0,     0,
     -38,     0,     0,    46,     0,   -20,   331,    48,    49,    50,
     -26,     0,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,
       0,     0,     0,   -26,   -26,   -26,     0,   -26,   -26,     0,
     -26,     0,     0,     0,     0,     0,     0,     0,     0,   -26,
     -26,     0,     0,     0,   -26,     0,     0,   -26,     0,   -26,
     -26,   -26,   -26,   -26,    32,     0,    33,     5,     6,     0,
      34,    35,    36,    37,     0,     0,     0,    38,    39,    40,
       0,    41,    42,     0,    43,     0,     0,     0,     0,     0,
       0,     0,     0,    44,    45,     0,     0,     0,   -38,     0,
       0,    46,     0,   -20,   369,    48,    49,    50,    32,     0,
      33,     5,     6,     0,    34,    35,    36,    37,     0,     0,
       0,    38,    39,    40,     0,    41,    42,     0,    43,     0,
       0,     0,     0,     0,     0,     0,     0,    44,    45,     0,
       0,     0,   -38,     0,     0,    46,     0,   -20,   372,    48,
      49,    50,    32,     0,    33,     5,     6,     0,    34,    35,
      36,    37,     0,     0,     0,    38,    39,    40,     0,    41,
      42,     0,    43,     0,     0,     0,     0,     0,     0,     0,
       0,    44,    45,     0,     0,     0,   -38,     0,     0,    46,
       0,   -20,   466,    48,    49,    50,    32,     0,    33,     5,
       6,     0,    34,    35,    36,    37,     0,     0,     0,    38,
      39,    40,     0,    41,    42,     0,    43,     0,     0,     0,
       0,     0,     0,     0,     0,    44,    45,     0,     0,     0,
     -38,     0,     0,    46,     0,   -20,   476,    48,    49,    50,
      32,     0,    33,     5,     6,     0,    34,    35,    36,    37,
       0,     0,     0,    38,    39,    40,     0,    41,    42,     0,
      43,     0,     0,     0,     0,     0,     0,     0,     0,    44,
      45,     0,     0,     0,   -38,     0,     0,    46,     0,   -20,
     496,    48,    49,    50,    32,     0,    33,     5,     6,     0,
      34,    35,    36,    37,     0,     0,     0,    38,    39,    40,
       0,    41,    42,     0,    43,     0,     0,     0,     0,     0,
       0,     0,     0,    44,    45,     0,     0,     0,   -38,     0,
       0,    46,     0,   -20,   500,    48,    49,    50,   228,     0,
      33,     5,     6,     0,    34,    35,    36,    37,     0,     0,
       0,    38,    39,    40,     0,   229,    42,     0,   230,     0,
       0,     0,     0,     0,     0,     0,     0,    44,    45,     0,
       0,     0,   -38,     0,     0,    46,     0,   -20,     0,    48,
      49,    50,    32,     0,    33,     5,     6,     0,    34,    35,
      36,    37,     0,     0,     0,    38,    39,    40,     0,    41,
      42,     0,    43,     0,     0,     0,     0,     0,     0,     0,
       0,    44,    45,     0,     0,     0,   -38,     0,     0,    46,
       0,   -20,     0,    48,    49,    50,   373,     0,    33,     5,
       6,     0,    34,    35,    36,    37,     0,     0,     0,    38,
      39,    40,     0,   374,    42,     0,   375,     0,     0,     0,
       0,     0,     0,     0,     0,    44,    45,     0,     0,     0,
     -38,     0,     0,    46,     0,   -20,     0,    48,    49,    50,
     386,     0,    33,     5,     6,     0,    34,    35,    36,    37,
       0,     0,     0,    38,    39,    40,     0,   387,    42,     0,
     388,     0,     0,     0,     0,     0,     0,     0,     0,    44,
      45,     0,     0,     0,   -38,     0,     0,    46,     0,   -20,
       0,    48,    49,    50,   423,     0,    33,     5,     6,     0,
      34,    35,    36,    37,     0,     0,     0,    38,    39,    40,
       0,   424,    42,     0,   425,     0,     0,     0,     0,     0,
       0,     0,     0,    44,    45,     0,     0,     0,   -38,     0,
       0,    46,     0,   -20,     0,    48,    49,    50,   441,     0,
      33,     5,     6,     0,    34,    35,    36,    37,     0,     0,
       0,    38,    39,    40,     0,   442,    42,     0,   443,     0,
       0,     0,     0,     0,     0,     0,     0,    44,    45,     0,
       0,     0,   -38,     0,     0,    46,     0,   -20,     0,    48,
      49,    50,   -66,   -66,   -66,     0,     0,     0,     0,     0,
       0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -84,   -84,   -84,   -19,
     -66,     0,     0,     0,     0,     0,     0,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -83,   -83,   -83,     0,   -84,     0,     0,     0,     0,     0,
       0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -82,   -82,   -82,     0,   -83,     0,
       0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -85,   -85,
     -85,     0,   -82,     0,     0,     0,     0,     0,     0,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -53,   -53,   -53,     0,   -85,     0,     0,     0,
       0,     0,     0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   292,   293,   -53,   -56,   -56,   -56,     0,
     -53,     0,     0,     0,     0,     0,     0,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -60,   -60,   -60,     0,   -56,     0,     0,     0,     0,     0,
       0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -59,   -59,   -59,     0,   -60,     0,
       0,     0,     0,     0,     0,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -63,   -63,
     -63,     0,   -59,     0,     0,     0,     0,     0,     0,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -65,   -65,   -65,     0,   -63,     0,     0,     0,
       0,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -64,   -64,   -64,     0,
     -65,     0,     0,     0,     0,     0,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -62,   -62,   -62,     0,   -64,     0,     0,     0,     0,     0,
       0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -61,   -61,   -61,     0,   -62,     0,
       0,     0,     0,     0,     0,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -67,   -67,
     -67,     0,   -61,     0,     0,     0,     0,     0,     0,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -70,   -70,   -70,     0,   -67,     0,     0,     0,
       0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -54,   -54,   -54,     0,
     -70,     0,     0,     0,     0,     0,     0,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   292,   293,   -54,
     -55,   -55,   -55,     0,   -54,     0,     0,     0,     0,     0,
       0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   292,   293,   -55,   -57,   -57,   -57,     0,   -55,     0,
       0,     0,     0,     0,     0,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -58,   -58,
     -58,     0,   -57,     0,     0,     0,     0,     0,     0,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -71,   -71,   -71,     0,   -58,     0,     0,     0,
       0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -72,   -72,   -72,     0,
     -71,     0,     0,     0,     0,     0,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -73,   -73,   -73,     0,   -72,     0,     0,     0,     0,     0,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -69,   -69,   -69,     0,   -73,     0,
       0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -84,   -84,
     -84,     0,   -69,     0,     0,     0,     0,     0,     0,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -83,   -83,   -83,     0,     0,   -84,     0,     0,     0,
       0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -82,   -82,   -82,     0,     0,   -83,
       0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -85,   -85,   -85,
       0,     0,   -82,     0,     0,     0,     0,     0,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,
     -53,   -53,   -53,     0,     0,   -85,     0,     0,     0,     0,
       0,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   264,   265,   -56,   -56,   -56,     0,     0,   -53,     0,
       0,     0,     0,     0,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -60,   -60,   -60,     0,
       0,   -56,     0,     0,     0,     0,     0,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -59,
     -59,   -59,     0,     0,   -60,     0,     0,     0,     0,     0,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -63,   -63,   -63,     0,     0,   -59,     0,     0,
       0,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -65,   -65,   -65,     0,     0,
     -63,     0,     0,     0,     0,     0,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -64,   -64,
     -64,     0,     0,   -65,     0,     0,     0,     0,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -62,   -62,   -62,     0,     0,   -64,     0,     0,     0,
       0,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -61,   -61,   -61,     0,     0,   -62,
       0,     0,     0,     0,     0,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -67,   -67,   -67,
       0,     0,   -61,     0,     0,     0,     0,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -70,   -70,   -70,     0,     0,   -67,     0,     0,     0,     0,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -54,   -54,   -54,     0,     0,   -70,     0,
       0,     0,     0,     0,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   264,   265,   -55,   -55,   -55,     0,
       0,   -54,     0,     0,     0,     0,     0,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   264,   265,   -57,
     -57,   -57,     0,     0,   -55,     0,     0,     0,     0,     0,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -58,   -58,   -58,     0,     0,   -57,     0,     0,
       0,     0,     0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -71,   -71,   -71,     0,     0,
     -58,     0,     0,     0,     0,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -72,   -72,
     -72,     0,     0,   -71,     0,     0,     0,     0,     0,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -73,   -73,   -73,     0,     0,   -72,     0,     0,     0,
       0,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -69,   -69,   -69,     0,     0,   -73,
       0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   287,   288,   289,
       0,     0,   -69,     0,     0,     0,     0,     0,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   287,   288,   289,     0,
     -51,     0,     0,     0,     0,   -51,     0,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,   -50,   287,   288,   289,     0,   -50,
       0,     0,     0,     0,   -50,     0,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   259,   260,   261,     0,   -49,     0,
       0,     0,     0,   -49,     0,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,   -66,   -66,   -66,     0,     0,     0,     0,
       0,     0,   -49,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,     0,   -66,     0,   -19,
     -19,   -66,   -66,   -66,     0,     0,     0,     0,     0,     0,
       0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,   -66,     0,     0,   -19,   -84,
     -84,   -84,     0,     0,     0,     0,     0,     0,     0,     0,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,     0,   -84,   -83,   -83,   -83,     0,     0,     0,
       0,     0,     0,     0,     0,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,   -82,
     -82,   -82,     0,     0,     0,     0,     0,     0,     0,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,     0,   -82,   -85,   -85,   -85,     0,     0,     0,
       0,     0,     0,     0,     0,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,     0,   -85,   -53,
     -53,   -53,     0,     0,     0,     0,     0,     0,     0,     0,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
      99,   100,     0,   -53,   -56,   -56,   -56,     0,     0,     0,
       0,     0,     0,     0,     0,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,     0,   -56,   -60,
     -60,   -60,     0,     0,     0,     0,     0,     0,     0,     0,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,     0,   -60,   -59,   -59,   -59,     0,     0,     0,
       0,     0,     0,     0,     0,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,     0,   -59,   -63,
     -63,   -63,     0,     0,     0,     0,     0,     0,     0,     0,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,     0,   -63,   -65,   -65,   -65,     0,     0,     0,
       0,     0,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,     0,   -65,   -64,
     -64,   -64,     0,     0,     0,     0,     0,     0,     0,     0,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,     0,   -64,   -62,   -62,   -62,     0,     0,     0,
       0,     0,     0,     0,     0,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,     0,   -62,   -61,
     -61,   -61,     0,     0,     0,     0,     0,     0,     0,     0,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,     0,   -61,   -67,   -67,   -67,     0,     0,     0,
       0,     0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,     0,   -67,   -70,
     -70,   -70,     0,     0,     0,     0,     0,     0,     0,     0,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,     0,   -70,   -54,   -54,   -54,     0,     0,     0,
       0,     0,     0,     0,     0,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,    99,   100,     0,   -54,   -55,
     -55,   -55,     0,     0,     0,     0,     0,     0,     0,     0,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
      99,   100,     0,   -55,   -57,   -57,   -57,     0,     0,     0,
       0,     0,     0,     0,     0,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,   -57,   -58,
     -58,   -58,     0,     0,     0,     0,     0,     0,     0,     0,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,     0,   -58,   -71,   -71,   -71,     0,     0,     0,
       0,     0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,   -71,   -72,
     -72,   -72,     0,     0,     0,     0,     0,     0,     0,     0,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,     0,   -72,   -73,   -73,   -73,     0,     0,     0,
       0,     0,     0,     0,     0,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,     0,   -73,   -69,
     -69,   -69,     0,     0,     0,     0,     0,     0,     0,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,     0,   -69,   -52,   -52,   -52,     0,     0,     0,
       0,     0,     0,     0,     0,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,    97,    98,    94,    95,    96,   -52,     0,
       0,     0,     0,     0,     0,     0,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,    94,    95,    96,     0,     0,   -50,
       0,     0,     0,     0,     0,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,     0,     0,     0,     0,    -9,   -49,    -9,
      -9,    -9,    -9,    -9,    -9,    -9,    -9,     0,     0,     0,
       0,    -9,     0,     0,     0,   -68,    -9,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,   -68,
       0,     0,     0,   -26,   -68,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,     0,     0,     0,     0,   -26,     0,     0,
       0,   -34,   -26,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,     0,     0,     0,     0,   -34,     0,     0,     0,   -22,
     -34,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,
       0,     0,     0,     0,     0,     0,     0,   -27,   -22,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,     0,
       0,     0,     0,     0,     0,   -30,   -27,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,     0,     0,     0,     0,     0,
       0,     0,     0,   -29,   -30,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,     0,     0,     0,     0,     0,     0,     0,
       0,   -21,   -29,   -21,   -21,   -21,   -21,   -21,   -21,   -21,
     -21,     0,     0,     0,     0,     0,     0,     0,     0,   -31,
     -21,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,
       0,     0,     0,     0,     0,     0,     0,   -76,   -31,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,     0,     0,     0,     0,    -9,   -76,    -9,    -9,    -9,
      -9,    -9,    -9,    -9,    -9,     0,     0,     0,     0,     0,
       0,     0,     0,   -68,    -9,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,     0,
       0,   -26,   -68,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,     0,     0,     0,     0,     0,     0,     0,     0,   -34,
     -26,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   208,
     209,   210,   211,   212,   213,   214,   215,     0,   -34,     0,
       0,   -74,     0,     0,     0,     0,   -74,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,     0,     0,     0,     0,   -39,
       0,     0,     0,     0,   -39,   -46,   -46,   210,   211,   212,
     213,   214,   215,     0,     0,     0,     0,   -46,     0,     0,
       0,     0,   -46,   -47,   -47,   210,   211,   212,   213,   214,
     215,     0,     0,     0,     0,   -47,     0,     0,     0,     0,
     -47,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,
       0,     0,     0,   -41,     0,     0,     0,     0,   -41,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,     0,
       0,   -44,     0,     0,     0,     0,   -44,   -42,   -42,   210,
     211,   -42,   213,   214,   -42,     0,     0,     0,     0,   -42,
       0,     0,     0,     0,   -42,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,     0,     0,     0,     0,   -40,     0,     0,
       0,     0,   -40,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,     0,     0,     0,     0,   -45,     0,     0,     0,     0,
     -45,   -43,   -43,   210,   211,   -43,   213,   214,   -43,     0,
       0,     0,     0,   -43,     0,     0,     0,     0,   -43,   -23,
     -23,   -23,   -23,   -23,   -23,   -23,   -23,     0,     0,     0,
       0,   -23,     0,     0,     0,     0,   -23,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,     0,     0,     0,     0,   -28,
       0,     0,     0,     0,   -28,   -33,   -33,   -33,   -33,   -33,
     -33,   -33,   -33,     0,     0,     0,     0,   -33,     0,     0,
       0,     0,   -33,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,     0,     0,     0,     0,   -22,     0,     0,     0,     0,
     -22,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,
       0,     0,     0,   -27,     0,     0,     0,     0,   -27,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,     0,
       0,   -30,     0,     0,     0,     0,   -30,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,     0,     0,     0,     0,   -29,
       0,     0,     0,     0,   -29,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,     0,     0,     0,     0,   -21,     0,     0,
       0,     0,   -21,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,     0,     0,     0,     0,   -31,     0,     0,     0,     0,
     -31,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,
       0,     0,     0,   -76,     0,     0,     0,     0,   -76,    -9,
      -9,    -9,    -9,    -9,    -9,    -9,    -9,     0,     0,     0,
       0,    -9,     0,     0,     0,     0,    -9,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,     0,     0,     0,     0,   -68,
       0,     0,     0,     0,   -68,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,     0,     0,     0,     0,   -26,     0,     0,
       0,     0,   -26,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,     0,     0,     0,     0,   -34,     0,     0,     0,     0,
     -34,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   177,
     178,   179,   180,   181,   182,   183,   184,     0,   -39,     0,
       0,     0,     0,     0,     0,     0,   -37,   177,   178,   179,
     180,   181,   182,   183,   184,   -46,   -46,   179,   180,   181,
     182,   183,   184,     0,   321,     0,     0,     0,     0,     0,
       0,     0,   -46,   -47,   -47,   179,   180,   181,   182,   183,
     184,   -41,   -41,   -41,   -41,   -41,   -41,   -41,   -41,     0,
     -47,     0,     0,     0,     0,     0,     0,     0,   -41,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,   -42,   -42,   179,
     180,   -42,   182,   183,   -42,     0,   -44,     0,     0,     0,
       0,     0,     0,     0,   -42,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
     -45,     0,   -40,     0,     0,     0,     0,     0,     0,     0,
     -45,   -43,   -43,   179,   180,   -43,   182,   183,   -43,   177,
     178,   179,   180,   181,   182,   183,   184,     0,   -43,     0,
       0,     0,     0,     0,     0,     0,   336,   177,   178,   179,
     180,   181,   182,   183,   184,   177,   178,   179,   180,   181,
     182,   183,   184,     0,   358,     0,     0,     0,     0,     0,
       0,     0,   359,   177,   178,   179,   180,   181,   182,   183,
     184,   177,   178,   179,   180,   181,   182,   183,   184,     0,
     360,     0,     0,     0,     0,     0,     0,     0,   363,   177,
     178,   179,   180,   181,   182,   183,   184,   177,   178,   179,
     180,   181,   182,   183,   184,     0,   364,     0,     0,     0,
       0,     0,     0,     0,   365,   177,   178,   179,   180,   181,
     182,   183,   184,   -23,   -23,   -23,   -23,   -23,   -23,   -23,
     -23,     0,   -35,     0,     0,     0,     0,     0,     0,     0,
     -23,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,   -28,     0,
       0,     0,     0,     0,     0,     0,   -33,   -22,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,     0,   -22,     0,     0,     0,     0,     0,
       0,     0,   -27,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,
     -30,     0,     0,     0,     0,     0,     0,     0,   -29,   -21,
     -21,   -21,   -21,   -21,   -21,   -21,   -21,   -31,   -31,   -31,
     -31,   -31,   -31,   -31,   -31,     0,   -21,     0,     0,     0,
       0,     0,     0,     0,   -31,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,    -9,    -9,    -9,    -9,    -9,    -9,    -9,
      -9,     0,   -76,     0,     0,     0,     0,     0,     0,     0,
      -9,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,   -68,     0,
       0,     0,     0,     0,     0,     0,   -26,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,     0,     0,     0,     0,     0,
       0,     0,     0,   -23,   -34,   -23,   -23,   -23,   -23,   -23,
     -23,   -23,   -23,     0,     0,     0,     0,   -28,   -23,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,     0,
       0,   -22,   -28,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,     0,     0,     0,     0,   -27,   -22,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,     0,     0,     0,     0,   -30,
     -27,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,
       0,     0,     0,   -29,   -30,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,     0,     0,     0,     0,   -21,   -29,   -21,
     -21,   -21,   -21,   -21,   -21,   -21,   -21,     0,     0,     0,
       0,   -31,   -21,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,     0,     0,     0,     0,   -76,   -31,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,     0,     0,     0,     0,    -9,
     -76,    -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,     0,
       0,     0,     0,   -68,    -9,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,     0,     0,     0,   -26,   -68,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,     0,     0,
       0,   -34,   -26,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,     0,     0,     0,     0,     0,   -34,    86,    87,    88,
      89,    90,    91,    92,    93,     0,     0,     0,     0,     0,
     104,    86,    87,    88,    89,    90,    91,    92,    93,     0,
       0,     0,     0,     0,   135,   -46,   -46,    88,    89,    90,
      91,    92,    93,     0,     0,     0,     0,     0,   -46,   -47,
     -47,    88,    89,    90,    91,    92,    93,     0,     0,     0,
       0,     0,   -47,   -41,   -41,   -41,   -41,   -41,   -41,   -41,
     -41,     0,     0,     0,     0,     0,   -41,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -44,     0,     0,     0,     0,     0,
     -44,   -42,   -42,    88,    89,   -42,    91,    92,   -42,     0,
       0,     0,     0,     0,   -42,   -40,   -40,   -40,   -40,   -40,
     -40,   -40,   -40,     0,     0,     0,     0,     0,   -40,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,
       0,     0,   -45,   -43,   -43,    88,    89,   -43,    91,    92,
     -43,     0,     0,     0,     0,     0,   -43,    86,    87,    88,
      89,    90,    91,    92,    93,     0,     0,     0,     0,     0,
     -35,   -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,
       0,     0,     0,     0,   -33,   -23,   -23,   -23,   -23,   -23,
     -23,   -23,   -23,     0,     0,     0,     0,     0,   -23,   -28,
     -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,     0,     0,
       0,     0,   -28,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,     0,     0,     0,     0,     0,   -22,   -27,   -27,   -27,
     -27,   -27,   -27,   -27,   -27,     0,     0,     0,     0,     0,
     -27,   -30,   -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,
       0,     0,     0,     0,   -30,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,     0,     0,     0,     0,     0,   -29,    86,
      87,    88,    89,    90,    91,    92,    93,     0,     0,     0,
       0,     0,   346,    86,    87,    88,    89,    90,    91,    92,
      93,     0,     0,     0,     0,     0,   351,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,   -21,     0,     0,     0,     0,     0,
     -21,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,
       0,     0,     0,     0,   -31,    86,    87,    88,    89,    90,
      91,    92,    93,     0,     0,     0,     0,     0,   368,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,     0,     0,     0,
       0,     0,   -76,    -9,    -9,    -9,    -9,    -9,    -9,    -9,
      -9,     0,     0,     0,     0,     0,    -9,    86,    87,    88,
      89,    90,    91,    92,    93,     0,     0,     0,     0,     0,
     371,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,     0,
       0,     0,     0,     0,   -68,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,     0,     0,     0,     0,     0,   -26,    86,
      87,    88,    89,    90,    91,    92,    93,     0,     0,     0,
       0,     0,   419,    86,    87,    88,    89,    90,    91,    92,
      93,     0,     0,     0,     0,     0,   437,    86,    87,    88,
      89,    90,    91,    92,    93,     0,     0,     0,     0,     0,
     458,    86,    87,    88,    89,    90,    91,    92,    93,     0,
       0,     0,     0,     0,   468,    86,    87,    88,    89,    90,
      91,    92,    93,     0,     0,     0,     0,     0,   480,    86,
      87,    88,    89,    90,    91,    92,    93,     0,     0,     0,
       0,     0,   486,    86,    87,    88,    89,    90,    91,    92,
      93,     0,     0,     0,     0,     0,   495,    86,    87,    88,
      89,    90,    91,    92,    93,     0,     0,     0,     0,     0,
     499,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,
       0,     0,     0,     0,   -34
};

static const yytype_int16 yycheck[] =
{
       2,     2,   258,     2,     4,     5,    34,    52,    34,    34,
     175,    39,    55,    39,    39,     0,     3,     3,    20,    20,
       7,     8,     9,    10,    26,    26,   132,    14,    15,    16,
     286,     3,    19,     3,    11,     3,   142,     0,     1,    39,
     146,     4,     5,    30,    31,     0,     1,    35,    35,     4,
       5,    38,     4,     5,    31,    42,    43,    44,    20,    38,
      22,    23,    24,    25,    26,    27,    28,    29,    39,    46,
       0,     1,    34,   132,     4,     5,    34,    39,    38,     3,
       3,    39,     6,   142,     7,     8,     9,    10,    38,    34,
      34,    14,    15,    16,    39,    39,    73,    74,    75,    34,
      77,    78,     3,    40,    39,     6,    83,    30,    31,     0,
       1,    38,    34,     4,     5,    38,   132,    39,    38,    42,
      43,    44,    35,     0,     1,    38,   142,     4,     5,    34,
     132,     0,     1,   132,    39,     4,     5,    37,    38,    35,
     142,   306,    38,   142,    38,     0,     1,    35,   313,     4,
       5,    35,    37,    38,    38,   132,    35,   134,    40,   136,
      38,    37,    38,     0,     1,   142,   143,     4,     5,   146,
       3,   148,   149,    37,    38,   220,   153,   154,   155,   222,
      37,    38,     3,   160,   161,   162,    39,   232,    37,    38,
      20,   234,    22,    23,    24,    25,    26,    27,    28,    29,
     177,   178,   179,   180,   181,   182,   183,   184,    35,    39,
     187,   188,   189,    35,   132,    35,    31,   194,   195,   196,
      39,     0,     1,     3,   142,     4,     5,    37,    38,    37,
      38,   208,   209,   210,   211,   212,   213,   214,   215,     0,
       1,   406,    38,     4,     5,    37,    38,    38,    38,   414,
      38,    11,    12,    13,   360,    38,    38,    35,    39,   365,
      35,    38,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,   251,   252,   253,   254,    38,    39,
      38,   258,   259,   260,   261,   262,   263,   264,   265,    38,
     267,    38,    40,    38,    38,    35,    38,    40,   463,   405,
      39,   360,   279,   280,   281,   282,   365,   413,   473,   286,
     287,   288,   289,   290,   291,   292,   293,   132,    22,    23,
      24,    25,    26,    27,    28,    29,   303,   142,   143,    35,
      34,   146,   377,   310,    35,    39,    35,   380,    35,   316,
      35,    39,    35,    39,   360,   390,   405,    35,    40,   365,
     393,    38,    35,    35,   413,    40,    35,    35,   360,    35,
      35,   360,    39,   365,    38,    35,   365,    40,    35,    38,
      35,   477,   478,   350,    40,    39,    35,    35,   355,    35,
      35,    35,   427,   360,    35,    35,   132,   430,   365,   405,
     367,    39,    39,   370,    35,    39,   142,   413,    26,   505,
     445,   507,    39,   405,    -1,   448,   405,   513,   514,    -1,
      -1,   413,    -1,    -1,   413,    -1,    -1,    -1,   477,   478,
      -1,    -1,    -1,    -1,    -1,   402,    -1,   132,   405,    -1,
      -1,    -1,    -1,   410,    -1,    -1,   413,   142,    -1,    -1,
     417,   418,   360,    -1,    -1,    -1,   505,   365,   507,    -1,
      -1,    -1,   267,    -1,   513,   514,    11,    12,    13,   436,
      -1,   477,   478,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,   477,   478,   454,   477,   478,
     457,    -1,    -1,   460,    39,    -1,    -1,   405,    -1,   505,
     467,   507,    -1,   470,    -1,   413,    -1,   513,   514,    -1,
     477,   478,    -1,   505,    -1,   507,   505,   484,   507,    -1,
      -1,   513,   514,   490,   513,   514,   493,   494,    -1,    -1,
     497,   498,    -1,    -1,    -1,    -1,    -1,    -1,   505,   506,
     507,   508,    -1,    -1,    -1,   350,   513,   514,    -1,    -1,
     355,    -1,    -1,    -1,    -1,   360,    -1,    -1,    -1,    20,
     365,    22,    23,    24,    25,    26,    27,    28,    29,   477,
     478,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    35,
      36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,   505,    -1,   507,
     405,    -1,    -1,    -1,    -1,   513,   514,    -1,   413,    -1,
      -1,    -1,   417,   418,    -1,    -1,    -1,    -1,    74,    75,
      -1,    77,    -1,    -1,   360,    -1,    -1,    83,    -1,   365,
      -1,   436,    -1,    20,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    99,   100,    -1,   134,    34,    -1,   454,
      -1,    -1,    39,    -1,    -1,   143,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,   360,    -1,    -1,    -1,   405,
     365,    -1,   477,   478,    39,    -1,    -1,   413,    -1,   484,
     136,    -1,    -1,    -1,    -1,   490,    -1,   143,   493,    -1,
      -1,    -1,   497,    -1,    -1,    -1,    -1,   153,   154,   155,
     505,   506,   507,   508,   160,   161,   162,    -1,   513,   514,
     405,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   413,    -1,
      -1,   177,   178,   179,   180,   181,   182,   183,   184,    -1,
      -1,   187,   188,   189,    -1,    -1,    -1,    -1,   194,   195,
     196,   477,   478,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,   208,   209,   210,   211,   212,   213,   214,   215,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   505,
      -1,   507,    -1,    11,    12,    13,    -1,   513,   514,    -1,
      -1,    -1,   477,   478,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,   252,   253,   254,    37,
      38,    39,   258,   259,   260,   261,   262,   263,   264,   265,
     505,    -1,   507,    -1,    -1,   303,    41,    -1,   513,   514,
      -1,    46,   310,    -1,   280,   281,   282,    11,    12,    13,
     286,   287,   288,   289,   290,   291,   292,   293,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    74,
      75,    -1,    77,    -1,    -1,    39,    -1,    82,    83,    -1,
     316,    86,    87,    88,    89,    90,    91,    92,    93,    20,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,   367,
      -1,    -1,   370,    34,    -1,     3,    -1,    -1,    39,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,   133,    -1,
      -1,   136,    30,    31,   402,    -1,    -1,    -1,   143,    -1,
      38,    39,   410,    -1,    42,    43,    44,    -1,    -1,   417,
     418,    -1,    11,    12,    13,    -1,    -1,   162,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,   177,   178,   179,   180,   181,   182,   183,   184,
      39,   417,   418,    -1,    -1,    -1,    -1,    -1,    -1,   457,
      -1,   196,   460,    -1,    -1,    -1,    -1,    -1,    -1,   467,
      -1,    -1,   470,   208,   209,   210,   211,   212,   213,   214,
     215,    -1,   217,    20,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,   229,   493,   494,    34,    -1,   497,
     498,    -1,    39,    -1,    -1,    -1,    -1,    -1,   506,     3,
     508,    -1,    -1,     7,     8,     9,    10,   252,   253,   254,
      14,    15,    16,   258,    -1,    19,    -1,   493,    -1,    -1,
      -1,   497,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
     506,    -1,   508,    -1,    38,   280,   281,   282,    42,    43,
      44,   286,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,
       3,     4,     5,    -1,     7,     8,     9,    10,    -1,    -1,
     305,    14,    15,    16,    -1,    18,    19,   312,    21,    -1,
      -1,   316,    -1,    46,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    35,    -1,    -1,    38,    -1,    40,    41,    42,
      43,    44,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    74,    75,    -1,    77,    -1,    -1,    -1,    -1,    39,
      83,    22,    23,    24,    25,    26,    27,    28,    29,     1,
      -1,     3,     4,     5,    35,     7,     8,     9,    10,   374,
      -1,    -1,    14,    15,    16,    -1,    18,    19,    -1,    21,
      -1,    -1,   387,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,   404,
      42,    43,    44,   136,    -1,    -1,    -1,   412,    -1,    -1,
     143,    -1,   417,   418,    -1,    -1,    -1,    -1,    -1,   424,
     153,   154,   155,    -1,    -1,    -1,    -1,   160,   161,   162,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   442,    -1,    -1,
      -1,    -1,    -1,    -1,   177,   178,   179,   180,   181,   182,
     183,   184,    -1,    -1,   187,   188,   189,   462,    -1,    -1,
      -1,   194,   195,   196,    -1,    -1,    -1,   472,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   208,   209,   210,   211,   212,
     213,   214,   215,    -1,    -1,    46,    -1,    -1,   493,    -1,
      -1,    -1,   497,    11,    12,    13,    -1,    -1,    -1,    -1,
      -1,   506,    -1,   508,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    74,    75,    -1,    77,    35,    -1,   252,
     253,   254,    83,    -1,    -1,   258,   259,   260,   261,   262,
     263,   264,   265,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      -1,    -1,    -1,     7,     8,     9,    10,   280,   281,   282,
      14,    15,    16,   286,   287,   288,   289,   290,   291,   292,
     293,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    38,   136,    -1,    -1,    42,    43,
      44,    -1,   143,   316,    22,    23,    24,    25,    26,    27,
      28,    29,   153,   154,   155,    -1,    -1,    35,    -1,   160,
     161,   162,     3,    -1,    -1,    -1,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,   177,   178,   179,   180,
     181,   182,   183,   184,    -1,    -1,   187,   188,   189,    30,
      31,    -1,    -1,   194,   195,   196,    -1,    38,    -1,    -1,
      -1,    42,    43,    44,    -1,    -1,    -1,   208,   209,   210,
     211,   212,   213,   214,   215,     3,    -1,    -1,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,
      20,    19,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    30,    31,   417,   418,    46,    -1,    -1,    39,
      38,   252,   253,   254,    42,    43,    44,   258,   259,   260,
     261,   262,   263,   264,   265,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    74,    75,    -1,    77,    -1,   280,
     281,   282,    39,    83,    -1,   286,   287,   288,   289,   290,
     291,   292,   293,    11,    12,    13,    -1,    97,    98,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,   316,    34,    -1,    -1,    -1,
     493,    39,    -1,    20,   497,    22,    23,    24,    25,    26,
      27,    28,    29,   506,    -1,   508,   136,    34,    -1,    11,
      12,    13,    39,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,     3,
      -1,    -1,   162,     7,     8,     9,    10,    39,    -1,    -1,
      14,    15,    16,    -1,    -1,    19,    -1,   177,   178,   179,
     180,   181,   182,   183,   184,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    39,   196,    -1,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    46,   208,   209,
     210,   211,   212,   213,   214,   215,   417,   418,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    74,    75,    39,    77,    -1,
      -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   252,   253,   254,    94,    95,    96,   258,   259,
     260,   261,   262,   263,    20,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    34,    -1,
     280,   281,   282,    39,    -1,    -1,   286,   287,   288,   289,
     290,   291,   493,    -1,    -1,    -1,   497,   136,    -1,    -1,
      -1,    -1,    -1,    -1,   143,   506,    20,   508,    22,    23,
      24,    25,    26,    27,    28,    29,   316,    -1,    -1,    -1,
       3,    35,    -1,   162,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    -1,    -1,    19,    -1,   177,   178,
     179,   180,   181,   182,   183,   184,    -1,    30,    31,    46,
      -1,    -1,    -1,    -1,    -1,    38,    39,   196,    -1,    42,
      43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   208,
     209,   210,   211,   212,   213,   214,   215,    74,    75,    -1,
      77,    -1,    -1,    -1,    -1,    20,    83,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,     3,    -1,    -1,    34,
       7,     8,     9,    10,    39,    -1,    -1,    14,    15,    16,
      -1,    -1,    19,   252,   253,   254,    -1,   417,   418,   258,
     259,   260,   261,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    43,    44,    -1,   136,
      -1,   280,   281,   282,    -1,    -1,   143,   286,   287,   288,
     289,    -1,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,     3,    -1,   162,    34,     7,     8,     9,
      10,    39,    -1,    -1,    14,    15,    16,   316,    -1,    19,
     177,   178,   179,   180,   181,   182,   183,   184,    -1,    -1,
      30,    31,    -1,   493,    -1,    -1,    -1,   497,    38,   196,
      -1,    -1,    42,    43,    44,    -1,   506,    -1,   508,    -1,
      46,   208,   209,   210,   211,   212,   213,   214,   215,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    74,    75,
      -1,    77,    -1,    35,    -1,    -1,    -1,    83,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   252,   253,   254,    11,    12,
      13,   258,   259,   260,   261,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,   417,   418,
      -1,    34,    -1,   280,   281,   282,    39,    -1,    -1,   286,
     287,   288,   289,    -1,    -1,     1,    -1,     3,     4,     5,
     136,     7,     8,     9,    10,    -1,    -1,   143,    14,    15,
      16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,   316,
      -1,    -1,    -1,    -1,    30,    31,   162,    -1,    -1,    35,
      -1,    -1,    38,    -1,    40,    41,    42,    43,    44,    -1,
      -1,   177,   178,   179,   180,   181,   182,   183,   184,    -1,
      -1,    -1,    -1,    -1,   493,    -1,    -1,    -1,   497,    -1,
     196,    -1,    -1,    -1,    -1,    -1,    -1,   506,    -1,   508,
      -1,    -1,   208,   209,   210,   211,   212,   213,   214,   215,
      20,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,    39,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    16,
      -1,    18,    19,    -1,    21,    -1,   252,   253,   254,    -1,
     417,   418,   258,    30,    31,    -1,    -1,    -1,    35,    -1,
      -1,    38,    -1,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,   280,   281,   282,    -1,    -1,     1,
     286,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    -1,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
     316,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,    41,
      42,    43,    44,    -1,    -1,    -1,   493,    -1,    -1,     1,
     497,     3,     4,     5,    -1,     7,     8,     9,    10,   506,
      -1,   508,    14,    15,    16,    -1,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,    41,
      42,    43,    44,    -1,    -1,    -1,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,
      35,   417,   418,    38,    -1,    40,    41,    42,    43,    44,
       1,    -1,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,
      41,    42,    43,    44,     1,    -1,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    16,
      -1,    18,    19,    -1,    21,    -1,    -1,   493,    -1,    -1,
      -1,   497,    -1,    30,    31,    -1,    -1,    -1,    35,    -1,
     506,    38,   508,    40,    41,    42,    43,    44,     1,    -1,
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
      -1,    -1,    35,    -1,    -1,    38,    -1,    40,    -1,    42,
      43,    44,     1,    -1,     3,     4,     5,    -1,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,    18,
      19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    35,    -1,    -1,    38,
      -1,    40,    -1,    42,    43,    44,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,
      35,    -1,    -1,    38,    -1,    40,    -1,    42,    43,    44,
       1,    -1,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,
      -1,    42,    43,    44,     1,    -1,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    16,
      -1,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    35,    -1,
      -1,    38,    -1,    40,    -1,    42,    43,    44,     1,    -1,
       3,     4,     5,    -1,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    -1,    18,    19,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    35,    -1,    -1,    38,    -1,    40,    -1,    42,
      43,    44,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    11,    12,    13,    38,
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
      31,    32,    33,    34,    11,    12,    13,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    11,    12,
      13,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    22,
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
      24,    25,    26,    27,    28,    29,    11,    12,    13,    -1,
      34,    -1,    -1,    -1,    -1,    39,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    11,    12,    13,    -1,    34,
      -1,    -1,    -1,    -1,    39,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    11,    12,    13,    -1,    34,    -1,
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
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    11,    12,    13,    35,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    11,    12,    13,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    20,    35,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    20,    39,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    20,    39,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    20,    39,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    20,
      39,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    39,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    39,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    39,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    39,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      39,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    39,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    39,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    39,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    39,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      39,    22,    23,    24,    25,    26,    27,    28,    29,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    39,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    39,    22,    23,    24,
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
      27,    28,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    39,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      39,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    39,    22,    23,    24,
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
      27,    28,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    39,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      39,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    -1,    39,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    39,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,
      -1,    -1,    39,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      39,    22,    23,    24,    25,    26,    27,    28,    29,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    22,    23,    24,
      25,    26,    27,    28,    29,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    22,    23,    24,    25,    26,    27,    28,
      29,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    22,
      23,    24,    25,    26,    27,    28,    29,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    22,    23,    24,    25,    26,
      27,    28,    29,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    22,    23,    24,    25,    26,    27,    28,    29,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    22,    23,    24,
      25,    26,    27,    28,    29,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    22,    23,    24,    25,    26,    27,    28,
      29,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    22,
      23,    24,    25,    26,    27,    28,    29,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    22,    23,    24,    25,    26,
      27,    28,    29,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    22,    23,    24,    25,    26,    27,    28,    29,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    22,    23,    24,
      25,    26,    27,    28,    29,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    22,    23,    24,    25,    26,    27,    28,
      29,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    22,
      23,    24,    25,    26,    27,    28,    29,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    22,    23,    24,    25,    26,
      27,    28,    29,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      39,    22,    23,    24,    25,    26,    27,    28,    29,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    39,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    20,    35,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    20,    35,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    20,    35,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    20,
      35,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    20,    35,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    20,    35,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    20,    35,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    20,    35,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    20,
      35,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    20,    35,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    20,    35,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    20,    35,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    35,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      35,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    35,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    35,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    35,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    35,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      35,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    35,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    35,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    35,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    35,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      35,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    35,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    35,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    35,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    35,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      35,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    35,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    35,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    35,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    35,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      35,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    35,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    35,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    35,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    35,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      35,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    35,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    35,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    35,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    35,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      35,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    35,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    35,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    35,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    35,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      35,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    47,    48,     0,     1,     4,     5,    49,    50,    52,
      58,    78,    79,     6,     6,    51,    53,     3,    59,    35,
      38,    55,    56,    57,    58,    39,    34,    40,    54,    63,
      57,    62,     1,     3,     7,     8,     9,    10,    14,    15,
      16,    18,    19,    21,    30,    31,    38,    41,    42,    43,
      44,    50,    58,    59,    60,    61,    64,    65,    66,    68,
      69,    70,    71,    72,    73,    74,    75,    77,    80,    59,
      73,    73,    73,    38,    38,    38,    69,    38,    38,    73,
      73,    69,    37,    38,    63,    35,    22,    23,    24,    25,
      26,    27,    28,    29,    11,    12,    13,    30,    31,    32,
      33,    59,    69,    69,    35,    69,    59,    67,    68,    39,
      69,    39,    69,    76,    69,    69,    69,    69,    69,    69,
      69,    69,    70,    70,    70,    72,    72,    73,    73,    39,
      39,    39,    39,    37,    35,    35,    34,    39,    60,    69,
      67,    69,    20,    35,    60,    67,    39,    60,    78,    78,
       3,     3,     7,     8,     9,    10,    14,    15,    16,    19,
      30,    31,    38,    42,    43,    44,    59,    65,    70,    71,
      72,    73,    75,    80,    51,    40,     3,    22,    23,    24,
      25,    26,    27,    28,    29,     3,     7,     8,     9,    10,
      14,    15,    16,    19,    30,    31,    38,    42,    43,    44,
      59,    65,    70,    71,    72,    73,    75,    80,    22,    23,
      24,    25,    26,    27,    28,    29,     1,    18,    21,    50,
      58,    59,    61,    64,    66,    68,    74,    77,     1,    18,
      21,    50,    58,    59,    61,    64,    66,    68,    74,    77,
       3,    59,    68,    69,     3,    59,     3,    59,    73,    73,
      73,    38,    38,    38,    38,    73,    73,    69,    38,    11,
      12,    13,    30,    31,    32,    33,    35,    62,    69,    69,
      69,    69,    69,    69,    69,    69,    73,    73,    73,    38,
      38,    38,    38,    73,    73,    69,    38,    11,    12,    13,
      30,    31,    32,    33,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    38,    51,    37,    40,    63,    35,    69,
      38,    51,    37,    40,    63,    35,    37,    59,    69,    69,
      69,    39,    39,    76,    70,    70,    70,    72,    72,    73,
      73,    41,    59,    69,    69,    69,    39,    39,    76,    70,
      70,    70,    72,    72,    73,    73,    35,    67,    35,    69,
      62,    35,    67,    35,    69,    62,    69,    39,    39,    39,
      39,    39,    39,    39,    39,    39,    39,    35,    35,    41,
      35,    35,    41,     1,    18,    21,    50,    58,    59,    60,
      61,    64,    66,    68,    74,    77,     1,    18,    21,    50,
      58,    59,    60,    61,    64,    66,    68,    74,    77,    67,
      67,    69,    38,    51,    37,    20,    40,    63,    35,    69,
      38,    51,    37,    20,    40,    63,    35,    35,    35,    35,
      67,    35,    69,     1,    18,    21,    50,    58,    59,    60,
      61,    64,    66,    68,    74,    77,    62,    35,    67,    35,
      69,     1,    18,    21,    50,    58,    59,    60,    61,    64,
      66,    68,    74,    77,    62,    67,    67,    35,    35,    69,
      38,    51,    37,    40,    63,    35,    41,    35,    35,    69,
      38,    51,    37,    40,    63,    35,    41,    39,    39,    67,
      35,    67,    35,    69,    62,    67,    35,    67,    35,    69,
      62,    60,    60,    35,    35,    35,    41,    35,    35,    35,
      41,    67,    67,    67,    67,    39,    35,    39,    35,    60,
      67,    60,    67,    39,    39,    60,    60
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    49,    51,    50,
      53,    52,    54,    55,    55,    56,    56,    57,    58,    59,
      61,    60,    60,    60,    62,    62,    63,    64,    64,    64,
      64,    64,    65,    65,    66,    67,    67,    68,    68,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    70,
      70,    70,    70,    71,    71,    71,    72,    72,    72,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    74,    75,
      75,    75,    75,    75,    76,    76,    77,    78,    78,    78,
      79,    79,    80,    80,    80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     0,     3,
       0,     6,     1,     1,     0,     3,     1,     1,     2,     1,
       0,     2,     1,     1,     2,     0,     3,     1,     1,     1,
       1,     2,     5,     7,     9,     3,     1,     1,     0,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     3,     1,     1,     3,     3,     1,     3,     3,     1,
       1,     2,     2,     2,     2,     2,     1,     3,     4,     4,
       3,     4,     4,     4,     3,     1,     3,     1,     1,     1,
       2,     2,     1,     1,     1,     1
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
#line 82 "src/sintatico.y"
                             {
		ast = (yyval.node);
		(yyval.node) = (yyvsp[0].node);
	}
#line 3263 "src/sintatico.tab.c"
    break;

  case 3: /* lista_de_declaracoes: lista_de_declaracoes declaracao  */
#line 89 "src/sintatico.y"
                                          {
		(yyval.node) = novo_node("lista_de_declaracoes", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3273 "src/sintatico.tab.c"
    break;

  case 4: /* lista_de_declaracoes: %empty  */
#line 94 "src/sintatico.y"
                 {
		(yyval.node) = (t_node*)0;
	}
#line 3281 "src/sintatico.tab.c"
    break;

  case 5: /* declaracao: declaracao_de_variavel  */
#line 100 "src/sintatico.y"
                                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3289 "src/sintatico.tab.c"
    break;

  case 6: /* declaracao: declaracao_de_funcao  */
#line 103 "src/sintatico.y"
                               {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3297 "src/sintatico.tab.c"
    break;

  case 7: /* declaracao: error  */
#line 106 "src/sintatico.y"
                {
		yyerrok;
	}
#line 3305 "src/sintatico.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 112 "src/sintatico.y"
                            {
			var_ou_func_atual = "Variavel";
			incrementa_tabela(nome_id_atual);
		}
#line 3314 "src/sintatico.tab.c"
    break;

  case 9: /* declaracao_de_variavel: tipo_de_variavel_id $@1 PONTO_VIRGULA  */
#line 115 "src/sintatico.y"
                                {
		(yyval.node) = novo_node("declaracao_de_variavel", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3323 "src/sintatico.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 123 "src/sintatico.y"
                              {
		  var_ou_func_atual = "funcao";
		  incrementa_tabela(nome_id_atual);
		  incrementa_escopo();
	  }
#line 3333 "src/sintatico.tab.c"
    break;

  case 11: /* declaracao_de_funcao: tipo_de_variavel_id $@2 ABRE_PARENTESES parametros FECHA_PARENTESES definicao_de_funcao  */
#line 127 "src/sintatico.y"
                                                                            {
		(yyval.node) = novo_node("declaracao_de_funcao", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), (yyvsp[-5].node));
	  }
#line 3344 "src/sintatico.tab.c"
    break;

  case 12: /* definicao_de_funcao: bloco_de_comando  */
#line 136 "src/sintatico.y"
                         {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3352 "src/sintatico.tab.c"
    break;

  case 13: /* parametros: lista_de_parametros  */
#line 142 "src/sintatico.y"
                              {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3360 "src/sintatico.tab.c"
    break;

  case 14: /* parametros: %empty  */
#line 145 "src/sintatico.y"
                 {
		(yyval.node) = (t_node*)0;
	}
#line 3368 "src/sintatico.tab.c"
    break;

  case 15: /* lista_de_parametros: lista_de_parametros VIRGULA parametro  */
#line 151 "src/sintatico.y"
                                                {
		(yyval.node) = novo_node("lista_de_parametros", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3378 "src/sintatico.tab.c"
    break;

  case 16: /* lista_de_parametros: parametro  */
#line 156 "src/sintatico.y"
                    {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3386 "src/sintatico.tab.c"
    break;

  case 17: /* parametro: tipo_de_variavel_id  */
#line 162 "src/sintatico.y"
                              {
		(yyval.node) = novo_node("parametro", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));

		var_ou_func_atual = "Variavel (parametro)";
		incrementa_tabela(nome_id_atual);
	  }
#line 3398 "src/sintatico.tab.c"
    break;

  case 18: /* tipo_de_variavel_id: tipo_de_variavel id  */
#line 172 "src/sintatico.y"
                            {
		(yyval.node) = novo_node(nome_tipo_atual, yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3407 "src/sintatico.tab.c"
    break;

  case 19: /* id: ID  */
#line 179 "src/sintatico.y"
           {
		(yyval.node) = novo_node(nome_id_atual, yylineno, coluna);
	}
#line 3415 "src/sintatico.tab.c"
    break;

  case 20: /* $@3: %empty  */
#line 185 "src/sintatico.y"
          {incrementa_escopo();}
#line 3421 "src/sintatico.tab.c"
    break;

  case 21: /* comando: $@3 bloco_de_comando  */
#line 185 "src/sintatico.y"
                                                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3429 "src/sintatico.tab.c"
    break;

  case 22: /* comando: comando_unico  */
#line 188 "src/sintatico.y"
                        {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3437 "src/sintatico.tab.c"
    break;

  case 23: /* comando: error  */
#line 191 "src/sintatico.y"
                {
		yyerrok;
	}
#line 3445 "src/sintatico.tab.c"
    break;

  case 24: /* comandos: comandos comando  */
#line 197 "src/sintatico.y"
                           {
		(yyval.node) = novo_node("comandos", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3455 "src/sintatico.tab.c"
    break;

  case 25: /* comandos: %empty  */
#line 202 "src/sintatico.y"
             {
		(yyval.node) = (t_node*)0;
	}
#line 3463 "src/sintatico.tab.c"
    break;

  case 26: /* bloco_de_comando: ABRE_CHAVES comandos FECHA_CHAVES  */
#line 208 "src/sintatico.y"
                                            {
		(yyval.node) = novo_node("BLOCO", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
		decrementa_escopo();
	}
#line 3473 "src/sintatico.tab.c"
    break;

  case 27: /* comando_unico: comando_iterativo  */
#line 216 "src/sintatico.y"
                           {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3481 "src/sintatico.tab.c"
    break;

  case 28: /* comando_unico: declaracao_de_variavel  */
#line 219 "src/sintatico.y"
                                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3489 "src/sintatico.tab.c"
    break;

  case 29: /* comando_unico: chamada_de_retorno  */
#line 222 "src/sintatico.y"
                             {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3497 "src/sintatico.tab.c"
    break;

  case 30: /* comando_unico: comando_de_atribuicao  */
#line 225 "src/sintatico.y"
                                {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3505 "src/sintatico.tab.c"
    break;

  case 31: /* comando_unico: exp_or_empty PONTO_VIRGULA  */
#line 228 "src/sintatico.y"
                                     {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 3513 "src/sintatico.tab.c"
    break;

  case 32: /* comando_condicional: IF ABRE_PARENTESES exp FECHA_PARENTESES comando  */
#line 234 "src/sintatico.y"
                                                          {
		(yyval.node) = novo_node("IF", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3523 "src/sintatico.tab.c"
    break;

  case 33: /* comando_condicional: IF ABRE_PARENTESES exp FECHA_PARENTESES comando ELSE comando  */
#line 239 "src/sintatico.y"
                                                                       {
		(yyval.node) = novo_node("IF_ELSE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), (yyvsp[-4].node));
	}
#line 3534 "src/sintatico.tab.c"
    break;

  case 34: /* comando_iterativo: FOR ABRE_PARENTESES expressao_for PONTO_VIRGULA expressao_for PONTO_VIRGULA expressao_for FECHA_PARENTESES comando  */
#line 248 "src/sintatico.y"
                                                                                                                             {
		(yyval.node) = novo_node("FOR", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), (yyvsp[-4].node));
		coloca_node_filho((yyval.node), (yyvsp[-6].node));
	}
#line 3546 "src/sintatico.tab.c"
    break;

  case 35: /* expressao_for: id ATRIB exp  */
#line 258 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("ATRIB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3556 "src/sintatico.tab.c"
    break;

  case 36: /* expressao_for: exp_or_empty  */
#line 263 "src/sintatico.y"
                       {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3564 "src/sintatico.tab.c"
    break;

  case 37: /* exp_or_empty: exp  */
#line 269 "src/sintatico.y"
            {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3572 "src/sintatico.tab.c"
    break;

  case 38: /* exp_or_empty: %empty  */
#line 272 "src/sintatico.y"
                 {
		(yyval.node) = (t_node*)0;
	}
#line 3580 "src/sintatico.tab.c"
    break;

  case 39: /* exp: comando_condicional  */
#line 278 "src/sintatico.y"
                            {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3588 "src/sintatico.tab.c"
    break;

  case 40: /* exp: exp GT exp  */
#line 281 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("GT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3598 "src/sintatico.tab.c"
    break;

  case 41: /* exp: exp LT exp  */
#line 286 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("LT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3608 "src/sintatico.tab.c"
    break;

  case 42: /* exp: exp EQ exp  */
#line 291 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("EQ", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3618 "src/sintatico.tab.c"
    break;

  case 43: /* exp: exp NE exp  */
#line 296 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("NE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3628 "src/sintatico.tab.c"
    break;

  case 44: /* exp: exp LE exp  */
#line 301 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("LE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3638 "src/sintatico.tab.c"
    break;

  case 45: /* exp: exp GE exp  */
#line 306 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("GE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3648 "src/sintatico.tab.c"
    break;

  case 46: /* exp: exp AND exp  */
#line 311 "src/sintatico.y"
                      {
		(yyval.node) = novo_node("AND", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3658 "src/sintatico.tab.c"
    break;

  case 47: /* exp: exp OR exp  */
#line 316 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("OR", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3668 "src/sintatico.tab.c"
    break;

  case 48: /* exp: exp_list  */
#line 321 "src/sintatico.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3676 "src/sintatico.tab.c"
    break;

  case 49: /* exp_list: exp_list CONSTRUTOR exp_list  */
#line 327 "src/sintatico.y"
                                     {
		(yyval.node) = novo_node("CONSTRUTOR", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3686 "src/sintatico.tab.c"
    break;

  case 50: /* exp_list: exp_list FILTER exp_list  */
#line 332 "src/sintatico.y"
                                   {
		(yyval.node) = novo_node("FILTER", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3696 "src/sintatico.tab.c"
    break;

  case 51: /* exp_list: exp_list MAP exp_list  */
#line 337 "src/sintatico.y"
                                {
		(yyval.node) = novo_node("MAP", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3706 "src/sintatico.tab.c"
    break;

  case 52: /* exp_list: exp_aritmetica  */
#line 342 "src/sintatico.y"
                         {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3714 "src/sintatico.tab.c"
    break;

  case 53: /* exp_aritmetica: termo  */
#line 349 "src/sintatico.y"
              {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3722 "src/sintatico.tab.c"
    break;

  case 54: /* exp_aritmetica: exp_aritmetica SOMA termo  */
#line 352 "src/sintatico.y"
                                    {
		(yyval.node) = novo_node("SOMA", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3732 "src/sintatico.tab.c"
    break;

  case 55: /* exp_aritmetica: exp_aritmetica SUB termo  */
#line 357 "src/sintatico.y"
                                   {
		(yyval.node) = novo_node("SUB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3742 "src/sintatico.tab.c"
    break;

  case 56: /* termo: fator  */
#line 365 "src/sintatico.y"
              {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3750 "src/sintatico.tab.c"
    break;

  case 57: /* termo: termo MULT fator  */
#line 368 "src/sintatico.y"
                           {
		(yyval.node) = novo_node("MULT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3760 "src/sintatico.tab.c"
    break;

  case 58: /* termo: termo DIV fator  */
#line 373 "src/sintatico.y"
                          {
		(yyval.node) = novo_node("DIV", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3770 "src/sintatico.tab.c"
    break;

  case 59: /* fator: constante  */
#line 381 "src/sintatico.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3778 "src/sintatico.tab.c"
    break;

  case 60: /* fator: func_call_exp  */
#line 384 "src/sintatico.y"
                        {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3786 "src/sintatico.tab.c"
    break;

  case 61: /* fator: SUB fator  */
#line 387 "src/sintatico.y"
                    {
		(yyval.node) = novo_node("SUB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3795 "src/sintatico.tab.c"
    break;

  case 62: /* fator: SOMA fator  */
#line 391 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("SOMA", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3804 "src/sintatico.tab.c"
    break;

  case 63: /* fator: TAIL_OR_NOT fator  */
#line 395 "src/sintatico.y"
                            {
		(yyval.node) = novo_node("TAIL_NOT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3813 "src/sintatico.tab.c"
    break;

  case 64: /* fator: TAIL_POP fator  */
#line 399 "src/sintatico.y"
                         {
		(yyval.node) = novo_node("TAIL_POP", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3822 "src/sintatico.tab.c"
    break;

  case 65: /* fator: HEADER fator  */
#line 403 "src/sintatico.y"
                       {
		(yyval.node) = novo_node("HEADER", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3831 "src/sintatico.tab.c"
    break;

  case 66: /* fator: ID  */
#line 407 "src/sintatico.y"
             {
		verifica_contexto(nome_id_atual);
		(yyval.node) = novo_node(nome_id_atual, yylineno, coluna);
	}
#line 3840 "src/sintatico.tab.c"
    break;

  case 67: /* fator: ABRE_PARENTESES exp FECHA_PARENTESES  */
#line 411 "src/sintatico.y"
                                               {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 3848 "src/sintatico.tab.c"
    break;

  case 68: /* comando_de_atribuicao: id ATRIB exp PONTO_VIRGULA  */
#line 418 "src/sintatico.y"
                               {
		verifica_contexto((yyvsp[-3].node)->nome);
		(yyval.node) = novo_node("ATRIB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
		coloca_node_filho((yyval.node), (yyvsp[-3].node));
	}
#line 3859 "src/sintatico.tab.c"
    break;

  case 69: /* func_call_exp: id ABRE_PARENTESES func_call_parameters FECHA_PARENTESES  */
#line 427 "src/sintatico.y"
                                                                   {
		verifica_contexto((yyvsp[-3].node)->nome);
		(yyval.node) = novo_node("my_func_call_exp", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
		coloca_node_filho((yyval.node), (yyvsp[-3].node));

		verifica_qnt_parametros_chamada_func((yyvsp[-3].node)->nome);
		num_parametros_chamada_func = 0;
	}
#line 3873 "src/sintatico.tab.c"
    break;

  case 70: /* func_call_exp: id ABRE_PARENTESES FECHA_PARENTESES  */
#line 436 "src/sintatico.y"
                                               {
		verifica_contexto((yyvsp[-2].node)->nome);
		(yyval.node) = (yyvsp[-2].node);

		verifica_qnt_parametros_chamada_func((yyvsp[-2].node)->nome);
		num_parametros_chamada_func = 0;
	}
#line 3885 "src/sintatico.tab.c"
    break;

  case 71: /* func_call_exp: READ ABRE_PARENTESES id FECHA_PARENTESES  */
#line 443 "src/sintatico.y"
                                                    {
		verifica_contexto((yyvsp[-1].node)->nome);
		(yyval.node) = novo_node("READ", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3895 "src/sintatico.tab.c"
    break;

  case 72: /* func_call_exp: WRITE ABRE_PARENTESES exp FECHA_PARENTESES  */
#line 448 "src/sintatico.y"
                                                      {
		(yyval.node) = novo_node("WRITE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3904 "src/sintatico.tab.c"
    break;

  case 73: /* func_call_exp: WRITELN ABRE_PARENTESES exp FECHA_PARENTESES  */
#line 452 "src/sintatico.y"
                                                        {
		(yyval.node) = novo_node("WRITELN", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3913 "src/sintatico.tab.c"
    break;

  case 74: /* func_call_parameters: func_call_parameters VIRGULA exp  */
#line 459 "src/sintatico.y"
                                         {
		(yyval.node) = novo_node("lista_de_expressao", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));

		num_parametros_chamada_func++;
	}
#line 3925 "src/sintatico.tab.c"
    break;

  case 75: /* func_call_parameters: exp  */
#line 466 "src/sintatico.y"
              {
		(yyval.node) = (yyvsp[0].node);

		num_parametros_chamada_func++;
		// $$ = novo_node("lista_de_parametros", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3937 "src/sintatico.tab.c"
    break;

  case 76: /* chamada_de_retorno: RETURN exp PONTO_VIRGULA  */
#line 477 "src/sintatico.y"
                                 {
		(yyval.node) = novo_node("RETURN", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3946 "src/sintatico.tab.c"
    break;

  case 82: /* constante: INTEGER_CONST  */
#line 496 "src/sintatico.y"
                      {
		(yyval.node) = novo_node("INTEGER_CONST", yylineno, coluna);
	}
#line 3954 "src/sintatico.tab.c"
    break;

  case 83: /* constante: FLOAT_CONST  */
#line 499 "src/sintatico.y"
                      {
		(yyval.node) = novo_node("FLOAT_CONST", yylineno, coluna);
	}
#line 3962 "src/sintatico.tab.c"
    break;

  case 84: /* constante: CONSTANTE_NIL  */
#line 502 "src/sintatico.y"
                        {
		(yyval.node) = novo_node("CONSTANTE_NIL", yylineno, coluna);
	}
#line 3970 "src/sintatico.tab.c"
    break;

  case 85: /* constante: STRING_LITERAL  */
#line 505 "src/sintatico.y"
                         {
		(yyval.node) = novo_node("STRING_LITERAL", yylineno, coluna);
	}
#line 3978 "src/sintatico.tab.c"
    break;


#line 3982 "src/sintatico.tab.c"

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

#line 511 "src/sintatico.y"


int yyerror (const char* s) {
	fprintf (stderr, RED"ERRO, linha: %d, na coluna: %d, %s\n"reset, yylineno, coluna, s);
  	return 0;
}

int main(int argc, char **argv)
{
    coluna = 1;
	linha = &yylineno;
	
	if(argc > 1) {
		if(!(yyin = fopen(argv[1], "r"))) {
			perror(argv[1]);
			return (1);
		}
	}

	yyparse();

	existe_main();
	anota_ast(ast, 0);

	mostra_tabela_simbolos();
	printf("\n");

	tree_output_file = fopen("tree_output_file.txt","w");
    fprintf(tree_output_file,"[PROGRAMA");
	imprime_ast(ast, 0);
    fprintf(tree_output_file,"]");
	fclose(tree_output_file);

	// TAC file
	char *end = argv[1] + strlen(argv[1]);
    while (end > argv[1] && *end != '.') --end;
    if (end > argv[1]) *end = '\0';
	tac_output_file = fopen(strcat(argv[1], ".tac"), "w");
	gera_codigo_intermediario();
	fclose(tac_output_file);

	fclose(yyin);
	yylex_destroy();
	destroi_tabela_simbolos();
	destroi_arvore_escopo();
	destroi_arvore(ast);
	
	return 0;
}
