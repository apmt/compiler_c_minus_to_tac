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


#line 84 "src/sintatico.tab.c"

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
  YYSYMBOL_52_1 = 52,                      /* $@1  */
  YYSYMBOL_declaracao_de_funcao = 53,      /* declaracao_de_funcao  */
  YYSYMBOL_54_2 = 54,                      /* $@2  */
  YYSYMBOL_definicao_de_funcao = 55,       /* definicao_de_funcao  */
  YYSYMBOL_parametros = 56,                /* parametros  */
  YYSYMBOL_lista_de_parametros = 57,       /* lista_de_parametros  */
  YYSYMBOL_parametro = 58,                 /* parametro  */
  YYSYMBOL_tipo_de_variavel_id = 59,       /* tipo_de_variavel_id  */
  YYSYMBOL_id = 60,                        /* id  */
  YYSYMBOL_comando = 61,                   /* comando  */
  YYSYMBOL_62_3 = 62,                      /* $@3  */
  YYSYMBOL_comandos = 63,                  /* comandos  */
  YYSYMBOL_bloco_de_comando = 64,          /* bloco_de_comando  */
  YYSYMBOL_comando_unico = 65,             /* comando_unico  */
  YYSYMBOL_comando_condicional = 66,       /* comando_condicional  */
  YYSYMBOL_comando_iterativo = 67,         /* comando_iterativo  */
  YYSYMBOL_expressao_for = 68,             /* expressao_for  */
  YYSYMBOL_expressao = 69,                 /* expressao  */
  YYSYMBOL_exp = 70,                       /* exp  */
  YYSYMBOL_exp_list = 71,                  /* exp_list  */
  YYSYMBOL_exp_aritmetica = 72,            /* exp_aritmetica  */
  YYSYMBOL_termo = 73,                     /* termo  */
  YYSYMBOL_fator = 74,                     /* fator  */
  YYSYMBOL_comando_de_atribuicao = 75,     /* comando_de_atribuicao  */
  YYSYMBOL_func_call_exp = 76,             /* func_call_exp  */
  YYSYMBOL_func_call_parameters = 77,      /* func_call_parameters  */
  YYSYMBOL_chamada_de_retorno = 78,        /* chamada_de_retorno  */
  YYSYMBOL_tipo_de_variavel = 79,          /* tipo_de_variavel  */
  YYSYMBOL_list = 80,                      /* list  */
  YYSYMBOL_constante = 81                  /* constante  */
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
#define YYLAST   5119

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  84
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  344

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
       0,    86,    86,    95,   100,   107,   112,   117,   123,   123,
     134,   134,   151,   159,   164,   171,   176,   184,   194,   201,
     209,   209,   214,   219,   225,   230,   237,   246,   251,   256,
     261,   266,   271,   279,   284,   293,   303,   308,   316,   321,
     328,   333,   338,   343,   348,   353,   358,   363,   368,   376,
     381,   386,   391,   400,   405,   410,   418,   423,   428,   436,
     441,   446,   450,   454,   458,   462,   466,   470,   479,   488,
     494,   498,   502,   509,   514,   523,   530,   533,   536,   540,
     543,   550,   553,   556,   559
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
  "declaracao", "declaracao_de_variavel", "$@1", "declaracao_de_funcao",
  "$@2", "definicao_de_funcao", "parametros", "lista_de_parametros",
  "parametro", "tipo_de_variavel_id", "id", "comando", "$@3", "comandos",
  "bloco_de_comando", "comando_unico", "comando_condicional",
  "comando_iterativo", "expressao_for", "expressao", "exp", "exp_list",
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
     295,   296,   297,   298,   299,   300,   301
};
#endif

