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
  YYSYMBOL_tipo_de_variavel_id = 53,       /* tipo_de_variavel_id  */
  YYSYMBOL_id = 54,                        /* id  */
  YYSYMBOL_definicao_de_funcao = 55,       /* definicao_de_funcao  */
  YYSYMBOL_parametros = 56,                /* parametros  */
  YYSYMBOL_lista_de_parametros = 57,       /* lista_de_parametros  */
  YYSYMBOL_parametro = 58,                 /* parametro  */
  YYSYMBOL_comando = 59,                   /* comando  */
  YYSYMBOL_comandos = 60,                  /* comandos  */
  YYSYMBOL_bloco_de_comando = 61,          /* bloco_de_comando  */
  YYSYMBOL_comando_unico = 62,             /* comando_unico  */
  YYSYMBOL_comando_condicional = 63,       /* comando_condicional  */
  YYSYMBOL_comando_iterativo = 64,         /* comando_iterativo  */
  YYSYMBOL_expressao_for = 65,             /* expressao_for  */
  YYSYMBOL_expressao = 66,                 /* expressao  */
  YYSYMBOL_exp = 67,                       /* exp  */
  YYSYMBOL_exp_list = 68,                  /* exp_list  */
  YYSYMBOL_exp_aritmetica = 69,            /* exp_aritmetica  */
  YYSYMBOL_termo = 70,                     /* termo  */
  YYSYMBOL_fator = 71,                     /* fator  */
  YYSYMBOL_comando_de_atribuicao = 72,     /* comando_de_atribuicao  */
  YYSYMBOL_exp_funcao = 73,                /* exp_funcao  */
  YYSYMBOL_chamada_de_retorno = 74,        /* chamada_de_retorno  */
  YYSYMBOL_tipo_de_variavel = 75,          /* tipo_de_variavel  */
  YYSYMBOL_int_list = 76,                  /* int_list  */
  YYSYMBOL_float_list = 77,                /* float_list  */
  YYSYMBOL_constante = 78                  /* constante  */
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
#define YYLAST   5109

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  81
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
       0,    92,    92,   101,   106,   113,   118,   123,   129,   137,
     146,   153,   160,   168,   173,   180,   185,   193,   200,   205,
     210,   216,   221,   228,   236,   241,   246,   251,   256,   261,
     269,   274,   283,   293,   298,   306,   311,   316,   323,   328,
     333,   338,   343,   348,   353,   358,   363,   371,   376,   381,
     386,   395,   400,   405,   413,   418,   423,   431,   436,   440,
     444,   448,   452,   456,   460,   469,   478,   484,   488,   492,
     499,   506,   510,   514,   518,   525,   529,   533,   536,   539,
     542,   545
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
  "declaracao", "declaracao_de_variavel", "declaracao_de_funcao",
  "tipo_de_variavel_id", "id", "definicao_de_funcao", "parametros",
  "lista_de_parametros", "parametro", "comando", "comandos",
  "bloco_de_comando", "comando_unico", "comando_condicional",
  "comando_iterativo", "expressao_for", "expressao", "exp", "exp_list",
  "exp_aritmetica", "termo", "fator", "comando_de_atribuicao",
  "exp_funcao", "chamada_de_retorno", "tipo_de_variavel", "int_list",
  "float_list", "constante", YY_NULLPTR
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

