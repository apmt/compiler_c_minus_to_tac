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
  YYSYMBOL_comandos = 61,                  /* comandos  */
  YYSYMBOL_bloco_de_comando = 62,          /* bloco_de_comando  */
  YYSYMBOL_63_3 = 63,                      /* $@3  */
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
#define YYLAST   7540

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  531

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
     185,   188,   191,   197,   202,   208,   208,   215,   218,   221,
     224,   227,   233,   238,   243,   249,   255,   261,   270,   280,
     285,   291,   294,   300,   303,   308,   313,   318,   323,   328,
     333,   338,   343,   349,   354,   359,   364,   371,   374,   379,
     387,   390,   395,   403,   406,   409,   413,   417,   421,   425,
     429,   433,   440,   449,   458,   465,   470,   474,   481,   488,
     499,   506,   507,   508,   512,   513,   518,   521,   524,   527
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
  "tipo_de_variavel_id", "id", "comando", "comandos", "bloco_de_comando",
  "$@3", "comando_unico", "comando_condicional", "comando_iterativo",
  "expressao_for", "exp_or_empty", "exp", "exp_list", "exp_aritmetica",
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
     295,   296,   297,   298,   299,   300
};
#endif

#define YYPACT_NINF (-260)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-90)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      10,     6,    53,  -260,    55,    61,    62,   108,   118,   156,
      72,    16,    20,    28,    30,     9,    13,    89,   110,   221,
       4,    47,   -18,   -12,    -9,    58,     8,    31,   223,     3,
    2150,  2205,  4795,  4851,    73,    73,    73,    32,    76,    82,
    1871,    92,   116,    73,    73,  3667,   247,  4876,  4901,  4926,
    2249,    64,   -33,  2293,  2345,   122,  2389,  1732,  2433,   135,
    1811,  5426,  1930,  4951,  4976,  2477,  5001,  2521,  5026,   134,
    5051,  5076,  5101,   174,  3667,  3667,  1835,  3667,   625,  5126,
    5151,   978,  1871,  1288,    31,  2565,  1871,  1871,  1871,  1871,
    1871,  1871,  1871,  1871,    73,    73,    73,    73,    73,    73,
      73,   153,  6279,  6287,  2609,  6305,    40,   155,   179,  5176,
    2316,  5201,   292,    45,  2653,  6987,  7001,  7015,  7029,  7043,
    7057,  7071,  7085,  5445,  5464,  5483,  5226,  5251,  5276,  5301,
    5326,  5351,  5376,   891,  1871,   625,  2697,  3705,  5401,  2741,
    1286,  6791,  7099,   180,  1184,  3443,  3443,  1493,  7113,  7127,
    7141,  7155,   170,  3137,  2785,   213,   214,  4823,   264,  1236,
     528,   528,   528,   193,   203,   207,   211,   528,   528,  3667,
    4232,  4255,  4278,   212,  6313,   171,  1043,  4301,  4324,  4347,
    4370,   195,   225,  3667,  3667,  3667,  3667,  3667,  3667,  3667,
    3667,   762,  1396,  1678,  1678,  1678,   228,   229,   230,   266,
    1678,  1678,  3667,  1557,  3728,  3752,   285,  1442,   743,   231,
    3776,  3800,  3824,  3848,  3705,  3705,  3705,  3705,  3705,  3705,
    3705,  3705,  1871,   291,  6805,    64,    91,   294,  6819,   301,
    6833,  6847,  1871,   302,  7169,    64,   112,   299,  7183,   306,
    7197,  7211,  2074,   121,   308,  6331,    51,    63,   313,   314,
    4393,  4416,  4439,   174,  3667,  3667,  3667,  4462,  4485,  6339,
    1787,   528,   528,   528,   528,   528,   528,   528,  2829,  6357,
    6365,  6383,  6391,  6409,  6417,  6435,  6443,  3872,  3896,  3920,
     174,  3667,  3667,  3667,  3944,  3968,  6461,  3649,  1678,  1678,
    1678,  1678,  1678,  1678,  1678,  5829,  5847,  5865,  5883,  5901,
    5919,  5937,  5955,  7225,   625,   315,  1871,    31,  6861,  7239,
     625,   316,  1871,    31,  7253,  3667,   319,  6469,  6487,  6495,
    4508,  4531,    66,  1091,  1348,  1713,  4554,  4577,  4600,  4623,
     321,  6513,  6521,  6539,  3992,  4016,    87,  4738,  4757,  4776,
    4040,  4064,  4088,  4112,  6875,   318,  6889,  7267,  2873,  7281,
     320,  7295,  7309,  2917,  6547,  4646,  4669,  4692,  3485,  4715,
    4136,  4160,  4184,  3527,  4208,   625,  6903,  6917,   625,  7323,
    7337,  1871,   324,   113,    64,   129,   818,   323,  2015,  5623,
     332,  5641,  5659,  1871,   330,   413,    64,   131,   851,   329,
     948,  1000,   335,  1142,  1979,   339,   340,  7351,   625,   342,
    1871,  3569,    31,  3569,  5677,  7365,   625,   344,  1871,  3611,
      31,  3611,  2108,  1493,  1493,  5695,   345,  5713,  7379,  1871,
     346,  6565,    64,   138,  6573,   347,  6591,  6599,   350,  6617,
    6625,  2961,  6643,  6651,  3703,   353,  5497,  7393,  1871,   351,
    5973,    64,   151,  5991,   352,  6009,  6027,   355,  6045,  6063,
    3005,  6081,  6099,   343,   354,   625,  5731,  7407,   625,   356,
    1871,    31,  6669,  5749,   625,  5515,  7421,   625,   360,  1871,
      31,  6117,  5533,  3181,  3225,   361,  6677,   363,  6695,  7435,
    3049,   365,  6135,   370,  6153,  7449,  3093,  6931,  6945,  6959,
    6973,  7463,  7477,  7491,  7505,  1493,   625,  6703,  6721,  1493,
     625,  6171,  6189,   367,   373,   372,   378,  3269,  1493,  3313,
    1493,  5767,  5785,  5803,  5821,   376,  5551,  5569,  5587,  5605,
     379,  3357,  3401,  6729,  6747,  6755,  6773,  6207,  6225,  6243,
    6261
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -260,  -260,  -260,  -260,     1,   -44,  -260,  -260,  -260,  -260,
    -260,   328,    -2,    18,   -28,   -67,   192,   418,   771,  1863,
    1155,   -41,   199,   777,  1560,  1708,  1357,   543,  1192,   938,
    -259,  1618,     0,  -260,  1196
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     7,    50,    15,     9,    16,    28,    21,
      22,    23,    51,    69,    53,    30,    54,    55,    56,    57,
      58,   107,   108,    60,    61,    62,    63,    64,    65,    66,
     113,    67,   156,    12,    68
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,   322,    11,     8,    82,    83,     3,   181,     5,     6,
      -4,    -4,     5,     6,    -4,    -4,    26,   114,    24,    17,
     155,   -13,   -16,   -83,    24,   -17,   155,   -16,   336,    18,
     -17,   -84,   -24,   -85,   -24,   -24,   -24,   -15,   -24,   -24,
     -24,   -24,   -15,   -14,    19,   -24,   -24,   -24,    52,   -24,
     -24,    20,   -24,    -2,     4,    -7,    -7,     5,     6,    -7,
      -7,   -24,   -24,   173,   -81,   -82,   -24,    13,    14,   -24,
      73,   -24,   -24,   -24,   -24,   -24,   157,   134,    83,   137,
      33,    34,    35,    36,   138,   -19,    25,    37,    38,    39,
     -19,   101,   173,   173,   143,   173,   106,   -18,    27,    -8,
     137,   206,   -18,    43,    44,   359,   152,    -8,    -3,    -3,
     -10,    45,    -3,    -3,    74,    47,    48,    49,    -5,    -5,
      75,   137,    -5,    -5,   -19,   154,   364,   -19,   306,    83,
      77,   225,    52,   -28,   224,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,   235,   235,   -18,   234,   234,   -18,   312,
      83,   226,   -28,   106,    78,   206,    -6,    -6,   315,   260,
      -6,    -6,    84,   236,   236,   243,   400,    83,   408,    83,
      85,    52,    83,   247,   249,   460,    83,   182,   173,   173,
     173,   305,   261,   262,   263,   173,   173,   173,   469,    83,
     135,   311,   130,   -52,   -52,   -52,   -52,   -52,   -52,   -52,
     -52,   173,   173,   173,   173,   173,   173,   173,   173,   153,
     -52,   206,   206,   206,   -40,   147,   246,   248,   206,   206,
     173,    -9,    -9,   -11,   -11,    -9,    -9,   -11,   -11,    59,
     268,   253,   206,   206,   206,   206,   206,   206,   206,   206,
     348,   254,   -56,   -56,   -56,   255,   353,   -12,   -12,   256,
     260,   -12,   -12,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
     -56,   291,   292,   345,   -19,   -56,   280,   281,   282,   350,
     -56,   316,   173,   173,   173,   -70,   -70,   -70,   206,   173,
     173,   173,   173,   173,   173,   173,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   330,   173,
     173,   173,   -19,   -70,   283,   206,   206,   206,   206,   206,
     206,   206,   206,    59,   214,   215,   216,   217,   218,   219,
     220,   221,   106,   287,   395,   140,   -79,   396,   106,   304,
     399,   -79,   229,   173,   307,   431,   308,   148,   150,   313,
     310,   314,   407,   450,   239,   239,   244,   -40,   -19,   -18,
     346,   351,    59,   365,    29,   368,   374,   416,   355,   373,
     360,   386,   398,   402,   385,   435,    52,   404,   406,   410,
     412,    52,   453,   454,   413,   414,   375,   417,   459,   436,
     455,   387,   473,   106,   458,   462,   106,   461,   464,   467,
     471,   478,   470,   474,   480,   484,   495,   468,   496,   422,
     499,   422,   421,   486,   421,   500,   507,   441,   508,   441,
     440,   509,   440,   510,   475,   521,   106,   477,   522,   423,
       0,   423,     0,   481,   106,     0,   483,   442,     0,   442,
       0,   243,   243,   -28,     0,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,     0,     0,   488,   492,   -28,     0,    52,
       0,     0,   -28,     0,   503,   504,     0,     0,   505,   506,
       0,     0,     0,     0,     0,     0,     0,   515,    52,   520,
       0,   225,   235,   106,   224,   234,   106,     0,     0,   512,
       0,   517,   106,     0,     0,   106,     0,     0,     0,     0,
       0,   226,   236,   524,   528,     0,     0,     0,    52,     0,
       0,     0,     0,     0,    52,   374,     0,   386,   373,     0,
     385,     0,     0,   243,   106,     0,     0,   243,   106,   422,
     441,     0,   421,   440,     0,   375,   243,   387,   243,     0,
       0,   158,     0,     0,     0,   159,   160,   161,   162,   423,
     442,     0,   163,   164,   165,     0,     0,    59,     0,     0,
     376,   227,    59,     0,     0,   388,     0,   380,   167,   168,
       0,     0,   392,   237,   237,     0,   169,     0,     0,     0,
     170,   171,   172,     0,     0,     0,     0,    70,    71,    72,
       0,     0,     0,     0,     0,     0,    79,    80,   178,     0,
       0,     0,     0,   424,     0,   432,     0,     0,     0,     0,
     428,   443,   428,   451,     0,     0,     0,     0,   447,     0,
     447,     0,   244,   244,     0,     0,     0,   178,   178,     0,
     178,     0,     0,     0,     0,     0,   211,     0,    32,     0,
      59,     0,    33,    34,    35,    36,     0,     0,     0,    37,
      38,    39,   128,   129,    41,     0,     0,     0,     0,    59,
       0,     0,     0,     0,     0,    43,    44,     0,     0,     0,
     -42,     0,     0,    45,     0,   489,   493,    47,    48,    49,
       0,     0,   229,   239,     0,     0,     0,     0,     0,    59,
     211,     0,     0,     0,     0,    59,     0,     0,     0,     0,
     178,     0,     0,     0,   244,     0,     0,     0,   244,   513,
       0,   518,     0,   250,   251,   252,   380,   244,   392,   244,
     257,   258,   178,   525,   529,     0,     0,     0,     0,     0,
     428,   447,     0,     0,     0,     0,   178,   178,   178,   178,
     178,   178,   178,   178,     0,     0,   277,   278,   279,     0,
       0,     0,     0,   284,   285,   178,     0,     0,     0,     0,
       0,     0,     0,     0,   288,   289,   290,   211,   211,   211,
     211,   211,   211,   211,   211,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,   -70,   -70,   -70,   377,   -52,     0,     0,
       0,   389,   -52,     0,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   178,   178,   178,
     -19,   -70,     0,   211,   178,   178,   178,   178,   178,   328,
     329,     0,     0,     0,     0,     0,     0,    76,     0,   425,
       0,   425,    81,     0,   178,   178,   178,   444,     0,   444,
     211,   211,   211,   211,   211,   211,   342,   343,   401,     0,
     -33,   -33,   -33,   -33,   -33,   -33,   -33,   -33,     0,     0,
       0,   102,   103,     0,   105,     0,     0,   -33,   178,   110,
     112,     0,     0,   115,   116,   117,   118,   119,   120,   121,
     122,   409,     0,   -33,   -33,   -33,   -33,   -33,   -33,   -33,
     -33,     0,     0,     0,     0,   -33,     0,     0,     0,     0,
     -33,   227,   237,     0,    32,     5,     6,     0,    33,    34,
      35,    36,     0,     0,   141,    37,    38,    39,     0,   222,
      41,   142,   223,     0,   144,     0,   149,   151,     0,     0,
       0,    43,    44,     0,   245,   377,   -42,   389,     0,    45,
       0,   -25,     0,    47,    48,    49,     0,     0,     0,   425,
     444,     0,     0,     0,     0,     0,   259,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   178,   178,     0,     0,
     269,   270,   271,   272,   273,   274,   275,   276,   411,     0,
     -32,   -32,   -32,   -32,   -32,   -32,   -32,   -32,     0,   286,
       0,     0,   -32,   179,     0,     0,     0,   -32,     0,     0,
       0,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     183,   184,   185,   186,   187,   188,   189,   190,     0,   309,
       0,     0,   179,   179,     0,   179,     0,   109,     0,     0,
     -27,   212,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,
       0,   317,   318,   319,   -27,     0,     0,   112,   178,   -27,
       0,     0,   178,     0,     0,     0,     0,     0,     0,     0,
       0,   178,     0,   178,   -56,   -56,   -56,     0,   331,   332,
     333,     0,     0,     0,   112,   -56,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   264,   265,   212,     0,     0,     0,     0,
       0,     0,   -56,   347,     0,   179,     0,     0,     0,   352,
       0,     0,   354,     0,     0,     0,     0,     0,   179,   179,
     179,     0,   261,   262,   263,   179,   179,   179,     0,     0,
       0,     0,     0,   -55,   -55,   -55,   -55,   -55,   -55,   -55,
     -55,   179,   179,   179,   179,   179,   179,   179,   179,   378,
     -55,   212,   212,   212,   390,     0,     0,     0,   212,   212,
     179,     0,     0,     0,     0,     0,     0,     0,   397,     0,
       0,     0,   212,   212,   212,   212,   212,   212,   212,   212,
     405,     0,   -30,     0,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   426,     0,   433,     0,   -30,   418,     0,     0,
     445,   -30,   452,     0,     0,   437,     0,     0,     0,     0,
     245,   245,   179,   179,   179,     0,   457,     0,   212,   179,
     179,   179,   179,   179,   179,   179,   214,   215,   216,   217,
     218,   219,   220,   221,     0,   466,     0,     0,   -78,   179,
     179,   179,     0,   -78,     0,   212,   212,   212,   212,   212,
     212,   212,   212,     0,     0,     0,     0,   479,     0,     0,
       0,   180,     0,     0,   490,   494,   485,   -88,   -88,   -88,
       0,     0,     0,   179,     0,     0,     0,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     180,   180,   245,   180,     0,   -88,   245,     0,   514,   213,
     519,     0,     0,     0,     0,   245,     0,   245,   228,     0,
       0,   191,   526,   530,     0,   192,   193,   194,   195,     0,
     238,   238,   196,   197,   198,     0,   145,   199,   -33,   -33,
     -33,   -33,   -33,   -33,   -33,   -33,     0,     0,   200,   201,
       0,   -33,     0,     0,     0,   230,   202,   111,     0,     0,
     203,   204,   205,   213,     0,     0,     0,   240,   240,     0,
       0,     0,     0,   180,     0,     0,     0,     0,     0,     0,
       0,   179,   179,     0,     0,     0,   180,   180,   180,   261,
     262,   263,     0,   180,   180,   180,     0,     0,     0,     0,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,     0,   180,
     180,   180,   180,   180,   180,   180,   180,   -54,     0,   213,
     213,   213,     0,     0,     0,     0,   213,   213,   180,     0,
       0,     0,   177,     0,     0,     0,     0,   -88,   -88,   -88,
     213,   213,   213,   213,   213,   213,   213,   213,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   177,   177,   179,   177,   -88,     0,   179,     0,     0,
     210,     0,     0,     0,     0,     0,   179,     0,   179,     0,
     180,   180,   180,     0,   126,   127,   213,   180,   180,   180,
     180,   180,   180,   180,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,     0,     0,     0,     0,   -43,   180,   180,   180,
       0,   -43,     0,   213,   213,   213,   213,   213,   213,   213,
     213,     0,     0,     0,   210,     0,   242,     0,     0,     0,
     159,   160,   161,   162,   177,     0,     0,   163,   164,   165,
       0,   180,   166,   379,     0,     0,     0,     0,   391,     0,
       0,     0,     0,   167,   168,     0,   177,     0,     0,     0,
       0,   169,   -42,     0,     0,   170,   171,   172,     0,     0,
     177,   177,   177,   177,   177,   177,   177,   177,     0,     0,
     381,     0,     0,     0,     0,   393,   427,     0,   427,   177,
       0,     0,     0,     0,   446,     0,   446,     0,   -87,   -87,
     -87,   210,   210,   210,   210,   210,   210,   210,   210,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,     0,   429,     0,   429,   -87,     0,     0,     0,
       0,   448,     0,   448,     0,   175,     0,     0,     0,   180,
     180,   177,   177,   177,     0,     0,     0,   210,   177,   177,
     177,   326,   327,     0,     0,     0,     0,     0,   228,   238,
       0,     0,     0,     0,   175,   175,     0,   175,   177,   177,
     177,     0,     0,   208,   210,   210,   210,   210,   340,   341,
       0,     0,     0,     0,   123,   124,   125,     0,     0,     0,
       0,     0,   379,     0,   391,   230,   240,     0,     0,     0,
       0,     0,   177,     0,     0,     0,   427,   446,     0,     0,
       0,   191,     0,     0,     0,   192,   193,   194,   195,     0,
       0,   180,   196,   197,   198,   180,     0,   208,     0,   381,
       0,   393,     0,     0,   180,     0,   180,   175,   200,   201,
       0,     0,     0,   429,   448,     0,   202,     0,     0,     0,
     203,   204,   205,     0,   261,   262,   263,     0,     0,   175,
       0,     0,     0,     0,     0,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   175,   175,   175,   175,   175,   175,   175,
     175,   231,   -53,   176,   -43,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   175,   241,   241,     0,     0,   -43,     0,     0,
     177,   177,     0,     0,   208,   208,   208,   208,   208,   208,
     208,   208,   176,   176,     0,   176,     0,     0,     0,     0,
     191,   209,     0,     0,   192,   193,   194,   195,     0,     0,
       0,   196,   197,   198,     0,     0,   199,     0,     0,     0,
       0,     0,     0,     0,   175,   175,   175,   200,   201,     0,
     208,   323,   324,   325,     0,   202,   321,     0,     0,   203,
     204,   205,     0,    86,    87,    88,    89,    90,    91,    92,
      93,   175,   175,   175,     0,   209,   -41,   208,   337,   338,
     339,     0,   177,     0,     0,   176,   177,    86,    87,    88,
      89,    90,    91,    92,    93,   177,     0,   177,     0,     0,
     104,     0,     0,     0,   157,   175,     0,   176,    33,    34,
      35,    36,     0,     0,     0,    37,    38,    39,     0,     0,
      41,   176,   176,   176,   176,   176,   176,   176,   176,     0,
       0,    43,    44,     0,     0,     0,     0,     0,   174,    45,
     176,     0,     0,    47,    48,    49,     0,     0,     0,     0,
       0,     0,   209,   209,   209,   209,   209,   209,   209,   209,
       0,     0,     0,     0,     0,     0,     0,   174,   174,     0,
     174,   -56,   -56,   -56,     0,     0,   207,     0,     0,     0,
       0,     0,   -56,   -56,   -56,   -56,   -56,   -56,   -56,   -56,
      97,    98,   176,   176,   176,   -56,     0,     0,   209,   176,
     176,   176,     0,   175,   175,     0,   382,     0,     0,     0,
       0,   394,     0,     0,     0,     0,     0,     0,     0,   176,
     176,   176,     0,     0,     0,   209,   209,   209,   209,   -29,
     207,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,
     174,     0,     0,   -29,     0,     0,     0,     0,   -29,   430,
       0,   430,     0,   176,     0,     0,     0,   449,     0,   449,
       0,     0,   174,     0,     0,   403,     0,   -32,   -32,   -32,
     -32,   -32,   -32,   -32,   -32,     0,   174,   174,   174,   174,
     174,   174,   174,   174,   -32,   175,     0,     0,     0,   175,
       0,     0,     0,     0,     0,   174,     0,     0,   175,     0,
     175,     0,     0,     0,     0,     0,     0,   207,   207,   207,
     207,   207,   207,   207,   207,   -70,   -70,   -70,     0,     0,
       0,   231,   241,     0,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,     0,
       0,   -19,   -19,   -70,     0,     0,     0,   174,   174,   174,
       0,   176,   176,   207,     0,   382,     0,   394,   -31,     0,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,   430,
     449,     0,   -31,     0,   174,   174,   174,   -31,     0,     0,
     207,    31,     0,    32,     5,     6,     0,    33,    34,    35,
      36,     0,     0,     0,    37,    38,    39,     0,    40,    41,
       0,    42,     0,     0,     0,     0,     0,     0,   174,     0,
      43,    44,     0,     0,     0,   -42,     0,     0,    45,     0,
     -25,    46,    47,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,   176,     0,     0,   -22,   176,   -22,   -22,
     -22,     0,   -22,   -22,   -22,   -22,   176,     0,   176,   -22,
     -22,   -22,     0,   -22,   -22,     0,   -22,     0,     0,     0,
       0,     0,     0,     0,     0,   -22,   -22,     0,     0,     0,
     -22,     0,     0,   -22,     0,   -22,   -22,   -22,   -22,   -22,
     -28,     0,   -28,   -28,   -28,     0,   -28,   -28,   -28,   -28,
       0,     0,     0,   -28,   -28,   -28,     0,   -28,   -28,     0,
     -28,     0,     0,     0,     0,     0,   174,   174,     0,   -28,
     -28,     0,     0,     0,   -28,     0,     0,   -28,     0,   -28,
     -28,   -28,   -28,   -28,   -23,     0,   -23,   -23,   -23,     0,
     -23,   -23,   -23,   -23,     0,     0,     0,   -23,   -23,   -23,
       0,   -23,   -23,     0,   -23,     0,     0,     0,     0,     0,
       0,     0,     0,   -23,   -23,     0,     0,     0,   -23,     0,
       0,   -23,     0,   -23,   -23,   -23,   -23,   -23,    86,    87,
      88,    89,    90,    91,    92,    93,   -20,     0,   -20,   -20,
     -20,   136,   -20,   -20,   -20,   -20,     0,     0,   174,   -20,
     -20,   -20,   174,   -20,   -20,     0,   -20,     0,     0,     0,
       0,   174,     0,   174,     0,   -20,   -20,     0,     0,     0,
     -20,     0,     0,   -20,     0,   -20,   -20,   -20,   -20,   -20,
     -21,     0,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,
       0,     0,     0,   -21,   -21,   -21,     0,   -21,   -21,     0,
     -21,     0,     0,     0,     0,     0,     0,     0,     0,   -21,
     -21,     0,     0,     0,   -21,     0,     0,   -21,     0,   -21,
     -21,   -21,   -21,   -21,   -27,     0,   -27,   -27,   -27,     0,
     -27,   -27,   -27,   -27,     0,     0,     0,   -27,   -27,   -27,
       0,   -27,   -27,     0,   -27,     0,     0,     0,     0,     0,
       0,     0,     0,   -27,   -27,     0,     0,     0,   -27,     0,
       0,   -27,     0,   -27,   -27,   -27,   -27,   -27,   -30,     0,
     -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,     0,     0,
       0,   -30,   -30,   -30,     0,   -30,   -30,     0,   -30,     0,
       0,     0,     0,     0,     0,     0,     0,   -30,   -30,     0,
       0,     0,   -30,     0,     0,   -30,     0,   -30,   -30,   -30,
     -30,   -30,   -29,     0,   -29,   -29,   -29,     0,   -29,   -29,
     -29,   -29,     0,     0,     0,   -29,   -29,   -29,     0,   -29,
     -29,     0,   -29,     0,     0,     0,     0,     0,     0,     0,
       0,   -29,   -29,     0,     0,     0,   -29,     0,     0,   -29,
       0,   -29,   -29,   -29,   -29,   -29,   -31,     0,   -31,   -31,
     -31,     0,   -31,   -31,   -31,   -31,     0,     0,     0,   -31,
     -31,   -31,     0,   -31,   -31,     0,   -31,     0,     0,     0,
       0,     0,     0,     0,     0,   -31,   -31,     0,     0,     0,
     -31,     0,     0,   -31,     0,   -31,   -31,   -31,   -31,   -31,
     -80,     0,   -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,
       0,     0,     0,   -80,   -80,   -80,     0,   -80,   -80,     0,
     -80,     0,     0,     0,     0,     0,     0,     0,     0,   -80,
     -80,     0,     0,     0,   -80,     0,     0,   -80,     0,   -80,
     -80,   -80,   -80,   -80,    31,     0,    32,     5,     6,     0,
      33,    34,    35,    36,     0,     0,     0,    37,    38,    39,
       0,    40,    41,     0,    42,     0,     0,     0,     0,     0,
       0,     0,     0,    43,    44,     0,     0,     0,   -42,     0,
       0,    45,     0,   -25,   139,    47,    48,    49,   -72,     0,
     -72,   -72,   -72,     0,   -72,   -72,   -72,   -72,     0,     0,
       0,   -72,   -72,   -72,     0,   -72,   -72,     0,   -72,     0,
       0,     0,     0,     0,     0,     0,     0,   -72,   -72,     0,
       0,     0,   -72,     0,     0,   -72,     0,   -72,   -72,   -72,
     -72,   -72,   -26,     0,   -26,   -26,   -26,     0,   -26,   -26,
     -26,   -26,     0,     0,     0,   -26,   -26,   -26,     0,   -26,
     -26,     0,   -26,     0,     0,     0,     0,     0,     0,     0,
       0,   -26,   -26,     0,     0,     0,   -26,     0,     0,   -26,
       0,   -26,   -26,   -26,   -26,   -26,   -38,     0,   -38,   -38,
     -38,     0,   -38,   -38,   -38,   -38,     0,     0,     0,   -38,
     -38,   -38,     0,   -38,   -38,     0,   -38,     0,     0,     0,
       0,     0,     0,     0,     0,   -38,   -38,     0,     0,     0,
     -38,     0,     0,   -38,     0,   -38,   -38,   -38,   -38,   -38,
      -9,     0,    -9,    -9,    -9,     0,    -9,    -9,    -9,    -9,
       0,     0,     0,    -9,    -9,    -9,     0,    -9,    -9,     0,
      -9,     0,     0,     0,     0,     0,     0,     0,     0,    -9,
      -9,     0,     0,     0,    -9,     0,     0,    -9,     0,    -9,
      -9,    -9,    -9,    -9,    31,     0,    32,     5,     6,     0,
      33,    34,    35,    36,     0,     0,     0,    37,    38,    39,
       0,    40,    41,     0,    42,     0,     0,     0,     0,     0,
       0,     0,     0,    43,    44,     0,     0,     0,   -42,     0,
       0,    45,     0,   -25,   367,    47,    48,    49,    31,     0,
      32,     5,     6,     0,    33,    34,    35,    36,     0,     0,
       0,    37,    38,    39,     0,    40,    41,     0,    42,     0,
       0,     0,     0,     0,     0,     0,     0,    43,    44,     0,
       0,     0,   -42,     0,     0,    45,     0,   -25,   370,    47,
      48,    49,    31,     0,    32,     5,     6,     0,    33,    34,
      35,    36,     0,     0,     0,    37,    38,    39,     0,    40,
      41,     0,    42,     0,     0,     0,     0,     0,     0,     0,
       0,    43,    44,     0,     0,     0,   -42,     0,     0,    45,
       0,   -25,   463,    47,    48,    49,    31,     0,    32,     5,
       6,     0,    33,    34,    35,    36,     0,     0,     0,    37,
      38,    39,     0,    40,    41,     0,    42,     0,     0,     0,
       0,     0,     0,     0,     0,    43,    44,     0,     0,     0,
     -42,     0,     0,    45,     0,   -25,   472,    47,    48,    49,
      31,     0,    32,     5,     6,     0,    33,    34,    35,    36,
       0,     0,     0,    37,    38,    39,     0,    40,    41,     0,
      42,     0,     0,     0,     0,     0,     0,     0,     0,    43,
      44,     0,     0,     0,   -42,     0,     0,    45,     0,   -25,
     498,    47,    48,    49,    31,     0,    32,     5,     6,     0,
      33,    34,    35,    36,     0,     0,     0,    37,    38,    39,
       0,    40,    41,     0,    42,     0,     0,     0,     0,     0,
       0,     0,     0,    43,    44,     0,     0,     0,   -42,     0,
       0,    45,     0,   -25,   502,    47,    48,    49,    31,     0,
      32,     5,     6,     0,    33,    34,    35,    36,     0,     0,
       0,    37,    38,    39,     0,    40,    41,     0,    42,     0,
       0,     0,     0,     0,     0,     0,     0,    43,    44,     0,
       0,     0,   -42,     0,     0,    45,     0,   -25,     0,    47,
      48,    49,   487,     0,    32,     5,     6,     0,    33,    34,
      35,    36,     0,     0,     0,    37,    38,    39,     0,   222,
      41,     0,   223,     0,     0,     0,     0,     0,     0,     0,
       0,    43,    44,     0,     0,     0,   -42,     0,     0,    45,
       0,   -25,     0,    47,    48,    49,   491,     0,    32,     5,
       6,     0,    33,    34,    35,    36,     0,     0,     0,    37,
      38,    39,     0,   232,    41,     0,   233,     0,     0,     0,
       0,     0,     0,     0,     0,    43,    44,     0,     0,     0,
     -42,     0,     0,    45,     0,   -25,     0,    47,    48,    49,
     511,     0,    32,     5,     6,     0,    33,    34,    35,    36,
       0,     0,     0,    37,    38,    39,     0,   371,    41,     0,
     372,     0,     0,     0,     0,     0,     0,     0,     0,    43,
      44,     0,     0,     0,   -42,     0,     0,    45,     0,   -25,
       0,    47,    48,    49,   516,     0,    32,     5,     6,     0,
      33,    34,    35,    36,     0,     0,     0,    37,    38,    39,
       0,   383,    41,     0,   384,     0,     0,     0,     0,     0,
       0,     0,     0,    43,    44,     0,     0,     0,   -42,     0,
       0,    45,     0,   -25,     0,    47,    48,    49,   523,     0,
      32,     5,     6,     0,    33,    34,    35,    36,     0,     0,
       0,    37,    38,    39,     0,   419,    41,     0,   420,     0,
       0,     0,     0,     0,     0,     0,     0,    43,    44,     0,
       0,     0,   -42,     0,     0,    45,     0,   -25,     0,    47,
      48,    49,   527,     0,    32,     5,     6,     0,    33,    34,
      35,    36,     0,     0,     0,    37,    38,    39,     0,   438,
      41,     0,   439,     0,     0,     0,     0,     0,     0,     0,
       0,    43,    44,     0,     0,     0,   -42,     0,     0,    45,
       0,   -25,     0,    47,    48,    49,    32,     5,     6,     0,
      33,    34,    35,    36,     0,     0,     0,    37,    38,    39,
       0,   232,    41,     0,   233,     0,     0,     0,     0,     0,
       0,     0,     0,    43,    44,     0,     0,     0,   -42,     0,
       0,    45,     0,   -25,     0,    47,    48,    49,    32,     5,
       6,     0,    33,    34,    35,    36,     0,     0,     0,    37,
      38,    39,     0,   371,    41,     0,   372,     0,     0,     0,
       0,     0,     0,     0,     0,    43,    44,     0,     0,     0,
     -42,     0,     0,    45,     0,   -25,     0,    47,    48,    49,
      32,     5,     6,     0,    33,    34,    35,    36,     0,     0,
       0,    37,    38,    39,     0,   383,    41,     0,   384,     0,
       0,     0,     0,     0,     0,     0,     0,    43,    44,     0,
       0,     0,   -42,     0,     0,    45,     0,   -25,     0,    47,
      48,    49,    32,     5,     6,     0,    33,    34,    35,    36,
       0,     0,     0,    37,    38,    39,     0,   419,    41,     0,
     420,     0,     0,     0,     0,     0,     0,     0,     0,    43,
      44,     0,     0,     0,   -42,     0,     0,    45,     0,   -25,
       0,    47,    48,    49,    32,     5,     6,     0,    33,    34,
      35,    36,     0,     0,     0,    37,    38,    39,     0,   438,
      41,     0,   439,     0,     0,     0,     0,     0,     0,     0,
       0,    43,    44,     0,     0,     0,   -42,     0,     0,    45,
       0,   -25,   191,    47,    48,    49,   192,   193,   194,   195,
       0,     0,     0,   196,   197,   198,     0,     0,   199,     0,
     158,     0,     0,     0,   159,   160,   161,   162,     0,   200,
     201,   163,   164,   165,     0,     0,   166,   202,   335,     0,
       0,   203,   204,   205,     0,     0,     0,   167,   168,     0,
       0,     0,     0,     0,     0,   169,     0,     0,   191,   170,
     171,   172,   192,   193,   194,   195,     0,     0,     0,   196,
     197,   198,     0,   -80,   199,   -80,   -80,   -80,   -80,   -80,
     -80,   -80,   -80,     0,     0,   200,   201,   -80,     0,   -86,
     -86,   -86,   -80,   202,     0,     0,     0,   203,   204,   205,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -89,   -89,   -89,     0,   -86,     0,     0,
       0,     0,     0,     0,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -57,   -57,   -57,
       0,   -89,     0,     0,     0,     0,     0,     0,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   293,   294,
     -57,   -60,   -60,   -60,     0,   -57,     0,     0,     0,     0,
       0,     0,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -64,   -64,   -64,     0,   -60,
       0,     0,     0,     0,     0,     0,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -63,
     -63,   -63,     0,   -64,     0,     0,     0,     0,     0,     0,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -67,   -67,   -67,     0,   -63,     0,     0,
       0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -69,   -69,   -69,
       0,   -67,     0,     0,     0,     0,     0,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -69,   -68,   -68,   -68,     0,   -69,     0,     0,     0,     0,
       0,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,   -66,   -66,   -66,     0,   -68,
       0,     0,     0,     0,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -65,
     -65,   -65,     0,   -66,     0,     0,     0,     0,     0,     0,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -71,   -71,   -71,     0,   -65,     0,     0,
       0,     0,     0,     0,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -74,   -74,   -74,
       0,   -71,     0,     0,     0,     0,     0,     0,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -58,   -58,   -58,     0,   -74,     0,     0,     0,     0,
       0,     0,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,
     -58,   -58,   293,   294,   -58,   -59,   -59,   -59,     0,   -58,
       0,     0,     0,     0,     0,     0,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   293,   294,   -59,   -61,
     -61,   -61,     0,   -59,     0,     0,     0,     0,     0,     0,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -62,   -62,   -62,     0,   -61,     0,     0,
       0,     0,     0,     0,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -75,   -75,   -75,
       0,   -62,     0,     0,     0,     0,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -75,   -76,   -76,   -76,     0,   -75,     0,     0,     0,     0,
       0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,   -77,   -77,   -77,     0,   -76,
       0,     0,     0,     0,     0,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -73,
     -73,   -73,     0,   -77,     0,     0,     0,     0,     0,     0,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -87,   -87,   -87,     0,   -73,     0,     0,
       0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -86,   -86,   -86,     0,
       0,   -87,     0,     0,     0,     0,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -89,
     -89,   -89,     0,     0,   -86,     0,     0,     0,     0,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -57,   -57,   -57,     0,     0,   -89,     0,     0,
       0,     0,     0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   266,   267,   -60,   -60,   -60,     0,     0,
     -57,     0,     0,     0,     0,     0,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -64,   -64,
     -64,     0,     0,   -60,     0,     0,     0,     0,     0,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -63,   -63,   -63,     0,     0,   -64,     0,     0,     0,
       0,     0,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -67,   -67,   -67,     0,     0,   -63,
       0,     0,     0,     0,     0,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,   -67,   -67,   -69,   -69,   -69,
       0,     0,   -67,     0,     0,     0,     0,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
     -68,   -68,   -68,     0,     0,   -69,     0,     0,     0,     0,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -66,   -66,   -66,     0,     0,   -68,     0,
       0,     0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -65,   -65,   -65,     0,
       0,   -66,     0,     0,     0,     0,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -71,
     -71,   -71,     0,     0,   -65,     0,     0,     0,     0,     0,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -74,   -74,   -74,     0,     0,   -71,     0,     0,
       0,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -58,   -58,   -58,     0,     0,
     -74,     0,     0,     0,     0,     0,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   266,   267,   -59,   -59,
     -59,     0,     0,   -58,     0,     0,     0,     0,     0,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   266,
     267,   -61,   -61,   -61,     0,     0,   -59,     0,     0,     0,
       0,     0,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -62,   -62,   -62,     0,     0,   -61,
       0,     0,     0,     0,     0,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -75,   -75,   -75,
       0,     0,   -62,     0,     0,     0,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
     -76,   -76,   -76,     0,     0,   -75,     0,     0,     0,     0,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -77,   -77,   -77,     0,     0,   -76,     0,
       0,     0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -73,   -73,   -73,     0,
       0,   -77,     0,     0,     0,     0,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   288,
     289,   290,     0,     0,   -73,     0,     0,     0,     0,     0,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,   -55,   288,   289,
     290,     0,   -55,     0,     0,     0,     0,   -55,     0,   -54,
     -54,   -54,   -54,   -54,   -54,   -54,   -54,   288,   289,   290,
       0,   -54,     0,     0,     0,     0,   -54,     0,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -70,   -70,   -70,     0,
     -53,     0,     0,     0,     0,   -53,     0,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,
     -70,     0,   -19,   -19,   -70,   -70,   -70,     0,     0,     0,
       0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,     0,
       0,   -19,   -88,   -88,   -88,     0,     0,     0,     0,     0,
       0,     0,     0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,     0,   -88,   -87,   -87,   -87,
       0,     0,     0,     0,     0,     0,     0,     0,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
       0,   -87,   -86,   -86,   -86,     0,     0,     0,     0,     0,
       0,     0,     0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,     0,   -86,   -89,   -89,   -89,
       0,     0,     0,     0,     0,     0,     0,     0,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
       0,   -89,   -57,   -57,   -57,     0,     0,     0,     0,     0,
       0,     0,     0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,    99,   100,     0,   -57,   -60,   -60,   -60,
       0,     0,     0,     0,     0,     0,     0,     0,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
       0,   -60,   -64,   -64,   -64,     0,     0,     0,     0,     0,
       0,     0,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,     0,   -64,   -63,   -63,   -63,
       0,     0,     0,     0,     0,     0,     0,     0,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
       0,   -63,   -67,   -67,   -67,     0,     0,     0,     0,     0,
       0,     0,     0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -67,     0,   -67,   -69,   -69,   -69,
       0,     0,     0,     0,     0,     0,     0,     0,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,
       0,   -69,   -68,   -68,   -68,     0,     0,     0,     0,     0,
       0,     0,     0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,   -68,   -68,     0,   -68,   -66,   -66,   -66,
       0,     0,     0,     0,     0,     0,     0,     0,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
       0,   -66,   -65,   -65,   -65,     0,     0,     0,     0,     0,
       0,     0,     0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,     0,   -65,   -71,   -71,   -71,
       0,     0,     0,     0,     0,     0,     0,     0,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
       0,   -71,   -74,   -74,   -74,     0,     0,     0,     0,     0,
       0,     0,     0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,     0,   -74,   -58,   -58,   -58,
       0,     0,     0,     0,     0,     0,     0,     0,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,    99,   100,
       0,   -58,   -59,   -59,   -59,     0,     0,     0,     0,     0,
       0,     0,     0,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,    99,   100,     0,   -59,   -61,   -61,   -61,
       0,     0,     0,     0,     0,     0,     0,     0,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
       0,   -61,   -62,   -62,   -62,     0,     0,     0,     0,     0,
       0,     0,     0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -62,     0,   -62,   -75,   -75,   -75,
       0,     0,     0,     0,     0,     0,     0,     0,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,
       0,   -75,   -76,   -76,   -76,     0,     0,     0,     0,     0,
       0,     0,     0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,   -76,   -76,     0,   -76,   -77,   -77,   -77,
       0,     0,     0,     0,     0,     0,     0,     0,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
       0,   -77,   -73,   -73,   -73,     0,     0,     0,     0,     0,
       0,     0,     0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,     0,   -73,    94,    95,    96,
       0,     0,     0,     0,     0,     0,     0,     0,   -52,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,    94,    95,    96,     0,
       0,   -52,     0,     0,     0,     0,     0,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,    94,    95,    96,     0,     0,
     -55,     0,     0,     0,     0,     0,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,    94,    95,    96,     0,     0,   -54,
       0,     0,     0,     0,     0,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,     0,     0,     0,     0,    -9,   -53,    -9,
      -9,    -9,    -9,    -9,    -9,    -9,    -9,     0,     0,     0,
       0,    -9,     0,     0,     0,   -72,    -9,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   -72,     0,     0,     0,     0,   -72,
       0,     0,     0,   -26,   -72,   -26,   -26,   -26,   -26,   -26,
     -26,   -26,   -26,     0,     0,     0,     0,   -26,     0,     0,
       0,   -22,   -26,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,     0,     0,     0,     0,   -22,     0,     0,     0,   -38,
     -22,   -38,   -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,
       0,     0,     0,   -38,     0,     0,     0,   -20,   -38,   -20,
     -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,     0,     0,
       0,   -20,     0,     0,     0,   -21,   -20,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,   -21,     0,     0,     0,     0,   -21,
       0,     0,     0,   -27,   -21,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,     0,     0,     0,     0,     0,     0,     0,
       0,   -30,   -27,   -30,   -30,   -30,   -30,   -30,   -30,   -30,
     -30,     0,     0,     0,     0,     0,     0,     0,     0,   -29,
     -30,   -29,   -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,
       0,     0,     0,     0,     0,     0,     0,   -31,   -29,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,     0,
       0,     0,     0,     0,     0,   -80,   -31,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,     0,
       0,     0,     0,    -9,   -80,    -9,    -9,    -9,    -9,    -9,
      -9,    -9,    -9,     0,     0,     0,     0,     0,     0,     0,
       0,   -72,    -9,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,     0,     0,     0,     0,     0,     0,     0,     0,   -26,
     -72,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,
       0,     0,     0,     0,     0,     0,     0,   -22,   -26,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,     0,
       0,     0,     0,     0,     0,   -38,   -22,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,     0,
       0,     0,     0,   -20,   -38,   -20,   -20,   -20,   -20,   -20,
     -20,   -20,   -20,     0,     0,     0,     0,     0,     0,     0,
       0,   -21,   -20,   -21,   -21,   -21,   -21,   -21,   -21,   -21,
     -21,   -50,   -50,   216,   217,   218,   219,   220,   221,     0,
     -21,     0,     0,   -50,     0,     0,     0,     0,   -50,   -51,
     -51,   216,   217,   218,   219,   220,   221,     0,     0,     0,
       0,   -51,     0,     0,     0,     0,   -51,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,     0,     0,     0,     0,   -45,
       0,     0,     0,     0,   -45,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,     0,     0,     0,     0,   -48,     0,     0,
       0,     0,   -48,   -46,   -46,   216,   217,   -46,   219,   220,
     -46,     0,     0,     0,     0,   -46,     0,     0,     0,     0,
     -46,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,
       0,     0,     0,   -44,     0,     0,     0,     0,   -44,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,     0,     0,
       0,   -49,     0,     0,     0,     0,   -49,   -47,   -47,   216,
     217,   -47,   219,   220,   -47,     0,     0,     0,     0,   -47,
       0,     0,     0,     0,   -47,   -28,   -28,   -28,   -28,   -28,
     -28,   -28,   -28,     0,     0,     0,     0,   -28,     0,     0,
       0,     0,   -28,   -37,   -37,   -37,   -37,   -37,   -37,   -37,
     -37,     0,     0,     0,     0,   -37,     0,     0,     0,     0,
     -37,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,
       0,     0,     0,   -35,     0,     0,     0,     0,   -35,   -27,
     -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,     0,     0,
       0,   -27,     0,     0,     0,     0,   -27,   -30,   -30,   -30,
     -30,   -30,   -30,   -30,   -30,     0,     0,     0,     0,   -30,
       0,     0,     0,     0,   -30,   -29,   -29,   -29,   -29,   -29,
     -29,   -29,   -29,     0,     0,     0,     0,   -29,     0,     0,
       0,     0,   -29,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,     0,     0,     0,     0,   -36,     0,     0,     0,     0,
     -36,   -34,   -34,   -34,   -34,   -34,   -34,   -34,   -34,     0,
       0,     0,     0,   -34,     0,     0,     0,     0,   -34,   -31,
     -31,   -31,   -31,   -31,   -31,   -31,   -31,     0,     0,     0,
       0,   -31,     0,     0,     0,     0,   -31,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,   -80,
       0,     0,     0,     0,   -80,    -9,    -9,    -9,    -9,    -9,
      -9,    -9,    -9,     0,     0,     0,     0,    -9,     0,     0,
       0,     0,    -9,   -72,   -72,   -72,   -72,   -72,   -72,   -72,
     -72,     0,     0,     0,     0,   -72,     0,     0,     0,     0,
     -72,   -26,   -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,
       0,     0,     0,   -26,     0,     0,     0,     0,   -26,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,     0,
       0,   -22,     0,     0,     0,     0,   -22,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,   -38,
       0,     0,     0,     0,   -38,   -20,   -20,   -20,   -20,   -20,
     -20,   -20,   -20,     0,     0,     0,     0,   -20,     0,     0,
       0,     0,   -20,   -21,   -21,   -21,   -21,   -21,   -21,   -21,
     -21,     0,     0,     0,     0,   -21,     0,     0,     0,     0,
     -21,   183,   184,   185,   186,   187,   188,   189,   190,   183,
     184,   185,   186,   187,   188,   189,   190,     0,   131,     0,
       0,     0,     0,     0,     0,     0,   132,   183,   184,   185,
     186,   187,   188,   189,   190,   -43,   -43,   -43,   -43,   -43,
     -43,   -43,   -43,     0,   133,     0,     0,     0,     0,     0,
       0,     0,   -43,   183,   184,   185,   186,   187,   188,   189,
     190,   183,   184,   185,   186,   187,   188,   189,   190,     0,
     -41,     0,     0,     0,     0,     0,     0,     0,   320,   -50,
     -50,   185,   186,   187,   188,   189,   190,   -51,   -51,   185,
     186,   187,   188,   189,   190,     0,   -50,     0,     0,     0,
       0,     0,     0,     0,   -51,   -45,   -45,   -45,   -45,   -45,
     -45,   -45,   -45,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,     0,   -45,     0,     0,     0,     0,     0,     0,     0,
     -48,   -46,   -46,   185,   186,   -46,   188,   189,   -46,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,   -46,     0,
       0,     0,     0,     0,     0,     0,   -44,   -49,   -49,   -49,
     -49,   -49,   -49,   -49,   -49,   -47,   -47,   185,   186,   -47,
     188,   189,   -47,     0,   -49,     0,     0,     0,     0,     0,
       0,     0,   -47,   183,   184,   185,   186,   187,   188,   189,
     190,   183,   184,   185,   186,   187,   188,   189,   190,     0,
     334,     0,     0,     0,     0,     0,     0,     0,   356,   183,
     184,   185,   186,   187,   188,   189,   190,   183,   184,   185,
     186,   187,   188,   189,   190,     0,   357,     0,     0,     0,
       0,     0,     0,     0,   358,   183,   184,   185,   186,   187,
     188,   189,   190,   183,   184,   185,   186,   187,   188,   189,
     190,     0,   361,     0,     0,     0,     0,     0,     0,     0,
     362,   183,   184,   185,   186,   187,   188,   189,   190,   183,
     184,   185,   186,   187,   188,   189,   190,     0,   363,     0,
       0,     0,     0,     0,     0,     0,   -39,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,     0,   -28,     0,     0,     0,     0,     0,
       0,     0,   -37,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,
     -35,     0,     0,     0,     0,     0,     0,     0,   -27,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,   -29,   -29,   -29,
     -29,   -29,   -29,   -29,   -29,     0,   -30,     0,     0,     0,
       0,     0,     0,     0,   -29,   -36,   -36,   -36,   -36,   -36,
     -36,   -36,   -36,   -34,   -34,   -34,   -34,   -34,   -34,   -34,
     -34,     0,   -36,     0,     0,     0,     0,     0,     0,     0,
     -34,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -31,   -80,
     -80,   -80,   -80,   -80,   -80,   -80,   -80,     0,   -31,     0,
       0,     0,     0,     0,     0,     0,   -80,    -9,    -9,    -9,
      -9,    -9,    -9,    -9,    -9,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,    -9,     0,     0,     0,     0,     0,
       0,     0,   -72,   -26,   -26,   -26,   -26,   -26,   -26,   -26,
     -26,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,
     -26,     0,     0,     0,     0,     0,     0,     0,   -22,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,   -20,   -20,   -20,
     -20,   -20,   -20,   -20,   -20,     0,   -38,     0,     0,     0,
       0,     0,     0,     0,   -20,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,     0,     0,     0,     0,     0,     0,     0,
       0,   146,   -21,   -32,   -32,   -32,   -32,   -32,   -32,   -32,
     -32,     0,     0,     0,     0,   -28,   -32,   -28,   -28,   -28,
     -28,   -28,   -28,   -28,   -28,     0,     0,     0,     0,   -27,
     -28,   -27,   -27,   -27,   -27,   -27,   -27,   -27,   -27,     0,
       0,     0,     0,   -30,   -27,   -30,   -30,   -30,   -30,   -30,
     -30,   -30,   -30,     0,     0,     0,     0,   -29,   -30,   -29,
     -29,   -29,   -29,   -29,   -29,   -29,   -29,     0,     0,     0,
       0,   -31,   -29,   -31,   -31,   -31,   -31,   -31,   -31,   -31,
     -31,     0,     0,     0,     0,   -80,   -31,   -80,   -80,   -80,
     -80,   -80,   -80,   -80,   -80,     0,     0,     0,     0,    -9,
     -80,    -9,    -9,    -9,    -9,    -9,    -9,    -9,    -9,     0,
       0,     0,     0,   -72,    -9,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,   -26,   -72,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,     0,     0,
       0,   -22,   -26,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,     0,     0,     0,     0,   -38,   -22,   -38,   -38,   -38,
     -38,   -38,   -38,   -38,   -38,     0,     0,     0,     0,   -20,
     -38,   -20,   -20,   -20,   -20,   -20,   -20,   -20,   -20,     0,
       0,     0,     0,   -21,   -20,   -21,   -21,   -21,   -21,   -21,
     -21,   -21,   -21,     0,     0,     0,     0,     0,   -21,   -50,
     -50,    88,    89,    90,    91,    92,    93,     0,     0,     0,
       0,     0,   -50,   -51,   -51,    88,    89,    90,    91,    92,
      93,     0,     0,     0,     0,     0,   -51,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,     0,     0,     0,     0,     0,
     -45,   -48,   -48,   -48,   -48,   -48,   -48,   -48,   -48,     0,
       0,     0,     0,     0,   -48,   -46,   -46,    88,    89,   -46,
      91,    92,   -46,     0,     0,     0,     0,     0,   -46,   -44,
     -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,     0,     0,
       0,     0,   -44,   -49,   -49,   -49,   -49,   -49,   -49,   -49,
     -49,     0,     0,     0,     0,     0,   -49,   -47,   -47,    88,
      89,   -47,    91,    92,   -47,     0,     0,     0,     0,     0,
     -47,    86,    87,    88,    89,    90,    91,    92,    93,     0,
       0,     0,     0,     0,   -39,   -37,   -37,   -37,   -37,   -37,
     -37,   -37,   -37,     0,     0,     0,     0,     0,   -37,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,     0,     0,     0,
       0,     0,   -35,   -36,   -36,   -36,   -36,   -36,   -36,   -36,
     -36,     0,     0,     0,     0,     0,   -36,   -34,   -34,   -34,
     -34,   -34,   -34,   -34,   -34,     0,     0,     0,     0,     0,
     -34,   -28,   -28,   -28,   -28,   -28,   -28,   -28,   -28,     0,
       0,     0,     0,     0,   -28,   -27,   -27,   -27,   -27,   -27,
     -27,   -27,   -27,     0,     0,     0,     0,     0,   -27,   -30,
     -30,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,     0,
       0,     0,   -30,   -29,   -29,   -29,   -29,   -29,   -29,   -29,
     -29,     0,     0,     0,     0,     0,   -29,    86,    87,    88,
      89,    90,    91,    92,    93,     0,     0,     0,     0,     0,
     344,    86,    87,    88,    89,    90,    91,    92,    93,     0,
       0,     0,     0,     0,   349,   -31,   -31,   -31,   -31,   -31,
     -31,   -31,   -31,     0,     0,     0,     0,     0,   -31,    86,
      87,    88,    89,    90,    91,    92,    93,     0,     0,     0,
       0,     0,   366,   -80,   -80,   -80,   -80,   -80,   -80,   -80,
     -80,     0,     0,     0,     0,     0,   -80,    -9,    -9,    -9,
      -9,    -9,    -9,    -9,    -9,     0,     0,     0,     0,     0,
      -9,    86,    87,    88,    89,    90,    91,    92,    93,     0,
       0,     0,     0,     0,   369,   -72,   -72,   -72,   -72,   -72,
     -72,   -72,   -72,     0,     0,     0,     0,     0,   -72,   -26,
     -26,   -26,   -26,   -26,   -26,   -26,   -26,     0,     0,     0,
       0,     0,   -26,    86,    87,    88,    89,    90,    91,    92,
      93,     0,     0,     0,     0,     0,   415,    86,    87,    88,
      89,    90,    91,    92,    93,     0,     0,     0,     0,     0,
     434,    86,    87,    88,    89,    90,    91,    92,    93,     0,
       0,     0,     0,     0,   456,    86,    87,    88,    89,    90,
      91,    92,    93,     0,     0,     0,     0,     0,   465,    86,
      87,    88,    89,    90,    91,    92,    93,     0,     0,     0,
       0,     0,   476,    86,    87,    88,    89,    90,    91,    92,
      93,     0,     0,     0,     0,     0,   482,    86,    87,    88,
      89,    90,    91,    92,    93,     0,     0,     0,     0,     0,
     497,    86,    87,    88,    89,    90,    91,    92,    93,     0,
       0,     0,     0,     0,   501,   -22,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,     0,     0,     0,     0,     0,   -22,   -38,
     -38,   -38,   -38,   -38,   -38,   -38,   -38,     0,     0,     0,
       0,     0,   -38,   -20,   -20,   -20,   -20,   -20,   -20,   -20,
     -20,     0,     0,     0,     0,     0,   -20,   -21,   -21,   -21,
     -21,   -21,   -21,   -21,   -21,     0,     0,     0,     0,     0,
     -21
};