#define YYPACT_NINF (-218)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-85)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      21,    19,    27,  -218,    69,    17,    80,    77,   127,   155,
     104,    47,    72,    76,    84,    79,    85,   129,   136,   175,
      10,    99,    -5,    -4,    37,   125,    60,  2024,   190,   196,
     112,  2068,  2112,  4088,  4144,  1337,  1337,  1337,   143,   145,
     147,   110,   166,   177,  1337,  1337,  2986,   198,  4169,  4194,
    4219,  2156,   197,    66,  2200,   185,  2244,  2288,  2332,   206,
     895,  4715,  4694,  4244,  4269,  2376,  4294,  2420,  4319,   193,
    4344,  4369,  4394,   943,   943,   943,   207,   943,   999,  4419,
    4444,    83,   110,   826,  2464,  2508,  1337,  1337,  1337,  1337,
    1337,  1337,  1337,  1337,  1337,  1337,  1337,  1337,  1337,  1337,
    1337,   194,   212,   213,  2552,   214,    78,   223,   224,  4469,
     225,   123,   124,   941,  1036,  1094,  1360,  5042,  5056,  5070,
    5084,  4734,  4753,  4772,  4494,  4519,  4544,  4569,  4594,  4619,
    4644,  2904,   110,   999,  2596,   826,  4669,  1123,   226,   227,
     150,  2948,  1292,  2640,   240,  2948,  2684,   247,   277,  4116,
     600,   710,  2986,  2986,  2986,   244,   249,   251,  2986,  2986,
    2986,  3548,  3571,  3594,   252,   666,   291,  3617,  3640,  3663,
    3686,   256,  2024,   644,  2986,  2986,  2986,  2986,  2986,  2986,
    2986,  2986,    29,  3020,  2996,  2996,  2996,   254,   255,   257,
    2996,  2996,  2986,  3044,  3068,  3092,   258,   502,   564,   393,
    3116,  3140,  3164,  3188,  1221,   110,   259,   260,  1408,   197,
     184,   261,  1452,  1496,  1540,   264,  1584,  1628,   479,   186,
     266,   195,   201,   271,   272,  3709,  3732,  3755,   943,   943,
     943,  3778,  3801,  4912,   826,  2986,  2986,  2986,  2986,  2986,
    2986,  2986,  2728,  2772,  4920,  4938,  4946,  4964,  4972,  4990,
    4998,  5016,  3212,  3236,  3260,   943,   943,   943,  3284,  3308,
    5024,   826,  2996,  2996,  2996,  2996,  2996,  2996,  2996,  2996,
    2996,  2996,  2996,  2996,  2996,  2996,  2996,   273,   943,   999,
     274,   110,  2024,  1672,  1716,   943,   288,   289,   292,  3824,
     205,   863,  1163,  4069,  3847,  3870,  3893,  3916,  2816,   295,
     296,   299,  3332,   215,   994,  4786,  4804,  4822,  4840,  4858,
    4876,  4894,   798,  4031,  4050,  3356,  3380,  3404,  3428,  1760,
     300,   308,  1804,   310,  2860,   309,  3939,  3962,  3985,  4008,
    3452,  3476,  3500,  3524,  2904,   999,  1848,  1892,  1936,   312,
    1292,   315,  2904,  1980
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
       0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -218,  -218,  -218,  -218,    -1,   -48,  -218,  -218,  -218,  -218,
    -218,   286,    -2,     2,  -129,  -128,  -161,   -45,  -126,  -125,
    -124,   -97,    95,  1020,   820,  1136,   671,   211,  -123,   380,
    -217,  -122,    46,  -218,   522
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     7,    51,    15,     9,    16,    28,    21,
      22,    23,    52,   164,    54,    55,    31,    29,    56,    57,
      58,   107,    59,    60,    61,    62,    63,    64,    65,    66,
     112,    67,   148,    12,    68
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,     8,   137,   211,   171,   212,   213,   214,   216,   217,
      84,   243,   143,    18,     5,     6,   146,   290,    24,     3,
     -76,    -4,    -4,    13,    24,    -4,    -4,    -2,     4,    26,
     -16,     5,     6,    53,   -13,   -16,   139,    69,    69,    69,
     -66,   -66,   -66,    69,   303,   144,    69,    69,    11,   -14,
      17,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     5,     6,   147,   -19,   -66,    -7,
      -7,   -17,   147,    -7,    -7,   -78,   -17,    -3,    -3,   -79,
     106,    -3,    -3,   -77,    69,   196,    14,   -80,    69,    69,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    82,    83,   174,   175,   176,   177,   178,
     179,   180,   181,   149,    19,   132,    83,    34,    35,    36,
      37,   324,   109,    20,    38,    39,    40,    -5,    -5,   209,
     208,    -5,    -5,   210,    69,   106,    76,   196,    25,    -8,
      44,    45,   -10,    53,   219,   -39,   -15,    53,    46,   222,
     224,   -15,    48,    49,    50,    -6,    -6,   -74,   135,    -6,
      -6,   280,   -74,   136,   -19,    27,   283,   -19,   101,   102,
     103,   -18,   105,   108,   -18,    -9,    -9,   110,   111,    -9,
      -9,    73,   321,    74,   -73,    75,   196,   196,   196,   -73,
     -11,   -11,   196,   196,   -11,   -11,   -12,   -12,   -26,   -26,
     -12,   -12,   -26,   -26,    77,   338,   211,    69,   212,   213,
     214,   216,   217,   343,   211,    78,   212,   213,   214,   216,
     217,   281,    83,   285,   234,   172,   215,   138,   108,   -19,
     140,    83,    -8,   128,   -19,   -18,   196,   220,   339,   135,
     -18,    85,   104,   341,   329,    53,    70,    71,    72,   135,
     221,   129,   130,   131,   333,    79,    80,   168,   133,   -37,
     134,   -36,   142,   196,   196,   196,   196,   196,   196,   196,
     196,   196,   196,   196,   196,   196,   196,   196,   196,   145,
     223,   106,   228,    69,   168,   168,   168,   229,   168,   230,
     234,   242,   255,   256,   201,   257,   261,   278,   279,   284,
     277,   282,   -52,   -52,   -52,   -37,   -19,   -18,   319,   322,
     126,   127,    30,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   238,   239,   286,   287,   288,    53,   326,   327,   111,
     -52,   328,   209,   208,   330,   331,   210,   106,   332,   334,
     209,   208,   219,   335,   210,   336,   201,   340,   -36,     0,
     299,   300,   301,   168,   342,     0,   111,     0,     0,     0,
       0,     0,     0,   225,   226,   227,     0,     0,     0,   231,
     232,   168,     0,   320,   108,     0,   323,     0,     0,     0,
     325,     0,     0,     0,     0,   168,   168,   168,   168,   168,
     168,   168,   168,     0,     0,   252,   253,   254,     0,     0,
       0,   258,   259,   168,   -52,   -52,   -52,     0,     0,     0,
       0,     0,     0,     0,     0,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   273,   274,     0,   169,   -52,     0,   215,
     108,     0,   -52,     0,     0,   220,     0,   215,     0,   168,
     168,   168,     0,     0,     0,   201,   168,   168,   168,   168,
     168,   296,   297,   169,   169,   169,     0,   169,     0,     0,
       0,     0,     0,   202,     0,     0,   168,   168,   168,     0,
       0,     0,   201,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   201,   201,   201,   201,   317,   318,     0,   168,
     -66,   -66,   -66,     0,     0,     0,   168,     0,     0,     0,
       0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,     0,     0,   202,   -19,   -19,   -66,     0,
       0,     0,   169,     0,   262,   263,   264,   265,   266,   267,
     268,   269,   169,   169,   169,     0,   -38,     0,   169,   169,
     169,   -38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   168,     0,     0,   169,   169,   169,   169,   169,   169,
     169,   169,     0,     0,   202,   202,   202,     0,   170,     0,
     202,   202,   169,     0,     0,   270,   271,   272,     0,     0,
       0,     0,     0,     0,     0,     0,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,     0,   170,   170,   170,   -48,   170,
       0,     0,     0,   -48,     0,   203,     0,     0,   169,   169,
     169,   -66,   -66,   -66,   202,   169,   169,   169,   169,   169,
     169,   169,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,     0,   169,   169,   169,   -19,   -66,
       0,   202,   202,   202,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   202,   202,   202,   202,   203,   169,     0,
       0,     0,     0,     0,   170,   169,   174,   175,   176,   177,
     178,   179,   180,   181,   170,   170,   170,   235,   236,   237,
     170,   170,   170,   -38,     0,     0,     0,     0,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   170,   170,   170,   170,
     170,   170,   170,   170,     0,   -48,   203,   203,   203,     0,
       0,     0,   203,   203,   170,     0,     0,   167,     0,     0,
     169,   -83,   -83,   -83,     0,     0,     0,     0,     0,     0,
       0,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   167,   167,   167,     0,   167,   -83,
     170,   170,   170,     0,   200,     0,   203,   170,   170,   170,
     170,   170,   170,   170,     0,     0,     0,     0,   124,   125,
       0,     0,     0,     0,     0,     0,     0,   170,   170,   170,
       0,     0,     0,   203,   203,   203,   203,   203,   203,   203,
     203,   203,   203,   203,   203,   203,   203,   203,   203,     0,
     170,     0,     0,     0,     0,     0,   200,   170,     0,   270,
     271,   272,     0,   167,     0,     0,     0,     0,     0,     0,
     -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,     0,   182,
       0,   167,   -51,   183,   184,   185,   186,   -51,     0,     0,
     187,   188,   189,     0,     0,   167,   167,   167,   167,   167,
     167,   167,   167,     0,     0,     0,   190,   191,     0,     0,
     -39,     0,   170,   167,   192,   -39,   165,     0,   193,   194,
     195,     0,     0,     0,   235,   236,   237,     0,     0,     0,
       0,     0,     0,     0,     0,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   165,   165,   165,     0,   165,     0,   167,
     167,   167,   -51,   198,     0,   200,   167,   167,   167,   294,
     295,     0,     0,     0,   121,   122,   123,    86,    87,    88,
      89,    90,    91,    92,    93,     0,   167,   167,   167,     0,
     -38,     0,   200,   200,   200,   200,   200,   200,   200,   200,
     200,   200,   200,   200,   315,   316,   150,     0,     0,   167,
     151,   152,   153,   154,     0,   198,   167,   155,   156,   157,
       0,     0,   165,   -46,   -46,    88,    89,    90,    91,    92,
      93,     0,     0,   158,   159,     0,   -46,     0,     0,     0,
     165,   160,   -39,     0,     0,   161,   162,   163,     0,     0,
       0,     0,     0,     0,   165,   165,   165,   165,   165,   165,
     165,   165,    33,     0,     0,     0,    34,    35,    36,    37,
       0,   167,   165,    38,    39,    40,   -46,   -46,   264,   265,
     266,   267,   268,   269,     0,     0,     0,     0,   -46,    44,
      45,     0,     0,   -46,   -39,     0,     0,    46,     0,     0,
       0,    48,    49,    50,     0,     0,     0,     0,   165,   165,
     165,     0,     0,     0,   198,   291,   292,   293,   -47,   -47,
      88,    89,    90,    91,    92,    93,    81,     0,     0,     0,
       0,   -47,     0,     0,     0,   165,   165,   165,     0,     0,
       0,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     312,   313,   314,   173,   173,   173,     0,   173,   165,     0,
       0,     0,     0,   197,     0,   165,   113,   114,   115,   116,
     117,   118,   119,   120,     0,     0,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,   -33,     0,   -33,   -33,   -33,   -41,
     -33,   -33,   -33,   -33,     0,     0,     0,   -33,   -33,   -33,
       0,   -33,   -33,   141,   -33,     0,     0,     0,     0,     0,
       0,     0,     0,   -33,   -33,   197,     0,     0,   -33,     0,
     165,   -33,   173,   -33,   -33,   -33,   -33,   -33,     0,     0,
       0,     0,     0,     0,   235,   236,   237,     0,     0,     0,
     233,     0,   166,     0,     0,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,     0,   244,   245,   246,   247,   248,   249,
     250,   251,   -50,     0,     0,     0,     0,     0,     0,   166,
     166,   166,   260,   166,     0,     0,     0,     0,     0,   199,
       0,     0,   -23,     0,   -23,   -23,   -23,     0,   -23,   -23,
     -23,   -23,     0,     0,     0,   -23,   -23,   -23,     0,   -23,
     -23,   -23,   -23,     0,     0,     0,     0,     0,   173,   173,
     173,   -23,   -23,     0,   197,     0,   -23,     0,     0,   -23,
       0,   -23,   -23,   -23,   -23,   -23,     0,     0,     0,     0,
       0,   199,     0,     0,     0,   173,   173,   173,   166,     0,
       0,   197,   304,   305,   306,   307,   308,   309,   310,   311,
       0,     0,     0,     0,     0,   218,   166,     0,   173,   151,
     152,   153,   154,     0,     0,   173,   155,   156,   157,     0,
     166,   166,   166,   166,   166,   166,   166,   166,     0,     0,
       0,     0,   158,   159,     0,     0,     0,     0,   166,     0,
     160,   -39,     0,     0,   161,   162,   163,     0,     0,     0,
     149,     0,     0,     0,    34,    35,    36,    37,     0,     0,
       0,    38,    39,    40,     0,     0,     0,     0,     0,     0,
     173,     0,     0,     0,   166,   166,   166,    44,    45,     0,
     199,   166,   166,   166,     0,    46,     0,     0,     0,    48,
      49,    50,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
       0,   166,   166,   166,     0,   -44,     0,   199,   199,   199,
     199,   199,   199,   199,   199,   199,   199,   199,   199,   -29,
       0,   -29,   -29,   -29,   166,   -29,   -29,   -29,   -29,     0,
       0,   166,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,
       0,     0,     0,     0,     0,     0,     0,     0,   -29,   -29,
       0,     0,     0,   -29,     0,     0,   -29,     0,   -29,   -29,
     -29,   -29,   -29,   -22,     0,   -22,   -22,   -22,     0,   -22,
     -22,   -22,   -22,     0,     0,     0,   -22,   -22,   -22,     0,
     -22,   -22,   -22,   -22,     0,     0,   166,     0,     0,     0,
       0,     0,   -22,   -22,     0,     0,     0,   -22,     0,     0,
     -22,     0,   -22,   -22,   -22,   -22,   -22,   -27,     0,   -27,
     -27,   -27,     0,   -27,   -27,   -27,   -27,     0,     0,     0,
     -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,     0,     0,
       0,     0,     0,     0,     0,     0,   -27,   -27,     0,     0,
       0,   -27,     0,     0,   -27,     0,   -27,   -27,   -27,   -27,
     -27,   -28,     0,   -28,   -28,   -28,     0,   -28,   -28,   -28,
     -28,     0,     0,     0,   -28,   -28,   -28,     0,   -28,   -28,
     -28,   -28,     0,     0,     0,     0,     0,     0,     0,     0,
     -28,   -28,     0,     0,     0,   -28,     0,     0,   -28,     0,
     -28,   -28,   -28,   -28,   -28,   -31,     0,   -31,   -31,   -31,
       0,   -31,   -31,   -31,   -31,     0,     0,     0,   -31,   -31,
     -31,     0,   -31,   -31,   -31,   -31,     0,     0,     0,     0,
       0,     0,     0,     0,   -31,   -31,     0,     0,     0,   -31,
       0,     0,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -30,
       0,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,     0,
       0,     0,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
       0,     0,     0,     0,     0,     0,     0,     0,   -30,   -30,
       0,     0,     0,   -30,     0,     0,   -30,     0,   -30,   -30,
     -30,   -30,   -30,   -21,     0,   -21,   -21,   -21,     0,   -21,
     -21,   -21,   -21,     0,     0,     0,   -21,   -21,   -21,     0,
     -21,   -21,   -21,   -21,     0,     0,     0,     0,     0,     0,
       0,     0,   -21,   -21,     0,     0,     0,   -21,     0,     0,
     -21,     0,   -21,   -21,   -21,   -21,   -21,   -32,     0,   -32,
     -32,   -32,     0,   -32,   -32,   -32,   -32,     0,     0,     0,
     -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,     0,     0,
       0,     0,     0,     0,     0,     0,   -32,   -32,     0,     0,
       0,   -32,     0,     0,   -32,     0,   -32,   -32,   -32,   -32,
     -32,   -75,     0,   -75,   -75,   -75,     0,   -75,   -75,   -75,
     -75,     0,     0,     0,   -75,   -75,   -75,     0,   -75,   -75,
     -75,   -75,     0,     0,     0,     0,     0,     0,     0,     0,
     -75,   -75,     0,     0,     0,   -75,     0,     0,   -75,     0,
     -75,   -75,   -75,   -75,   -75,    -9,     0,    -9,    -9,    -9,
       0,    -9,    -9,    -9,    -9,     0,     0,     0,    -9,    -9,
      -9,     0,    -9,    -9,    -9,    -9,     0,     0,     0,     0,
       0,     0,     0,     0,    -9,    -9,     0,     0,     0,    -9,
       0,     0,    -9,     0,    -9,    -9,    -9,    -9,    -9,   -68,
       0,   -68,   -68,   -68,     0,   -68,   -68,   -68,   -68,     0,
       0,     0,   -68,   -68,   -68,     0,   -68,   -68,   -68,   -68,
       0,     0,     0,     0,     0,     0,     0,     0,   -68,   -68,
       0,     0,     0,   -68,     0,     0,   -68,     0,   -68,   -68,
     -68,   -68,   -68,   -26,     0,   -26,   -26,   -26,     0,   -26,
     -26,   -26,   -26,     0,     0,     0,   -26,   -26,   -26,     0,
     -26,   -26,   -26,   -26,     0,     0,     0,     0,     0,     0,
       0,     0,   -26,   -26,     0,     0,     0,   -26,     0,     0,
     -26,     0,   -26,   -26,   -26,   -26,   -26,   -33,     0,   -33,
     -33,   -33,     0,   -33,   -33,   -33,   -33,     0,     0,     0,
     -33,   -33,   -33,     0,   -33,   -33,   -33,   -33,     0,     0,
       0,     0,     0,     0,     0,     0,   -33,   -33,     0,     0,
       0,   -33,     0,     0,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   -35,     0,   -35,   -35,   -35,     0,   -35,   -35,   -35,
     -35,     0,     0,     0,   -35,   -35,   -35,     0,   -35,   -35,
     -35,   -35,     0,     0,     0,     0,     0,     0,     0,     0,
     -35,   -35,     0,     0,     0,   -35,     0,     0,   -35,     0,
     -35,   -35,   -35,   -35,   -35,   -25,     0,   -25,   -25,   -25,
       0,   -25,   -25,   -25,   -25,     0,     0,     0,   -25,   -25,
     -25,     0,   -25,   -25,     0,   -25,     0,     0,     0,     0,
       0,     0,     0,     0,   -25,   -25,     0,     0,     0,   -25,
       0,     0,   -25,     0,   -25,   -25,   -25,   -25,   -25,    32,
       0,    33,     5,     6,     0,    34,    35,    36,    37,     0,
       0,     0,    38,    39,    40,     0,    41,    42,     0,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    44,    45,
       0,     0,     0,   -39,     0,     0,    46,     0,   -20,    47,
      48,    49,    50,   -23,     0,   -23,   -23,   -23,     0,   -23,
     -23,   -23,   -23,     0,     0,     0,   -23,   -23,   -23,     0,
     -23,   -23,     0,   -23,     0,     0,     0,     0,     0,     0,
       0,     0,   -23,   -23,     0,     0,     0,   -23,     0,     0,
     -23,     0,   -23,   -23,   -23,   -23,   -23,   -29,     0,   -29,
     -29,   -29,     0,   -29,   -29,   -29,   -29,     0,     0,     0,
     -29,   -29,   -29,     0,   -29,   -29,     0,   -29,     0,     0,
       0,     0,     0,     0,     0,     0,   -29,   -29,     0,     0,
       0,   -29,     0,     0,   -29,     0,   -29,   -29,   -29,   -29,
     -29,   -24,     0,   -24,   -24,   -24,     0,   -24,   -24,   -24,
     -24,     0,     0,     0,   -24,   -24,   -24,     0,   -24,   -24,
       0,   -24,     0,     0,     0,     0,     0,     0,     0,     0,
     -24,   -24,     0,     0,     0,   -24,     0,     0,   -24,     0,
     -24,   -24,   -24,   -24,   -24,   -22,     0,   -22,   -22,   -22,
       0,   -22,   -22,   -22,   -22,     0,     0,     0,   -22,   -22,
     -22,     0,   -22,   -22,     0,   -22,     0,     0,     0,     0,
       0,     0,     0,     0,   -22,   -22,     0,     0,     0,   -22,
       0,     0,   -22,     0,   -22,   -22,   -22,   -22,   -22,   -27,
       0,   -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,     0,
       0,     0,   -27,   -27,   -27,     0,   -27,   -27,     0,   -27,
       0,     0,     0,     0,     0,     0,     0,     0,   -27,   -27,
       0,     0,     0,   -27,     0,     0,   -27,     0,   -27,   -27,
     -27,   -27,   -27,   -28,     0,   -28,   -28,   -28,     0,   -28,
     -28,   -28,   -28,     0,     0,     0,   -28,   -28,   -28,     0,
     -28,   -28,     0,   -28,     0,     0,     0,     0,     0,     0,
       0,     0,   -28,   -28,     0,     0,     0,   -28,     0,     0,
     -28,     0,   -28,   -28,   -28,   -28,   -28,   -31,     0,   -31,
     -31,   -31,     0,   -31,   -31,   -31,   -31,     0,     0,     0,
     -31,   -31,   -31,     0,   -31,   -31,     0,   -31,     0,     0,
       0,     0,     0,     0,     0,     0,   -31,   -31,     0,     0,
       0,   -31,     0,     0,   -31,     0,   -31,   -31,   -31,   -31,
     -31,   -30,     0,   -30,   -30,   -30,     0,   -30,   -30,   -30,
     -30,     0,     0,     0,   -30,   -30,   -30,     0,   -30,   -30,
       0,   -30,     0,     0,     0,     0,     0,     0,     0,     0,
     -30,   -30,     0,     0,     0,   -30,     0,     0,   -30,     0,
     -30,   -30,   -30,   -30,   -30,   -21,     0,   -21,   -21,   -21,
       0,   -21,   -21,   -21,   -21,     0,     0,     0,   -21,   -21,
     -21,     0,   -21,   -21,     0,   -21,     0,     0,     0,     0,
       0,     0,     0,     0,   -21,   -21,     0,     0,     0,   -21,
       0,     0,   -21,     0,   -21,   -21,   -21,   -21,   -21,   -32,
       0,   -32,   -32,   -32,     0,   -32,   -32,   -32,   -32,     0,
       0,     0,   -32,   -32,   -32,     0,   -32,   -32,     0,   -32,
       0,     0,     0,     0,     0,     0,     0,     0,   -32,   -32,
       0,     0,     0,   -32,     0,     0,   -32,     0,   -32,   -32,
     -32,   -32,   -32,   -75,     0,   -75,   -75,   -75,     0,   -75,
     -75,   -75,   -75,     0,     0,     0,   -75,   -75,   -75,     0,
     -75,   -75,     0,   -75,     0,     0,     0,     0,     0,     0,
       0,     0,   -75,   -75,     0,     0,     0,   -75,     0,     0,
     -75,     0,   -75,   -75,   -75,   -75,   -75,   -68,     0,   -68,
     -68,   -68,     0,   -68,   -68,   -68,   -68,     0,     0,     0,
     -68,   -68,   -68,     0,   -68,   -68,     0,   -68,     0,     0,
       0,     0,     0,     0,     0,     0,   -68,   -68,     0,     0,
       0,   -68,     0,     0,   -68,     0,   -68,   -68,   -68,   -68,
     -68,   -34,     0,   -34,   -34,   -34,     0,   -34,   -34,   -34,
     -34,     0,     0,     0,   -34,   -34,   -34,     0,   -34,   -34,
       0,   -34,     0,     0,     0,     0,     0,     0,     0,     0,
     -34,   -34,     0,     0,     0,   -34,     0,     0,   -34,     0,
     -34,   -34,   -34,   -34,   -34,   -35,     0,   -35,   -35,   -35,
       0,   -35,   -35,   -35,   -35,     0,     0,     0,   -35,   -35,
     -35,     0,   -35,   -35,     0,   -35,     0,     0,     0,     0,
       0,     0,     0,     0,   -35,   -35,     0,     0,     0,   -35,
       0,     0,   -35,     0,   -35,   -35,   -35,   -35,   -35,    -9,
       0,    -9,    -9,    -9,     0,    -9,    -9,    -9,    -9,     0,
       0,     0,    -9,    -9,    -9,     0,    -9,    -9,     0,    -9,
       0,     0,     0,     0,     0,     0,     0,     0,    -9,    -9,
       0,     0,     0,    -9,     0,     0,    -9,     0,    -9,    -9,
      -9,    -9,    -9,    32,     0,    33,     5,     6,     0,    34,
      35,    36,    37,     0,     0,     0,    38,    39,    40,     0,
      41,    42,     0,    43,     0,     0,     0,     0,     0,     0,
       0,     0,    44,    45,     0,     0,     0,   -39,     0,     0,
      46,     0,   -20,   298,    48,    49,    50,   -26,     0,   -26,
     -26,   -26,     0,   -26,   -26,   -26,   -26,     0,     0,     0,
     -26,   -26,   -26,     0,   -26,   -26,     0,   -26,     0,     0,
       0,     0,     0,     0,     0,     0,   -26,   -26,     0,     0,
       0,   -26,     0,     0,   -26,     0,   -26,   -26,   -26,   -26,
     -26,    32,     0,    33,     5,     6,     0,    34,    35,    36,
      37,     0,     0,     0,    38,    39,    40,     0,    41,    42,
       0,    43,     0,     0,     0,     0,     0,     0,     0,     0,
      44,    45,     0,     0,     0,   -39,     0,     0,    46,     0,
     -20,   337,    48,    49,    50,   204,     0,    33,     5,     6,
       0,    34,    35,    36,    37,     0,     0,     0,    38,    39,
      40,     0,   205,   206,     0,   207,     0,     0,     0,     0,
       0,     0,     0,     0,    44,    45,     0,     0,     0,   -39,
       0,     0,    46,     0,   -20,     0,    48,    49,    50,    32,
       0,    33,     5,     6,     0,    34,    35,    36,    37,     0,
       0,     0,    38,    39,    40,     0,    41,    42,     0,    43,
       0,     0,     0,     0,     0,     0,     0,     0,    44,    45,
       0,     0,     0,   -39,     0,     0,    46,     0,   -20,   150,
      48,    49,    50,   151,   152,   153,   154,     0,     0,   182,
     155,   156,   157,   183,   184,   185,   186,     0,     0,     0,
     187,   188,   189,     0,     0,     0,   158,   159,     0,     0,
       0,     0,     0,     0,   160,     0,   190,   191,   161,   162,
     163,   -83,   -83,   -83,   192,     0,     0,     0,   193,   194,
     195,     0,   -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -82,   -82,   -82,     0,   -83,
       0,     0,     0,     0,     0,     0,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -81,
     -81,   -81,     0,   -82,     0,     0,     0,     0,     0,     0,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -84,   -84,   -84,     0,   -81,     0,     0,
       0,     0,     0,     0,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -53,   -53,   -53,
       0,   -84,     0,     0,     0,     0,     0,     0,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   275,   276,
     -53,   -56,   -56,   -56,     0,   -53,     0,     0,     0,     0,
       0,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -60,   -60,   -60,     0,   -56,
       0,     0,     0,     0,     0,     0,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -59,
     -59,   -59,     0,   -60,     0,     0,     0,     0,     0,     0,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -63,   -63,   -63,     0,   -59,     0,     0,
       0,     0,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -65,   -65,   -65,
       0,   -63,     0,     0,     0,     0,     0,     0,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -64,   -64,   -64,     0,   -65,     0,     0,     0,     0,
       0,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -62,   -62,   -62,     0,   -64,
       0,     0,     0,     0,     0,     0,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -61,
     -61,   -61,     0,   -62,     0,     0,     0,     0,     0,     0,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -67,   -67,   -67,     0,   -61,     0,     0,
       0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -54,   -54,   -54,
       0,   -67,     0,     0,     0,     0,     0,     0,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   275,   276,
     -54,   -55,   -55,   -55,     0,   -54,     0,     0,     0,     0,
       0,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   275,   276,   -55,   -57,   -57,   -57,     0,   -55,
       0,     0,     0,     0,     0,     0,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -58,
     -58,   -58,     0,   -57,     0,     0,     0,     0,     0,     0,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -70,   -70,   -70,     0,   -58,     0,     0,
       0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -71,   -71,   -71,
       0,   -70,     0,     0,     0,     0,     0,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -72,   -72,   -72,     0,   -71,     0,     0,     0,     0,
       0,     0,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -69,   -69,   -69,     0,   -72,
       0,     0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -82,
     -82,   -82,     0,   -69,     0,     0,     0,     0,     0,     0,
     -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -81,   -81,   -81,     0,     0,   -82,     0,     0,
       0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -84,   -84,   -84,     0,     0,
     -81,     0,     0,     0,     0,     0,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -53,   -53,
     -53,     0,     0,   -84,     0,     0,     0,     0,     0,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   240,
     241,   -56,   -56,   -56,     0,     0,   -53,     0,     0,     0,
       0,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -60,   -60,   -60,     0,     0,   -56,
       0,     0,     0,     0,     0,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -59,   -59,   -59,
       0,     0,   -60,     0,     0,     0,     0,     0,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -63,   -63,   -63,     0,     0,   -59,     0,     0,     0,     0,
       0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -65,   -65,   -65,     0,     0,   -63,     0,
       0,     0,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -64,   -64,   -64,     0,
       0,   -65,     0,     0,     0,     0,     0,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -62,
     -62,   -62,     0,     0,   -64,     0,     0,     0,     0,     0,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -61,   -61,   -61,     0,     0,   -62,     0,     0,
       0,     0,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -67,   -67,   -67,     0,     0,
     -61,     0,     0,     0,     0,     0,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -54,   -54,
     -54,     0,     0,   -67,     0,     0,     0,     0,     0,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   240,
     241,   -55,   -55,   -55,     0,     0,   -54,     0,     0,     0,
       0,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   240,   241,   -57,   -57,   -57,     0,     0,   -55,
       0,     0,     0,     0,     0,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -58,   -58,   -58,
       0,     0,   -57,     0,     0,     0,     0,     0,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -70,   -70,   -70,     0,     0,   -58,     0,     0,     0,     0,
       0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -71,   -71,   -71,     0,     0,   -70,     0,
       0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -72,   -72,   -72,     0,
       0,   -71,     0,     0,     0,     0,     0,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,   -69,
     -69,   -69,     0,     0,   -72,     0,     0,     0,     0,     0,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   270,   271,   272,     0,     0,   -69,     0,     0,
       0,     0,     0,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     -50,   270,   271,   272,     0,   -50,     0,     0,     0,     0,
     -50,     0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     235,   236,   237,     0,   -49,     0,     0,     0,     0,   -49,
       0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -66,
     -66,   -66,     0,     0,     0,     0,     0,     0,   -49,     0,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,     0,   -66,     0,   -19,   -19,   -66,   -66,   -66,
       0,     0,     0,     0,     0,     0,     0,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,   -66,     0,     0,   -19,   -83,   -83,   -83,     0,     0,
       0,     0,     0,     0,     0,     0,   -83,   -83,   -83,   -83,
     -83,   -83,   -83,   -83,   -83,   -83,   -83,   -83,     0,   -83,
     -82,   -82,   -82,     0,     0,     0,     0,     0,     0,     0,
       0,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,   -82,
     -82,   -82,   -82,     0,   -82,   -81,   -81,   -81,     0,     0,
       0,     0,     0,     0,     0,     0,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,     0,   -81,
     -84,   -84,   -84,     0,     0,     0,     0,     0,     0,     0,
       0,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,   -84,
     -84,   -84,   -84,     0,   -84,   -53,   -53,   -53,     0,     0,
       0,     0,     0,     0,     0,     0,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,    99,   100,     0,   -53,
     -56,   -56,   -56,     0,     0,     0,     0,     0,     0,     0,
       0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,     0,   -56,   -60,   -60,   -60,     0,     0,
       0,     0,     0,     0,     0,     0,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,   -60,
     -59,   -59,   -59,     0,     0,     0,     0,     0,     0,     0,
       0,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,     0,   -59,   -63,   -63,   -63,     0,     0,
       0,     0,     0,     0,     0,     0,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,   -63,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,     0,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,   -65,   -64,   -64,   -64,     0,     0,
       0,     0,     0,     0,     0,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,     0,   -64,
     -62,   -62,   -62,     0,     0,     0,     0,     0,     0,     0,
       0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,     0,   -62,   -61,   -61,   -61,     0,     0,
       0,     0,     0,     0,     0,     0,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,   -61,
     -67,   -67,   -67,     0,     0,     0,     0,     0,     0,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,   -67,   -54,   -54,   -54,     0,     0,
       0,     0,     0,     0,     0,     0,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,    99,   100,     0,   -54,
     -55,   -55,   -55,     0,     0,     0,     0,     0,     0,     0,
       0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,    99,   100,     0,   -55,   -57,   -57,   -57,     0,     0,
       0,     0,     0,     0,     0,     0,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,     0,   -57,
     -58,   -58,   -58,     0,     0,     0,     0,     0,     0,     0,
       0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,     0,   -58,   -70,   -70,   -70,     0,     0,
       0,     0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,
     -71,   -71,   -71,     0,     0,     0,     0,     0,     0,     0,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,     0,   -71,   -72,   -72,   -72,     0,     0,
       0,     0,     0,     0,     0,     0,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,   -72,   -72,   -72,     0,   -72,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,     0,
       0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,     0,   -69,   -52,   -52,   -52,     0,     0,
       0,     0,     0,     0,     0,     0,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,    97,    98,    94,    95,    96,   -52,
       0,     0,     0,     0,     0,     0,     0,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,    94,    95,    96,     0,     0,
     -48,     0,     0,     0,     0,     0,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,    94,    95,    96,     0,     0,   -51,
       0,     0,     0,     0,     0,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,    94,    95,    96,     0,     0,   -50,     0,
       0,     0,     0,     0,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,     0,     0,     0,     0,     0,   -49,   -47,   -47,
     264,   265,   266,   267,   268,   269,     0,     0,     0,     0,
     -47,     0,     0,     0,     0,   -47,   -41,   -41,   -41,   -41,
     -41,   -41,   -41,   -41,     0,     0,     0,     0,   -41,     0,
       0,     0,     0,   -41,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,   -44,     0,     0,     0,     0,   -44,     0,     0,     0,
       0,   -44,   -42,   -42,   264,   265,   -42,   267,   268,   -42,
       0,     0,     0,     0,   -42,     0,     0,     0,     0,   -42,
     -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,     0,     0,
       0,     0,   -40,     0,     0,     0,     0,   -40,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,     0,
     -45,     0,     0,     0,     0,   -45,   -43,   -43,   264,   265,
     -43,   267,   268,   -43,     0,     0,     0,     0,   -43,     0,
       0,     0,     0,   -43,   174,   175,   176,   177,   178,   179,
     180,   181,   -46,   -46,   176,   177,   178,   179,   180,   181,
       0,   289,     0,     0,     0,     0,     0,     0,     0,   -46,
     -47,   -47,   176,   177,   178,   179,   180,   181,   -41,   -41,
     -41,   -41,   -41,   -41,   -41,   -41,     0,   -47,     0,     0,
       0,     0,     0,     0,     0,   -41,   -44,   -44,   -44,   -44,
     -44,   -44,   -44,   -44,   -42,   -42,   176,   177,   -42,   179,
     180,   -42,     0,   -44,     0,     0,     0,     0,     0,     0,
       0,   -42,   -40,   -40,   -40,   -40,   -40,   -40,   -40,   -40,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,   -40,
       0,     0,     0,     0,     0,     0,     0,   -45,   -43,   -43,
     176,   177,   -43,   179,   180,   -43,   174,   175,   176,   177,
     178,   179,   180,   181,     0,   -43,     0,     0,     0,     0,
       0,     0,     0,   302,   -42,   -42,    88,    89,   -42,    91,
      92,   -42,     0,     0,     0,     0,     0,   -42,   -40,   -40,
     -40,   -40,   -40,   -40,   -40,   -40,     0,     0,     0,     0,
       0,   -40,   -45,   -45,   -45,   -45,   -45,   -45,   -45,   -45,
       0,     0,     0,     0,     0,   -45,   -43,   -43,    88,    89,
     -43,    91,    92,   -43,     0,     0,     0,     0,     0,   -43
};