#define YYPACT_NINF (-143)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-82)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      32,     4,    45,  -143,    66,    59,   218,    95,   105,   131,
      13,    21,    25,    44,    72,    74,   157,     5,    63,   125,
     -12,   -27,    34,    40,   -24,   181,  1904,   176,   276,    73,
    1948,  1992,  4083,  4139,  2876,  2876,  2876,   102,   112,   126,
     489,   168,   184,  2876,  2876,  2914,   309,  4164,  4189,  4214,
    2036,    62,   158,  2080,  2124,  2168,  2212,  2256,   215,   685,
    4689,  1014,  4239,  4264,  2300,  4289,  2344,  4314,   199,  4339,
    4364,  4389,   718,   718,   718,   244,   718,  1044,  4414,  4439,
     849,   489,   718,  2876,  2388,  2876,  2876,  2876,  2876,  2876,
    2876,  2876,  2876,  2876,  2876,  2876,  2876,  2876,  2876,  2876,
     104,   110,   144,  2432,   145,   266,    76,   255,  4464,   285,
     164,  4962,  4976,  4990,  5004,  5018,  5032,  5046,  5060,  5074,
    4708,  4727,  4746,  4489,  4514,  4539,  4564,  4589,  4614,  4639,
    2784,   489,  1044,  2476,  4664,   826,   299,   107,  2828,  2866,
    2520,   109,  2828,  2564,   243,  1904,   250,  4111,  1259,    91,
    2914,  2914,  2914,   274,   283,   289,  2914,  2914,  2914,  3505,
    3528,  3551,   293,  4007,   143,  3574,  3597,  3620,  3643,  2608,
     358,  2977,  2924,  2924,  2924,   319,   360,   369,  2924,  2924,
    2914,  3001,  3025,  3049,   370,   272,   232,    30,  3073,  3097,
    3121,  3145,  2914,  2914,  2914,  2914,  2914,  2914,  2914,  2914,
    2924,   882,   489,   371,   376,  1904,  1208,   247,   330,  1332,
    1376,  1420,  1464,   338,  1508,  1552,  2948,   337,   165,   189,
     202,  2652,   302,   320,  3666,  3689,  3712,   718,   718,   718,
    3735,  3758,  1131,   718,  2914,  2914,  2914,  2914,  2914,  2914,
    2914,  3169,  3193,  3217,   718,   718,   718,  3241,  3265,  4850,
     718,  2924,  2924,  2924,  2924,  2924,  2924,  2924,  2924,  2924,
    2924,  2924,  2924,  2924,  2924,  2924,  4858,  4876,  4884,  4902,
    4910,  4928,  4936,  4954,   487,   342,   718,  1044,  2696,  1596,
     489,  1640,   718,  2740,   213,   228,   229,  3781,   235,  4026,
    4045,  4064,  3804,  3827,  3850,  3873,   252,   268,   313,  3289,
     314,   580,   645,   664,  4760,  4778,  4796,  4814,  4832,   441,
     542,  3988,  3313,  3337,  3361,  3385,  1684,   315,   380,  1728,
     344,   317,  3896,  3919,  3942,  3965,  3409,  3433,  3457,  3481,
    2784,  1044,  1772,  1816,   397,  2866,   231,  2784,  1860
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
    -143,  -143,  -143,  -143,    -1,  -143,    -2,    -5,  -143,  -143,
    -143,   408,  -125,  -142,   -22,  -123,  -122,  -112,  -118,   211,
     870,   938,  1067,   741,   166,  -111,   400,  -110,     9,  -143,
    -143,   544
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     7,    50,     9,    51,   184,    27,    21,
      22,    23,    53,    30,    54,    55,    56,    57,   106,    58,
      59,    60,    61,    62,    63,    64,    65,    66,   146,    12,
      13,    67
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,     8,    28,   221,     3,   135,    19,   210,   211,     5,
       6,    11,    24,   140,   137,    20,    26,   143,   212,   214,
     215,   141,   -17,    20,    18,    52,   144,   -17,   -73,    68,
      68,    68,    -4,    -4,   144,    68,    -4,    -4,    68,    68,
     162,   -50,   -50,   -50,   -14,    -2,     4,   -74,    16,     5,
       6,    17,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     262,   263,   -71,   278,   -50,    14,    -7,    -7,    25,   -50,
      -7,    -7,   105,   -13,   -16,   -75,    68,   -76,    68,   -16,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    -3,    -3,   169,   -11,    -3,
      -3,   -11,   -79,   -79,   -79,    -5,    -5,   -15,   209,    -5,
      -5,   132,   -15,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   208,    68,   105,   207,   206,
     -79,    -6,    -6,    52,   217,    -6,    -6,    52,   200,   220,
      72,   223,   139,   127,   200,   162,   162,   162,   142,   128,
      73,   162,   162,   162,   -50,   -50,   -50,    -8,    -8,   318,
     -10,    -8,    -8,   -10,    74,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   237,   238,   162,    -9,    -9,   200,   200,
      -9,    -9,   -50,   129,   130,     5,     6,   162,   162,   162,
     162,   162,   162,   162,   162,    81,    82,    68,   200,   200,
      69,    70,    71,   134,   -34,   333,    76,   210,   211,    78,
      79,   166,   338,   334,   210,   211,    52,   336,   212,   214,
     215,   -72,    77,   -11,    15,   212,   214,   215,   -11,   162,
     162,   162,   162,   162,   162,   162,   -10,    82,   189,   189,
     189,   -10,   189,   259,   260,   261,   219,   200,   189,    83,
      84,    75,   322,   222,   -46,   -46,   -46,   -46,   -46,   -46,
     -46,   -46,   200,   200,   125,   126,   -46,   323,   324,   200,
     337,   -46,   105,    52,   325,    68,   -12,   -12,    83,   103,
     -12,   -12,   279,   100,   101,   102,   200,   104,   107,    83,
     -34,   326,   109,   110,   251,   252,   253,   254,   255,   256,
     257,   258,   200,   131,    82,   189,   -36,   327,   209,   -23,
     -23,   -36,   227,   -23,   -23,   209,   224,   225,   226,    83,
     133,   228,   230,   231,   166,   208,   105,   229,   207,   206,
     217,   233,   208,    83,   -33,   207,   206,   -11,   241,   242,
     243,   213,   136,   107,   247,   248,   166,   200,   200,   200,
     218,   200,   328,   329,   330,   -10,   -33,   244,   166,   166,
     166,   166,   166,   166,   166,   166,   189,   280,    82,   -63,
     -63,   -63,    83,   281,   282,   250,    83,   316,    83,   332,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   189,   189,   189,   -11,   -63,   245,   189,
     166,   166,   166,   166,   166,   294,   295,   246,   250,   276,
     189,   189,   189,   275,   277,   331,   189,   189,   189,   189,
     189,   189,   189,   189,   189,   189,   189,   189,   189,   189,
     314,   315,   335,    29,     0,     0,     0,     0,   284,   285,
     286,     0,   189,     0,   288,   167,     0,     0,   189,     0,
       0,     0,   259,   260,   261,   296,   297,   298,     0,     0,
       0,   300,     0,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,     0,   190,   190,   190,   -49,   190,     0,     0,     0,
     -49,     0,   190,     0,     0,     0,     0,   317,   107,     0,
       0,   320,   147,   321,     0,     0,    33,    34,    35,    36,
       0,   189,     0,    37,    38,    39,     0,     0,     0,   251,
     252,   253,   254,   255,   256,   257,   258,     0,     0,    43,
      44,   -35,     0,   -37,   -37,     0,   -35,    45,     0,     0,
       0,    47,    48,    49,     0,     0,     0,     0,     0,   190,
       0,   213,   107,     0,     0,     0,   218,     0,   213,     0,
     167,   167,   167,   259,   260,   261,   167,   167,   167,     0,
       0,     0,     0,     0,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   190,   190,   190,     0,   -48,     0,   190,   190,
     167,   -48,     0,     0,     0,     0,     0,     0,     0,   168,
       0,     0,   167,   167,   167,   167,   167,   167,   167,   167,
     190,     0,   -44,   -44,   253,   254,   255,   256,   257,   258,
       0,     0,     0,     0,   -44,     0,   191,   191,   191,   -44,
     191,     0,     0,     0,     0,     0,   191,   190,   190,   190,
       0,     0,     0,   190,   167,   167,   167,   167,   167,   167,
     167,     0,     0,     0,   190,   190,   190,     0,     0,     0,
     190,   190,   190,   190,   190,   190,   190,   190,   190,   190,
     190,   190,   190,   190,   190,   190,     0,   -45,   -45,   253,
     254,   255,   256,   257,   258,     0,   190,     0,     0,   -45,
       0,     0,   190,   191,   -45,     0,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   168,   168,   168,     0,   -39,     0,
     168,   168,   168,   -39,     0,     0,     0,    85,    86,    87,
      88,    89,    90,    91,    92,     0,   191,   191,   191,   -36,
     -36,   170,   191,   191,   168,   171,   172,   173,   174,     0,
       0,     0,   175,   176,   177,   190,   168,   168,   168,   168,
     168,   168,   168,   168,   191,     0,     0,     0,   178,   179,
       0,     0,   -37,     0,     0,     0,   180,   -37,     0,     0,
     181,   182,   183,     0,     0,     0,     0,     0,     0,     0,
       0,   191,   191,   191,     0,     0,     0,   191,   168,   168,
     168,   168,   168,   168,   168,     0,   165,     0,   191,   191,
     191,     0,     0,     0,   191,   191,   191,   191,   191,   191,
     191,   191,   191,   191,   191,   191,   191,   191,   191,   191,
       0,     0,     0,   188,   188,   188,     0,   188,     0,     0,
     191,     0,     0,   188,     0,     0,   191,   -30,     0,   -30,
     -30,   -30,     0,   -30,   -30,   -30,   -30,   123,   124,     0,
     -30,   -30,   -30,     0,   -30,   -30,   138,   -30,     0,     0,
       0,     0,     0,     0,     0,     0,   -30,   -30,     0,     0,
     -30,   -30,     0,     0,   -30,     0,   -30,   -30,   -30,   -30,
     -30,   192,   193,   194,   195,   196,   197,   198,   199,   191,
     188,     0,     0,   -20,     0,   -20,   -20,   -20,   108,   -20,
     -20,   -20,   -20,     0,     0,     0,   -20,   -20,   -20,   165,
     -20,   -20,   -20,   -20,     0,     0,     0,     0,     0,     0,
       0,     0,   -20,   -20,     0,    80,   -20,   -20,     0,     0,
     -20,   165,   -20,   -20,   -20,   -20,   -20,     0,     0,     0,
       0,     0,     0,   165,   165,   165,   165,   165,   165,   165,
     165,   188,   185,   185,   185,     0,   185,     0,     0,     0,
       0,     0,   185,   111,     0,   112,   113,   114,   115,   116,
     117,   118,   119,     0,     0,     0,     0,     0,   188,   188,
     188,     0,     0,     0,   188,   165,   165,   165,   292,   293,
       0,     0,     0,   163,     0,   188,   188,   188,     0,     0,
       0,   188,   188,   188,   188,   188,   188,   188,   188,   188,
     188,   188,   188,   312,   313,     0,     0,     0,     0,   185,
     186,   186,   186,     0,   186,     0,     0,   188,     0,     0,
     186,     0,     0,   188,     0,   -50,   -50,   -50,   232,     0,
       0,   120,   121,   122,     0,     0,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,    96,    97,     0,    32,   -50,   -50,
     249,    33,    34,    35,    36,     0,     0,     0,    37,    38,
      39,     0,   266,   267,   268,   269,   270,   271,   272,   273,
     274,     0,     0,     0,    43,    44,   188,   186,   -37,   -37,
       0,     0,    45,     0,     0,     0,    47,    48,    49,     0,
       0,     0,     0,     0,     0,     0,   163,   185,   185,   185,
       0,     0,     0,   185,     0,     0,     0,     0,     0,     0,
       0,     0,   164,     0,   185,   185,   185,     0,   163,     0,
     185,   301,   302,   303,   304,   305,   306,   307,   308,     0,
     163,   163,   163,   163,   163,   163,   163,   163,   186,   187,
     187,   187,     0,   187,     0,     0,   185,     0,     0,   187,
       0,     0,   185,   192,   193,   194,   195,   196,   197,   198,
     199,     0,     0,     0,     0,   186,   186,   186,     0,     0,
     287,   186,   289,   290,   291,     0,     0,     0,     0,     0,
       0,     0,   186,   186,   186,     0,     0,     0,   186,   186,
     186,   186,   186,   186,   186,   186,   186,   309,   310,   311,
       0,     0,     0,     0,     0,   185,   187,     0,     0,   -26,
       0,   -26,   -26,   -26,   186,   -26,   -26,   -26,   -26,     0,
     186,     0,   -26,   -26,   -26,   164,   -26,   -26,   -26,   -26,
       0,     0,     0,     0,     0,     0,     0,     0,   -26,   -26,
       0,     0,   -26,   -26,     0,     0,   -26,   164,   -26,   -26,
     -26,   -26,   -26,     0,     0,     0,     0,     0,     0,   164,
     164,   164,   164,   164,   164,   164,   164,   187,     0,     0,
     -63,   -63,   -63,   186,     0,     0,     0,     0,     0,     0,
       0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,   187,   187,   187,   -11,   -63,     0,
     187,   164,   164,   164,     0,     0,     0,     0,     0,     0,
       0,   187,   187,   187,     0,     0,     0,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,     0,
       0,     0,     0,   -18,     0,   -18,   -18,   -18,     0,   -18,
     -18,   -18,   -18,   187,     0,     0,   -18,   -18,   -18,   187,
     -18,   -18,   -18,   -18,     0,     0,     0,     0,     0,     0,
       0,     0,   -18,   -18,     0,     0,   -18,   -18,     0,     0,
     -18,     0,   -18,   -18,   -18,   -18,   -18,   -19,     0,   -19,
     -19,   -19,     0,   -19,   -19,   -19,   -19,     0,     0,     0,
     -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,     0,     0,
       0,     0,   187,     0,     0,     0,   -19,   -19,     0,     0,
     -19,   -19,     0,     0,   -19,     0,   -19,   -19,   -19,   -19,
     -19,   -24,     0,   -24,   -24,   -24,     0,   -24,   -24,   -24,
     -24,     0,     0,     0,   -24,   -24,   -24,     0,   -24,   -24,
     -24,   -24,     0,     0,     0,     0,     0,     0,     0,     0,
     -24,   -24,     0,     0,   -24,   -24,     0,     0,   -24,     0,
     -24,   -24,   -24,   -24,   -24,   -25,     0,   -25,   -25,   -25,
       0,   -25,   -25,   -25,   -25,     0,     0,     0,   -25,   -25,
     -25,     0,   -25,   -25,   -25,   -25,     0,     0,     0,     0,
       0,     0,     0,     0,   -25,   -25,     0,     0,   -25,   -25,
       0,     0,   -25,     0,   -25,   -25,   -25,   -25,   -25,   -28,
       0,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,     0,
       0,     0,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,
       0,     0,     0,     0,     0,     0,     0,     0,   -28,   -28,
       0,     0,   -28,   -28,     0,     0,   -28,     0,   -28,   -28,
     -28,   -28,   -28,   -27,     0,   -27,   -27,   -27,     0,   -27,
     -27,   -27,   -27,     0,     0,     0,   -27,   -27,   -27,     0,
     -27,   -27,   -27,   -27,     0,     0,     0,     0,     0,     0,
       0,     0,   -27,   -27,     0,     0,   -27,   -27,     0,     0,
     -27,     0,   -27,   -27,   -27,   -27,   -27,    -8,     0,    -8,
      -8,    -8,     0,    -8,    -8,    -8,    -8,     0,     0,     0,
      -8,    -8,    -8,     0,    -8,    -8,    -8,    -8,     0,     0,
       0,     0,     0,     0,     0,     0,    -8,    -8,     0,     0,
      -8,    -8,     0,     0,    -8,     0,    -8,    -8,    -8,    -8,
      -8,   -29,     0,   -29,   -29,   -29,     0,   -29,   -29,   -29,
     -29,     0,     0,     0,   -29,   -29,   -29,     0,   -29,   -29,
     -29,   -29,     0,     0,     0,     0,     0,     0,     0,     0,
     -29,   -29,     0,     0,   -29,   -29,     0,     0,   -29,     0,
     -29,   -29,   -29,   -29,   -29,   -70,     0,   -70,   -70,   -70,
       0,   -70,   -70,   -70,   -70,     0,     0,     0,   -70,   -70,
     -70,     0,   -70,   -70,   -70,   -70,     0,     0,     0,     0,
       0,     0,     0,     0,   -70,   -70,     0,     0,   -70,   -70,
       0,     0,   -70,     0,   -70,   -70,   -70,   -70,   -70,   -23,
       0,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,     0,
       0,     0,   -23,   -23,   -23,     0,   -23,   -23,   -23,   -23,
       0,     0,     0,     0,     0,     0,     0,     0,   -23,   -23,
       0,     0,   -23,   -23,     0,     0,   -23,     0,   -23,   -23,
     -23,   -23,   -23,   -65,     0,   -65,   -65,   -65,     0,   -65,
     -65,   -65,   -65,     0,     0,     0,   -65,   -65,   -65,     0,
     -65,   -65,   -65,   -65,     0,     0,     0,     0,     0,     0,
       0,     0,   -65,   -65,     0,     0,   -65,   -65,     0,     0,
     -65,     0,   -65,   -65,   -65,   -65,   -65,   -30,     0,   -30,
     -30,   -30,     0,   -30,   -30,   -30,   -30,     0,     0,     0,
     -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,     0,     0,
       0,     0,     0,     0,     0,     0,   -30,   -30,     0,     0,
     -30,   -30,     0,     0,   -30,     0,   -30,   -30,   -30,   -30,
     -30,   -32,     0,   -32,   -32,   -32,     0,   -32,   -32,   -32,
     -32,     0,     0,     0,   -32,   -32,   -32,     0,   -32,   -32,
     -32,   -32,     0,     0,     0,     0,     0,     0,     0,     0,
     -32,   -32,     0,     0,   -32,   -32,     0,     0,   -32,     0,
     -32,   -32,   -32,   -32,   -32,   -22,     0,   -22,   -22,   -22,
       0,   -22,   -22,   -22,   -22,     0,     0,     0,   -22,   -22,
     -22,     0,   -22,   -22,     0,   -22,     0,     0,     0,     0,
       0,     0,     0,     0,   -22,   -22,     0,     0,   -22,   -22,
       0,     0,   -22,     0,   -22,   -22,   -22,   -22,   -22,    31,
       0,    32,     5,     6,     0,    33,    34,    35,    36,     0,
       0,     0,    37,    38,    39,     0,    40,    41,     0,    42,
       0,     0,     0,     0,     0,     0,     0,     0,    43,    44,
       0,     0,   -37,   -37,     0,     0,    45,     0,   145,    46,
      47,    48,    49,   -20,     0,   -20,   -20,   -20,     0,   -20,
     -20,   -20,   -20,     0,     0,     0,   -20,   -20,   -20,     0,
     -20,   -20,     0,   -20,     0,     0,     0,     0,     0,     0,
       0,     0,   -20,   -20,     0,     0,   -20,   -20,     0,     0,
     -20,     0,   -20,   -20,   -20,   -20,   -20,   -26,     0,   -26,
     -26,   -26,     0,   -26,   -26,   -26,   -26,     0,     0,     0,
     -26,   -26,   -26,     0,   -26,   -26,     0,   -26,     0,     0,
       0,     0,     0,     0,     0,     0,   -26,   -26,     0,     0,
     -26,   -26,     0,     0,   -26,     0,   -26,   -26,   -26,   -26,
     -26,   -21,     0,   -21,   -21,   -21,     0,   -21,   -21,   -21,
     -21,     0,     0,     0,   -21,   -21,   -21,     0,   -21,   -21,
       0,   -21,     0,     0,     0,     0,     0,     0,     0,     0,
     -21,   -21,     0,     0,   -21,   -21,     0,     0,   -21,     0,
     -21,   -21,   -21,   -21,   -21,   -18,     0,   -18,   -18,   -18,
       0,   -18,   -18,   -18,   -18,     0,     0,     0,   -18,   -18,
     -18,     0,   -18,   -18,     0,   -18,     0,     0,     0,     0,
       0,     0,     0,     0,   -18,   -18,     0,     0,   -18,   -18,
       0,     0,   -18,     0,   -18,   -18,   -18,   -18,   -18,   -19,
       0,   -19,   -19,   -19,     0,   -19,   -19,   -19,   -19,     0,
       0,     0,   -19,   -19,   -19,     0,   -19,   -19,     0,   -19,
       0,     0,     0,     0,     0,     0,     0,     0,   -19,   -19,
       0,     0,   -19,   -19,     0,     0,   -19,     0,   -19,   -19,
     -19,   -19,   -19,   -24,     0,   -24,   -24,   -24,     0,   -24,
     -24,   -24,   -24,     0,     0,     0,   -24,   -24,   -24,     0,
     -24,   -24,     0,   -24,     0,     0,     0,     0,     0,     0,
       0,     0,   -24,   -24,     0,     0,   -24,   -24,     0,     0,
     -24,     0,   -24,   -24,   -24,   -24,   -24,   -25,     0,   -25,
     -25,   -25,     0,   -25,   -25,   -25,   -25,     0,     0,     0,
     -25,   -25,   -25,     0,   -25,   -25,     0,   -25,     0,     0,
       0,     0,     0,     0,     0,     0,   -25,   -25,     0,     0,
     -25,   -25,     0,     0,   -25,     0,   -25,   -25,   -25,   -25,
     -25,   -28,     0,   -28,   -28,   -28,     0,   -28,   -28,   -28,
     -28,     0,     0,     0,   -28,   -28,   -28,     0,   -28,   -28,
       0,   -28,     0,     0,     0,     0,     0,     0,     0,     0,
     -28,   -28,     0,     0,   -28,   -28,     0,     0,   -28,     0,
     -28,   -28,   -28,   -28,   -28,   -27,     0,   -27,   -27,   -27,
       0,   -27,   -27,   -27,   -27,     0,     0,     0,   -27,   -27,
     -27,     0,   -27,   -27,     0,   -27,     0,     0,     0,     0,
       0,     0,     0,     0,   -27,   -27,     0,     0,   -27,   -27,
       0,     0,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -29,
       0,   -29,   -29,   -29,     0,   -29,   -29,   -29,   -29,     0,
       0,     0,   -29,   -29,   -29,     0,   -29,   -29,     0,   -29,
       0,     0,     0,     0,     0,     0,     0,     0,   -29,   -29,
       0,     0,   -29,   -29,     0,     0,   -29,     0,   -29,   -29,
     -29,   -29,   -29,   -70,     0,   -70,   -70,   -70,     0,   -70,
     -70,   -70,   -70,     0,     0,     0,   -70,   -70,   -70,     0,
     -70,   -70,     0,   -70,     0,     0,     0,     0,     0,     0,
       0,     0,   -70,   -70,     0,     0,   -70,   -70,     0,     0,
     -70,     0,   -70,   -70,   -70,   -70,   -70,   -65,     0,   -65,
     -65,   -65,     0,   -65,   -65,   -65,   -65,     0,     0,     0,
     -65,   -65,   -65,     0,   -65,   -65,     0,   -65,     0,     0,
       0,     0,     0,     0,     0,     0,   -65,   -65,     0,     0,
     -65,   -65,     0,     0,   -65,     0,   -65,   -65,   -65,   -65,
     -65,   -31,     0,   -31,   -31,   -31,     0,   -31,   -31,   -31,
     -31,     0,     0,     0,   -31,   -31,   -31,     0,   -31,   -31,
       0,   -31,     0,     0,     0,     0,     0,     0,     0,     0,
     -31,   -31,     0,     0,   -31,   -31,     0,     0,   -31,     0,
     -31,   -31,   -31,   -31,   -31,   -32,     0,   -32,   -32,   -32,
       0,   -32,   -32,   -32,   -32,     0,     0,     0,   -32,   -32,
     -32,     0,   -32,   -32,     0,   -32,     0,     0,     0,     0,
       0,     0,     0,     0,   -32,   -32,     0,     0,   -32,   -32,
       0,     0,   -32,     0,   -32,   -32,   -32,   -32,   -32,    -8,
       0,    -8,    -8,    -8,     0,    -8,    -8,    -8,    -8,     0,
       0,     0,    -8,    -8,    -8,     0,    -8,    -8,     0,    -8,
       0,     0,     0,     0,     0,     0,     0,     0,    -8,    -8,
       0,     0,    -8,    -8,     0,     0,    -8,     0,    -8,    -8,
      -8,    -8,    -8,    31,     0,    32,     5,     6,     0,    33,
      34,    35,    36,     0,     0,     0,    37,    38,    39,     0,
      40,    41,     0,    42,     0,     0,     0,     0,     0,     0,
       0,     0,    43,    44,     0,     0,   -37,   -37,     0,     0,
      45,     0,   145,   283,    47,    48,    49,    31,     0,    32,
       5,     6,     0,    33,    34,    35,    36,     0,     0,     0,
      37,    38,    39,     0,    40,    41,     0,    42,     0,     0,
       0,     0,     0,     0,     0,     0,    43,    44,     0,     0,
     -37,   -37,     0,     0,    45,     0,   145,   319,    47,    48,
      49,   -23,     0,   -23,   -23,   -23,     0,   -23,   -23,   -23,
     -23,     0,     0,     0,   -23,   -23,   -23,     0,   -23,   -23,
       0,   -23,     0,     0,     0,     0,     0,     0,     0,     0,
     -23,   -23,     0,     0,   -23,   -23,     0,     0,   -23,     0,
     -23,   -23,   -23,   -23,   -23,   201,     0,    32,     5,     6,
       0,    33,    34,    35,    36,     0,     0,     0,    37,    38,
      39,     0,   202,   203,     0,   204,     0,     0,     0,     0,
       0,     0,     0,     0,    43,    44,     0,     0,   -37,   -37,
       0,     0,    45,     0,   205,     0,    47,    48,    49,    31,
       0,    32,     5,     6,     0,    33,    34,    35,    36,     0,
       0,     0,    37,    38,    39,     0,    40,    41,     0,    42,
       0,     0,     0,     0,     0,     0,     0,     0,    43,    44,
       0,     0,   -37,   -37,     0,     0,    45,     0,   145,   216,
      47,    48,    49,   171,   172,   173,   174,     0,     0,   147,
     175,   176,   177,    33,    34,    35,    36,     0,     0,     0,
      37,    38,    39,     0,     0,     0,   178,   179,     0,     0,
     -37,     0,     0,     0,   180,   -37,    43,    44,   181,   182,
     183,     0,     0,     0,    45,     0,     0,   148,    47,    48,
      49,   149,   150,   151,   152,     0,     0,   170,   153,   154,
     155,   171,   172,   173,   174,     0,     0,     0,   175,   176,
     177,     0,     0,     0,   156,   157,     0,     0,     0,     0,
       0,     0,   158,     0,   178,   179,   159,   160,   161,   -63,
     -63,   -63,   180,     0,     0,     0,   181,   182,   183,     0,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,     0,     0,   -11,   -11,   -63,   -79,   -79,
     -79,     0,     0,     0,     0,     0,     0,     0,     0,   -79,
     -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -78,   -78,   -78,     0,   -79,     0,     0,     0,
       0,     0,     0,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -77,   -77,   -77,     0,
     -78,     0,     0,     0,     0,     0,     0,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -80,   -80,   -80,     0,   -77,     0,     0,     0,     0,     0,
       0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -51,   -51,   -51,     0,   -80,     0,
       0,     0,     0,     0,     0,   -51,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   264,   265,   -51,   -54,   -54,
     -54,     0,   -51,     0,     0,     0,     0,     0,     0,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -54,   -81,   -81,   -81,     0,   -54,     0,     0,     0,
       0,     0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -57,   -57,   -57,     0,
     -81,     0,     0,     0,     0,     0,     0,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -60,   -60,   -60,     0,   -57,     0,     0,     0,     0,     0,
       0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -62,   -62,   -62,     0,   -60,     0,
       0,     0,     0,     0,     0,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -61,   -61,
     -61,     0,   -62,     0,     0,     0,     0,     0,     0,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -59,   -59,   -59,     0,   -61,     0,     0,     0,
       0,     0,     0,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -58,   -58,   -58,     0,
     -59,     0,     0,     0,     0,     0,     0,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -64,   -64,   -64,     0,   -58,     0,     0,     0,     0,     0,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -52,   -52,   -52,     0,   -64,     0,
       0,     0,     0,     0,     0,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   264,   265,   -52,   -53,   -53,
     -53,     0,   -52,     0,     0,     0,     0,     0,     0,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   264,
     265,   -53,   -55,   -55,   -55,     0,   -53,     0,     0,     0,
       0,     0,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -56,   -56,   -56,     0,
     -55,     0,     0,     0,     0,     0,     0,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -67,   -67,   -67,     0,   -56,     0,     0,     0,     0,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -68,   -68,   -68,     0,   -67,     0,
       0,     0,     0,     0,     0,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -69,   -69,
     -69,     0,   -68,     0,     0,     0,     0,     0,     0,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -66,   -66,   -66,     0,   -69,     0,     0,     0,
       0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -78,   -78,   -78,     0,
     -66,     0,     0,     0,     0,     0,     0,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -77,
     -77,   -77,     0,     0,   -78,     0,     0,     0,     0,     0,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -80,   -80,   -80,     0,     0,   -77,     0,     0,
       0,     0,     0,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -51,   -51,   -51,     0,     0,
     -80,     0,     0,     0,     0,     0,   -51,   -51,   -51,   -51,
     -51,   -51,   -51,   -51,   -51,   -51,   239,   240,   -54,   -54,
     -54,     0,     0,   -51,     0,     0,     0,     0,     0,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -54,   -81,   -81,   -81,     0,     0,   -54,     0,     0,     0,
       0,     0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -57,   -57,   -57,     0,     0,   -81,
       0,     0,     0,     0,     0,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -60,   -60,   -60,
       0,     0,   -57,     0,     0,     0,     0,     0,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -62,   -62,   -62,     0,     0,   -60,     0,     0,     0,     0,
       0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -61,   -61,   -61,     0,     0,   -62,     0,
       0,     0,     0,     0,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -59,   -59,   -59,     0,
       0,   -61,     0,     0,     0,     0,     0,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -58,
     -58,   -58,     0,     0,   -59,     0,     0,     0,     0,     0,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -64,   -64,   -64,     0,     0,   -58,     0,     0,
       0,     0,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -52,   -52,   -52,     0,     0,
     -64,     0,     0,     0,     0,     0,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   239,   240,   -53,   -53,
     -53,     0,     0,   -52,     0,     0,     0,     0,     0,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   239,
     240,   -55,   -55,   -55,     0,     0,   -53,     0,     0,     0,
       0,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -56,   -56,   -56,     0,     0,   -55,
       0,     0,     0,     0,     0,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -67,   -67,   -67,
       0,     0,   -56,     0,     0,     0,     0,     0,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -68,   -68,   -68,     0,     0,   -67,     0,     0,     0,     0,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -69,   -69,   -69,     0,     0,   -68,     0,
       0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -66,   -66,   -66,     0,
       0,   -69,     0,     0,     0,     0,     0,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   259,
     260,   261,     0,     0,   -66,     0,     0,     0,     0,     0,
     -47,   -47,   -47,   -47,   -47,   -47,   -47,   -47,   234,   235,
     236,     0,   -47,     0,     0,     0,     0,   -47,     0,   -46,
     -46,   -46,   -46,   -46,   -46,   -46,   -46,   234,   235,   236,
       0,     0,     0,     0,     0,     0,   -46,     0,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   234,   235,   236,     0,
       0,     0,     0,     0,     0,   -49,     0,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,   234,   235,   236,     0,     0,
       0,     0,     0,     0,   -48,     0,   -47,   -47,   -47,   -47,
     -47,   -47,   -47,   -47,   -63,   -63,   -63,     0,     0,     0,
       0,     0,     0,   -47,     0,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,
     -11,   -11,   -63,   -63,   -63,     0,     0,     0,     0,     0,
       0,     0,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,     0,   -11,
     -79,   -79,   -79,     0,     0,     0,     0,     0,     0,     0,
       0,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,   -79,
     -79,   -79,   -79,   -79,   -79,   -78,   -78,   -78,     0,     0,
       0,     0,     0,     0,     0,     0,   -78,   -78,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,
     -77,   -77,   -77,     0,     0,     0,     0,     0,     0,     0,
       0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -80,   -80,   -80,     0,     0,
       0,     0,     0,     0,     0,     0,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -51,   -51,   -51,     0,     0,     0,     0,     0,     0,     0,
       0,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,   -51,
     -51,    98,    99,   -51,   -51,   -54,   -54,   -54,     0,     0,
       0,     0,     0,     0,     0,     0,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,
     -81,   -81,   -81,     0,     0,     0,     0,     0,     0,     0,
       0,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -57,   -57,   -57,     0,     0,
       0,     0,     0,     0,     0,     0,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -60,   -60,   -60,     0,     0,     0,     0,     0,     0,     0,
       0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -62,   -62,   -62,     0,     0,
       0,     0,     0,     0,     0,     0,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -61,   -61,   -61,     0,     0,     0,     0,     0,     0,     0,
       0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -59,   -59,   -59,     0,     0,
       0,     0,     0,     0,     0,     0,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -58,   -58,   -58,     0,     0,     0,     0,     0,     0,     0,
       0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -64,   -64,   -64,     0,     0,
       0,     0,     0,     0,     0,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -52,   -52,   -52,     0,     0,     0,     0,     0,     0,     0,
       0,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,    98,    99,   -52,   -52,   -53,   -53,   -53,     0,     0,
       0,     0,     0,     0,     0,     0,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,    98,    99,   -53,   -53,
     -55,   -55,   -55,     0,     0,     0,     0,     0,     0,     0,
       0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -56,   -56,   -56,     0,     0,
       0,     0,     0,     0,     0,     0,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -67,   -67,   -67,     0,     0,     0,     0,     0,     0,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -68,   -68,   -68,     0,     0,
       0,     0,     0,     0,     0,     0,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -69,   -69,   -69,     0,     0,     0,     0,     0,     0,     0,
       0,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -66,   -66,   -66,     0,     0,
       0,     0,     0,     0,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
      93,    94,    95,     0,     0,     0,     0,     0,     0,     0,
       0,   -46,   -46,   -46,   -46,   -46,   -46,   -46,   -46,    93,
      94,    95,     0,   -46,   -46,     0,     0,     0,     0,     0,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,    93,    94,
      95,     0,   -49,   -49,     0,     0,     0,     0,     0,   -48,
     -48,   -48,   -48,   -48,   -48,   -48,   -48,    93,    94,    95,
       0,   -48,   -48,     0,     0,     0,     0,     0,   -47,   -47,
     -47,   -47,   -47,   -47,   -47,   -47,     0,     0,     0,     0,
     -47,   -47,   -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,
       0,     0,     0,     0,   -42,     0,     0,     0,     0,   -42,
     -40,   -40,   253,   254,   -40,   256,   257,   -40,     0,     0,
       0,     0,   -40,     0,     0,     0,     0,   -40,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,
     -38,     0,     0,     0,     0,   -38,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,   -43,     0,     0,     0,     0,   -43,     0,
       0,     0,     0,   -43,   -41,   -41,   253,   254,   -41,   256,
     257,   -41,     0,     0,     0,     0,   -41,     0,     0,     0,
       0,   -41,   192,   193,   194,   195,   196,   197,   198,   199,
     -44,   -44,   194,   195,   196,   197,   198,   199,     0,   299,
       0,     0,     0,     0,     0,     0,     0,   -44,   -45,   -45,
     194,   195,   196,   197,   198,   199,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,     0,   -45,     0,     0,     0,     0,
       0,     0,     0,   -39,   -42,   -42,   -42,   -42,   -42,   -42,
     -42,   -42,   -40,   -40,   194,   195,   -40,   197,   198,   -40,
       0,   -42,     0,     0,     0,     0,     0,     0,     0,   -40,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -43,   -43,
     -43,   -43,   -43,   -43,   -43,   -43,     0,   -38,     0,     0,
       0,     0,     0,     0,     0,   -43,   -41,   -41,   194,   195,
     -41,   197,   198,   -41,    85,    86,    87,    88,    89,    90,
      91,    92,     0,   -41,     0,     0,   -35,   -35,   -44,   -44,
      87,    88,    89,    90,    91,    92,     0,     0,     0,     0,
     -44,   -44,   -45,   -45,    87,    88,    89,    90,    91,    92,
       0,     0,     0,     0,   -45,   -45,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,     0,     0,     0,     0,   -39,   -39,
     -42,   -42,   -42,   -42,   -42,   -42,   -42,   -42,     0,     0,
       0,     0,   -42,   -42,   -40,   -40,    87,    88,   -40,    90,
      91,   -40,     0,     0,     0,     0,   -40,   -40,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,
     -38,   -38,   -43,   -43,   -43,   -43,   -43,   -43,   -43,   -43,
       0,     0,     0,     0,   -43,   -43,   -41,   -41,    87,    88,
     -41,    90,    91,   -41,     0,     0,     0,     0,   -41,   -41
};