static const yytype_int16 yycheck[] =
{
       2,   260,     2,     2,    37,    38,     0,    51,     4,     5,
       0,     1,     4,     5,     4,     5,    34,    84,    20,     3,
      20,    39,    34,     3,    26,    34,    26,    39,   287,    11,
      39,     3,     1,     3,     3,     4,     5,    34,     7,     8,
       9,    10,    39,    39,    35,    14,    15,    16,    30,    18,
      19,    38,    21,     0,     1,     0,     1,     4,     5,     4,
       5,    30,    31,    45,     3,     3,    35,     6,     6,    38,
      38,    40,    41,    42,    43,    44,     3,    37,    38,    34,
       7,     8,     9,    10,    39,    34,    39,    14,    15,    16,
      39,    73,    74,    75,   135,    77,    78,    34,    40,    35,
      34,    83,    39,    30,    31,    39,   147,    35,     0,     1,
      38,    38,     4,     5,    38,    42,    43,    44,     0,     1,
      38,    34,     4,     5,    35,   153,    39,    38,    37,    38,
      38,   133,   114,    20,   133,    22,    23,    24,    25,    26,
      27,    28,    29,   145,   146,    35,   145,   146,    38,    37,
      38,   133,    39,   135,    38,   137,     0,     1,    37,    38,
       4,     5,    40,   145,   146,   147,    37,    38,    37,    38,
      35,   153,    38,   155,   156,    37,    38,     3,   160,   161,
     162,   225,    11,    12,    13,   167,   168,   169,    37,    38,
      35,   235,    39,    22,    23,    24,    25,    26,    27,    28,
      29,   183,   184,   185,   186,   187,   188,   189,   190,    39,
      39,   193,   194,   195,    35,    35,     3,     3,   200,   201,
     202,     0,     1,     0,     1,     4,     5,     4,     5,    30,
      35,    38,   214,   215,   216,   217,   218,   219,   220,   221,
     307,    38,    11,    12,    13,    38,   313,     0,     1,    38,
      38,     4,     5,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,   304,    39,    34,    38,    38,    38,   310,
      39,   253,   254,   255,   256,    11,    12,    13,   260,   261,
     262,   263,   264,   265,   266,   267,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,   280,   281,
     282,   283,    38,    39,    38,   287,   288,   289,   290,   291,
     292,   293,   294,   114,    22,    23,    24,    25,    26,    27,
      28,    29,   304,    38,   365,   133,    34,   368,   310,    38,
     374,    39,   133,   315,    40,   402,    35,   145,   146,    40,
      38,    35,   386,   410,   145,   146,   147,    39,    35,    35,
      35,    35,   153,    35,    26,    35,   358,   398,    39,   358,
      39,   363,    38,    40,   363,   406,   348,    35,    38,    40,
      35,   353,   413,   414,    35,    35,   358,    35,   422,    35,
      35,   363,    39,   365,    38,    35,   368,    40,    35,    38,
      35,    35,    40,    39,   461,    35,    35,   441,    35,   401,
      35,   403,   401,   470,   403,    35,    39,   409,    35,   411,
     409,    39,   411,    35,   455,    39,   398,   458,    39,   401,
      -1,   403,    -1,   464,   406,    -1,   467,   409,    -1,   411,
      -1,   413,   414,    20,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,   473,   474,    34,    -1,   431,
      -1,    -1,    39,    -1,   495,   496,    -1,    -1,   499,   500,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   508,   450,   510,
      -1,   473,   474,   455,   473,   474,   458,    -1,    -1,   507,
      -1,   509,   464,    -1,    -1,   467,    -1,    -1,    -1,    -1,
      -1,   473,   474,   521,   522,    -1,    -1,    -1,   480,    -1,
      -1,    -1,    -1,    -1,   486,   507,    -1,   509,   507,    -1,
     509,    -1,    -1,   495,   496,    -1,    -1,   499,   500,   521,
     522,    -1,   521,   522,    -1,   507,   508,   509,   510,    -1,
      -1,     3,    -1,    -1,    -1,     7,     8,     9,    10,   521,
     522,    -1,    14,    15,    16,    -1,    -1,   348,    -1,    -1,
     358,   133,   353,    -1,    -1,   363,    -1,   358,    30,    31,
      -1,    -1,   363,   145,   146,    -1,    38,    -1,    -1,    -1,
      42,    43,    44,    -1,    -1,    -1,    -1,    34,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    45,    -1,
      -1,    -1,    -1,   401,    -1,   403,    -1,    -1,    -1,    -1,
     401,   409,   403,   411,    -1,    -1,    -1,    -1,   409,    -1,
     411,    -1,   413,   414,    -1,    -1,    -1,    74,    75,    -1,
      77,    -1,    -1,    -1,    -1,    -1,    83,    -1,     3,    -1,
     431,    -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    16,    99,   100,    19,    -1,    -1,    -1,    -1,   450,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,
      35,    -1,    -1,    38,    -1,   473,   474,    42,    43,    44,
      -1,    -1,   473,   474,    -1,    -1,    -1,    -1,    -1,   480,
     137,    -1,    -1,    -1,    -1,   486,    -1,    -1,    -1,    -1,
     147,    -1,    -1,    -1,   495,    -1,    -1,    -1,   499,   507,
      -1,   509,    -1,   160,   161,   162,   507,   508,   509,   510,
     167,   168,   169,   521,   522,    -1,    -1,    -1,    -1,    -1,
     521,   522,    -1,    -1,    -1,    -1,   183,   184,   185,   186,
     187,   188,   189,   190,    -1,    -1,   193,   194,   195,    -1,
      -1,    -1,    -1,   200,   201,   202,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    11,    12,    13,   214,   215,   216,
     217,   218,   219,   220,   221,    22,    23,    24,    25,    26,
      27,    28,    29,    11,    12,    13,   358,    34,    -1,    -1,
      -1,   363,    39,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,   254,   255,   256,
      38,    39,    -1,   260,   261,   262,   263,   264,   265,   266,
     267,    -1,    -1,    -1,    -1,    -1,    -1,    40,    -1,   401,
      -1,   403,    45,    -1,   281,   282,   283,   409,    -1,   411,
     287,   288,   289,   290,   291,   292,   293,   294,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    74,    75,    -1,    77,    -1,    -1,    39,   315,    82,
      83,    -1,    -1,    86,    87,    88,    89,    90,    91,    92,
      93,    20,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      39,   473,   474,    -1,     3,     4,     5,    -1,     7,     8,
       9,    10,    -1,    -1,   133,    14,    15,    16,    -1,    18,
      19,   134,    21,    -1,   137,    -1,   145,   146,    -1,    -1,
      -1,    30,    31,    -1,   147,   507,    35,   509,    -1,    38,
      -1,    40,    -1,    42,    43,    44,    -1,    -1,    -1,   521,
     522,    -1,    -1,    -1,    -1,    -1,   169,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   413,   414,    -1,    -1,
     183,   184,   185,   186,   187,   188,   189,   190,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,   202,
      -1,    -1,    34,    45,    -1,    -1,    -1,    39,    -1,    -1,
      -1,   214,   215,   216,   217,   218,   219,   220,   221,   222,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,   232,
      -1,    -1,    74,    75,    -1,    77,    -1,    39,    -1,    -1,
      20,    83,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,   254,   255,   256,    34,    -1,    -1,   260,   495,    39,
      -1,    -1,   499,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   508,    -1,   510,    11,    12,    13,    -1,   281,   282,
     283,    -1,    -1,    -1,   287,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,   137,    -1,    -1,    -1,    -1,
      -1,    -1,    39,   306,    -1,   147,    -1,    -1,    -1,   312,
      -1,    -1,   315,    -1,    -1,    -1,    -1,    -1,   160,   161,
     162,    -1,    11,    12,    13,   167,   168,   169,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,   183,   184,   185,   186,   187,   188,   189,   190,   358,
      39,   193,   194,   195,   363,    -1,    -1,    -1,   200,   201,
     202,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   371,    -1,
      -1,    -1,   214,   215,   216,   217,   218,   219,   220,   221,
     383,    -1,    20,    -1,    22,    23,    24,    25,    26,    27,
      28,    29,   401,    -1,   403,    -1,    34,   400,    -1,    -1,
     409,    39,   411,    -1,    -1,   408,    -1,    -1,    -1,    -1,
     413,   414,   254,   255,   256,    -1,   419,    -1,   260,   261,
     262,   263,   264,   265,   266,   267,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,   438,    -1,    -1,    34,   281,
     282,   283,    -1,    39,    -1,   287,   288,   289,   290,   291,
     292,   293,   294,    -1,    -1,    -1,    -1,   460,    -1,    -1,
      -1,    45,    -1,    -1,   473,   474,   469,    11,    12,    13,
      -1,    -1,    -1,   315,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      74,    75,   495,    77,    -1,    39,   499,    -1,   507,    83,
     509,    -1,    -1,    -1,    -1,   508,    -1,   510,   133,    -1,
      -1,     3,   521,   522,    -1,     7,     8,     9,    10,    -1,
     145,   146,    14,    15,    16,    -1,    20,    19,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    30,    31,
      -1,    35,    -1,    -1,    -1,   133,    38,    39,    -1,    -1,
      42,    43,    44,   137,    -1,    -1,    -1,   145,   146,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   413,   414,    -1,    -1,    -1,   160,   161,   162,    11,
      12,    13,    -1,   167,   168,   169,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,   183,
     184,   185,   186,   187,   188,   189,   190,    39,    -1,   193,
     194,   195,    -1,    -1,    -1,    -1,   200,   201,   202,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    11,    12,    13,
     214,   215,   216,   217,   218,   219,   220,   221,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    74,    75,   495,    77,    39,    -1,   499,    -1,    -1,
      83,    -1,    -1,    -1,    -1,    -1,   508,    -1,   510,    -1,
     254,   255,   256,    -1,    97,    98,   260,   261,   262,   263,
     264,   265,   266,   267,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    -1,    -1,    34,   281,   282,   283,
      -1,    39,    -1,   287,   288,   289,   290,   291,   292,   293,
     294,    -1,    -1,    -1,   137,    -1,     3,    -1,    -1,    -1,
       7,     8,     9,    10,   147,    -1,    -1,    14,    15,    16,
      -1,   315,    19,   358,    -1,    -1,    -1,    -1,   363,    -1,
      -1,    -1,    -1,    30,    31,    -1,   169,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    42,    43,    44,    -1,    -1,
     183,   184,   185,   186,   187,   188,   189,   190,    -1,    -1,
     358,    -1,    -1,    -1,    -1,   363,   401,    -1,   403,   202,
      -1,    -1,    -1,    -1,   409,    -1,   411,    -1,    11,    12,
      13,   214,   215,   216,   217,   218,   219,   220,   221,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    -1,   401,    -1,   403,    39,    -1,    -1,    -1,
      -1,   409,    -1,   411,    -1,    45,    -1,    -1,    -1,   413,
     414,   254,   255,   256,    -1,    -1,    -1,   260,   261,   262,
     263,   264,   265,    -1,    -1,    -1,    -1,    -1,   473,   474,
      -1,    -1,    -1,    -1,    74,    75,    -1,    77,   281,   282,
     283,    -1,    -1,    83,   287,   288,   289,   290,   291,   292,
      -1,    -1,    -1,    -1,    94,    95,    96,    -1,    -1,    -1,
      -1,    -1,   507,    -1,   509,   473,   474,    -1,    -1,    -1,
      -1,    -1,   315,    -1,    -1,    -1,   521,   522,    -1,    -1,
      -1,     3,    -1,    -1,    -1,     7,     8,     9,    10,    -1,
      -1,   495,    14,    15,    16,   499,    -1,   137,    -1,   507,
      -1,   509,    -1,    -1,   508,    -1,   510,   147,    30,    31,
      -1,    -1,    -1,   521,   522,    -1,    38,    -1,    -1,    -1,
      42,    43,    44,    -1,    11,    12,    13,    -1,    -1,   169,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,   183,   184,   185,   186,   187,   188,   189,
     190,   133,    39,    45,    22,    23,    24,    25,    26,    27,
      28,    29,   202,   145,   146,    -1,    -1,    35,    -1,    -1,
     413,   414,    -1,    -1,   214,   215,   216,   217,   218,   219,
     220,   221,    74,    75,    -1,    77,    -1,    -1,    -1,    -1,
       3,    83,    -1,    -1,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    -1,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   254,   255,   256,    30,    31,    -1,
     260,   261,   262,   263,    -1,    38,    39,    -1,    -1,    42,
      43,    44,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,   281,   282,   283,    -1,   137,    35,   287,   288,   289,
     290,    -1,   495,    -1,    -1,   147,   499,    22,    23,    24,
      25,    26,    27,    28,    29,   508,    -1,   510,    -1,    -1,
      35,    -1,    -1,    -1,     3,   315,    -1,   169,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,    -1,
      19,   183,   184,   185,   186,   187,   188,   189,   190,    -1,
      -1,    30,    31,    -1,    -1,    -1,    -1,    -1,    45,    38,
     202,    -1,    -1,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,   214,   215,   216,   217,   218,   219,   220,   221,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,    -1,
      77,    11,    12,    13,    -1,    -1,    83,    -1,    -1,    -1,
      -1,    -1,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,   254,   255,   256,    35,    -1,    -1,   260,   261,
     262,   263,    -1,   413,   414,    -1,   358,    -1,    -1,    -1,
      -1,   363,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   281,
     282,   283,    -1,    -1,    -1,   287,   288,   289,   290,    20,
     137,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
     147,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,   401,
      -1,   403,    -1,   315,    -1,    -1,    -1,   409,    -1,   411,
      -1,    -1,   169,    -1,    -1,    20,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,   183,   184,   185,   186,
     187,   188,   189,   190,    39,   495,    -1,    -1,    -1,   499,
      -1,    -1,    -1,    -1,    -1,   202,    -1,    -1,   508,    -1,
     510,    -1,    -1,    -1,    -1,    -1,    -1,   214,   215,   216,
     217,   218,   219,   220,   221,    11,    12,    13,    -1,    -1,
      -1,   473,   474,    -1,    -1,    -1,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    -1,
      -1,    37,    38,    39,    -1,    -1,    -1,   254,   255,   256,
      -1,   413,   414,   260,    -1,   507,    -1,   509,    20,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,   521,
     522,    -1,    34,    -1,   281,   282,   283,    39,    -1,    -1,
     287,     1,    -1,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,
      -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,   315,    -1,
      30,    31,    -1,    -1,    -1,    35,    -1,    -1,    38,    -1,
      40,    41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   495,    -1,    -1,     1,   499,     3,     4,
       5,    -1,     7,     8,     9,    10,   508,    -1,   510,    14,
      15,    16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,
      35,    -1,    -1,    38,    -1,    40,    41,    42,    43,    44,
       1,    -1,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,    -1,
      21,    -1,    -1,    -1,    -1,    -1,   413,   414,    -1,    30,
      31,    -1,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,
      41,    42,    43,    44,     1,    -1,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    16,
      -1,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    35,    -1,
      -1,    38,    -1,    40,    41,    42,    43,    44,    22,    23,
      24,    25,    26,    27,    28,    29,     1,    -1,     3,     4,
       5,    35,     7,     8,     9,    10,    -1,    -1,   495,    14,
      15,    16,   499,    18,    19,    -1,    21,    -1,    -1,    -1,
      -1,   508,    -1,   510,    -1,    30,    31,    -1,    -1,    -1,
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
      43,    44,     1,    -1,     3,     4,     5,    -1,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,    18,
      19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    35,    -1,    -1,    38,
      -1,    40,    -1,    42,    43,    44,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    -1,    14,    15,    16,
      -1,    18,    19,    -1,    21,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    30,    31,    -1,    -1,    -1,    35,    -1,
      -1,    38,    -1,    40,    -1,    42,    43,    44,     3,     4,
       5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    16,    -1,    18,    19,    -1,    21,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    -1,    -1,    -1,
      35,    -1,    -1,    38,    -1,    40,    -1,    42,    43,    44,
       3,     4,     5,    -1,     7,     8,     9,    10,    -1,    -1,
      -1,    14,    15,    16,    -1,    18,    19,    -1,    21,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    35,    -1,    -1,    38,    -1,    40,    -1,    42,
      43,    44,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    -1,    18,    19,    -1,
      21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      31,    -1,    -1,    -1,    35,    -1,    -1,    38,    -1,    40,
      -1,    42,    43,    44,     3,     4,     5,    -1,     7,     8,
       9,    10,    -1,    -1,    -1,    14,    15,    16,    -1,    18,
      19,    -1,    21,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    -1,    -1,    -1,    35,    -1,    -1,    38,
      -1,    40,     3,    42,    43,    44,     7,     8,     9,    10,
      -1,    -1,    -1,    14,    15,    16,    -1,    -1,    19,    -1,
       3,    -1,    -1,    -1,     7,     8,     9,    10,    -1,    30,
      31,    14,    15,    16,    -1,    -1,    19,    38,    39,    -1,
      -1,    42,    43,    44,    -1,    -1,    -1,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,     3,    42,
      43,    44,     7,     8,     9,    10,    -1,    -1,    -1,    14,
      15,    16,    -1,    20,    19,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    30,    31,    34,    -1,    11,
      12,    13,    39,    38,    -1,    -1,    -1,    42,    43,    44,
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
      32,    33,    34,    11,    12,    13,    -1,    39,    -1,    -1,
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
      28,    29,    30,    31,    32,    33,    11,    12,    13,    -1,
      -1,    39,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    11,
      12,    13,    -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      22,    23,    24,    25,    26,    27,    28,    29,    11,    12,
      13,    -1,    34,    -1,    -1,    -1,    -1,    39,    -1,    22,
      23,    24,    25,    26,    27,    28,    29,    11,    12,    13,
      -1,    34,    -1,    -1,    -1,    -1,    39,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    11,    12,    13,    -1,
      34,    -1,    -1,    -1,    -1,    39,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      35,    -1,    37,    38,    11,    12,    13,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    -1,
      -1,    38,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      -1,    35,    11,    12,    13,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    11,    12,    13,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      24,    25,    26,    27,    28,    29,    11,    12,    13,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,
      25,    26,    27,    28,    29,    11,    12,    13,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    22,    23,    24,    25,
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
      -1,    -1,    -1,    34,    -1,    -1,    -1,    20,    39,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    34,    -1,    -1,    -1,    20,    39,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    34,
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
      39,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    39,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    39,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    39,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    39,    22,    23,    24,    25,    26,    27,    28,
      29,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      39,    -1,    -1,    34,    -1,    -1,    -1,    -1,    39,    22,
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
      25,    26,    27,    28,    29,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    39,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    22,    23,    24,    25,    26,    27,    28,
      29,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,    22,
      23,    24,    25,    26,    27,    28,    29,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    39,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    39,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    39,    22,    23,    24,    25,    26,    27,    28,
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
      29,    -1,    -1,    -1,    -1,    20,    35,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    20,
      35,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    -1,    -1,    20,    35,    22,    23,    24,    25,    26,
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
      -1,    -1,    -1,    -1,    35,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    35,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    -1,
      -1,    -1,    35,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    -1,    35,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      35
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    47,    48,     0,     1,     4,     5,    49,    50,    52,
      58,    78,    79,     6,     6,    51,    53,     3,    59,    35,
      38,    55,    56,    57,    58,    39,    34,    40,    54,    57,
      61,     1,     3,     7,     8,     9,    10,    14,    15,    16,
      18,    19,    21,    30,    31,    38,    41,    42,    43,    44,
      50,    58,    59,    60,    62,    63,    64,    65,    66,    68,
      69,    70,    71,    72,    73,    74,    75,    77,    80,    59,
      73,    73,    73,    38,    38,    38,    69,    38,    38,    73,
      73,    69,    37,    38,    40,    35,    22,    23,    24,    25,
      26,    27,    28,    29,    11,    12,    13,    30,    31,    32,
      33,    59,    69,    69,    35,    69,    59,    67,    68,    39,
      69,    39,    69,    76,    61,    69,    69,    69,    69,    69,
      69,    69,    69,    70,    70,    70,    72,    72,    73,    73,
      39,    39,    39,    39,    37,    35,    35,    34,    39,    41,
      62,    64,    69,    67,    69,    20,    20,    35,    62,    64,
      62,    64,    67,    39,    60,    78,    78,     3,     3,     7,
       8,     9,    10,    14,    15,    16,    19,    30,    31,    38,
      42,    43,    44,    59,    65,    70,    71,    72,    73,    75,
      80,    51,     3,    22,    23,    24,    25,    26,    27,    28,
      29,     3,     7,     8,     9,    10,    14,    15,    16,    19,
      30,    31,    38,    42,    43,    44,    59,    65,    70,    71,
      72,    73,    75,    80,    22,    23,    24,    25,    26,    27,
      28,    29,    18,    21,    50,    58,    59,    63,    66,    68,
      74,    77,    18,    21,    50,    58,    59,    63,    66,    68,
      74,    77,     3,    59,    68,    69,     3,    59,     3,    59,
      73,    73,    73,    38,    38,    38,    38,    73,    73,    69,
      38,    11,    12,    13,    30,    31,    32,    33,    35,    69,
      69,    69,    69,    69,    69,    69,    69,    73,    73,    73,
      38,    38,    38,    38,    73,    73,    69,    38,    11,    12,
      13,    30,    31,    32,    33,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    38,    51,    37,    40,    35,    69,
      38,    51,    37,    40,    35,    37,    59,    69,    69,    69,
      39,    39,    76,    70,    70,    70,    72,    72,    73,    73,
      59,    69,    69,    69,    39,    39,    76,    70,    70,    70,
      72,    72,    73,    73,    35,    67,    35,    69,    61,    35,
      67,    35,    69,    61,    69,    39,    39,    39,    39,    39,
      39,    39,    39,    39,    39,    35,    35,    41,    35,    35,
      41,    18,    21,    50,    58,    59,    62,    63,    64,    66,
      68,    74,    77,    18,    21,    50,    58,    59,    62,    63,
      64,    66,    68,    74,    77,    67,    67,    69,    38,    51,
      37,    20,    40,    20,    35,    69,    38,    51,    37,    20,
      40,    20,    35,    35,    35,    35,    67,    35,    69,    18,
      21,    50,    58,    59,    62,    63,    64,    66,    68,    74,
      77,    61,    62,    64,    35,    67,    35,    69,    18,    21,
      50,    58,    59,    62,    63,    64,    66,    68,    74,    77,
      61,    62,    64,    67,    67,    35,    35,    69,    38,    51,
      37,    40,    35,    41,    35,    35,    69,    38,    51,    37,
      40,    35,    41,    39,    39,    67,    35,    67,    35,    69,
      61,    67,    35,    67,    35,    69,    61,     1,    60,    62,
      64,     1,    60,    62,    64,    35,    35,    35,    41,    35,
      35,    35,    41,    67,    67,    67,    67,    39,    35,    39,
      35,     1,    60,    62,    64,    67,     1,    60,    62,    64,
      67,    39,    39,     1,    60,    62,    64,     1,    60,    62,
      64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    49,    51,    50,
      53,    52,    54,    55,    55,    56,    56,    57,    58,    59,
      60,    60,    60,    61,    61,    63,    62,    64,    64,    64,
      64,    64,    65,    65,    65,    65,    65,    65,    66,    67,
      67,    68,    68,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    70,    70,    70,    70,    71,    71,    71,
      72,    72,    72,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    74,    75,    75,    75,    75,    75,    76,    76,
      77,    78,    78,    78,    79,    79,    80,    80,    80,    80
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     0,     1,     1,     1,     0,     3,
       0,     6,     3,     1,     0,     3,     1,     1,     2,     1,
       1,     1,     1,     2,     0,     0,     4,     1,     1,     1,
       1,     2,     5,     5,     7,     7,     7,     7,     9,     3,
       1,     1,     0,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     1,     3,     3,     3,     1,     1,     3,     3,
       1,     3,     3,     1,     1,     2,     2,     2,     2,     2,
       1,     3,     4,     4,     3,     4,     4,     4,     3,     1,
       3,     1,     1,     1,     2,     2,     1,     1,     1,     1
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
#line 3375 "src/sintatico.tab.c"
    break;

  case 3: /* lista_de_declaracoes: lista_de_declaracoes declaracao  */
#line 89 "src/sintatico.y"
                                          {
		(yyval.node) = novo_node("lista_de_declaracoes", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3385 "src/sintatico.tab.c"
    break;

  case 4: /* lista_de_declaracoes: %empty  */
#line 94 "src/sintatico.y"
                 {
		(yyval.node) = (t_node*)0;
	}
#line 3393 "src/sintatico.tab.c"
    break;

  case 5: /* declaracao: declaracao_de_variavel  */
#line 100 "src/sintatico.y"
                                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3401 "src/sintatico.tab.c"
    break;

  case 6: /* declaracao: declaracao_de_funcao  */
#line 103 "src/sintatico.y"
                               {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3409 "src/sintatico.tab.c"
    break;

  case 7: /* declaracao: error  */
#line 106 "src/sintatico.y"
                {
		yyerrok;
	}
#line 3417 "src/sintatico.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 112 "src/sintatico.y"
                            {
			var_ou_func_atual = "Variavel";
			incrementa_tabela(nome_id_atual);
		}
#line 3426 "src/sintatico.tab.c"
    break;

  case 9: /* declaracao_de_variavel: tipo_de_variavel_id $@1 PONTO_VIRGULA  */
#line 115 "src/sintatico.y"
                                {
		(yyval.node) = novo_node("declaracao_de_variavel", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3435 "src/sintatico.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 123 "src/sintatico.y"
                              {
		  var_ou_func_atual = "funcao";
		  incrementa_tabela(nome_id_atual);
		  incrementa_escopo();
	  }
#line 3445 "src/sintatico.tab.c"
    break;

  case 11: /* declaracao_de_funcao: tipo_de_variavel_id $@2 ABRE_PARENTESES parametros FECHA_PARENTESES definicao_de_funcao  */
#line 127 "src/sintatico.y"
                                                                            {
		(yyval.node) = novo_node("declaracao_de_funcao", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), (yyvsp[-5].node));
	  }
#line 3456 "src/sintatico.tab.c"
    break;

  case 12: /* definicao_de_funcao: ABRE_CHAVES comandos FECHA_CHAVES  */
#line 136 "src/sintatico.y"
                                          {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 3464 "src/sintatico.tab.c"
    break;

  case 13: /* parametros: lista_de_parametros  */
#line 142 "src/sintatico.y"
                              {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3472 "src/sintatico.tab.c"
    break;

  case 14: /* parametros: %empty  */
#line 145 "src/sintatico.y"
                 {
		(yyval.node) = (t_node*)0;
	}
#line 3480 "src/sintatico.tab.c"
    break;

  case 15: /* lista_de_parametros: lista_de_parametros VIRGULA parametro  */
#line 151 "src/sintatico.y"
                                                {
		(yyval.node) = novo_node("lista_de_parametros", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3490 "src/sintatico.tab.c"
    break;

  case 16: /* lista_de_parametros: parametro  */
#line 156 "src/sintatico.y"
                    {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3498 "src/sintatico.tab.c"
    break;

  case 17: /* parametro: tipo_de_variavel_id  */
#line 162 "src/sintatico.y"
                              {
		(yyval.node) = novo_node("parametro", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));

		var_ou_func_atual = "Variavel (parametro)";
		incrementa_tabela(nome_id_atual);
	  }
#line 3510 "src/sintatico.tab.c"
    break;

  case 18: /* tipo_de_variavel_id: tipo_de_variavel id  */
#line 172 "src/sintatico.y"
                            {
		(yyval.node) = novo_node(nome_tipo_atual, yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3519 "src/sintatico.tab.c"
    break;

  case 19: /* id: ID  */
#line 179 "src/sintatico.y"
           {
		(yyval.node) = novo_node(nome_id_atual, yylineno, coluna);
	}
#line 3527 "src/sintatico.tab.c"
    break;

  case 20: /* comando: bloco_de_comando  */
#line 185 "src/sintatico.y"
                          {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3535 "src/sintatico.tab.c"
    break;

  case 21: /* comando: comando_unico  */
#line 188 "src/sintatico.y"
                        {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3543 "src/sintatico.tab.c"
    break;

  case 22: /* comando: error  */
#line 191 "src/sintatico.y"
                {
		yyerrok;
	}
#line 3551 "src/sintatico.tab.c"
    break;

  case 23: /* comandos: comandos comando  */
#line 197 "src/sintatico.y"
                           {
		(yyval.node) = novo_node("comandos", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3561 "src/sintatico.tab.c"
    break;

  case 24: /* comandos: %empty  */
#line 202 "src/sintatico.y"
             {
		(yyval.node) = (t_node*)0;
	}
#line 3569 "src/sintatico.tab.c"
    break;

  case 25: /* $@3: %empty  */
#line 208 "src/sintatico.y"
         {incrementa_escopo();}
#line 3575 "src/sintatico.tab.c"
    break;

  case 26: /* bloco_de_comando: $@3 ABRE_CHAVES comandos FECHA_CHAVES  */
#line 208 "src/sintatico.y"
                                                                  {
		(yyval.node) = novo_node("BLOCO", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3584 "src/sintatico.tab.c"
    break;

  case 27: /* comando_unico: comando_iterativo  */
#line 215 "src/sintatico.y"
                           {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3592 "src/sintatico.tab.c"
    break;

  case 28: /* comando_unico: declaracao_de_variavel  */
#line 218 "src/sintatico.y"
                                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3600 "src/sintatico.tab.c"
    break;

  case 29: /* comando_unico: chamada_de_retorno  */
#line 221 "src/sintatico.y"
                             {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3608 "src/sintatico.tab.c"
    break;

  case 30: /* comando_unico: comando_de_atribuicao  */
#line 224 "src/sintatico.y"
                                {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3616 "src/sintatico.tab.c"
    break;

  case 31: /* comando_unico: exp_or_empty PONTO_VIRGULA  */
#line 227 "src/sintatico.y"
                                     {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 3624 "src/sintatico.tab.c"
    break;

  case 32: /* comando_condicional: IF ABRE_PARENTESES exp FECHA_PARENTESES comando_unico  */
#line 233 "src/sintatico.y"
                                                                {
		(yyval.node) = novo_node("IF", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3634 "src/sintatico.tab.c"
    break;

  case 33: /* comando_condicional: IF ABRE_PARENTESES exp FECHA_PARENTESES bloco_de_comando  */
#line 238 "src/sintatico.y"
                                                                   {
		(yyval.node) = novo_node("IF", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3644 "src/sintatico.tab.c"
    break;

  case 34: /* comando_condicional: IF ABRE_PARENTESES exp FECHA_PARENTESES comando_unico ELSE comando_unico  */
#line 243 "src/sintatico.y"
                                                                                   {
		(yyval.node) = novo_node("IF_ELSE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), (yyvsp[-4].node));
	}
#line 3655 "src/sintatico.tab.c"
    break;

  case 35: /* comando_condicional: IF ABRE_PARENTESES exp FECHA_PARENTESES bloco_de_comando ELSE comando_unico  */
#line 249 "src/sintatico.y"
                                                                                      {
		(yyval.node) = novo_node("IF_ELSE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), (yyvsp[-4].node));
	}
#line 3666 "src/sintatico.tab.c"
    break;

  case 36: /* comando_condicional: IF ABRE_PARENTESES exp FECHA_PARENTESES comando_unico ELSE bloco_de_comando  */
#line 255 "src/sintatico.y"
                                                                                      {
		(yyval.node) = novo_node("IF_ELSE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), (yyvsp[-4].node));
	}
#line 3677 "src/sintatico.tab.c"
    break;

  case 37: /* comando_condicional: IF ABRE_PARENTESES exp FECHA_PARENTESES bloco_de_comando ELSE bloco_de_comando  */
#line 261 "src/sintatico.y"
                                                                                         {
		(yyval.node) = novo_node("IF_ELSE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), (yyvsp[-4].node));
	}
#line 3688 "src/sintatico.tab.c"
    break;

  case 38: /* comando_iterativo: FOR ABRE_PARENTESES expressao_for PONTO_VIRGULA expressao_for PONTO_VIRGULA expressao_for FECHA_PARENTESES comando  */
#line 270 "src/sintatico.y"
                                                                                                                             {
		(yyval.node) = novo_node("FOR", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), (yyvsp[-4].node));
		coloca_node_filho((yyval.node), (yyvsp[-6].node));
	}
#line 3700 "src/sintatico.tab.c"
    break;

  case 39: /* expressao_for: id ATRIB exp  */
#line 280 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("ATRIB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3710 "src/sintatico.tab.c"
    break;

  case 40: /* expressao_for: exp_or_empty  */
#line 285 "src/sintatico.y"
                       {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3718 "src/sintatico.tab.c"
    break;

  case 41: /* exp_or_empty: exp  */
#line 291 "src/sintatico.y"
            {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3726 "src/sintatico.tab.c"
    break;

  case 42: /* exp_or_empty: %empty  */
#line 294 "src/sintatico.y"
                 {
		(yyval.node) = (t_node*)0;
	}
#line 3734 "src/sintatico.tab.c"
    break;

  case 43: /* exp: comando_condicional  */
#line 300 "src/sintatico.y"
                            {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3742 "src/sintatico.tab.c"
    break;

  case 44: /* exp: exp GT exp  */
#line 303 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("GT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3752 "src/sintatico.tab.c"
    break;

  case 45: /* exp: exp LT exp  */
#line 308 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("LT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3762 "src/sintatico.tab.c"
    break;

  case 46: /* exp: exp EQ exp  */
#line 313 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("EQ", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3772 "src/sintatico.tab.c"
    break;

  case 47: /* exp: exp NE exp  */
#line 318 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("NE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3782 "src/sintatico.tab.c"
    break;

  case 48: /* exp: exp LE exp  */
#line 323 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("LE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3792 "src/sintatico.tab.c"
    break;

  case 49: /* exp: exp GE exp  */
#line 328 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("GE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3802 "src/sintatico.tab.c"
    break;

  case 50: /* exp: exp AND exp  */
#line 333 "src/sintatico.y"
                      {
		(yyval.node) = novo_node("AND", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3812 "src/sintatico.tab.c"
    break;

  case 51: /* exp: exp OR exp  */
#line 338 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("OR", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3822 "src/sintatico.tab.c"
    break;

  case 52: /* exp: exp_list  */
#line 343 "src/sintatico.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3830 "src/sintatico.tab.c"
    break;

  case 53: /* exp_list: exp_list CONSTRUTOR exp_list  */
#line 349 "src/sintatico.y"
                                     {
		(yyval.node) = novo_node("CONSTRUTOR", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3840 "src/sintatico.tab.c"
    break;

  case 54: /* exp_list: exp_list FILTER exp_list  */
#line 354 "src/sintatico.y"
                                   {
		(yyval.node) = novo_node("FILTER", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3850 "src/sintatico.tab.c"
    break;

  case 55: /* exp_list: exp_list MAP exp_list  */
#line 359 "src/sintatico.y"
                                {
		(yyval.node) = novo_node("MAP", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3860 "src/sintatico.tab.c"
    break;

  case 56: /* exp_list: exp_aritmetica  */
#line 364 "src/sintatico.y"
                         {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3868 "src/sintatico.tab.c"
    break;

  case 57: /* exp_aritmetica: termo  */
#line 371 "src/sintatico.y"
              {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3876 "src/sintatico.tab.c"
    break;

  case 58: /* exp_aritmetica: exp_aritmetica SOMA termo  */
#line 374 "src/sintatico.y"
                                    {
		(yyval.node) = novo_node("SOMA", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3886 "src/sintatico.tab.c"
    break;

  case 59: /* exp_aritmetica: exp_aritmetica SUB termo  */
#line 379 "src/sintatico.y"
                                   {
		(yyval.node) = novo_node("SUB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3896 "src/sintatico.tab.c"
    break;

  case 60: /* termo: fator  */
#line 387 "src/sintatico.y"
              {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3904 "src/sintatico.tab.c"
    break;

  case 61: /* termo: termo MULT fator  */
#line 390 "src/sintatico.y"
                           {
		(yyval.node) = novo_node("MULT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3914 "src/sintatico.tab.c"
    break;

  case 62: /* termo: termo DIV fator  */
#line 395 "src/sintatico.y"
                          {
		(yyval.node) = novo_node("DIV", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3924 "src/sintatico.tab.c"
    break;

  case 63: /* fator: constante  */
#line 403 "src/sintatico.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3932 "src/sintatico.tab.c"
    break;

  case 64: /* fator: func_call_exp  */
#line 406 "src/sintatico.y"
                        {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3940 "src/sintatico.tab.c"
    break;

  case 65: /* fator: SUB fator  */
#line 409 "src/sintatico.y"
                    {
		(yyval.node) = novo_node("SUB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3949 "src/sintatico.tab.c"
    break;

  case 66: /* fator: SOMA fator  */
#line 413 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("SOMA", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3958 "src/sintatico.tab.c"
    break;

  case 67: /* fator: TAIL_OR_NOT fator  */
#line 417 "src/sintatico.y"
                            {
		(yyval.node) = novo_node("TAIL_NOT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3967 "src/sintatico.tab.c"
    break;

  case 68: /* fator: TAIL_POP fator  */
#line 421 "src/sintatico.y"
                         {
		(yyval.node) = novo_node("TAIL_POP", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3976 "src/sintatico.tab.c"
    break;

  case 69: /* fator: HEADER fator  */
#line 425 "src/sintatico.y"
                       {
		(yyval.node) = novo_node("HEADER", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3985 "src/sintatico.tab.c"
    break;

  case 70: /* fator: ID  */
#line 429 "src/sintatico.y"
             {
		verifica_contexto(nome_id_atual);
		(yyval.node) = novo_node(nome_id_atual, yylineno, coluna);
	}
#line 3994 "src/sintatico.tab.c"
    break;

  case 71: /* fator: ABRE_PARENTESES exp FECHA_PARENTESES  */
#line 433 "src/sintatico.y"
                                               {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 4002 "src/sintatico.tab.c"
    break;

  case 72: /* comando_de_atribuicao: id ATRIB exp PONTO_VIRGULA  */
#line 440 "src/sintatico.y"
                               {
		verifica_contexto((yyvsp[-3].node)->nome);
		(yyval.node) = novo_node("ATRIB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
		coloca_node_filho((yyval.node), (yyvsp[-3].node));
	}
#line 4013 "src/sintatico.tab.c"
    break;

  case 73: /* func_call_exp: id ABRE_PARENTESES func_call_parameters FECHA_PARENTESES  */
#line 449 "src/sintatico.y"
                                                                   {
		verifica_contexto((yyvsp[-3].node)->nome);
		(yyval.node) = novo_node("my_func_call_exp", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
		coloca_node_filho((yyval.node), (yyvsp[-3].node));

		verifica_qnt_parametros_chamada_func((yyvsp[-3].node)->nome);
		num_parametros_chamada_func = 0;
	}
#line 4027 "src/sintatico.tab.c"
    break;

  case 74: /* func_call_exp: id ABRE_PARENTESES FECHA_PARENTESES  */
#line 458 "src/sintatico.y"
                                               {
		verifica_contexto((yyvsp[-2].node)->nome);
		(yyval.node) = (yyvsp[-2].node);

		verifica_qnt_parametros_chamada_func((yyvsp[-2].node)->nome);
		num_parametros_chamada_func = 0;
	}
#line 4039 "src/sintatico.tab.c"
    break;

  case 75: /* func_call_exp: READ ABRE_PARENTESES id FECHA_PARENTESES  */
#line 465 "src/sintatico.y"
                                                    {
		verifica_contexto((yyvsp[-1].node)->nome);
		(yyval.node) = novo_node("READ", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 4049 "src/sintatico.tab.c"
    break;

  case 76: /* func_call_exp: WRITE ABRE_PARENTESES exp FECHA_PARENTESES  */
#line 470 "src/sintatico.y"
                                                      {
		(yyval.node) = novo_node("WRITE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 4058 "src/sintatico.tab.c"
    break;

  case 77: /* func_call_exp: WRITELN ABRE_PARENTESES exp FECHA_PARENTESES  */
#line 474 "src/sintatico.y"
                                                        {
		(yyval.node) = novo_node("WRITELN", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 4067 "src/sintatico.tab.c"
    break;

  case 78: /* func_call_parameters: func_call_parameters VIRGULA exp  */
#line 481 "src/sintatico.y"
                                         {
		(yyval.node) = novo_node("lista_de_expressao", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));

		num_parametros_chamada_func++;
	}
#line 4079 "src/sintatico.tab.c"
    break;

  case 79: /* func_call_parameters: exp  */
#line 488 "src/sintatico.y"
              {
		(yyval.node) = (yyvsp[0].node);

		num_parametros_chamada_func++;
		// $$ = novo_node("lista_de_parametros", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 4091 "src/sintatico.tab.c"
    break;

  case 80: /* chamada_de_retorno: RETURN exp PONTO_VIRGULA  */
#line 499 "src/sintatico.y"
                                 {
		(yyval.node) = novo_node("RETURN", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 4100 "src/sintatico.tab.c"
    break;

  case 86: /* constante: INTEGER_CONST  */
#line 518 "src/sintatico.y"
                      {
		(yyval.node) = novo_node("INTEGER_CONST", yylineno, coluna);
	}
#line 4108 "src/sintatico.tab.c"
    break;

  case 87: /* constante: FLOAT_CONST  */
#line 521 "src/sintatico.y"
                      {
		(yyval.node) = novo_node("FLOAT_CONST", yylineno, coluna);
	}
#line 4116 "src/sintatico.tab.c"
    break;

  case 88: /* constante: CONSTANTE_NIL  */
#line 524 "src/sintatico.y"
                        {
		(yyval.node) = novo_node("CONSTANTE_NIL", yylineno, coluna);
	}
#line 4124 "src/sintatico.tab.c"
    break;

  case 89: /* constante: STRING_LITERAL  */
#line 527 "src/sintatico.y"
                         {
		(yyval.node) = novo_node("STRING_LITERAL", yylineno, coluna);
	}
#line 4132 "src/sintatico.tab.c"
    break;


#line 4136 "src/sintatico.tab.c"

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

#line 533 "src/sintatico.y"


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