static const yytype_int16 yycheck[] =
{
       2,     2,   131,   131,    52,   131,   131,   131,   131,   131,
      55,   172,   141,    11,     4,     5,   145,   234,    20,     0,
       3,     0,     1,     6,    26,     4,     5,     0,     1,    34,
      34,     4,     5,    31,    39,    39,   133,    35,    36,    37,
      11,    12,    13,    41,   261,   142,    44,    45,     2,    39,
       3,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,     4,     5,    20,    38,    39,     0,
       1,    34,    26,     4,     5,     3,    39,     0,     1,     3,
      78,     4,     5,     3,    82,    83,     6,     3,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    37,    38,    22,    23,    24,    25,    26,
      27,    28,    29,     3,    35,    37,    38,     7,     8,     9,
      10,   282,    39,    38,    14,    15,    16,     0,     1,   131,
     131,     4,     5,   131,   132,   133,    41,   135,    39,    35,
      30,    31,    38,   141,   142,    35,    34,   145,    38,   147,
     148,    39,    42,    43,    44,     0,     1,    34,    34,     4,
       5,   209,    39,    39,    35,    40,   211,    38,    73,    74,
      75,    35,    77,    78,    38,     0,     1,    82,    83,     4,
       5,    38,   279,    38,    34,    38,   184,   185,   186,    39,
       0,     1,   190,   191,     4,     5,     0,     1,     0,     1,
       4,     5,     4,     5,    38,   334,   334,   205,   334,   334,
     334,   334,   334,   342,   342,    38,   342,   342,   342,   342,
     342,    37,    38,    37,    38,    40,   131,   132,   133,    34,
     135,    38,    35,    39,    39,    34,   234,   142,   335,    34,
      39,    35,    35,   340,    39,   243,    35,    36,    37,    34,
       3,    39,    39,    39,    39,    44,    45,    46,    35,    35,
      35,    35,    35,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,    39,
       3,   279,    38,   281,    73,    74,    75,    38,    77,    38,
      38,    35,    38,    38,    83,    38,    38,    38,    38,    35,
     205,    40,    11,    12,    13,    39,    35,    35,    35,    35,
      99,   100,    26,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,   228,   229,   230,   324,    39,    39,   234,
      39,    39,   334,   334,    39,    39,   334,   335,    39,    39,
     342,   342,   340,    35,   342,    35,   135,    35,    39,    -1,
     255,   256,   257,   142,    39,    -1,   261,    -1,    -1,    -1,
      -1,    -1,    -1,   152,   153,   154,    -1,    -1,    -1,   158,
     159,   160,    -1,   278,   279,    -1,   281,    -1,    -1,    -1,
     285,    -1,    -1,    -1,    -1,   174,   175,   176,   177,   178,
     179,   180,   181,    -1,    -1,   184,   185,   186,    -1,    -1,
      -1,   190,   191,   192,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    46,    34,    -1,   334,
     335,    -1,    39,    -1,    -1,   340,    -1,   342,    -1,   228,
     229,   230,    -1,    -1,    -1,   234,   235,   236,   237,   238,
     239,   240,   241,    73,    74,    75,    -1,    77,    -1,    -1,
      -1,    -1,    -1,    83,    -1,    -1,   255,   256,   257,    -1,
      -1,    -1,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,   275,   276,    -1,   278,
      11,    12,    13,    -1,    -1,    -1,   285,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    -1,   135,    37,    38,    39,    -1,
      -1,    -1,   142,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,   152,   153,   154,    -1,    34,    -1,   158,   159,
     160,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   340,    -1,    -1,   174,   175,   176,   177,   178,   179,
     180,   181,    -1,    -1,   184,   185,   186,    -1,    46,    -1,
     190,   191,   192,    -1,    -1,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    73,    74,    75,    34,    77,
      -1,    -1,    -1,    39,    -1,    83,    -1,    -1,   228,   229,
     230,    11,    12,    13,   234,   235,   236,   237,   238,   239,
     240,   241,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,   255,   256,   257,    38,    39,
      -1,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   135,   278,    -1,
      -1,    -1,    -1,    -1,   142,   285,    22,    23,    24,    25,
      26,    27,    28,    29,   152,   153,   154,    11,    12,    13,
     158,   159,   160,    39,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,   174,   175,   176,   177,
     178,   179,   180,   181,    -1,    39,   184,   185,   186,    -1,
      -1,    -1,   190,   191,   192,    -1,    -1,    46,    -1,    -1,
     340,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    73,    74,    75,    -1,    77,    39,
     228,   229,   230,    -1,    83,    -1,   234,   235,   236,   237,
     238,   239,   240,   241,    -1,    -1,    -1,    -1,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   255,   256,   257,
      -1,    -1,    -1,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   273,   274,   275,   276,    -1,
     278,    -1,    -1,    -1,    -1,    -1,   135,   285,    -1,    11,
      12,    13,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,     3,
      -1,   160,    34,     7,     8,     9,    10,    39,    -1,    -1,
      14,    15,    16,    -1,    -1,   174,   175,   176,   177,   178,
     179,   180,   181,    -1,    -1,    -1,    30,    31,    -1,    -1,
      34,    -1,   340,   192,    38,    39,    46,    -1,    42,    43,
      44,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    73,    74,    75,    -1,    77,    -1,   228,
     229,   230,    39,    83,    -1,   234,   235,   236,   237,   238,
     239,    -1,    -1,    -1,    94,    95,    96,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,   255,   256,   257,    -1,
      35,    -1,   261,   262,   263,   264,   265,   266,   267,   268,
     269,   270,   271,   272,   273,   274,     3,    -1,    -1,   278,
       7,     8,     9,    10,    -1,   135,   285,    14,    15,    16,
      -1,    -1,   142,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    30,    31,    -1,    35,    -1,    -1,    -1,
     160,    38,    39,    -1,    -1,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,   174,   175,   176,   177,   178,   179,
     180,   181,     3,    -1,    -1,    -1,     7,     8,     9,    10,
      -1,   340,   192,    14,    15,    16,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    34,    30,
      31,    -1,    -1,    39,    35,    -1,    -1,    38,    -1,    -1,
      -1,    42,    43,    44,    -1,    -1,    -1,    -1,   228,   229,
     230,    -1,    -1,    -1,   234,   235,   236,   237,    22,    23,
      24,    25,    26,    27,    28,    29,    46,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    -1,   255,   256,   257,    -1,    -1,
      -1,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,    73,    74,    75,    -1,    77,   278,    -1,
      -1,    -1,    -1,    83,    -1,   285,    86,    87,    88,    89,
      90,    91,    92,    93,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,     1,    -1,     3,     4,     5,    35,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    16,
      -1,    18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,   135,    -1,    -1,    35,    -1,
     340,    38,   142,    40,    41,    42,    43,    44,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,    -1,    -1,    -1,
     160,    -1,    46,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,   174,   175,   176,   177,   178,   179,
     180,   181,    39,    -1,    -1,    -1,    -1,    -1,    -1,    73,
      74,    75,   192,    77,    -1,    -1,    -1,    -1,    -1,    83,
      -1,    -1,     1,    -1,     3,     4,     5,    -1,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,    18,
      19,    20,    21,    -1,    -1,    -1,    -1,    -1,   228,   229,
     230,    30,    31,    -1,   234,    -1,    35,    -1,    -1,    38,
      -1,    40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,   135,    -1,    -1,    -1,   255,   256,   257,   142,    -1,
      -1,   261,   262,   263,   264,   265,   266,   267,   268,   269,
      -1,    -1,    -1,    -1,    -1,     3,   160,    -1,   278,     7,
       8,     9,    10,    -1,    -1,   285,    14,    15,    16,    -1,
     174,   175,   176,   177,   178,   179,   180,   181,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    -1,    -1,   192,    -1,
      38,    39,    -1,    -1,    42,    43,    44,    -1,    -1,    -1,
       3,    -1,    -1,    -1,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    -1,
     340,    -1,    -1,    -1,   228,   229,   230,    30,    31,    -1,
     234,   235,   236,   237,    -1,    38,    -1,    -1,    -1,    42,
      43,    44,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,   255,   256,   257,    -1,    35,    -1,   261,   262,   263,
     264,   265,   266,   267,   268,   269,   270,   271,   272,     1,
      -1,     3,     4,     5,   278,     7,     8,     9,    10,    -1,
      -1,   285,    14,    15,    16,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,    41,
      42,    43,    44,     1,    -1,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,
      18,    19,    20,    21,    -1,    -1,   340,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    -1,    35,    -1,    -1,
      38,    -1,    40,    41,    42,    43,    44,     1,    -1,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    -1,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      -1,    35,    -1,    -1,    38,    -1,    40,    41,    42,    43,
      44,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    -1,    35,    -1,    -1,    38,    -1,
      40,    41,    42,    43,    44,     1,    -1,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    -1,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    35,
      -1,    -1,    38,    -1,    40,    41,    42,    43,    44,     1,
      -1,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,    41,
      42,    43,    44,     1,    -1,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    -1,    35,    -1,    -1,
      38,    -1,    40,    41,    42,    43,    44,     1,    -1,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    -1,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      -1,    35,    -1,    -1,    38,    -1,    40,    41,    42,    43,
      44,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    -1,    35,    -1,    -1,    38,    -1,
      40,    41,    42,    43,    44,     1,    -1,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    -1,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    35,
      -1,    -1,    38,    -1,    40,    41,    42,    43,    44,     1,
      -1,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,    41,
      42,    43,    44,     1,    -1,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    -1,    35,    -1,    -1,
      38,    -1,    40,    41,    42,    43,    44,     1,    -1,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    -1,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      -1,    35,    -1,    -1,    38,    -1,    40,    41,    42,    43,
      44,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    -1,    35,    -1,    -1,    38,    -1,
      40,    41,    42,    43,    44,     1,    -1,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    35,
      -1,    -1,    38,    -1,    40,    41,    42,    43,    44,     1,
      -1,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    -1,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,    41,
      42,    43,    44,     1,    -1,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,
      18,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    -1,    35,    -1,    -1,
      38,    -1,    40,    41,    42,    43,    44,     1,    -1,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    -1,    18,    19,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      -1,    35,    -1,    -1,    38,    -1,    40,    41,    42,    43,
      44,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    -1,    35,    -1,    -1,    38,    -1,
      40,    41,    42,    43,    44,     1,    -1,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    35,
      -1,    -1,    38,    -1,    40,    41,    42,    43,    44,     1,
      -1,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    -1,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,    41,
      42,    43,    44,     1,    -1,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,
      18,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    -1,    35,    -1,    -1,
      38,    -1,    40,    41,    42,    43,    44,     1,    -1,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    -1,    18,    19,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      -1,    35,    -1,    -1,    38,    -1,    40,    41,    42,    43,
      44,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    -1,    35,    -1,    -1,    38,    -1,
      40,    41,    42,    43,    44,     1,    -1,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    35,
      -1,    -1,    38,    -1,    40,    41,    42,    43,    44,     1,
      -1,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    -1,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,    41,
      42,    43,    44,     1,    -1,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,
      18,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    -1,    35,    -1,    -1,
      38,    -1,    40,    41,    42,    43,    44,     1,    -1,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    -1,    18,    19,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      -1,    35,    -1,    -1,    38,    -1,    40,    41,    42,    43,
      44,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    -1,    35,    -1,    -1,    38,    -1,
      40,    41,    42,    43,    44,     1,    -1,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    35,
      -1,    -1,    38,    -1,    40,    41,    42,    43,    44,     1,
      -1,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    -1,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,    41,
      42,    43,    44,     1,    -1,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,
      18,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    -1,    35,    -1,    -1,
      38,    -1,    40,    41,    42,    43,    44,     1,    -1,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    -1,    18,    19,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      -1,    35,    -1,    -1,    38,    -1,    40,    41,    42,    43,
      44,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    -1,    35,    -1,    -1,    38,    -1,
      40,    41,    42,    43,    44,     1,    -1,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    35,
      -1,    -1,    38,    -1,    40,    -1,    42,    43,    44,     1,
      -1,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    -1,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,     3,
      42,    43,    44,     7,     8,     9,    10,    -1,    -1,     3,
      14,    15,    16,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    -1,    -1,    -1,    30,    31,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    30,    31,    42,    43,
      44,    11,    12,    13,    38,    -1,    -1,    -1,    42,    43,
      44,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
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
      34,    11,    12,    13,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    11,    12,    13,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    11,
      12,    13,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
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
      28,    29,    30,    31,    32,    33,    11,    12,    13,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    11,
      12,    13,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    11,    12,    13,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    11,    12,    13,    -1,    34,    -1,    -1,    -1,    -1,
      39,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      11,    12,    13,    -1,    34,    -1,    -1,    -1,    -1,    39,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    11,
      12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    35,    -1,    37,    38,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    -1,    -1,    38,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    35,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    11,    12,    13,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    11,    12,    13,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    11,    12,    13,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    11,    12,    13,    -1,    -1,    35,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    35,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    39,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    39,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      -1,    39,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    39,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    39,    22,    23,    24,    25,    26,    27,
      28,    29,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      22,    23,    24,    25,    26,    27,    28,    29,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    22,    23,    24,    25,
      26,    27,    28,    29,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    39,    22,    23,    24,    25,    26,    27,    28,    29,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    22,    23,
      24,    25,    26,    27,    28,    29,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    39,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    -1,    35,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      -1,    35,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    35,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    48,    49,     0,     1,     4,     5,    50,    51,    53,
      59,    79,    80,     6,     6,    52,    54,     3,    60,    35,
      38,    56,    57,    58,    59,    39,    34,    40,    55,    64,
      58,    63,     1,     3,     7,     8,     9,    10,    14,    15,
      16,    18,    19,    21,    30,    31,    38,    41,    42,    43,
      44,    51,    59,    60,    61,    62,    65,    66,    67,    69,
      70,    71,    72,    73,    74,    75,    76,    78,    81,    60,
      74,    74,    74,    38,    38,    38,    69,    38,    38,    74,
      74,    70,    37,    38,    64,    35,    22,    23,    24,    25,
      26,    27,    28,    29,    11,    12,    13,    30,    31,    32,
      33,    69,    69,    69,    35,    69,    60,    68,    69,    39,
      69,    69,    77,    70,    70,    70,    70,    70,    70,    70,
      70,    71,    71,    71,    73,    73,    74,    74,    39,    39,
      39,    39,    37,    35,    35,    34,    39,    61,    69,    68,
      69,    20,    35,    61,    68,    39,    61,    79,    79,     3,
       3,     7,     8,     9,    10,    14,    15,    16,    30,    31,
      38,    42,    43,    44,    60,    71,    72,    73,    74,    76,
      81,    52,    40,    70,    22,    23,    24,    25,    26,    27,
      28,    29,     3,     7,     8,     9,    10,    14,    15,    16,
      30,    31,    38,    42,    43,    44,    60,    70,    71,    72,
      73,    74,    76,    81,     1,    18,    19,    21,    51,    59,
      60,    62,    65,    66,    67,    69,    75,    78,     3,    60,
      69,     3,    60,     3,    60,    74,    74,    74,    38,    38,
      38,    74,    74,    70,    38,    11,    12,    13,    30,    31,
      32,    33,    35,    63,    70,    70,    70,    70,    70,    70,
      70,    70,    74,    74,    74,    38,    38,    38,    74,    74,
      70,    38,    22,    23,    24,    25,    26,    27,    28,    29,
      11,    12,    13,    30,    31,    32,    33,    69,    38,    38,
      52,    37,    40,    64,    35,    37,    69,    69,    69,    39,
      77,    71,    71,    71,    73,    73,    74,    74,    41,    69,
      69,    69,    39,    77,    70,    70,    70,    70,    70,    70,
      70,    70,    71,    71,    71,    73,    73,    74,    74,    35,
      69,    68,    35,    69,    63,    69,    39,    39,    39,    39,
      39,    39,    39,    39,    39,    35,    35,    41,    61,    68,
      35,    68,    39,    61
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    50,    52,    51,
      54,    53,    55,    56,    56,    57,    57,    58,    59,    60,
      62,    61,    61,    61,    63,    63,    64,    65,    65,    65,
      65,    65,    65,    66,    66,    67,    68,    68,    69,    69,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    71,
      71,    71,    71,    72,    72,    72,    73,    73,    73,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    75,    76,
      76,    76,    76,    77,    77,    78,    79,    79,    79,    80,
      80,    81,    81,    81,    81
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     0,     3,
       0,     6,     1,     1,     0,     3,     1,     1,     2,     1,
       0,     2,     1,     1,     2,     0,     3,     1,     1,     1,
       1,     1,     2,     5,     7,     9,     3,     1,     1,     0,
       3,     3,     3,     3,     3,     3,     3,     3,     1,     3,
       3,     3,     1,     1,     3,     3,     1,     3,     3,     1,
       1,     2,     2,     2,     2,     2,     1,     3,     4,     4,
       4,     4,     4,     3,     1,     3,     1,     1,     1,     2,
       2,     1,     1,     1,     1
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
#line 86 "src/sintatico.y"
                             {
		ast = (yyval.node);
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("programa", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 2834 "src/sintatico.tab.c"
    break;

  case 3: /* lista_de_declaracoes: lista_de_declaracoes declaracao  */
#line 95 "src/sintatico.y"
                                          {
		(yyval.node) = novo_node("lista_de_declaracoes", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 2844 "src/sintatico.tab.c"
    break;

  case 4: /* lista_de_declaracoes: %empty  */
#line 100 "src/sintatico.y"
                        {
		(yyval.node) = (t_node*)0;
		// $$ = novo_node("lista_de_declaracoes", -1, -1);
	}
#line 2853 "src/sintatico.tab.c"
    break;

  case 5: /* declaracao: declaracao_de_variavel  */
#line 107 "src/sintatico.y"
                                 {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("declaracao", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 2863 "src/sintatico.tab.c"
    break;

  case 6: /* declaracao: declaracao_de_funcao  */
#line 112 "src/sintatico.y"
                               {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("declaracao", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 2873 "src/sintatico.tab.c"
    break;

  case 7: /* declaracao: error  */
#line 117 "src/sintatico.y"
                {
		yyerrok;
	}
#line 2881 "src/sintatico.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 123 "src/sintatico.y"
                            {
			var_ou_func_atual = "Variavel";
			incrementa_tabela(nome_id_atual);
		}
#line 2890 "src/sintatico.tab.c"
    break;

  case 9: /* declaracao_de_variavel: tipo_de_variavel_id $@1 PONTO_VIRGULA  */
#line 126 "src/sintatico.y"
                                {
		(yyval.node) = novo_node("declaracao_de_variavel", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 2899 "src/sintatico.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 134 "src/sintatico.y"
                              {
		  var_ou_func_atual = "funcao";
		  incrementa_tabela(nome_id_atual);
		  
		  incrementa_escopo();
	  }
#line 2910 "src/sintatico.tab.c"
    break;

  case 11: /* declaracao_de_funcao: tipo_de_variavel_id $@2 ABRE_PARENTESES parametros FECHA_PARENTESES definicao_de_funcao  */
#line 139 "src/sintatico.y"
                                                                            {
		(yyval.node) = novo_node("declaracao_de_funcao", -1, -1);
		// coloca_node_filho($$, $5);
		// coloca_node_filho($$, $3);
		// coloca_node_filho($$, $1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), (yyvsp[-5].node));
	  }
#line 2924 "src/sintatico.tab.c"
    break;

  case 12: /* definicao_de_funcao: bloco_de_comando  */
#line 151 "src/sintatico.y"
                         {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("definicao_de_funcao", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 2934 "src/sintatico.tab.c"
    break;

  case 13: /* parametros: lista_de_parametros  */
#line 159 "src/sintatico.y"
                              {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("parametros", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 2944 "src/sintatico.tab.c"
    break;

  case 14: /* parametros: %empty  */
#line 164 "src/sintatico.y"
                        {
		(yyval.node) = (t_node*)0;
		// $$ = novo_node("parametros", -1, -1);
	}
#line 2953 "src/sintatico.tab.c"
    break;

  case 15: /* lista_de_parametros: lista_de_parametros VIRGULA parametro  */
#line 171 "src/sintatico.y"
                                                {
		(yyval.node) = novo_node("lista_de_parametros", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 2963 "src/sintatico.tab.c"
    break;

  case 16: /* lista_de_parametros: parametro  */
#line 176 "src/sintatico.y"
                    {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("lista_de_parametros", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 2973 "src/sintatico.tab.c"
    break;

  case 17: /* parametro: tipo_de_variavel_id  */
#line 184 "src/sintatico.y"
                              {
		(yyval.node) = novo_node("parametro", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));

		var_ou_func_atual = "Variavel (parametro)";
		incrementa_tabela(nome_id_atual);
	  }
#line 2985 "src/sintatico.tab.c"
    break;

  case 18: /* tipo_de_variavel_id: tipo_de_variavel id  */
#line 194 "src/sintatico.y"
                            {
		(yyval.node) = novo_node(nome_tipo_atual, yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 2994 "src/sintatico.tab.c"
    break;

  case 19: /* id: ID  */
#line 201 "src/sintatico.y"
           {
		// printf(">>%s, %d, %s\n", nome_id_atual, yylineno, var_ou_func_str);
		// incrementa_tabela(nome_id_atual);
		(yyval.node) = novo_node(nome_id_atual, yylineno, coluna);
	}
#line 3004 "src/sintatico.tab.c"
    break;

  case 20: /* $@3: %empty  */
#line 209 "src/sintatico.y"
          {incrementa_escopo();}
#line 3010 "src/sintatico.tab.c"
    break;

  case 21: /* comando: $@3 bloco_de_comando  */
#line 209 "src/sintatico.y"
                                                  {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3020 "src/sintatico.tab.c"
    break;

  case 22: /* comando: comando_unico  */
#line 214 "src/sintatico.y"
                        {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3030 "src/sintatico.tab.c"
    break;

  case 23: /* comando: error  */
#line 219 "src/sintatico.y"
                {
		yyerrok;
	}
#line 3038 "src/sintatico.tab.c"
    break;

  case 24: /* comandos: comandos comando  */
#line 225 "src/sintatico.y"
                           {
		(yyval.node) = novo_node("comandos", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3048 "src/sintatico.tab.c"
    break;

  case 25: /* comandos: %empty  */
#line 230 "src/sintatico.y"
                    {
		(yyval.node) = (t_node*)0;
		// $$ = novo_node("comandos", -1, -1);
	}
#line 3057 "src/sintatico.tab.c"
    break;

  case 26: /* bloco_de_comando: ABRE_CHAVES comandos FECHA_CHAVES  */
#line 237 "src/sintatico.y"
                                            {
		// $$ = $2;
		(yyval.node) = novo_node("BLOCO", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
		decrementa_escopo();
	}
#line 3068 "src/sintatico.tab.c"
    break;

  case 27: /* comando_unico: comando_condicional  */
#line 246 "src/sintatico.y"
                              {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3078 "src/sintatico.tab.c"
    break;

  case 28: /* comando_unico: comando_iterativo  */
#line 251 "src/sintatico.y"
                            {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3088 "src/sintatico.tab.c"
    break;

  case 29: /* comando_unico: declaracao_de_variavel  */
#line 256 "src/sintatico.y"
                                 {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3098 "src/sintatico.tab.c"
    break;

  case 30: /* comando_unico: chamada_de_retorno  */
#line 261 "src/sintatico.y"
                             {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3108 "src/sintatico.tab.c"
    break;

  case 31: /* comando_unico: comando_de_atribuicao  */
#line 266 "src/sintatico.y"
                                {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3118 "src/sintatico.tab.c"
    break;

  case 32: /* comando_unico: expressao PONTO_VIRGULA  */
#line 271 "src/sintatico.y"
                                  {
		(yyval.node) = (yyvsp[-1].node);
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3128 "src/sintatico.tab.c"
    break;

  case 33: /* comando_condicional: IF ABRE_PARENTESES expressao FECHA_PARENTESES comando  */
#line 279 "src/sintatico.y"
                                                                          {
		(yyval.node) = novo_node("IF", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3138 "src/sintatico.tab.c"
    break;

  case 34: /* comando_condicional: IF ABRE_PARENTESES expressao FECHA_PARENTESES comando ELSE comando  */
#line 284 "src/sintatico.y"
                                                                             {
		(yyval.node) = novo_node("IF_ELSE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), (yyvsp[-4].node));
	}
#line 3149 "src/sintatico.tab.c"
    break;

  case 35: /* comando_iterativo: FOR ABRE_PARENTESES expressao_for PONTO_VIRGULA expressao_for PONTO_VIRGULA expressao_for FECHA_PARENTESES comando  */
#line 293 "src/sintatico.y"
                                                                                                                             {
		(yyval.node) = novo_node("FOR", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), (yyvsp[-4].node));
		coloca_node_filho((yyval.node), (yyvsp[-6].node));
	}
#line 3161 "src/sintatico.tab.c"
    break;

  case 36: /* expressao_for: id ATRIB expressao  */
#line 303 "src/sintatico.y"
                           {
		(yyval.node) = novo_node("ATRIB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3171 "src/sintatico.tab.c"
    break;

  case 37: /* expressao_for: expressao  */
#line 308 "src/sintatico.y"
                    {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("expressao_for", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3181 "src/sintatico.tab.c"
    break;

  case 38: /* expressao: exp  */
#line 316 "src/sintatico.y"
            {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("expressao", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3191 "src/sintatico.tab.c"
    break;

  case 39: /* expressao: %empty  */
#line 321 "src/sintatico.y"
                        {
		(yyval.node) = (t_node*)0;
		// $$ = novo_node("expressao", -1, -1);
	}
#line 3200 "src/sintatico.tab.c"
    break;

  case 40: /* exp: exp GT exp  */
#line 328 "src/sintatico.y"
                   {
		(yyval.node) = novo_node("GT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3210 "src/sintatico.tab.c"
    break;

  case 41: /* exp: exp LT exp  */
#line 333 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("LT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3220 "src/sintatico.tab.c"
    break;

  case 42: /* exp: exp EQ exp  */
#line 338 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("EQ", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3230 "src/sintatico.tab.c"
    break;

  case 43: /* exp: exp NE exp  */
#line 343 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("NE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3240 "src/sintatico.tab.c"
    break;

  case 44: /* exp: exp LE exp  */
#line 348 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("LE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3250 "src/sintatico.tab.c"
    break;

  case 45: /* exp: exp GE exp  */
#line 353 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("GE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3260 "src/sintatico.tab.c"
    break;

  case 46: /* exp: exp AND exp  */
#line 358 "src/sintatico.y"
                      {
		(yyval.node) = novo_node("AND", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3270 "src/sintatico.tab.c"
    break;

  case 47: /* exp: exp OR exp  */
#line 363 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("OR", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3280 "src/sintatico.tab.c"
    break;

  case 48: /* exp: exp_list  */
#line 368 "src/sintatico.y"
                   {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("exp", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3290 "src/sintatico.tab.c"
    break;

  case 49: /* exp_list: exp_list CONSTRUTOR exp_list  */
#line 376 "src/sintatico.y"
                                     {
		(yyval.node) = novo_node("CONSTRUTOR", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3300 "src/sintatico.tab.c"
    break;

  case 50: /* exp_list: exp_list FILTER exp_list  */
#line 381 "src/sintatico.y"
                                   {
		(yyval.node) = novo_node("FILTER", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3310 "src/sintatico.tab.c"
    break;

  case 51: /* exp_list: exp_list MAP exp_list  */
#line 386 "src/sintatico.y"
                                {
		(yyval.node) = novo_node("MAP", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3320 "src/sintatico.tab.c"
    break;

  case 52: /* exp_list: exp_aritmetica  */
#line 391 "src/sintatico.y"
                         {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("exp_list", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3330 "src/sintatico.tab.c"
    break;

  case 53: /* exp_aritmetica: termo  */
#line 400 "src/sintatico.y"
              {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("exp_aritmetica", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3340 "src/sintatico.tab.c"
    break;

  case 54: /* exp_aritmetica: exp_aritmetica SOMA termo  */
#line 405 "src/sintatico.y"
                                    {
		(yyval.node) = novo_node("SOMA", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3350 "src/sintatico.tab.c"
    break;

  case 55: /* exp_aritmetica: exp_aritmetica SUB termo  */
#line 410 "src/sintatico.y"
                                   {
		(yyval.node) = novo_node("SUB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3360 "src/sintatico.tab.c"
    break;

  case 56: /* termo: fator  */
#line 418 "src/sintatico.y"
              {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("termo", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3370 "src/sintatico.tab.c"
    break;

  case 57: /* termo: termo MULT fator  */
#line 423 "src/sintatico.y"
                           {
		(yyval.node) = novo_node("MULT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3380 "src/sintatico.tab.c"
    break;

  case 58: /* termo: termo DIV fator  */
#line 428 "src/sintatico.y"
                          {
		(yyval.node) = novo_node("DIV", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3390 "src/sintatico.tab.c"
    break;

  case 59: /* fator: constante  */
#line 436 "src/sintatico.y"
                  {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("fator", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3400 "src/sintatico.tab.c"
    break;

  case 60: /* fator: func_call_exp  */
#line 441 "src/sintatico.y"
                        {
		// $$ = $1;
		(yyval.node) = novo_node("func_call_exp", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3410 "src/sintatico.tab.c"
    break;

  case 61: /* fator: SUB fator  */
#line 446 "src/sintatico.y"
                    {
		(yyval.node) = novo_node("SUB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3419 "src/sintatico.tab.c"
    break;

  case 62: /* fator: SOMA fator  */
#line 450 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("SOMA", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3428 "src/sintatico.tab.c"
    break;

  case 63: /* fator: TAIL_OR_NOT fator  */
#line 454 "src/sintatico.y"
                            {
		(yyval.node) = novo_node("TAIL_NOT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3437 "src/sintatico.tab.c"
    break;

  case 64: /* fator: TAIL_POP fator  */
#line 458 "src/sintatico.y"
                         {
		(yyval.node) = novo_node("TAIL_POP", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3446 "src/sintatico.tab.c"
    break;

  case 65: /* fator: HEADER fator  */
#line 462 "src/sintatico.y"
                       {
		(yyval.node) = novo_node("HEADER", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3455 "src/sintatico.tab.c"
    break;

  case 66: /* fator: ID  */
#line 466 "src/sintatico.y"
             {
		verifica_contexto(nome_id_atual);
		(yyval.node) = novo_node(nome_id_atual, yylineno, coluna);
	}
#line 3464 "src/sintatico.tab.c"
    break;

  case 67: /* fator: ABRE_PARENTESES exp FECHA_PARENTESES  */
#line 470 "src/sintatico.y"
                                               {
		// $$ = $2;
		(yyval.node) = novo_node("fator", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3474 "src/sintatico.tab.c"
    break;

  case 68: /* comando_de_atribuicao: id ATRIB expressao PONTO_VIRGULA  */
#line 479 "src/sintatico.y"
                                     {
		verifica_contexto((yyvsp[-3].node)->nome);
		(yyval.node) = novo_node("ATRIB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
		coloca_node_filho((yyval.node), (yyvsp[-3].node));
	}
#line 3485 "src/sintatico.tab.c"
    break;

  case 69: /* func_call_exp: id ABRE_PARENTESES func_call_parameters FECHA_PARENTESES  */
#line 488 "src/sintatico.y"
                                                                   {
		verifica_contexto((yyvsp[-3].node)->nome);
		(yyval.node) = novo_node("my_func_call_exp", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
		coloca_node_filho((yyval.node), (yyvsp[-3].node));
	}
#line 3496 "src/sintatico.tab.c"
    break;

  case 70: /* func_call_exp: READ ABRE_PARENTESES expressao FECHA_PARENTESES  */
#line 494 "src/sintatico.y"
                                                           {
		(yyval.node) = novo_node("READ", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3505 "src/sintatico.tab.c"
    break;

  case 71: /* func_call_exp: WRITE ABRE_PARENTESES expressao FECHA_PARENTESES  */
#line 498 "src/sintatico.y"
                                                            {
		(yyval.node) = novo_node("WRITE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3514 "src/sintatico.tab.c"
    break;

  case 72: /* func_call_exp: WRITELN ABRE_PARENTESES expressao FECHA_PARENTESES  */
#line 502 "src/sintatico.y"
                                                              {
		(yyval.node) = novo_node("WRITELN", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3523 "src/sintatico.tab.c"
    break;

  case 73: /* func_call_parameters: func_call_parameters VIRGULA expressao  */
#line 509 "src/sintatico.y"
                                               {
		(yyval.node) = novo_node("lista_de_expressao", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3533 "src/sintatico.tab.c"
    break;

  case 74: /* func_call_parameters: expressao  */
#line 514 "src/sintatico.y"
                    {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("lista_de_parametros", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3543 "src/sintatico.tab.c"
    break;

  case 75: /* chamada_de_retorno: RETURN expressao PONTO_VIRGULA  */
#line 523 "src/sintatico.y"
                                       {
		(yyval.node) = novo_node("RETURN", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3552 "src/sintatico.tab.c"
    break;

  case 76: /* tipo_de_variavel: INT  */
#line 530 "src/sintatico.y"
              {
		strcpy(nome_tipo_atual, "INT");
	  }
#line 3560 "src/sintatico.tab.c"
    break;

  case 77: /* tipo_de_variavel: FLOAT  */
#line 533 "src/sintatico.y"
                {
		strcpy(nome_tipo_atual, "FLOAT");
	  }
#line 3568 "src/sintatico.tab.c"
    break;

  case 79: /* list: INT LIST  */
#line 540 "src/sintatico.y"
                   {
		strcpy(nome_tipo_atual, "LIST (int)");
	  }
#line 3576 "src/sintatico.tab.c"
    break;

  case 80: /* list: FLOAT LIST  */
#line 543 "src/sintatico.y"
                     {
		strcpy(nome_tipo_atual, "LIST (float)");
	  }
#line 3584 "src/sintatico.tab.c"
    break;

  case 81: /* constante: INTEGER_CONST  */
#line 550 "src/sintatico.y"
                      {
		(yyval.node) = novo_node("INTEGER_CONST", yylineno, coluna);
	}
#line 3592 "src/sintatico.tab.c"
    break;

  case 82: /* constante: FLOAT_CONST  */
#line 553 "src/sintatico.y"
                      {
		(yyval.node) = novo_node("FLOAT_CONST", yylineno, coluna);
	}
#line 3600 "src/sintatico.tab.c"
    break;

  case 83: /* constante: CONSTANTE_NIL  */
#line 556 "src/sintatico.y"
                        {
		(yyval.node) = novo_node("CONSTANTE_NIL", yylineno, coluna);
	}
#line 3608 "src/sintatico.tab.c"
    break;

  case 84: /* constante: STRING_LITERAL  */
#line 559 "src/sintatico.y"
                         {
		(yyval.node) = novo_node("STRING_LITERAL", yylineno, coluna);
	}
#line 3616 "src/sintatico.tab.c"
    break;


#line 3620 "src/sintatico.tab.c"

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

#line 565 "src/sintatico.y"


int yyerror (const char* s) {
	fprintf (stderr, RED"ERRO, linha: %d, na coluna: %d, %s\n"reset, yylineno, coluna, s);
  	return 0;
}

int main()
{
    coluna = 1;
	linha = &yylineno;
	yyparse();

	mostra_tabela_simbolos();

	printf("\n");
	tree_output_file = fopen("tree_output_file.txt","w");
    fprintf(tree_output_file,"[PROGRAMA");
	imprime_ast(ast, 0);
    fprintf(tree_output_file,"]");
	fclose(tree_output_file);

	existe_main();

	yylex_destroy();
	destroi_tabela_simbolos();
	destroi_arvore_escopo();
	destroi_arvore(ast);
	return 0;
}