static const yytype_int16 yycheck[] =
{
       2,     2,    24,   145,     0,   130,    11,   130,   130,     4,
       5,     2,    39,   138,   132,    17,    40,   142,   130,   130,
     130,   139,    34,    25,     3,    30,    17,    39,     3,    34,
      35,    36,     0,     1,    25,    40,     4,     5,    43,    44,
      45,    11,    12,    13,    39,     0,     1,     3,    35,     4,
       5,    38,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,     3,   205,    34,     6,     0,     1,    34,    39,
       4,     5,    77,    39,    34,     3,    81,     3,    83,    39,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,     0,     1,    35,    35,     4,
       5,    38,    11,    12,    13,     0,     1,    34,   130,     4,
       5,    35,    39,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,   130,   131,   132,   130,   130,
      39,     0,     1,   138,   139,     4,     5,   142,    34,   144,
      38,   146,    35,    39,    34,   150,   151,   152,    39,    39,
      38,   156,   157,   158,    11,    12,    13,     0,     1,   277,
      35,     4,     5,    38,    38,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,   180,     0,     1,    34,    34,
       4,     5,    39,    39,    39,     4,     5,   192,   193,   194,
     195,   196,   197,   198,   199,    37,    38,   202,    34,    34,
      34,    35,    36,    39,    39,   330,    38,   330,   330,    43,
      44,    45,   337,   331,   337,   337,   221,   335,   330,   330,
     330,     3,    38,    34,     6,   337,   337,   337,    39,   234,
     235,   236,   237,   238,   239,   240,    34,    38,    72,    73,
      74,    39,    76,    11,    12,    13,     3,    34,    82,    34,
      35,    40,    39,     3,    22,    23,    24,    25,    26,    27,
      28,    29,    34,    34,    98,    99,    34,    39,    39,    34,
      39,    39,   277,   278,    39,   280,     0,     1,    34,    35,
       4,     5,    35,    72,    73,    74,    34,    76,    77,    34,
      35,    39,    81,    82,    22,    23,    24,    25,    26,    27,
      28,    29,    34,    37,    38,   139,    34,    39,   330,     0,
       1,    39,    38,     4,     5,   337,   150,   151,   152,    34,
      35,    38,   156,   157,   158,   330,   331,    38,   330,   330,
     335,    38,   337,    34,    35,   337,   337,    35,   172,   173,
     174,   130,   131,   132,   178,   179,   180,    34,    34,    34,
     139,    34,    39,    39,    39,    35,    39,    38,   192,   193,
     194,   195,   196,   197,   198,   199,   200,    37,    38,    11,
      12,    13,    34,    35,    37,    38,    34,    35,    34,    35,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,   227,   228,   229,    38,    39,    38,   233,
     234,   235,   236,   237,   238,   239,   240,    38,    38,    38,
     244,   245,   246,   202,    38,    35,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   261,   262,   263,
     264,   265,    35,    25,    -1,    -1,    -1,    -1,   227,   228,
     229,    -1,   276,    -1,   233,    45,    -1,    -1,   282,    -1,
      -1,    -1,    11,    12,    13,   244,   245,   246,    -1,    -1,
      -1,   250,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    72,    73,    74,    34,    76,    -1,    -1,    -1,
      39,    -1,    82,    -1,    -1,    -1,    -1,   276,   277,    -1,
      -1,   280,     3,   282,    -1,    -1,     7,     8,     9,    10,
      -1,   335,    -1,    14,    15,    16,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    30,
      31,    34,    -1,    34,    35,    -1,    39,    38,    -1,    -1,
      -1,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,   139,
      -1,   330,   331,    -1,    -1,    -1,   335,    -1,   337,    -1,
     150,   151,   152,    11,    12,    13,   156,   157,   158,    -1,
      -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,   172,   173,   174,    -1,    34,    -1,   178,   179,
     180,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,   192,   193,   194,   195,   196,   197,   198,   199,
     200,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    34,    -1,    72,    73,    74,    39,
      76,    -1,    -1,    -1,    -1,    -1,    82,   227,   228,   229,
      -1,    -1,    -1,   233,   234,   235,   236,   237,   238,   239,
     240,    -1,    -1,    -1,   244,   245,   246,    -1,    -1,    -1,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,   276,    -1,    -1,    34,
      -1,    -1,   282,   139,    39,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,   150,   151,   152,    -1,    34,    -1,
     156,   157,   158,    39,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,   172,   173,   174,    34,
      35,     3,   178,   179,   180,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,   335,   192,   193,   194,   195,
     196,   197,   198,   199,   200,    -1,    -1,    -1,    30,    31,
      -1,    -1,    34,    -1,    -1,    -1,    38,    39,    -1,    -1,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   227,   228,   229,    -1,    -1,    -1,   233,   234,   235,
     236,   237,   238,   239,   240,    -1,    45,    -1,   244,   245,
     246,    -1,    -1,    -1,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   261,   262,   263,   264,   265,
      -1,    -1,    -1,    72,    73,    74,    -1,    76,    -1,    -1,
     276,    -1,    -1,    82,    -1,    -1,   282,     1,    -1,     3,
       4,     5,    -1,     7,     8,     9,    10,    96,    97,    -1,
      14,    15,    16,    -1,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      34,    35,    -1,    -1,    38,    -1,    40,    41,    42,    43,
      44,    22,    23,    24,    25,    26,    27,    28,    29,   335,
     139,    -1,    -1,     1,    -1,     3,     4,     5,    39,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,   158,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    45,    34,    35,    -1,    -1,
      38,   180,    40,    41,    42,    43,    44,    -1,    -1,    -1,
      -1,    -1,    -1,   192,   193,   194,   195,   196,   197,   198,
     199,   200,    72,    73,    74,    -1,    76,    -1,    -1,    -1,
      -1,    -1,    82,    83,    -1,    85,    86,    87,    88,    89,
      90,    91,    92,    -1,    -1,    -1,    -1,    -1,   227,   228,
     229,    -1,    -1,    -1,   233,   234,   235,   236,   237,   238,
      -1,    -1,    -1,    45,    -1,   244,   245,   246,    -1,    -1,
      -1,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   261,   262,   263,    -1,    -1,    -1,    -1,   139,
      72,    73,    74,    -1,    76,    -1,    -1,   276,    -1,    -1,
      82,    -1,    -1,   282,    -1,    11,    12,    13,   158,    -1,
      -1,    93,    94,    95,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,     3,    34,    35,
     180,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    -1,   192,   193,   194,   195,   196,   197,   198,   199,
     200,    -1,    -1,    -1,    30,    31,   335,   139,    34,    35,
      -1,    -1,    38,    -1,    -1,    -1,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   158,   227,   228,   229,
      -1,    -1,    -1,   233,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,   244,   245,   246,    -1,   180,    -1,
     250,   251,   252,   253,   254,   255,   256,   257,   258,    -1,
     192,   193,   194,   195,   196,   197,   198,   199,   200,    72,
      73,    74,    -1,    76,    -1,    -1,   276,    -1,    -1,    82,
      -1,    -1,   282,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,   227,   228,   229,    -1,    -1,
      39,   233,   234,   235,   236,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   244,   245,   246,    -1,    -1,    -1,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   261,
      -1,    -1,    -1,    -1,    -1,   335,   139,    -1,    -1,     1,
      -1,     3,     4,     5,   276,     7,     8,     9,    10,    -1,
     282,    -1,    14,    15,    16,   158,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    34,    35,    -1,    -1,    38,   180,    40,    41,
      42,    43,    44,    -1,    -1,    -1,    -1,    -1,    -1,   192,
     193,   194,   195,   196,   197,   198,   199,   200,    -1,    -1,
      11,    12,    13,   335,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,   227,   228,   229,    38,    39,    -1,
     233,   234,   235,   236,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   244,   245,   246,    -1,    -1,    -1,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,    -1,     7,
       8,     9,    10,   276,    -1,    -1,    14,    15,    16,   282,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    34,    35,    -1,    -1,
      38,    -1,    40,    41,    42,    43,    44,     1,    -1,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    -1,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,   335,    -1,    -1,    -1,    30,    31,    -1,    -1,
      34,    35,    -1,    -1,    38,    -1,    40,    41,    42,    43,
      44,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    34,    35,    -1,    -1,    38,    -1,
      40,    41,    42,    43,    44,     1,    -1,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    -1,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    34,    35,
      -1,    -1,    38,    -1,    40,    41,    42,    43,    44,     1,
      -1,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    34,    35,    -1,    -1,    38,    -1,    40,    41,
      42,    43,    44,     1,    -1,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    34,    35,    -1,    -1,
      38,    -1,    40,    41,    42,    43,    44,     1,    -1,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    -1,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      34,    35,    -1,    -1,    38,    -1,    40,    41,    42,    43,
      44,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    34,    35,    -1,    -1,    38,    -1,
      40,    41,    42,    43,    44,     1,    -1,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    -1,    18,    19,    20,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    34,    35,
      -1,    -1,    38,    -1,    40,    41,    42,    43,    44,     1,
      -1,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    -1,    18,    19,    20,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    34,    35,    -1,    -1,    38,    -1,    40,    41,
      42,    43,    44,     1,    -1,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,
      18,    19,    20,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    34,    35,    -1,    -1,
      38,    -1,    40,    41,    42,    43,    44,     1,    -1,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    -1,    18,    19,    20,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      34,    35,    -1,    -1,    38,    -1,    40,    41,    42,    43,
      44,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,
      20,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    34,    35,    -1,    -1,    38,    -1,
      40,    41,    42,    43,    44,     1,    -1,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    34,    35,
      -1,    -1,    38,    -1,    40,    41,    42,    43,    44,     1,
      -1,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    -1,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    34,    35,    -1,    -1,    38,    -1,    40,    41,
      42,    43,    44,     1,    -1,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,
      18,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    34,    35,    -1,    -1,
      38,    -1,    40,    41,    42,    43,    44,     1,    -1,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    -1,    18,    19,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      34,    35,    -1,    -1,    38,    -1,    40,    41,    42,    43,
      44,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    34,    35,    -1,    -1,    38,    -1,
      40,    41,    42,    43,    44,     1,    -1,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    34,    35,
      -1,    -1,    38,    -1,    40,    41,    42,    43,    44,     1,
      -1,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    -1,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    34,    35,    -1,    -1,    38,    -1,    40,    41,
      42,    43,    44,     1,    -1,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,
      18,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    34,    35,    -1,    -1,
      38,    -1,    40,    41,    42,    43,    44,     1,    -1,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    -1,    18,    19,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      34,    35,    -1,    -1,    38,    -1,    40,    41,    42,    43,
      44,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    34,    35,    -1,    -1,    38,    -1,
      40,    41,    42,    43,    44,     1,    -1,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    34,    35,
      -1,    -1,    38,    -1,    40,    41,    42,    43,    44,     1,
      -1,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    -1,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    34,    35,    -1,    -1,    38,    -1,    40,    41,
      42,    43,    44,     1,    -1,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,
      18,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    34,    35,    -1,    -1,
      38,    -1,    40,    41,    42,    43,    44,     1,    -1,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    -1,    18,    19,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      34,    35,    -1,    -1,    38,    -1,    40,    41,    42,    43,
      44,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    34,    35,    -1,    -1,    38,    -1,
      40,    41,    42,    43,    44,     1,    -1,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    34,    35,
      -1,    -1,    38,    -1,    40,    41,    42,    43,    44,     1,
      -1,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    -1,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    34,    35,    -1,    -1,    38,    -1,    40,    41,
      42,    43,    44,     1,    -1,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,
      18,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    34,    35,    -1,    -1,
      38,    -1,    40,    41,    42,    43,    44,     1,    -1,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    -1,    18,    19,    -1,    21,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,
      34,    35,    -1,    -1,    38,    -1,    40,    41,    42,    43,
      44,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      30,    31,    -1,    -1,    34,    35,    -1,    -1,    38,    -1,
      40,    41,    42,    43,    44,     1,    -1,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    34,    35,
      -1,    -1,    38,    -1,    40,    -1,    42,    43,    44,     1,
      -1,     3,     4,     5,    -1,     7,     8,     9,    10,    -1,
      -1,    -1,    14,    15,    16,    -1,    18,    19,    -1,    21,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,
      -1,    -1,    34,    35,    -1,    -1,    38,    -1,    40,     3,
      42,    43,    44,     7,     8,     9,    10,    -1,    -1,     3,
      14,    15,    16,     7,     8,     9,    10,    -1,    -1,    -1,
      14,    15,    16,    -1,    -1,    -1,    30,    31,    -1,    -1,
      34,    -1,    -1,    -1,    38,    39,    30,    31,    42,    43,
      44,    -1,    -1,    -1,    38,    -1,    -1,     3,    42,    43,
      44,     7,     8,     9,    10,    -1,    -1,     3,    14,    15,
      16,     7,     8,     9,    10,    -1,    -1,    -1,    14,    15,
      16,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    -1,    30,    31,    42,    43,    44,    11,
      12,    13,    38,    -1,    -1,    -1,    42,    43,    44,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    -1,    37,    38,    39,    11,    12,
      13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
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
      33,    34,    11,    12,    13,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    11,    12,    13,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
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
      28,    29,    30,    31,    32,    33,    11,    12,    13,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    11,
      12,    13,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    11,    12,
      13,    -1,    34,    -1,    -1,    -1,    -1,    39,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    39,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    11,    12,    13,    -1,
      -1,    -1,    -1,    -1,    -1,    39,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    39,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
      37,    38,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    -1,    38,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    11,    12,    13,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      11,    12,    13,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    22,    23,    24,    25,    26,    27,    28,    29,    11,
      12,    13,    -1,    34,    35,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    11,    12,
      13,    -1,    34,    35,    -1,    -1,    -1,    -1,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    11,    12,    13,
      -1,    34,    35,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      34,    35,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    39,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    34,    -1,
      -1,    -1,    -1,    39,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
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
      34,    35,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    34,    35,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    34,    35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    48,    49,     0,     1,     4,     5,    50,    51,    52,
      53,    75,    76,    77,     6,     6,    35,    38,     3,    54,
      53,    56,    57,    58,    39,    34,    40,    55,    61,    58,
      60,     1,     3,     7,     8,     9,    10,    14,    15,    16,
      18,    19,    21,    30,    31,    38,    41,    42,    43,    44,
      51,    53,    54,    59,    61,    62,    63,    64,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    78,    54,    71,
      71,    71,    38,    38,    38,    66,    38,    38,    71,    71,
      67,    37,    38,    34,    35,    22,    23,    24,    25,    26,
      27,    28,    29,    11,    12,    13,    30,    31,    32,    33,
      66,    66,    66,    35,    66,    54,    65,    66,    39,    66,
      66,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      68,    68,    68,    70,    70,    71,    71,    39,    39,    39,
      39,    37,    35,    35,    39,    59,    66,    65,    20,    35,
      59,    65,    39,    59,    75,    40,    75,     3,     3,     7,
       8,     9,    10,    14,    15,    16,    30,    31,    38,    42,
      43,    44,    54,    68,    69,    70,    71,    73,    78,    35,
       3,     7,     8,     9,    10,    14,    15,    16,    30,    31,
      38,    42,    43,    44,    54,    67,    68,    69,    70,    71,
      73,    78,    22,    23,    24,    25,    26,    27,    28,    29,
      34,     1,    18,    19,    21,    40,    51,    53,    54,    61,
      62,    63,    64,    66,    72,    74,     3,    54,    66,     3,
      54,    60,     3,    54,    71,    71,    71,    38,    38,    38,
      71,    71,    67,    38,    11,    12,    13,    30,    31,    32,
      33,    71,    71,    71,    38,    38,    38,    71,    71,    67,
      38,    22,    23,    24,    25,    26,    27,    28,    29,    11,
      12,    13,    30,    31,    32,    33,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    66,    38,    38,    60,    35,
      37,    35,    37,    41,    66,    66,    66,    39,    66,    68,
      68,    68,    70,    70,    71,    71,    66,    66,    66,    39,
      66,    67,    67,    67,    67,    67,    67,    67,    67,    68,
      68,    68,    70,    70,    71,    71,    35,    66,    65,    41,
      66,    66,    39,    39,    39,    39,    39,    39,    39,    39,
      39,    35,    35,    59,    65,    35,    65,    39,    59
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    47,    48,    49,    49,    50,    50,    50,    51,    52,
      53,    54,    55,    56,    56,    57,    57,    58,    59,    59,
      59,    60,    60,    61,    62,    62,    62,    62,    62,    62,
      63,    63,    64,    65,    65,    66,    66,    66,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    68,    68,    68,
      68,    69,    69,    69,    70,    70,    70,    71,    71,    71,
      71,    71,    71,    71,    71,    72,    73,    73,    73,    73,
      74,    75,    75,    75,    75,    76,    77,    78,    78,    78,
      78,    78
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     2,     5,
       2,     1,     1,     1,     0,     3,     1,     1,     1,     1,
       1,     2,     0,     3,     1,     1,     1,     1,     1,     2,
       5,     7,     9,     3,     1,     3,     1,     0,     3,     3,
       3,     3,     3,     3,     3,     3,     1,     3,     3,     3,
       1,     1,     3,     3,     1,     3,     3,     1,     2,     2,
       2,     2,     2,     1,     3,     4,     4,     4,     4,     4,
       3,     1,     1,     1,     1,     2,     2,     1,     1,     1,
       1,     1
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
#line 2832 "src/sintatico.tab.c"
    break;

  case 3: /* lista_de_declaracoes: lista_de_declaracoes declaracao  */
#line 101 "src/sintatico.y"
                                          {
		(yyval.node) = novo_node("lista_de_declaracoes", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 2842 "src/sintatico.tab.c"
    break;

  case 4: /* lista_de_declaracoes: %empty  */
#line 106 "src/sintatico.y"
                        {
		// $$ = (t_node*)0;
		(yyval.node) = novo_node("parametros", -1, -1);
	}
#line 2851 "src/sintatico.tab.c"
    break;

  case 5: /* declaracao: declaracao_de_variavel  */
#line 113 "src/sintatico.y"
                                 {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("declaracao", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 2861 "src/sintatico.tab.c"
    break;

  case 6: /* declaracao: declaracao_de_funcao  */
#line 118 "src/sintatico.y"
                               {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("declaracao", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 2871 "src/sintatico.tab.c"
    break;

  case 7: /* declaracao: error  */
#line 123 "src/sintatico.y"
                {
		yyerrok;
	}
#line 2879 "src/sintatico.tab.c"
    break;

  case 8: /* declaracao_de_variavel: tipo_de_variavel_id PONTO_VIRGULA  */
#line 129 "src/sintatico.y"
                                          {
		(yyval.node) = novo_node("declaracao_de_variavel", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 2888 "src/sintatico.tab.c"
    break;

  case 9: /* declaracao_de_funcao: tipo_de_variavel_id ABRE_PARENTESES parametros FECHA_PARENTESES definicao_de_funcao  */
#line 137 "src/sintatico.y"
                                                                                              {
		(yyval.node) = novo_node("declaracao_de_funcao", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), (yyvsp[-4].node));
	  }
#line 2899 "src/sintatico.tab.c"
    break;

  case 10: /* tipo_de_variavel_id: tipo_de_variavel id  */
#line 146 "src/sintatico.y"
                            {
		(yyval.node) = novo_node(nome_tipo_atual, yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 2908 "src/sintatico.tab.c"
    break;

  case 11: /* id: ID  */
#line 153 "src/sintatico.y"
           {
		incrementa_tabela((yyvsp[0].node)->nome);
		(yyval.node) = novo_node(nome_id_atual, yylineno, coluna);
	}
#line 2917 "src/sintatico.tab.c"
    break;

  case 12: /* definicao_de_funcao: bloco_de_comando  */
#line 160 "src/sintatico.y"
                         {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("definicao_de_funcao", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 2927 "src/sintatico.tab.c"
    break;

  case 13: /* parametros: lista_de_parametros  */
#line 168 "src/sintatico.y"
                              {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("parametros", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 2937 "src/sintatico.tab.c"
    break;

  case 14: /* parametros: %empty  */
#line 173 "src/sintatico.y"
                        {
		// $$ = (t_node*)0;
		(yyval.node) = novo_node("parametros", -1, -1);
	}
#line 2946 "src/sintatico.tab.c"
    break;

  case 15: /* lista_de_parametros: lista_de_parametros VIRGULA parametro  */
#line 180 "src/sintatico.y"
                                                {
		(yyval.node) = novo_node("lista_de_parametros", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 2956 "src/sintatico.tab.c"
    break;

  case 16: /* lista_de_parametros: parametro  */
#line 185 "src/sintatico.y"
                    {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("lista_de_parametros", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 2966 "src/sintatico.tab.c"
    break;

  case 17: /* parametro: tipo_de_variavel_id  */
#line 193 "src/sintatico.y"
                              {
		(yyval.node) = novo_node("parametro", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	  }
#line 2975 "src/sintatico.tab.c"
    break;

  case 18: /* comando: bloco_de_comando  */
#line 200 "src/sintatico.y"
                           {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 2985 "src/sintatico.tab.c"
    break;

  case 19: /* comando: comando_unico  */
#line 205 "src/sintatico.y"
                        {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 2995 "src/sintatico.tab.c"
    break;

  case 20: /* comando: error  */
#line 210 "src/sintatico.y"
                {
		yyerrok;
	}
#line 3003 "src/sintatico.tab.c"
    break;

  case 21: /* comandos: comandos comando  */
#line 216 "src/sintatico.y"
                           {
		(yyval.node) = novo_node("comandos", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3013 "src/sintatico.tab.c"
    break;

  case 22: /* comandos: %empty  */
#line 221 "src/sintatico.y"
                    {
		// $$ = (t_node*)0;
		(yyval.node) = novo_node("comandos", -1, -1);
	}
#line 3022 "src/sintatico.tab.c"
    break;

  case 23: /* bloco_de_comando: ABRE_CHAVES comandos FECHA_CHAVES  */
#line 228 "src/sintatico.y"
                                            {
		// $$ = $2;
		(yyval.node) = novo_node("BLOCO", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3032 "src/sintatico.tab.c"
    break;

  case 24: /* comando_unico: comando_condicional  */
#line 236 "src/sintatico.y"
                              {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3042 "src/sintatico.tab.c"
    break;

  case 25: /* comando_unico: comando_iterativo  */
#line 241 "src/sintatico.y"
                            {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3052 "src/sintatico.tab.c"
    break;

  case 26: /* comando_unico: declaracao_de_variavel  */
#line 246 "src/sintatico.y"
                                 {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3062 "src/sintatico.tab.c"
    break;

  case 27: /* comando_unico: chamada_de_retorno  */
#line 251 "src/sintatico.y"
                             {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3072 "src/sintatico.tab.c"
    break;

  case 28: /* comando_unico: comando_de_atribuicao  */
#line 256 "src/sintatico.y"
                                {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3082 "src/sintatico.tab.c"
    break;

  case 29: /* comando_unico: expressao PONTO_VIRGULA  */
#line 261 "src/sintatico.y"
                                  {
		(yyval.node) = (yyvsp[-1].node);
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3092 "src/sintatico.tab.c"
    break;

  case 30: /* comando_condicional: IF ABRE_PARENTESES expressao FECHA_PARENTESES comando  */
#line 269 "src/sintatico.y"
                                                                          {
		(yyval.node) = novo_node("IF", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3102 "src/sintatico.tab.c"
    break;

  case 31: /* comando_condicional: IF ABRE_PARENTESES expressao FECHA_PARENTESES comando ELSE comando  */
#line 274 "src/sintatico.y"
                                                                             {
		(yyval.node) = novo_node("IF_ELSE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), (yyvsp[-4].node));
	}
#line 3113 "src/sintatico.tab.c"
    break;

  case 32: /* comando_iterativo: FOR ABRE_PARENTESES expressao_for PONTO_VIRGULA expressao_for PONTO_VIRGULA expressao_for FECHA_PARENTESES comando  */
#line 283 "src/sintatico.y"
                                                                                                                             {
		(yyval.node) = novo_node("FOR", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), (yyvsp[-4].node));
		coloca_node_filho((yyval.node), (yyvsp[-6].node));
	}
#line 3125 "src/sintatico.tab.c"
    break;

  case 33: /* expressao_for: id ATRIB expressao  */
#line 293 "src/sintatico.y"
                           {
		(yyval.node) = novo_node("ATRIB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3135 "src/sintatico.tab.c"
    break;

  case 34: /* expressao_for: expressao  */
#line 298 "src/sintatico.y"
                    {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("expressao_for", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3145 "src/sintatico.tab.c"
    break;

  case 35: /* expressao: expressao VIRGULA exp  */
#line 306 "src/sintatico.y"
                              {
		(yyval.node) = novo_node("expressao", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3155 "src/sintatico.tab.c"
    break;

  case 36: /* expressao: exp  */
#line 311 "src/sintatico.y"
              {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("expressao", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3165 "src/sintatico.tab.c"
    break;

  case 37: /* expressao: %empty  */
#line 316 "src/sintatico.y"
                        {
		// $$ = (t_node*)0;
		(yyval.node) = novo_node("expressao", -1, -1);
	}
#line 3174 "src/sintatico.tab.c"
    break;

  case 38: /* exp: exp GT exp  */
#line 323 "src/sintatico.y"
                   {
		(yyval.node) = novo_node("GT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3184 "src/sintatico.tab.c"
    break;

  case 39: /* exp: exp LT exp  */
#line 328 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("LT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3194 "src/sintatico.tab.c"
    break;

  case 40: /* exp: exp EQ exp  */
#line 333 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("EQ", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3204 "src/sintatico.tab.c"
    break;

  case 41: /* exp: exp NE exp  */
#line 338 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("NE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3214 "src/sintatico.tab.c"
    break;

  case 42: /* exp: exp LE exp  */
#line 343 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("LE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3224 "src/sintatico.tab.c"
    break;

  case 43: /* exp: exp GE exp  */
#line 348 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("GE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3234 "src/sintatico.tab.c"
    break;

  case 44: /* exp: exp AND exp  */
#line 353 "src/sintatico.y"
                      {
		(yyval.node) = novo_node("AND", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3244 "src/sintatico.tab.c"
    break;

  case 45: /* exp: exp OR exp  */
#line 358 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("OR", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3254 "src/sintatico.tab.c"
    break;

  case 46: /* exp: exp_list  */
#line 363 "src/sintatico.y"
                   {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("exp", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3264 "src/sintatico.tab.c"
    break;

  case 47: /* exp_list: exp_list CONSTRUTOR exp_list  */
#line 371 "src/sintatico.y"
                                     {
		(yyval.node) = novo_node("CONSTRUTOR", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3274 "src/sintatico.tab.c"
    break;

  case 48: /* exp_list: exp_list FILTER exp_list  */
#line 376 "src/sintatico.y"
                                   {
		(yyval.node) = novo_node("FILTER", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3284 "src/sintatico.tab.c"
    break;

  case 49: /* exp_list: exp_list MAP exp_list  */
#line 381 "src/sintatico.y"
                                {
		(yyval.node) = novo_node("MAP", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3294 "src/sintatico.tab.c"
    break;

  case 50: /* exp_list: exp_aritmetica  */
#line 386 "src/sintatico.y"
                         {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("exp_list", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3304 "src/sintatico.tab.c"
    break;

  case 51: /* exp_aritmetica: termo  */
#line 395 "src/sintatico.y"
              {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("exp_aritmetica", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3314 "src/sintatico.tab.c"
    break;

  case 52: /* exp_aritmetica: exp_aritmetica SOMA termo  */
#line 400 "src/sintatico.y"
                                    {
		(yyval.node) = novo_node("SOMA", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3324 "src/sintatico.tab.c"
    break;

  case 53: /* exp_aritmetica: exp_aritmetica SUB termo  */
#line 405 "src/sintatico.y"
                                   {
		(yyval.node) = novo_node("SUB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3334 "src/sintatico.tab.c"
    break;

  case 54: /* termo: fator  */
#line 413 "src/sintatico.y"
              {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("termo", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3344 "src/sintatico.tab.c"
    break;

  case 55: /* termo: termo MULT fator  */
#line 418 "src/sintatico.y"
                           {
		(yyval.node) = novo_node("MULT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3354 "src/sintatico.tab.c"
    break;

  case 56: /* termo: termo DIV fator  */
#line 423 "src/sintatico.y"
                          {
		(yyval.node) = novo_node("DIV", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3364 "src/sintatico.tab.c"
    break;

  case 57: /* fator: constante  */
#line 431 "src/sintatico.y"
                  {
		(yyval.node) = (yyvsp[0].node);
		// $$ = novo_node("fator", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3374 "src/sintatico.tab.c"
    break;

  case 58: /* fator: SUB fator  */
#line 436 "src/sintatico.y"
                    {
		(yyval.node) = novo_node("SUB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3383 "src/sintatico.tab.c"
    break;

  case 59: /* fator: SOMA fator  */
#line 440 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("SOMA", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3392 "src/sintatico.tab.c"
    break;

  case 60: /* fator: TAIL_OR_NOT fator  */
#line 444 "src/sintatico.y"
                            {
		(yyval.node) = novo_node("TAIL_NOT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3401 "src/sintatico.tab.c"
    break;

  case 61: /* fator: TAIL_POP fator  */
#line 448 "src/sintatico.y"
                         {
		(yyval.node) = novo_node("TAIL_POP", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3410 "src/sintatico.tab.c"
    break;

  case 62: /* fator: HEADER fator  */
#line 452 "src/sintatico.y"
                       {
		(yyval.node) = novo_node("HEADER", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3419 "src/sintatico.tab.c"
    break;

  case 63: /* fator: ID  */
#line 456 "src/sintatico.y"
             {
		verifica_contexto((yyvsp[0].node)->nome);
		(yyval.node) = novo_node(nome_id_atual, yylineno, coluna);
	}
#line 3428 "src/sintatico.tab.c"
    break;

  case 64: /* fator: ABRE_PARENTESES exp FECHA_PARENTESES  */
#line 460 "src/sintatico.y"
                                               {
		// $$ = $2;
		(yyval.node) = novo_node("fator", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3438 "src/sintatico.tab.c"
    break;

  case 65: /* comando_de_atribuicao: id ATRIB expressao PONTO_VIRGULA  */
#line 469 "src/sintatico.y"
                                     {
		verifica_contexto((yyvsp[-3].node)->nome);
		(yyval.node) = novo_node("ATRIB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
		coloca_node_filho((yyval.node), (yyvsp[-3].node));
	}
#line 3449 "src/sintatico.tab.c"
    break;

  case 66: /* exp_funcao: id ABRE_PARENTESES expressao FECHA_PARENTESES  */
#line 478 "src/sintatico.y"
                                                        {
		verifica_contexto((yyvsp[-3].node)->nome);
		(yyval.node) = novo_node("exp_funcao", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
		coloca_node_filho((yyval.node), (yyvsp[-3].node));
	}
#line 3460 "src/sintatico.tab.c"
    break;

  case 67: /* exp_funcao: READ ABRE_PARENTESES expressao FECHA_PARENTESES  */
#line 484 "src/sintatico.y"
                                                           {
		(yyval.node) = novo_node("READ", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3469 "src/sintatico.tab.c"
    break;

  case 68: /* exp_funcao: WRITE ABRE_PARENTESES expressao FECHA_PARENTESES  */
#line 488 "src/sintatico.y"
                                                            {
		(yyval.node) = novo_node("WRITE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3478 "src/sintatico.tab.c"
    break;

  case 69: /* exp_funcao: WRITELN ABRE_PARENTESES expressao FECHA_PARENTESES  */
#line 492 "src/sintatico.y"
                                                              {
		(yyval.node) = novo_node("WRITELN", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3487 "src/sintatico.tab.c"
    break;

  case 70: /* chamada_de_retorno: RETURN expressao PONTO_VIRGULA  */
#line 499 "src/sintatico.y"
                                       {
		(yyval.node) = novo_node("RETURN", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3496 "src/sintatico.tab.c"
    break;

  case 71: /* tipo_de_variavel: INT  */
#line 506 "src/sintatico.y"
              {
		strcpy(nome_tipo_atual, "INT");
		(yyval.node) = novo_node("INT", yylineno, coluna);
	  }
#line 3505 "src/sintatico.tab.c"
    break;

  case 72: /* tipo_de_variavel: FLOAT  */
#line 510 "src/sintatico.y"
                {
		strcpy(nome_tipo_atual, "FLOAT");
		(yyval.node) = novo_node("FLOAT", yylineno, coluna);
	  }
#line 3514 "src/sintatico.tab.c"
    break;

  case 73: /* tipo_de_variavel: int_list  */
#line 514 "src/sintatico.y"
                   {
		strcpy(nome_tipo_atual, "INT_LIST");
		(yyval.node) = novo_node("INT_LIST", yylineno, coluna);
	  }
#line 3523 "src/sintatico.tab.c"
    break;

  case 74: /* tipo_de_variavel: float_list  */
#line 518 "src/sintatico.y"
                     {
		strcpy(nome_tipo_atual, "FLOAT_LIST");
		(yyval.node) = novo_node("FLOAT_LIST", yylineno, coluna);
	}
#line 3532 "src/sintatico.tab.c"
    break;

  case 77: /* constante: INTEGER_CONST  */
#line 533 "src/sintatico.y"
                      {
		(yyval.node) = novo_node("INTEGER_CONST", yylineno, coluna);
	}
#line 3540 "src/sintatico.tab.c"
    break;

  case 78: /* constante: FLOAT_CONST  */
#line 536 "src/sintatico.y"
                      {
		(yyval.node) = novo_node("FLOAT_CONST", yylineno, coluna);
	}
#line 3548 "src/sintatico.tab.c"
    break;

  case 79: /* constante: CONSTANTE_NIL  */
#line 539 "src/sintatico.y"
                        {
		(yyval.node) = novo_node("CONSTANTE_NIL", yylineno, coluna);
	}
#line 3556 "src/sintatico.tab.c"
    break;

  case 80: /* constante: STRING_LITERAL  */
#line 542 "src/sintatico.y"
                         {
		(yyval.node) = novo_node("STRING_LITERAL", yylineno, coluna);
	}
#line 3564 "src/sintatico.tab.c"
    break;

  case 81: /* constante: exp_funcao  */
#line 545 "src/sintatico.y"
                     {
		// $$ = $1;
		(yyval.node) = novo_node("constante", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3574 "src/sintatico.tab.c"
    break;


#line 3578 "src/sintatico.tab.c"

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

#line 553 "src/sintatico.y"


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
    fprintf(tree_output_file,"[PROGRAMA");
	imprime_ast(ast, 0);
	destroi_arvore(ast);
    fprintf(tree_output_file,"]");
	fclose(tree_output_file);

	return 0;
}
