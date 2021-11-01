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
  YYSYMBOL_TAIL_OR_NOT = 7,                /* TAIL_OR_NOT  */
  YYSYMBOL_HEADER = 8,                     /* HEADER  */
  YYSYMBOL_TAIL_POP = 9,                   /* TAIL_POP  */
  YYSYMBOL_MAP = 10,                       /* MAP  */
  YYSYMBOL_FILTER = 11,                    /* FILTER  */
  YYSYMBOL_CONSTRUTOR = 12,                /* CONSTRUTOR  */
  YYSYMBOL_READ = 13,                      /* READ  */
  YYSYMBOL_WRITE = 14,                     /* WRITE  */
  YYSYMBOL_WRITELN = 15,                   /* WRITELN  */
  YYSYMBOL_MAIN = 16,                      /* MAIN  */
  YYSYMBOL_RETURN = 17,                    /* RETURN  */
  YYSYMBOL_IF = 18,                        /* IF  */
  YYSYMBOL_ELSE = 19,                      /* ELSE  */
  YYSYMBOL_FOR = 20,                       /* FOR  */
  YYSYMBOL_AND = 21,                       /* AND  */
  YYSYMBOL_OR = 22,                        /* OR  */
  YYSYMBOL_LT = 23,                        /* LT  */
  YYSYMBOL_LE = 24,                        /* LE  */
  YYSYMBOL_EQ = 25,                        /* EQ  */
  YYSYMBOL_GT = 26,                        /* GT  */
  YYSYMBOL_GE = 27,                        /* GE  */
  YYSYMBOL_NE = 28,                        /* NE  */
  YYSYMBOL_SOMA = 29,                      /* SOMA  */
  YYSYMBOL_SUB = 30,                       /* SUB  */
  YYSYMBOL_MULT = 31,                      /* MULT  */
  YYSYMBOL_DIV = 32,                       /* DIV  */
  YYSYMBOL_VIRGULA = 33,                   /* VIRGULA  */
  YYSYMBOL_PONTO_VIRGULA = 34,             /* PONTO_VIRGULA  */
  YYSYMBOL_ASPA_SIMPLES = 35,              /* ASPA_SIMPLES  */
  YYSYMBOL_ATRIB = 36,                     /* ATRIB  */
  YYSYMBOL_ABRE_PARENTESES = 37,           /* ABRE_PARENTESES  */
  YYSYMBOL_FECHA_PARENTESES = 38,          /* FECHA_PARENTESES  */
  YYSYMBOL_ABRE_CHAVES = 39,               /* ABRE_CHAVES  */
  YYSYMBOL_FECHA_CHAVES = 40,              /* FECHA_CHAVES  */
  YYSYMBOL_CONSTANTE_NIL = 41,             /* CONSTANTE_NIL  */
  YYSYMBOL_FLOAT_CONST = 42,               /* FLOAT_CONST  */
  YYSYMBOL_INTEGER_CONST = 43,             /* INTEGER_CONST  */
  YYSYMBOL_STRING_LITERAL = 44,            /* STRING_LITERAL  */
  YYSYMBOL_45_then_ = 45,                  /* "then"  */
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
#define YYLAST   5484

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  35
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  358

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
       0,    81,    81,    88,    93,    99,   102,   105,   111,   111,
     122,   122,   135,   141,   144,   150,   155,   161,   171,   178,
     184,   187,   190,   196,   201,   207,   207,   214,   217,   220,
     223,   226,   229,   235,   240,   245,   251,   257,   263,   272,
     282,   287,   293,   296,   302,   307,   312,   317,   322,   327,
     332,   337,   342,   348,   353,   358,   363,   370,   373,   378,
     386,   389,   394,   402,   405,   408,   412,   416,   420,   424,
     428,   434,   441,   452,   463,   473,   480,   484,   491,   498,
     509,   516,   517,   518,   522,   523,   528,   531,   534,   537
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
  "LIST", "TAIL_OR_NOT", "HEADER", "TAIL_POP", "MAP", "FILTER",
  "CONSTRUTOR", "READ", "WRITE", "WRITELN", "MAIN", "RETURN", "IF", "ELSE",
  "FOR", "AND", "OR", "LT", "LE", "EQ", "GT", "GE", "NE", "SOMA", "SUB",
  "MULT", "DIV", "VIRGULA", "PONTO_VIRGULA", "ASPA_SIMPLES", "ATRIB",
  "ABRE_PARENTESES", "FECHA_PARENTESES", "ABRE_CHAVES", "FECHA_CHAVES",
  "CONSTANTE_NIL", "FLOAT_CONST", "INTEGER_CONST", "STRING_LITERAL",
  "\"then\"", "$accept", "programa", "lista_de_declaracoes", "declaracao",
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

#define YYPACT_NINF (-235)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-90)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     110,     4,   153,  -235,   168,    13,    39,   175,   260,   410,
      17,    20,    28,    50,    69,    -1,    79,   102,   112,   431,
       3,    66,   -23,   -21,     2,    73,    75,  2273,   433,    19,
    2291,  2335,  4264,   880,   880,   880,    90,    98,   100,   880,
     115,   119,   880,   880,  1162,   468,  4320,  4345,  4370,  4395,
    2353,   113,    60,  2397,  2415,   125,  2459,  2477,  2521,   143,
     255,  1084,  4895,  4420,  4445,  2539,  4470,  2583,  4495,   141,
    4520,  4545,  4570,   180,  1162,  1162,   338,  1162,   287,  4595,
    4620,   630,   880,   152,  2273,  2601,   880,   880,   880,   880,
     880,   880,   880,   880,   880,   880,   880,   880,   880,   880,
     880,   146,   723,   839,  2645,  5076,   108,   154,   163,  4645,
     754,  4670,   555,    36,  2663,  5310,  5324,  5338,  5352,  5366,
    5380,  5394,  5408,  4916,  4935,  4954,  4695,  4720,  4745,  4770,
    4795,  4820,  4845,  3035,   880,   287,  2707,  1248,  4870,  2725,
     526,   984,  5422,   164,   660,  3077,  3077,   375,  2769,  2787,
    2831,  2849,   162,  2973,  2893,   199,   200,  4292,  1310,  1162,
    1162,  1162,   167,   181,   183,  1162,  1162,  1162,  3640,  3663,
    3686,  3709,   191,  4188,    96,  3732,  3755,  3778,  3801,   196,
     179,  1162,  1162,  1162,  1162,  1162,  1162,  1162,  1162,   418,
    1248,  1248,  1248,   198,   201,   202,  1248,  1248,  1162,  1347,
    3112,  3136,  3160,   209,   470,    37,  3184,  3208,  3232,  3256,
    1248,  1248,  1248,  1248,  1248,  1248,  1248,  1248,   880,   213,
     226,  1393,   113,   126,   228,  1437,  1481,   203,  1525,  1569,
    1205,   134,   253,  5084,    38,    65,   258,   263,  3824,  3847,
    3870,   180,  1162,  1162,  3893,  3916,  5102,   592,  1162,  1162,
    1162,  1162,  1162,  1162,  1162,  2911,  5110,  5128,  5136,  5154,
    5162,  5180,  5188,  5206,  3280,  3304,  3328,   180,  1162,  1162,
    3352,  3376,  5214,   800,  1248,  1248,  1248,  1248,  1248,  1248,
    1248,  1104,  1281,  4968,  4986,  5004,  5022,  5040,  5058,  5436,
    1162,   287,   264,   880,  2273,  1613,  1162,   261,  5232,  5240,
    3939,  3962,    67,  4207,  4226,  4245,  3985,  4008,  4031,  4054,
     265,  5258,  5266,  3400,  3424,   105,   638,  1040,  4169,  3448,
    3472,  3496,  3520,  1657,  5284,   272,  1701,  5450,  2955,  5292,
    4077,  4100,  4123,  4146,  3544,  3568,  3592,  3616,  3035,   287,
    1745,  1789,  1833,  1877,   274,  3035,  3035,   375,  1921,  1965,
    2009,  2053,   280,  3017,  2097,  2141,  2185,  2229
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
       0,     0,     0,     0,     0,     0,     0,     0
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -235,  -235,  -235,  -235,     0,   -48,  -235,  -235,  -235,  -235,
    -235,   294,    -2,    -5,  -152,   -79,  -124,  -122,  -119,  -113,
     -97,   -92,   -34,   427,   997,  1113,   872,   210,   -87,   543,
    -234,   -31,    30,  -235,   688
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     1,     2,     7,    50,    15,     9,    16,    28,    21,
      22,    23,    51,   172,    53,    30,    54,    55,    56,    57,
      58,   107,    59,    60,    61,    62,    63,    64,    65,    66,
     113,    67,   156,    12,    68
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,   154,     8,   179,     3,   114,    18,     5,     6,   140,
      26,   224,   -16,   302,   141,   -13,   -81,   -16,    24,    13,
     225,   148,   150,    17,    24,    52,   149,   151,    69,    69,
      69,   -83,    11,    19,    69,   -17,   226,    69,    69,   315,
     -17,   -14,   -82,   143,   108,    14,   228,   -56,   -56,   -56,
     155,    -8,   -15,   -84,   -10,   152,   155,   -15,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   -56,   277,   278,   101,   137,
     -56,   -19,   -85,   106,   138,   -56,   -19,    69,   203,     5,
       6,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,    69,    69,    69,    69,    82,    83,   -18,   227,
     137,   108,   229,   -18,    25,   333,   -56,   -56,   -56,    52,
      -4,    -4,    27,   232,    -4,    -4,    20,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,   -56,   251,   252,    73,   223,    69,
     106,   222,   203,   221,   -56,    74,   -19,    75,   137,   -19,
      52,    52,   231,   337,   134,    83,   -18,    -8,    52,   -18,
     235,   237,    77,    -2,     4,   189,    78,     5,     6,   190,
     191,   192,   293,    83,    84,   193,   194,   195,    -7,    -7,
     296,   247,    -7,    -7,   292,    -3,    -3,    85,    83,    -3,
      -3,   196,   197,   180,   130,   203,   203,   203,   135,   198,
     111,   203,   203,   199,   200,   201,   202,   -41,   147,   325,
     153,   355,   234,   236,   241,   203,   203,   203,   203,   203,
     203,   203,   203,    69,   342,   328,   224,   -19,   242,   343,
     243,   348,   350,   224,   224,   225,   349,   351,   247,   356,
     255,   224,   225,   225,   357,   267,   297,   295,   268,   269,
     225,   226,   203,    70,    71,    72,   273,   344,   226,   226,
     290,   228,    79,    80,   176,   352,   226,   108,   228,   228,
      -5,    -5,   310,   291,    -5,    -5,   228,   294,   203,   203,
     203,   203,   203,   203,   203,   203,    86,    87,    88,    89,
      90,    91,    92,    93,   176,   176,   106,   176,    69,   -42,
      32,   -41,   -19,   207,    33,    34,    35,   -18,   326,   330,
      36,    37,    38,   334,   227,   108,   339,   229,   347,   128,
     129,   227,   227,   232,   229,   229,    42,    43,   353,   227,
      29,   -43,   229,    52,    44,     0,     0,     0,    46,    47,
      48,    49,     0,   223,   106,     0,   222,     0,   221,     0,
     223,   223,   231,   222,   222,   221,   221,   207,   223,     0,
       0,   222,     0,   221,     0,     0,     0,   176,     0,    86,
      87,    88,    89,    90,    91,    92,    93,     0,     0,   238,
     239,   240,   104,     0,     0,   244,   245,   176,   230,     0,
       0,     0,   159,   160,   161,     0,     0,     0,   162,   163,
     164,   176,   176,   176,   176,   176,   176,   176,   176,     0,
     264,   265,   266,     0,   165,   166,   270,   271,   176,     0,
      -6,    -6,   167,   -43,    -6,    -6,   168,   169,   170,   171,
     207,   207,   207,   207,   207,   207,   207,   207,   -70,   -70,
     -70,    -9,    -9,   -11,   -11,    -9,    -9,   -11,   -11,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   176,   176,     0,   -19,   -70,   207,   176,   176,
     176,   176,   176,   308,   309,     0,    76,     0,   -12,   -12,
       0,    81,   -12,   -12,     0,     0,     0,     0,   176,   176,
     274,   275,   276,   207,   207,   207,   207,   207,   207,   321,
     322,   -52,   -52,   -52,   -52,   -52,   -52,   -52,   -52,     0,
     176,   102,   103,   -52,   105,     0,   176,     0,   -52,   110,
     112,     0,     0,   115,   116,   117,   118,   119,   120,   121,
     122,     0,     0,     0,     0,     0,     0,   -34,     0,   -34,
     -34,   -34,     0,   -34,   -34,   -34,     0,     0,     0,   -34,
     -34,   -34,     0,   -34,   -34,   145,   -34,     0,     0,     0,
       0,     0,     0,     0,     0,   -34,   -34,   176,     0,     0,
     -34,   142,     0,   -34,   144,   -34,   -34,   -34,   -34,   -34,
     -34,     0,     0,     0,   233,     0,   210,   211,   212,   213,
     214,   215,   216,   217,     0,     0,     0,   177,   -79,     0,
       0,     0,     0,   -79,   246,   189,     0,     0,     0,   190,
     191,   192,     0,     0,     0,   193,   194,   195,   256,   257,
     258,   259,   260,   261,   262,   263,     0,   177,   177,     0,
     177,   196,   197,     0,     0,   272,   208,     0,     0,   198,
     301,     0,     0,   199,   200,   201,   202,   281,   282,   283,
     284,   285,   286,   287,   288,   289,     0,     0,   274,   275,
     276,   181,   182,   183,   184,   185,   186,   187,   188,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   -55,     0,   109,   298,
     299,   -55,     0,     0,   112,     0,   -55,     0,     0,     0,
     208,   210,   211,   212,   213,   214,   215,   216,   217,     0,
     177,     0,     0,   -78,     0,   311,   312,     0,   -78,     0,
     112,     0,   177,   177,   177,     0,     0,     0,   177,   177,
     177,     0,     0,     0,     0,     0,     0,   324,     0,     0,
     327,     0,     0,   329,   177,   177,   177,   177,   177,   177,
     177,   177,   178,   208,   208,   208,     0,     0,     0,   208,
     208,   177,     0,     0,   181,   182,   183,   184,   185,   186,
     187,   188,     0,   208,   208,   208,   208,   208,   208,   208,
     208,   131,   178,   178,     0,   178,     0,     0,     0,     0,
       0,   209,     0,     0,   233,    86,    87,    88,    89,    90,
      91,    92,    93,     0,     0,   177,   177,     0,   136,     0,
     208,   177,   177,   177,   177,   177,   177,   177,     0,     0,
       0,     0,     0,   189,     0,     0,     0,   190,   191,   192,
       0,   177,   177,   193,   194,   195,   208,   208,   208,   208,
     208,   208,   208,   208,     0,   209,     0,     0,     0,   196,
     197,     0,     0,   177,     0,   178,     0,   198,   314,   177,
       0,   199,   200,   201,   202,     0,     0,   178,   178,   178,
       0,     0,     0,   178,   178,   178,     0,     0,     0,     0,
     181,   182,   183,   184,   185,   186,   187,   188,     0,   178,
     178,   178,   178,   178,   178,   178,   178,   132,   209,   209,
     209,     0,     0,   157,   209,   209,   178,    33,    34,    35,
     177,     0,     0,    36,    37,    38,     0,     0,   209,   209,
     209,   209,   209,   209,   209,   209,     0,     0,     0,    42,
      43,     0,     0,     0,     0,     0,   175,    44,     0,     0,
       0,    46,    47,    48,    49,     0,     0,     0,     0,     0,
     178,   178,     0,     0,     0,   209,   178,   178,   178,   178,
     178,   178,   178,     0,     0,     0,   175,   175,     0,   175,
       0,     0,     0,     0,     0,   206,   178,   178,     0,     0,
       0,   209,   209,   209,   209,   209,   209,   209,   209,   126,
     127,     0,     0,     0,     0,     0,     0,     0,   178,     0,
       0,     0,     0,     0,   178,   -33,     0,   -33,   -33,   -33,
       0,   -33,   -33,   -33,     0,     0,     0,   -33,   -33,   -33,
       0,   -33,   -33,   146,   -33,     0,     0,     0,     0,   206,
       0,     0,     0,   -33,   -33,     0,     0,     0,   -33,   175,
       0,   -33,     0,   -33,   -33,   -33,   -33,   -33,   -33,     0,
       0,     0,     0,     0,     0,   178,     0,     0,     0,   175,
       0,   173,     0,     0,     0,     0,     0,     0,     0,     0,
     274,   275,   276,   175,   175,   175,   175,   175,   175,   175,
     175,   -54,   -54,   -54,   -54,   -54,   -54,   -54,   -54,     0,
     175,   173,   173,   -54,   173,     0,     0,     0,   -54,     0,
     204,     0,   206,   206,   206,   206,   206,   206,   206,   206,
       0,   123,   124,   125,    94,    95,    96,     0,     0,     0,
       0,     0,     0,     0,     0,   -52,   -52,   -52,   -52,   -52,
     -52,   -52,   -52,     0,   175,   175,     0,     0,   -52,   206,
     175,   175,   175,   306,   307,   -50,   -50,   212,   213,   214,
     215,   216,   217,     0,   204,     0,     0,   -50,     0,     0,
     175,   175,   -50,     0,   173,   206,   206,   206,   206,   319,
     320,     0,     0,     0,     0,     0,     0,   174,     0,     0,
       0,     0,   175,     0,   173,   158,     0,     0,   175,   159,
     160,   161,     0,     0,     0,   162,   163,   164,   173,   173,
     173,   173,   173,   173,   173,   173,     0,   174,   174,     0,
     174,   165,   166,     0,     0,   173,   205,     0,     0,   167,
       0,     0,     0,   168,   169,   170,   171,   204,   204,   204,
     204,   204,   204,   204,   204,   -70,   -70,   -70,     0,   175,
       0,     0,     0,     0,     0,     0,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,   173,
     173,   -19,   -19,   -70,   204,   303,   304,   305,     0,     0,
     205,   189,     0,     0,     0,   190,   191,   192,     0,     0,
     174,   193,   194,   195,     0,   173,   173,     0,     0,     0,
     204,   316,   317,   318,     0,     0,     0,   196,   197,     0,
     174,     0,     0,     0,     0,   198,     0,   173,     0,   199,
     200,   201,   202,   173,   174,   174,   174,   174,   174,   174,
     174,   174,   -51,   -51,   212,   213,   214,   215,   216,   217,
       0,   174,     0,     0,   -51,     0,     0,     0,     0,   -51,
     -70,   -70,   -70,   205,   205,   205,   205,   205,   205,   205,
     205,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,     0,   173,     0,     0,   -19,   -70,     0,
       0,     0,     0,     0,     0,   174,   174,   -88,   -88,   -88,
     205,   174,   174,   174,     0,     0,     0,     0,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   174,   174,     0,     0,   -88,   205,   205,   205,   205,
       0,     0,     0,     0,   -29,     0,   -29,   -29,   -29,     0,
     -29,   -29,   -29,   174,     0,     0,   -29,   -29,   -29,   174,
     -29,   -29,   -29,   -29,     0,     0,     0,     0,     0,     0,
       0,     0,   -29,   -29,     0,     0,     0,   -29,     0,     0,
     -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,   -27,     0,
     -27,   -27,   -27,     0,   -27,   -27,   -27,     0,     0,     0,
     -27,   -27,   -27,     0,   -27,   -27,   -27,   -27,     0,     0,
     174,     0,     0,     0,     0,     0,   -27,   -27,     0,     0,
       0,   -27,     0,     0,   -27,     0,   -27,   -27,   -27,   -27,
     -27,   -27,   -28,     0,   -28,   -28,   -28,     0,   -28,   -28,
     -28,     0,     0,     0,   -28,   -28,   -28,     0,   -28,   -28,
     -28,   -28,     0,     0,     0,     0,     0,     0,     0,     0,
     -28,   -28,     0,     0,     0,   -28,     0,     0,   -28,     0,
     -28,   -28,   -28,   -28,   -28,   -28,   -31,     0,   -31,   -31,
     -31,     0,   -31,   -31,   -31,     0,     0,     0,   -31,   -31,
     -31,     0,   -31,   -31,   -31,   -31,     0,     0,     0,     0,
       0,     0,     0,     0,   -31,   -31,     0,     0,     0,   -31,
       0,     0,   -31,     0,   -31,   -31,   -31,   -31,   -31,   -31,
     -30,     0,   -30,   -30,   -30,     0,   -30,   -30,   -30,     0,
       0,     0,   -30,   -30,   -30,     0,   -30,   -30,   -30,   -30,
       0,     0,     0,     0,     0,     0,     0,     0,   -30,   -30,
       0,     0,     0,   -30,     0,     0,   -30,     0,   -30,   -30,
     -30,   -30,   -30,   -30,   -32,     0,   -32,   -32,   -32,     0,
     -32,   -32,   -32,     0,     0,     0,   -32,   -32,   -32,     0,
     -32,   -32,   -32,   -32,     0,     0,     0,     0,     0,     0,
       0,     0,   -32,   -32,     0,     0,     0,   -32,     0,     0,
     -32,     0,   -32,   -32,   -32,   -32,   -32,   -32,   -80,     0,
     -80,   -80,   -80,     0,   -80,   -80,   -80,     0,     0,     0,
     -80,   -80,   -80,     0,   -80,   -80,   -80,   -80,     0,     0,
       0,     0,     0,     0,     0,     0,   -80,   -80,     0,     0,
       0,   -80,     0,     0,   -80,     0,   -80,   -80,   -80,   -80,
     -80,   -80,    -9,     0,    -9,    -9,    -9,     0,    -9,    -9,
      -9,     0,     0,     0,    -9,    -9,    -9,     0,    -9,    -9,
      -9,    -9,     0,     0,     0,     0,     0,     0,     0,     0,
      -9,    -9,     0,     0,     0,    -9,     0,     0,    -9,     0,
      -9,    -9,    -9,    -9,    -9,    -9,   -72,     0,   -72,   -72,
     -72,     0,   -72,   -72,   -72,     0,     0,     0,   -72,   -72,
     -72,     0,   -72,   -72,   -72,   -72,     0,     0,     0,     0,
       0,     0,     0,     0,   -72,   -72,     0,     0,     0,   -72,
       0,     0,   -72,     0,   -72,   -72,   -72,   -72,   -72,   -72,
     -26,     0,   -26,   -26,   -26,     0,   -26,   -26,   -26,     0,
       0,     0,   -26,   -26,   -26,     0,   -26,   -26,   -26,   -26,
       0,     0,     0,     0,     0,     0,     0,     0,   -26,   -26,
       0,     0,     0,   -26,     0,     0,   -26,     0,   -26,   -26,
     -26,   -26,   -26,   -26,   -34,     0,   -34,   -34,   -34,     0,
     -34,   -34,   -34,     0,     0,     0,   -34,   -34,   -34,     0,
     -34,   -34,   345,   -34,     0,     0,     0,     0,     0,     0,
       0,     0,   -34,   -34,     0,     0,     0,   -34,     0,     0,
     -34,     0,   -34,   -34,   -34,   -34,   -34,   -34,   -33,     0,
     -33,   -33,   -33,     0,   -33,   -33,   -33,     0,     0,     0,
     -33,   -33,   -33,     0,   -33,   -33,   346,   -33,     0,     0,
       0,     0,     0,     0,     0,     0,   -33,   -33,     0,     0,
       0,   -33,     0,     0,   -33,     0,   -33,   -33,   -33,   -33,
     -33,   -33,   -38,     0,   -38,   -38,   -38,     0,   -38,   -38,
     -38,     0,     0,     0,   -38,   -38,   -38,     0,   -38,   -38,
     -38,   -38,     0,     0,     0,     0,     0,     0,     0,     0,
     -38,   -38,     0,     0,     0,   -38,     0,     0,   -38,     0,
     -38,   -38,   -38,   -38,   -38,   -38,   -36,     0,   -36,   -36,
     -36,     0,   -36,   -36,   -36,     0,     0,     0,   -36,   -36,
     -36,     0,   -36,   -36,   -36,   -36,     0,     0,     0,     0,
       0,     0,     0,     0,   -36,   -36,     0,     0,     0,   -36,
       0,     0,   -36,     0,   -36,   -36,   -36,   -36,   -36,   -36,
     -37,     0,   -37,   -37,   -37,     0,   -37,   -37,   -37,     0,
       0,     0,   -37,   -37,   -37,     0,   -37,   -37,   -37,   -37,
       0,     0,     0,     0,     0,     0,     0,     0,   -37,   -37,
       0,     0,     0,   -37,     0,     0,   -37,     0,   -37,   -37,
     -37,   -37,   -37,   -37,   -35,     0,   -35,   -35,   -35,     0,
     -35,   -35,   -35,     0,     0,     0,   -35,   -35,   -35,     0,
     -35,   -35,   -35,   -35,     0,     0,     0,     0,     0,     0,
       0,     0,   -35,   -35,     0,     0,     0,   -35,     0,     0,
     -35,     0,   -35,   -35,   -35,   -35,   -35,   -35,   -22,     0,
     -22,   -22,   -22,     0,   -22,   -22,   -22,     0,     0,     0,
     -22,   -22,   -22,     0,   -22,   -22,   -22,   -22,     0,     0,
       0,     0,     0,     0,     0,     0,   -22,   -22,     0,     0,
       0,   -22,     0,     0,   -22,     0,   -22,   -22,   -22,   -22,
     -22,   -22,   -39,     0,   -39,   -39,   -39,     0,   -39,   -39,
     -39,     0,     0,     0,   -39,   -39,   -39,     0,   -39,   -39,
     -39,   -39,     0,     0,     0,     0,     0,     0,     0,     0,
     -39,   -39,     0,     0,     0,   -39,     0,     0,   -39,     0,
     -39,   -39,   -39,   -39,   -39,   -39,   -20,     0,   -20,   -20,
     -20,     0,   -20,   -20,   -20,     0,     0,     0,   -20,   -20,
     -20,     0,   -20,   -20,   -20,   -20,     0,     0,     0,     0,
       0,     0,     0,     0,   -20,   -20,     0,     0,     0,   -20,
       0,     0,   -20,     0,   -20,   -20,   -20,   -20,   -20,   -20,
     -21,     0,   -21,   -21,   -21,     0,   -21,   -21,   -21,     0,
       0,     0,   -21,   -21,   -21,     0,   -21,   -21,   -21,   -21,
       0,     0,     0,     0,     0,     0,     0,     0,   -21,   -21,
       0,     0,     0,   -21,     0,     0,   -21,     0,   -21,   -21,
     -21,   -21,   -21,   -21,   -24,     0,   -24,   -24,   -24,     0,
     -24,   -24,   -24,     0,     0,     0,   -24,   -24,   -24,     0,
     -24,   -24,    31,   -24,    32,     5,     6,     0,    33,    34,
      35,     0,   -24,   -24,    36,    37,    38,   -24,    39,    40,
     -24,    41,   -24,   -24,   -24,   -24,   -24,   -24,     0,     0,
      42,    43,     0,     0,     0,   -43,     0,     0,    44,     0,
     -25,    45,    46,    47,    48,    49,   -22,     0,   -22,   -22,
     -22,     0,   -22,   -22,   -22,     0,     0,     0,   -22,   -22,
     -22,     0,   -22,   -22,   -29,   -22,   -29,   -29,   -29,     0,
     -29,   -29,   -29,     0,   -22,   -22,   -29,   -29,   -29,   -22,
     -29,   -29,   -22,   -29,   -22,   -22,   -22,   -22,   -22,   -22,
       0,     0,   -29,   -29,     0,     0,     0,   -29,     0,     0,
     -29,     0,   -29,   -29,   -29,   -29,   -29,   -29,   -23,     0,
     -23,   -23,   -23,     0,   -23,   -23,   -23,     0,     0,     0,
     -23,   -23,   -23,     0,   -23,   -23,   -20,   -23,   -20,   -20,
     -20,     0,   -20,   -20,   -20,     0,   -23,   -23,   -20,   -20,
     -20,   -23,   -20,   -20,   -23,   -20,   -23,   -23,   -23,   -23,
     -23,   -23,     0,     0,   -20,   -20,     0,     0,     0,   -20,
       0,     0,   -20,     0,   -20,   -20,   -20,   -20,   -20,   -20,
     -21,     0,   -21,   -21,   -21,     0,   -21,   -21,   -21,     0,
       0,     0,   -21,   -21,   -21,     0,   -21,   -21,   -27,   -21,
     -27,   -27,   -27,     0,   -27,   -27,   -27,     0,   -21,   -21,
     -27,   -27,   -27,   -21,   -27,   -27,   -21,   -27,   -21,   -21,
     -21,   -21,   -21,   -21,     0,     0,   -27,   -27,     0,     0,
       0,   -27,     0,     0,   -27,     0,   -27,   -27,   -27,   -27,
     -27,   -27,   -28,     0,   -28,   -28,   -28,     0,   -28,   -28,
     -28,     0,     0,     0,   -28,   -28,   -28,     0,   -28,   -28,
     -31,   -28,   -31,   -31,   -31,     0,   -31,   -31,   -31,     0,
     -28,   -28,   -31,   -31,   -31,   -28,   -31,   -31,   -28,   -31,
     -28,   -28,   -28,   -28,   -28,   -28,     0,     0,   -31,   -31,
       0,     0,     0,   -31,     0,     0,   -31,     0,   -31,   -31,
     -31,   -31,   -31,   -31,   -30,     0,   -30,   -30,   -30,     0,
     -30,   -30,   -30,     0,     0,     0,   -30,   -30,   -30,     0,
     -30,   -30,   -32,   -30,   -32,   -32,   -32,     0,   -32,   -32,
     -32,     0,   -30,   -30,   -32,   -32,   -32,   -30,   -32,   -32,
     -30,   -32,   -30,   -30,   -30,   -30,   -30,   -30,     0,     0,
     -32,   -32,     0,     0,     0,   -32,     0,     0,   -32,     0,
     -32,   -32,   -32,   -32,   -32,   -32,   -80,     0,   -80,   -80,
     -80,     0,   -80,   -80,   -80,     0,     0,     0,   -80,   -80,
     -80,     0,   -80,   -80,    31,   -80,    32,     5,     6,     0,
      33,    34,    35,     0,   -80,   -80,    36,    37,    38,   -80,
      39,    40,   -80,    41,   -80,   -80,   -80,   -80,   -80,   -80,
       0,     0,    42,    43,     0,     0,     0,   -43,     0,     0,
      44,     0,   -25,   139,    46,    47,    48,    49,   -72,     0,
     -72,   -72,   -72,     0,   -72,   -72,   -72,     0,     0,     0,
     -72,   -72,   -72,     0,   -72,   -72,   -26,   -72,   -26,   -26,
     -26,     0,   -26,   -26,   -26,     0,   -72,   -72,   -26,   -26,
     -26,   -72,   -26,   -26,   -72,   -26,   -72,   -72,   -72,   -72,
     -72,   -72,     0,     0,   -26,   -26,     0,     0,     0,   -26,
       0,     0,   -26,     0,   -26,   -26,   -26,   -26,   -26,   -26,
     -38,     0,   -38,   -38,   -38,     0,   -38,   -38,   -38,     0,
       0,     0,   -38,   -38,   -38,     0,   -38,   -38,   -36,   -38,
     -36,   -36,   -36,     0,   -36,   -36,   -36,     0,   -38,   -38,
     -36,   -36,   -36,   -38,   -36,   -36,   -38,   -36,   -38,   -38,
     -38,   -38,   -38,   -38,     0,     0,   -36,   -36,     0,     0,
       0,   -36,     0,     0,   -36,     0,   -36,   -36,   -36,   -36,
     -36,   -36,   -37,     0,   -37,   -37,   -37,     0,   -37,   -37,
     -37,     0,     0,     0,   -37,   -37,   -37,     0,   -37,   -37,
     -35,   -37,   -35,   -35,   -35,     0,   -35,   -35,   -35,     0,
     -37,   -37,   -35,   -35,   -35,   -37,   -35,   -35,   -37,   -35,
     -37,   -37,   -37,   -37,   -37,   -37,     0,     0,   -35,   -35,
       0,     0,     0,   -35,     0,     0,   -35,     0,   -35,   -35,
     -35,   -35,   -35,   -35,   -39,     0,   -39,   -39,   -39,     0,
     -39,   -39,   -39,     0,     0,     0,   -39,   -39,   -39,     0,
     -39,   -39,    -9,   -39,    -9,    -9,    -9,     0,    -9,    -9,
      -9,     0,   -39,   -39,    -9,    -9,    -9,   -39,    -9,    -9,
     -39,    -9,   -39,   -39,   -39,   -39,   -39,   -39,     0,     0,
      -9,    -9,     0,     0,     0,    -9,     0,     0,    -9,     0,
      -9,    -9,    -9,    -9,    -9,    -9,    31,     0,    32,     5,
       6,     0,    33,    34,    35,     0,     0,     0,    36,    37,
      38,     0,    39,    40,    31,    41,    32,     5,     6,     0,
      33,    34,    35,     0,    42,    43,    36,    37,    38,   -43,
      39,    40,    44,    41,   -25,   341,    46,    47,    48,    49,
       0,     0,    42,    43,     0,     0,     0,   -43,     0,     0,
      44,     0,   -25,     0,    46,    47,    48,    49,   354,     0,
      32,     5,     6,     0,    33,    34,    35,     0,     0,     0,
      36,    37,    38,     0,   218,   219,     0,   220,    32,     5,
       6,     0,    33,    34,    35,     0,    42,    43,    36,    37,
      38,   -43,   218,   219,    44,   220,   -25,     0,    46,    47,
      48,    49,     0,     0,    42,    43,     0,     0,     0,   -43,
       0,     0,    44,     0,   -25,     0,    46,    47,    48,    49,
      32,     5,     6,     0,    33,    34,    35,     0,     0,     0,
      36,    37,    38,     0,    39,    40,     0,    41,     0,     0,
       0,     0,     0,     0,     0,     0,    42,    43,     0,     0,
       0,   -43,     0,     0,    44,     0,   -25,     0,    46,    47,
      48,    49,   -87,   -87,   -87,     0,     0,     0,     0,     0,
       0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -86,   -86,   -86,     0,
     -87,     0,     0,     0,     0,     0,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -89,   -89,   -89,     0,   -86,     0,     0,     0,     0,     0,
       0,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -57,   -57,   -57,     0,   -89,     0,
       0,     0,     0,     0,     0,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   -57,   -57,   279,   280,   -57,   -60,   -60,
     -60,     0,   -57,     0,     0,     0,     0,     0,     0,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -64,   -64,   -64,     0,   -60,     0,     0,     0,
       0,     0,     0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,   -64,   -64,   -64,   -63,   -63,   -63,     0,
     -64,     0,     0,     0,     0,     0,     0,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -67,   -67,   -67,     0,   -63,     0,     0,     0,     0,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,   -67,   -69,   -69,   -69,     0,   -67,     0,
       0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,   -68,   -68,
     -68,     0,   -69,     0,     0,     0,     0,     0,     0,   -68,
     -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -66,   -66,   -66,     0,   -68,     0,     0,     0,
       0,     0,     0,   -66,   -66,   -66,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -65,   -65,   -65,     0,
     -66,     0,     0,     0,     0,     0,     0,   -65,   -65,   -65,
     -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -71,   -71,   -71,     0,   -65,     0,     0,     0,     0,     0,
       0,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -74,   -74,   -74,     0,   -71,     0,
       0,     0,     0,     0,     0,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -58,   -58,
     -58,     0,   -74,     0,     0,     0,     0,     0,     0,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   -58,   279,
     280,   -58,   -59,   -59,   -59,     0,   -58,     0,     0,     0,
       0,     0,     0,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,   -59,   -59,   279,   280,   -59,   -61,   -61,   -61,     0,
     -59,     0,     0,     0,     0,     0,     0,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,
     -62,   -62,   -62,     0,   -61,     0,     0,     0,     0,     0,
       0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,   -75,   -75,   -75,     0,   -62,     0,
       0,     0,     0,     0,     0,   -75,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,   -76,   -76,
     -76,     0,   -75,     0,     0,     0,     0,     0,     0,   -76,
     -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -77,   -77,   -77,     0,   -76,     0,     0,     0,
       0,     0,     0,   -77,   -77,   -77,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -73,   -73,   -73,     0,
     -77,     0,     0,     0,     0,     0,     0,   -73,   -73,   -73,
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -88,   -88,   -88,     0,   -73,     0,     0,     0,     0,     0,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -87,   -87,   -87,     0,     0,   -88,     0,
       0,     0,     0,     0,   -87,   -87,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -86,   -86,   -86,     0,
       0,   -87,     0,     0,     0,     0,     0,   -86,   -86,   -86,
     -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -89,
     -89,   -89,     0,     0,   -86,     0,     0,     0,     0,     0,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,
     -89,   -89,   -57,   -57,   -57,     0,     0,   -89,     0,     0,
       0,     0,     0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,   -57,   -57,   253,   254,   -60,   -60,   -60,     0,     0,
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
     -58,   -58,   -58,   -58,   -58,   -58,   253,   254,   -59,   -59,
     -59,     0,     0,   -58,     0,     0,     0,     0,     0,   -59,
     -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   253,
     254,   -61,   -61,   -61,     0,     0,   -59,     0,     0,     0,
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
     -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   274,
     275,   276,     0,     0,   -73,     0,     0,     0,     0,     0,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   248,   249,
     250,     0,   -53,     0,     0,     0,     0,   -53,     0,   -52,
     -52,   -52,   -52,   -52,   -52,   -52,   -52,   248,   249,   250,
       0,     0,     0,     0,     0,     0,   -52,     0,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,   -55,   248,   249,   250,     0,
       0,     0,     0,     0,     0,   -55,     0,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,   -54,   248,   249,   250,     0,     0,
       0,     0,     0,     0,   -54,     0,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -70,   -70,   -70,     0,     0,     0,
       0,     0,     0,   -53,     0,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,   -70,   -70,     0,   -70,     0,
     -19,   -19,   -70,   -70,   -70,     0,     0,     0,     0,     0,
       0,     0,     0,   -70,   -70,   -70,   -70,   -70,   -70,   -70,
     -70,   -70,   -70,   -70,   -70,     0,   -70,     0,     0,   -19,
     -88,   -88,   -88,     0,     0,     0,     0,     0,     0,     0,
       0,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,     0,   -88,   -87,   -87,   -87,     0,     0,
       0,     0,     0,     0,     0,     0,   -87,   -87,   -87,   -87,
     -87,   -87,   -87,   -87,   -87,   -87,   -87,   -87,     0,   -87,
     -86,   -86,   -86,     0,     0,     0,     0,     0,     0,     0,
       0,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,   -86,
     -86,   -86,   -86,     0,   -86,   -89,   -89,   -89,     0,     0,
       0,     0,     0,     0,     0,     0,   -89,   -89,   -89,   -89,
     -89,   -89,   -89,   -89,   -89,   -89,   -89,   -89,     0,   -89,
     -57,   -57,   -57,     0,     0,     0,     0,     0,     0,     0,
       0,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,   -57,
     -57,    99,   100,     0,   -57,   -60,   -60,   -60,     0,     0,
       0,     0,     0,     0,     0,     0,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,     0,   -60,
     -64,   -64,   -64,     0,     0,     0,     0,     0,     0,     0,
       0,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,   -64,   -64,     0,   -64,   -63,   -63,   -63,     0,     0,
       0,     0,     0,     0,     0,     0,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,     0,   -63,
     -67,   -67,   -67,     0,     0,     0,     0,     0,     0,     0,
       0,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,   -67,
     -67,   -67,   -67,     0,   -67,   -69,   -69,   -69,     0,     0,
       0,     0,     0,     0,     0,     0,   -69,   -69,   -69,   -69,
     -69,   -69,   -69,   -69,   -69,   -69,   -69,   -69,     0,   -69,
     -68,   -68,   -68,     0,     0,     0,     0,     0,     0,     0,
       0,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,   -68,
     -68,   -68,   -68,     0,   -68,   -66,   -66,   -66,     0,     0,
       0,     0,     0,     0,     0,     0,   -66,   -66,   -66,   -66,
     -66,   -66,   -66,   -66,   -66,   -66,   -66,   -66,     0,   -66,
     -65,   -65,   -65,     0,     0,     0,     0,     0,     0,     0,
       0,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,   -65,
     -65,   -65,   -65,     0,   -65,   -71,   -71,   -71,     0,     0,
       0,     0,     0,     0,     0,     0,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,     0,   -71,
     -74,   -74,   -74,     0,     0,     0,     0,     0,     0,     0,
       0,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,   -74,
     -74,   -74,   -74,     0,   -74,   -58,   -58,   -58,     0,     0,
       0,     0,     0,     0,     0,     0,   -58,   -58,   -58,   -58,
     -58,   -58,   -58,   -58,   -58,   -58,    99,   100,     0,   -58,
     -59,   -59,   -59,     0,     0,     0,     0,     0,     0,     0,
       0,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,   -59,
     -59,    99,   100,     0,   -59,   -61,   -61,   -61,     0,     0,
       0,     0,     0,     0,     0,     0,   -61,   -61,   -61,   -61,
     -61,   -61,   -61,   -61,   -61,   -61,   -61,   -61,     0,   -61,
     -62,   -62,   -62,     0,     0,     0,     0,     0,     0,     0,
       0,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,     0,   -62,   -75,   -75,   -75,     0,     0,
       0,     0,     0,     0,     0,     0,   -75,   -75,   -75,   -75,
     -75,   -75,   -75,   -75,   -75,   -75,   -75,   -75,     0,   -75,
     -76,   -76,   -76,     0,     0,     0,     0,     0,     0,     0,
       0,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,   -76,
     -76,   -76,   -76,     0,   -76,   -77,   -77,   -77,     0,     0,
       0,     0,     0,     0,     0,     0,   -77,   -77,   -77,   -77,
     -77,   -77,   -77,   -77,   -77,   -77,   -77,   -77,     0,   -77,
     -73,   -73,   -73,     0,     0,     0,     0,     0,     0,     0,
       0,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,   -73,
     -73,   -73,   -73,     0,   -73,   -56,   -56,   -56,     0,     0,
       0,     0,     0,     0,     0,     0,   -56,   -56,   -56,   -56,
     -56,   -56,   -56,   -56,    97,    98,    94,    95,    96,   -56,
       0,     0,     0,     0,     0,     0,     0,   -55,   -55,   -55,
     -55,   -55,   -55,   -55,   -55,    94,    95,    96,     0,     0,
     -55,     0,     0,     0,     0,     0,   -54,   -54,   -54,   -54,
     -54,   -54,   -54,   -54,    94,    95,    96,     0,     0,   -54,
       0,     0,     0,     0,     0,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,     0,     0,     0,     0,     0,   -53,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,
       0,   -45,     0,     0,     0,     0,   -45,   -48,   -48,   -48,
     -48,   -48,   -48,   -48,   -48,     0,     0,     0,     0,   -48,
       0,     0,     0,     0,   -48,   -46,   -46,   212,   213,   -46,
     215,   216,   -46,     0,     0,     0,     0,   -46,     0,     0,
       0,     0,   -46,   -44,   -44,   -44,   -44,   -44,   -44,   -44,
     -44,     0,     0,     0,     0,   -44,     0,     0,     0,     0,
     -44,   -49,   -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,
       0,     0,     0,   -49,     0,     0,     0,     0,   -49,   -47,
     -47,   212,   213,   -47,   215,   216,   -47,     0,     0,     0,
       0,   -47,     0,     0,     0,     0,   -47,   181,   182,   183,
     184,   185,   186,   187,   188,   181,   182,   183,   184,   185,
     186,   187,   188,     0,   133,     0,     0,     0,     0,     0,
       0,     0,   -42,   181,   182,   183,   184,   185,   186,   187,
     188,   -50,   -50,   183,   184,   185,   186,   187,   188,     0,
     300,     0,     0,     0,     0,     0,     0,     0,   -50,   -51,
     -51,   183,   184,   185,   186,   187,   188,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,     0,   -51,     0,     0,     0,
       0,     0,     0,     0,   -45,   -48,   -48,   -48,   -48,   -48,
     -48,   -48,   -48,   -46,   -46,   183,   184,   -46,   186,   187,
     -46,     0,   -48,     0,     0,     0,     0,     0,     0,     0,
     -46,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -49,
     -49,   -49,   -49,   -49,   -49,   -49,   -49,     0,   -44,     0,
       0,     0,     0,     0,     0,     0,   -49,   -47,   -47,   183,
     184,   -47,   186,   187,   -47,   181,   182,   183,   184,   185,
     186,   187,   188,     0,   -47,     0,     0,     0,     0,     0,
       0,     0,   313,   181,   182,   183,   184,   185,   186,   187,
     188,   181,   182,   183,   184,   185,   186,   187,   188,     0,
     331,     0,     0,     0,     0,     0,     0,     0,   332,   181,
     182,   183,   184,   185,   186,   187,   188,   181,   182,   183,
     184,   185,   186,   187,   188,     0,   335,     0,     0,     0,
       0,     0,     0,     0,   336,   181,   182,   183,   184,   185,
     186,   187,   188,   181,   182,   183,   184,   185,   186,   187,
     188,     0,   338,     0,     0,     0,     0,     0,     0,     0,
     -40,   -50,   -50,    88,    89,    90,    91,    92,    93,     0,
       0,     0,     0,     0,   -50,   -51,   -51,    88,    89,    90,
      91,    92,    93,     0,     0,     0,     0,     0,   -51,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,   -45,     0,     0,     0,
       0,     0,   -45,   -48,   -48,   -48,   -48,   -48,   -48,   -48,
     -48,     0,     0,     0,     0,     0,   -48,   -46,   -46,    88,
      89,   -46,    91,    92,   -46,     0,     0,     0,     0,     0,
     -46,   -44,   -44,   -44,   -44,   -44,   -44,   -44,   -44,     0,
       0,     0,     0,     0,   -44,   -49,   -49,   -49,   -49,   -49,
     -49,   -49,   -49,     0,     0,     0,     0,     0,   -49,   -47,
     -47,    88,    89,   -47,    91,    92,   -47,     0,     0,     0,
       0,     0,   -47,    86,    87,    88,    89,    90,    91,    92,
      93,     0,     0,     0,     0,     0,   -40,    86,    87,    88,
      89,    90,    91,    92,    93,     0,     0,     0,     0,     0,
     323,    86,    87,    88,    89,    90,    91,    92,    93,     0,
       0,     0,     0,     0,   340
};

static const yytype_int16 yycheck[] =
{
       2,   153,     2,    51,     0,    84,    11,     4,     5,   133,
      33,   133,    33,   247,   133,    38,     3,    38,    20,     6,
     133,   145,   146,     3,    26,    30,   145,   146,    33,    34,
      35,     3,     2,    34,    39,    33,   133,    42,    43,   273,
      38,    38,     3,   135,    78,     6,   133,    10,    11,    12,
      20,    34,    33,     3,    37,   147,    26,    38,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    73,    33,
      33,    33,     3,    78,    38,    38,    38,    82,    83,     4,
       5,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,    36,    37,    33,   133,
      33,   135,   133,    38,    38,    38,    10,    11,    12,   114,
       0,     1,    39,   147,     4,     5,    37,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    37,   133,   134,
     135,   133,   137,   133,    38,    37,    34,    37,    33,    37,
     145,   146,   147,    38,    36,    37,    34,    34,   153,    37,
     155,   156,    37,     0,     1,     3,    37,     4,     5,     7,
       8,     9,    36,    37,    39,    13,    14,    15,     0,     1,
      36,    37,     4,     5,   222,     0,     1,    34,    37,     4,
       5,    29,    30,     3,    38,   190,   191,   192,    34,    37,
      38,   196,   197,    41,    42,    43,    44,    34,    34,   291,
      38,   353,     3,     3,    37,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   338,   294,   338,    38,    37,   338,
      37,   345,   346,   345,   346,   338,   345,   346,    37,   353,
      34,   353,   345,   346,   353,    37,   241,    34,    37,    37,
     353,   338,   247,    33,    34,    35,    37,   339,   345,   346,
      37,   338,    42,    43,    44,   347,   353,   291,   345,   346,
       0,     1,   267,    37,     4,     5,   353,    39,   273,   274,
     275,   276,   277,   278,   279,   280,    21,    22,    23,    24,
      25,    26,    27,    28,    74,    75,   291,    77,   293,    34,
       3,    38,    34,    83,     7,     8,     9,    34,    34,    38,
      13,    14,    15,    38,   338,   339,    34,   338,    34,    99,
     100,   345,   346,   347,   345,   346,    29,    30,    38,   353,
      26,    34,   353,   328,    37,    -1,    -1,    -1,    41,    42,
      43,    44,    -1,   338,   339,    -1,   338,    -1,   338,    -1,
     345,   346,   347,   345,   346,   345,   346,   137,   353,    -1,
      -1,   353,    -1,   353,    -1,    -1,    -1,   147,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,   159,
     160,   161,    34,    -1,    -1,   165,   166,   167,     3,    -1,
      -1,    -1,     7,     8,     9,    -1,    -1,    -1,    13,    14,
      15,   181,   182,   183,   184,   185,   186,   187,   188,    -1,
     190,   191,   192,    -1,    29,    30,   196,   197,   198,    -1,
       0,     1,    37,    38,     4,     5,    41,    42,    43,    44,
     210,   211,   212,   213,   214,   215,   216,   217,    10,    11,
      12,     0,     1,     0,     1,     4,     5,     4,     5,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,   242,   243,    -1,    37,    38,   247,   248,   249,
     250,   251,   252,   253,   254,    -1,    39,    -1,     0,     1,
      -1,    44,     4,     5,    -1,    -1,    -1,    -1,   268,   269,
      10,    11,    12,   273,   274,   275,   276,   277,   278,   279,
     280,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
     290,    74,    75,    33,    77,    -1,   296,    -1,    38,    82,
      83,    -1,    -1,    86,    87,    88,    89,    90,    91,    92,
      93,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,    -1,     7,     8,     9,    -1,    -1,    -1,    13,
      14,    15,    -1,    17,    18,    19,    20,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    29,    30,   347,    -1,    -1,
      34,   134,    -1,    37,   137,    39,    40,    41,    42,    43,
      44,    -1,    -1,    -1,   147,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    44,    33,    -1,
      -1,    -1,    -1,    38,   167,     3,    -1,    -1,    -1,     7,
       8,     9,    -1,    -1,    -1,    13,    14,    15,   181,   182,
     183,   184,   185,   186,   187,   188,    -1,    74,    75,    -1,
      77,    29,    30,    -1,    -1,   198,    83,    -1,    -1,    37,
      38,    -1,    -1,    41,    42,    43,    44,   210,   211,   212,
     213,   214,   215,   216,   217,   218,    -1,    -1,    10,    11,
      12,    21,    22,    23,    24,    25,    26,    27,    28,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    38,   242,
     243,    33,    -1,    -1,   247,    -1,    38,    -1,    -1,    -1,
     137,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
     147,    -1,    -1,    33,    -1,   268,   269,    -1,    38,    -1,
     273,    -1,   159,   160,   161,    -1,    -1,    -1,   165,   166,
     167,    -1,    -1,    -1,    -1,    -1,    -1,   290,    -1,    -1,
     293,    -1,    -1,   296,   181,   182,   183,   184,   185,   186,
     187,   188,    44,   190,   191,   192,    -1,    -1,    -1,   196,
     197,   198,    -1,    -1,    21,    22,    23,    24,    25,    26,
      27,    28,    -1,   210,   211,   212,   213,   214,   215,   216,
     217,    38,    74,    75,    -1,    77,    -1,    -1,    -1,    -1,
      -1,    83,    -1,    -1,   347,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,   242,   243,    -1,    34,    -1,
     247,   248,   249,   250,   251,   252,   253,   254,    -1,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,     7,     8,     9,
      -1,   268,   269,    13,    14,    15,   273,   274,   275,   276,
     277,   278,   279,   280,    -1,   137,    -1,    -1,    -1,    29,
      30,    -1,    -1,   290,    -1,   147,    -1,    37,    38,   296,
      -1,    41,    42,    43,    44,    -1,    -1,   159,   160,   161,
      -1,    -1,    -1,   165,   166,   167,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,   181,
     182,   183,   184,   185,   186,   187,   188,    38,   190,   191,
     192,    -1,    -1,     3,   196,   197,   198,     7,     8,     9,
     347,    -1,    -1,    13,    14,    15,    -1,    -1,   210,   211,
     212,   213,   214,   215,   216,   217,    -1,    -1,    -1,    29,
      30,    -1,    -1,    -1,    -1,    -1,    44,    37,    -1,    -1,
      -1,    41,    42,    43,    44,    -1,    -1,    -1,    -1,    -1,
     242,   243,    -1,    -1,    -1,   247,   248,   249,   250,   251,
     252,   253,   254,    -1,    -1,    -1,    74,    75,    -1,    77,
      -1,    -1,    -1,    -1,    -1,    83,   268,   269,    -1,    -1,
      -1,   273,   274,   275,   276,   277,   278,   279,   280,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   290,    -1,
      -1,    -1,    -1,    -1,   296,     1,    -1,     3,     4,     5,
      -1,     7,     8,     9,    -1,    -1,    -1,    13,    14,    15,
      -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,   137,
      -1,    -1,    -1,    29,    30,    -1,    -1,    -1,    34,   147,
      -1,    37,    -1,    39,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,   347,    -1,    -1,    -1,   167,
      -1,    44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      10,    11,    12,   181,   182,   183,   184,   185,   186,   187,
     188,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
     198,    74,    75,    33,    77,    -1,    -1,    -1,    38,    -1,
      83,    -1,   210,   211,   212,   213,   214,   215,   216,   217,
      -1,    94,    95,    96,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,   242,   243,    -1,    -1,    34,   247,
     248,   249,   250,   251,   252,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,   137,    -1,    -1,    33,    -1,    -1,
     268,   269,    38,    -1,   147,   273,   274,   275,   276,   277,
     278,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    -1,   290,    -1,   167,     3,    -1,    -1,   296,     7,
       8,     9,    -1,    -1,    -1,    13,    14,    15,   181,   182,
     183,   184,   185,   186,   187,   188,    -1,    74,    75,    -1,
      77,    29,    30,    -1,    -1,   198,    83,    -1,    -1,    37,
      -1,    -1,    -1,    41,    42,    43,    44,   210,   211,   212,
     213,   214,   215,   216,   217,    10,    11,    12,    -1,   347,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,   242,
     243,    36,    37,    38,   247,   248,   249,   250,    -1,    -1,
     137,     3,    -1,    -1,    -1,     7,     8,     9,    -1,    -1,
     147,    13,    14,    15,    -1,   268,   269,    -1,    -1,    -1,
     273,   274,   275,   276,    -1,    -1,    -1,    29,    30,    -1,
     167,    -1,    -1,    -1,    -1,    37,    -1,   290,    -1,    41,
      42,    43,    44,   296,   181,   182,   183,   184,   185,   186,
     187,   188,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,   198,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,
      10,    11,    12,   210,   211,   212,   213,   214,   215,   216,
     217,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,   347,    -1,    -1,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,   242,   243,    10,    11,    12,
     247,   248,   249,   250,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,   268,   269,    -1,    -1,    38,   273,   274,   275,   276,
      -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,    -1,
       7,     8,     9,   290,    -1,    -1,    13,    14,    15,   296,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30,    -1,    -1,    -1,    34,    -1,    -1,
      37,    -1,    39,    40,    41,    42,    43,    44,     1,    -1,
       3,     4,     5,    -1,     7,     8,     9,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
     347,    -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    -1,
      -1,    34,    -1,    -1,    37,    -1,    39,    40,    41,    42,
      43,    44,     1,    -1,     3,     4,     5,    -1,     7,     8,
       9,    -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,
      39,    40,    41,    42,    43,    44,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    -1,    -1,    -1,    13,    14,
      15,    -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,    34,
      -1,    -1,    37,    -1,    39,    40,    41,    42,    43,    44,
       1,    -1,     3,     4,     5,    -1,     7,     8,     9,    -1,
      -1,    -1,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
      -1,    -1,    -1,    34,    -1,    -1,    37,    -1,    39,    40,
      41,    42,    43,    44,     1,    -1,     3,     4,     5,    -1,
       7,     8,     9,    -1,    -1,    -1,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30,    -1,    -1,    -1,    34,    -1,    -1,
      37,    -1,    39,    40,    41,    42,    43,    44,     1,    -1,
       3,     4,     5,    -1,     7,     8,     9,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    -1,
      -1,    34,    -1,    -1,    37,    -1,    39,    40,    41,    42,
      43,    44,     1,    -1,     3,     4,     5,    -1,     7,     8,
       9,    -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,
      39,    40,    41,    42,    43,    44,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    -1,    -1,    -1,    13,    14,
      15,    -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,    34,
      -1,    -1,    37,    -1,    39,    40,    41,    42,    43,    44,
       1,    -1,     3,     4,     5,    -1,     7,     8,     9,    -1,
      -1,    -1,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
      -1,    -1,    -1,    34,    -1,    -1,    37,    -1,    39,    40,
      41,    42,    43,    44,     1,    -1,     3,     4,     5,    -1,
       7,     8,     9,    -1,    -1,    -1,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30,    -1,    -1,    -1,    34,    -1,    -1,
      37,    -1,    39,    40,    41,    42,    43,    44,     1,    -1,
       3,     4,     5,    -1,     7,     8,     9,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    -1,
      -1,    34,    -1,    -1,    37,    -1,    39,    40,    41,    42,
      43,    44,     1,    -1,     3,     4,     5,    -1,     7,     8,
       9,    -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,
      39,    40,    41,    42,    43,    44,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    -1,    -1,    -1,    13,    14,
      15,    -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,    34,
      -1,    -1,    37,    -1,    39,    40,    41,    42,    43,    44,
       1,    -1,     3,     4,     5,    -1,     7,     8,     9,    -1,
      -1,    -1,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
      -1,    -1,    -1,    34,    -1,    -1,    37,    -1,    39,    40,
      41,    42,    43,    44,     1,    -1,     3,     4,     5,    -1,
       7,     8,     9,    -1,    -1,    -1,    13,    14,    15,    -1,
      17,    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    29,    30,    -1,    -1,    -1,    34,    -1,    -1,
      37,    -1,    39,    40,    41,    42,    43,    44,     1,    -1,
       3,     4,     5,    -1,     7,     8,     9,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    18,    19,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    -1,
      -1,    34,    -1,    -1,    37,    -1,    39,    40,    41,    42,
      43,    44,     1,    -1,     3,     4,     5,    -1,     7,     8,
       9,    -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      29,    30,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,
      39,    40,    41,    42,    43,    44,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    -1,    -1,    -1,    13,    14,
      15,    -1,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    29,    30,    -1,    -1,    -1,    34,
      -1,    -1,    37,    -1,    39,    40,    41,    42,    43,    44,
       1,    -1,     3,     4,     5,    -1,     7,     8,     9,    -1,
      -1,    -1,    13,    14,    15,    -1,    17,    18,    19,    20,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    29,    30,
      -1,    -1,    -1,    34,    -1,    -1,    37,    -1,    39,    40,
      41,    42,    43,    44,     1,    -1,     3,     4,     5,    -1,
       7,     8,     9,    -1,    -1,    -1,    13,    14,    15,    -1,
      17,    18,     1,    20,     3,     4,     5,    -1,     7,     8,
       9,    -1,    29,    30,    13,    14,    15,    34,    17,    18,
      37,    20,    39,    40,    41,    42,    43,    44,    -1,    -1,
      29,    30,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,
      39,    40,    41,    42,    43,    44,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    -1,    -1,    -1,    13,    14,
      15,    -1,    17,    18,     1,    20,     3,     4,     5,    -1,
       7,     8,     9,    -1,    29,    30,    13,    14,    15,    34,
      17,    18,    37,    20,    39,    40,    41,    42,    43,    44,
      -1,    -1,    29,    30,    -1,    -1,    -1,    34,    -1,    -1,
      37,    -1,    39,    40,    41,    42,    43,    44,     1,    -1,
       3,     4,     5,    -1,     7,     8,     9,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    18,     1,    20,     3,     4,
       5,    -1,     7,     8,     9,    -1,    29,    30,    13,    14,
      15,    34,    17,    18,    37,    20,    39,    40,    41,    42,
      43,    44,    -1,    -1,    29,    30,    -1,    -1,    -1,    34,
      -1,    -1,    37,    -1,    39,    40,    41,    42,    43,    44,
       1,    -1,     3,     4,     5,    -1,     7,     8,     9,    -1,
      -1,    -1,    13,    14,    15,    -1,    17,    18,     1,    20,
       3,     4,     5,    -1,     7,     8,     9,    -1,    29,    30,
      13,    14,    15,    34,    17,    18,    37,    20,    39,    40,
      41,    42,    43,    44,    -1,    -1,    29,    30,    -1,    -1,
      -1,    34,    -1,    -1,    37,    -1,    39,    40,    41,    42,
      43,    44,     1,    -1,     3,     4,     5,    -1,     7,     8,
       9,    -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,
       1,    20,     3,     4,     5,    -1,     7,     8,     9,    -1,
      29,    30,    13,    14,    15,    34,    17,    18,    37,    20,
      39,    40,    41,    42,    43,    44,    -1,    -1,    29,    30,
      -1,    -1,    -1,    34,    -1,    -1,    37,    -1,    39,    40,
      41,    42,    43,    44,     1,    -1,     3,     4,     5,    -1,
       7,     8,     9,    -1,    -1,    -1,    13,    14,    15,    -1,
      17,    18,     1,    20,     3,     4,     5,    -1,     7,     8,
       9,    -1,    29,    30,    13,    14,    15,    34,    17,    18,
      37,    20,    39,    40,    41,    42,    43,    44,    -1,    -1,
      29,    30,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,
      39,    40,    41,    42,    43,    44,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    -1,    -1,    -1,    13,    14,
      15,    -1,    17,    18,     1,    20,     3,     4,     5,    -1,
       7,     8,     9,    -1,    29,    30,    13,    14,    15,    34,
      17,    18,    37,    20,    39,    40,    41,    42,    43,    44,
      -1,    -1,    29,    30,    -1,    -1,    -1,    34,    -1,    -1,
      37,    -1,    39,    40,    41,    42,    43,    44,     1,    -1,
       3,     4,     5,    -1,     7,     8,     9,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    18,     1,    20,     3,     4,
       5,    -1,     7,     8,     9,    -1,    29,    30,    13,    14,
      15,    34,    17,    18,    37,    20,    39,    40,    41,    42,
      43,    44,    -1,    -1,    29,    30,    -1,    -1,    -1,    34,
      -1,    -1,    37,    -1,    39,    40,    41,    42,    43,    44,
       1,    -1,     3,     4,     5,    -1,     7,     8,     9,    -1,
      -1,    -1,    13,    14,    15,    -1,    17,    18,     1,    20,
       3,     4,     5,    -1,     7,     8,     9,    -1,    29,    30,
      13,    14,    15,    34,    17,    18,    37,    20,    39,    40,
      41,    42,    43,    44,    -1,    -1,    29,    30,    -1,    -1,
      -1,    34,    -1,    -1,    37,    -1,    39,    40,    41,    42,
      43,    44,     1,    -1,     3,     4,     5,    -1,     7,     8,
       9,    -1,    -1,    -1,    13,    14,    15,    -1,    17,    18,
       1,    20,     3,     4,     5,    -1,     7,     8,     9,    -1,
      29,    30,    13,    14,    15,    34,    17,    18,    37,    20,
      39,    40,    41,    42,    43,    44,    -1,    -1,    29,    30,
      -1,    -1,    -1,    34,    -1,    -1,    37,    -1,    39,    40,
      41,    42,    43,    44,     1,    -1,     3,     4,     5,    -1,
       7,     8,     9,    -1,    -1,    -1,    13,    14,    15,    -1,
      17,    18,     1,    20,     3,     4,     5,    -1,     7,     8,
       9,    -1,    29,    30,    13,    14,    15,    34,    17,    18,
      37,    20,    39,    40,    41,    42,    43,    44,    -1,    -1,
      29,    30,    -1,    -1,    -1,    34,    -1,    -1,    37,    -1,
      39,    40,    41,    42,    43,    44,     1,    -1,     3,     4,
       5,    -1,     7,     8,     9,    -1,    -1,    -1,    13,    14,
      15,    -1,    17,    18,     1,    20,     3,     4,     5,    -1,
       7,     8,     9,    -1,    29,    30,    13,    14,    15,    34,
      17,    18,    37,    20,    39,    40,    41,    42,    43,    44,
      -1,    -1,    29,    30,    -1,    -1,    -1,    34,    -1,    -1,
      37,    -1,    39,    -1,    41,    42,    43,    44,     1,    -1,
       3,     4,     5,    -1,     7,     8,     9,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    18,    -1,    20,     3,     4,
       5,    -1,     7,     8,     9,    -1,    29,    30,    13,    14,
      15,    34,    17,    18,    37,    20,    39,    -1,    41,    42,
      43,    44,    -1,    -1,    29,    30,    -1,    -1,    -1,    34,
      -1,    -1,    37,    -1,    39,    -1,    41,    42,    43,    44,
       3,     4,     5,    -1,     7,     8,     9,    -1,    -1,    -1,
      13,    14,    15,    -1,    17,    18,    -1,    20,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    29,    30,    -1,    -1,
      -1,    34,    -1,    -1,    37,    -1,    39,    -1,    41,    42,
      43,    44,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    10,    11,    12,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      10,    11,    12,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    10,    11,    12,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    10,    11,
      12,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    10,    11,    12,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    10,    11,    12,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      10,    11,    12,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    10,    11,    12,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    10,    11,
      12,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    10,    11,    12,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    10,    11,    12,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      10,    11,    12,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    10,    11,    12,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    10,    11,
      12,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    10,    11,    12,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    10,    11,    12,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      10,    11,    12,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    10,    11,    12,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    10,    11,
      12,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    10,    11,    12,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    10,    11,    12,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      10,    11,    12,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    10,    11,    12,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    10,    11,    12,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    10,    11,
      12,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    10,    11,    12,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    10,    11,    12,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    10,    11,    12,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      10,    11,    12,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    10,    11,    12,    -1,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    10,    11,    12,    -1,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    10,
      11,    12,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    10,    11,
      12,    -1,    33,    -1,    -1,    -1,    -1,    38,    -1,    21,
      22,    23,    24,    25,    26,    27,    28,    10,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    21,    22,
      23,    24,    25,    26,    27,    28,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    10,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      36,    37,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    37,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    34,
      10,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    10,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    10,    11,    12,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    10,    11,    12,    -1,    -1,
      34,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    10,    11,    12,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    34,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    -1,    38,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    -1,    38,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,
      38,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    33,    -1,    -1,    -1,    -1,    38,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    -1,    38,    21,    22,    23,
      24,    25,    26,    27,    28,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    21,    22,    23,    24,    25,    26,    27,
      28,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    21,
      22,    23,    24,    25,    26,    27,    28,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    21,    22,    23,    24,    25,
      26,    27,    28,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    21,    22,    23,    24,    25,    26,    27,    28,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    21,    22,    23,
      24,    25,    26,    27,    28,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    38,    21,    22,    23,    24,    25,    26,    27,
      28,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    21,
      22,    23,    24,    25,    26,    27,    28,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    21,    22,    23,    24,    25,
      26,    27,    28,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    34,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    34,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    34,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    34,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      34,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    34,    21,    22,    23,    24,    25,
      26,    27,    28,    -1,    -1,    -1,    -1,    -1,    34,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    34,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    -1,    -1,    -1,    34,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,
      34,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    -1,    -1,    34
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    47,    48,     0,     1,     4,     5,    49,    50,    52,
      58,    78,    79,     6,     6,    51,    53,     3,    59,    34,
      37,    55,    56,    57,    58,    38,    33,    39,    54,    57,
      61,     1,     3,     7,     8,     9,    13,    14,    15,    17,
      18,    20,    29,    30,    37,    40,    41,    42,    43,    44,
      50,    58,    59,    60,    62,    63,    64,    65,    66,    68,
      69,    70,    71,    72,    73,    74,    75,    77,    80,    59,
      73,    73,    73,    37,    37,    37,    69,    37,    37,    73,
      73,    69,    36,    37,    39,    34,    21,    22,    23,    24,
      25,    26,    27,    28,    10,    11,    12,    29,    30,    31,
      32,    59,    69,    69,    34,    69,    59,    67,    68,    38,
      69,    38,    69,    76,    61,    69,    69,    69,    69,    69,
      69,    69,    69,    70,    70,    70,    72,    72,    73,    73,
      38,    38,    38,    38,    36,    34,    34,    33,    38,    40,
      62,    64,    69,    67,    69,    19,    19,    34,    62,    64,
      62,    64,    67,    38,    60,    78,    78,     3,     3,     7,
       8,     9,    13,    14,    15,    29,    30,    37,    41,    42,
      43,    44,    59,    70,    71,    72,    73,    75,    80,    51,
       3,    21,    22,    23,    24,    25,    26,    27,    28,     3,
       7,     8,     9,    13,    14,    15,    29,    30,    37,    41,
      42,    43,    44,    59,    70,    71,    72,    73,    75,    80,
      21,    22,    23,    24,    25,    26,    27,    28,    17,    18,
      20,    50,    58,    59,    63,    65,    66,    68,    74,    77,
       3,    59,    68,    69,     3,    59,     3,    59,    73,    73,
      73,    37,    37,    37,    73,    73,    69,    37,    10,    11,
      12,    29,    30,    31,    32,    34,    69,    69,    69,    69,
      69,    69,    69,    69,    73,    73,    73,    37,    37,    37,
      73,    73,    69,    37,    10,    11,    12,    29,    30,    31,
      32,    69,    69,    69,    69,    69,    69,    69,    69,    69,
      37,    37,    51,    36,    39,    34,    36,    59,    69,    69,
      38,    38,    76,    70,    70,    70,    72,    72,    73,    73,
      59,    69,    69,    38,    38,    76,    70,    70,    70,    72,
      72,    73,    73,    34,    69,    67,    34,    69,    61,    69,
      38,    38,    38,    38,    38,    38,    38,    38,    38,    34,
      34,    40,    62,    64,    67,    19,    19,    34,    62,    64,
      62,    64,    67,    38,     1,    60,    62,    64
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    48,    48,    49,    49,    49,    51,    50,
      53,    52,    54,    55,    55,    56,    56,    57,    58,    59,
      60,    60,    60,    61,    61,    63,    62,    64,    64,    64,
      64,    64,    64,    65,    65,    65,    65,    65,    65,    66,
      67,    67,    68,    68,    69,    69,    69,    69,    69,    69,
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
       1,     1,     2,     5,     5,     7,     7,     7,     7,     9,
       3,     1,     1,     0,     3,     3,     3,     3,     3,     3,
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
#line 81 "src/sintatico.y"
                             {
		ast = (yyval.node);
		(yyval.node) = (yyvsp[0].node);
	}
#line 2909 "src/sintatico.tab.c"
    break;

  case 3: /* lista_de_declaracoes: lista_de_declaracoes declaracao  */
#line 88 "src/sintatico.y"
                                          {
		(yyval.node) = novo_node("lista_de_declaracoes", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 2919 "src/sintatico.tab.c"
    break;

  case 4: /* lista_de_declaracoes: %empty  */
#line 93 "src/sintatico.y"
                 {
		(yyval.node) = (t_node*)0;
	}
#line 2927 "src/sintatico.tab.c"
    break;

  case 5: /* declaracao: declaracao_de_variavel  */
#line 99 "src/sintatico.y"
                                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2935 "src/sintatico.tab.c"
    break;

  case 6: /* declaracao: declaracao_de_funcao  */
#line 102 "src/sintatico.y"
                               {
		(yyval.node) = (yyvsp[0].node);
	}
#line 2943 "src/sintatico.tab.c"
    break;

  case 7: /* declaracao: error  */
#line 105 "src/sintatico.y"
                {
		yyerrok;
	}
#line 2951 "src/sintatico.tab.c"
    break;

  case 8: /* $@1: %empty  */
#line 111 "src/sintatico.y"
                            {
			var_ou_func_atual = "Variavel";
			incrementa_tabela(nome_id_atual);
		}
#line 2960 "src/sintatico.tab.c"
    break;

  case 9: /* declaracao_de_variavel: tipo_de_variavel_id $@1 PONTO_VIRGULA  */
#line 114 "src/sintatico.y"
                                {
		(yyval.node) = novo_node("declaracao_de_variavel", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 2969 "src/sintatico.tab.c"
    break;

  case 10: /* $@2: %empty  */
#line 122 "src/sintatico.y"
                              {
		  var_ou_func_atual = "funcao";
		  incrementa_tabela(nome_id_atual);
		  incrementa_escopo();
	  }
#line 2979 "src/sintatico.tab.c"
    break;

  case 11: /* declaracao_de_funcao: tipo_de_variavel_id $@2 ABRE_PARENTESES parametros FECHA_PARENTESES definicao_de_funcao  */
#line 126 "src/sintatico.y"
                                                                            {
		(yyval.node) = novo_node("declaracao_de_funcao", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), (yyvsp[-5].node));
	  }
#line 2990 "src/sintatico.tab.c"
    break;

  case 12: /* definicao_de_funcao: ABRE_CHAVES comandos FECHA_CHAVES  */
#line 135 "src/sintatico.y"
                                          {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 2998 "src/sintatico.tab.c"
    break;

  case 13: /* parametros: lista_de_parametros  */
#line 141 "src/sintatico.y"
                              {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3006 "src/sintatico.tab.c"
    break;

  case 14: /* parametros: %empty  */
#line 144 "src/sintatico.y"
                 {
		(yyval.node) = (t_node*)0;
	}
#line 3014 "src/sintatico.tab.c"
    break;

  case 15: /* lista_de_parametros: lista_de_parametros VIRGULA parametro  */
#line 150 "src/sintatico.y"
                                                {
		(yyval.node) = novo_node("lista_de_parametros", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3024 "src/sintatico.tab.c"
    break;

  case 16: /* lista_de_parametros: parametro  */
#line 155 "src/sintatico.y"
                    {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3032 "src/sintatico.tab.c"
    break;

  case 17: /* parametro: tipo_de_variavel_id  */
#line 161 "src/sintatico.y"
                              {
		(yyval.node) = novo_node("parametro", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));

		var_ou_func_atual = "Variavel (parametro)";
		incrementa_tabela(nome_id_atual);
	  }
#line 3044 "src/sintatico.tab.c"
    break;

  case 18: /* tipo_de_variavel_id: tipo_de_variavel id  */
#line 171 "src/sintatico.y"
                            {
		(yyval.node) = novo_node(nome_tipo_atual, yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3053 "src/sintatico.tab.c"
    break;

  case 19: /* id: ID  */
#line 178 "src/sintatico.y"
           {
		(yyval.node) = novo_node(nome_id_atual, yylineno, coluna);
	}
#line 3061 "src/sintatico.tab.c"
    break;

  case 20: /* comando: bloco_de_comando  */
#line 184 "src/sintatico.y"
                          {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3069 "src/sintatico.tab.c"
    break;

  case 21: /* comando: comando_unico  */
#line 187 "src/sintatico.y"
                        {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3077 "src/sintatico.tab.c"
    break;

  case 22: /* comando: error  */
#line 190 "src/sintatico.y"
                {
		yyerrok;
	}
#line 3085 "src/sintatico.tab.c"
    break;

  case 23: /* comandos: comandos comando  */
#line 196 "src/sintatico.y"
                           {
		(yyval.node) = novo_node("comandos", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3095 "src/sintatico.tab.c"
    break;

  case 24: /* comandos: %empty  */
#line 201 "src/sintatico.y"
             {
		(yyval.node) = (t_node*)0;
	}
#line 3103 "src/sintatico.tab.c"
    break;

  case 25: /* $@3: %empty  */
#line 207 "src/sintatico.y"
         {incrementa_escopo();}
#line 3109 "src/sintatico.tab.c"
    break;

  case 26: /* bloco_de_comando: $@3 ABRE_CHAVES comandos FECHA_CHAVES  */
#line 207 "src/sintatico.y"
                                                                  {
		(yyval.node) = novo_node("BLOCO", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3118 "src/sintatico.tab.c"
    break;

  case 27: /* comando_unico: comando_condicional  */
#line 214 "src/sintatico.y"
                            {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3126 "src/sintatico.tab.c"
    break;

  case 28: /* comando_unico: comando_iterativo  */
#line 217 "src/sintatico.y"
                            {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3134 "src/sintatico.tab.c"
    break;

  case 29: /* comando_unico: declaracao_de_variavel  */
#line 220 "src/sintatico.y"
                                 {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3142 "src/sintatico.tab.c"
    break;

  case 30: /* comando_unico: chamada_de_retorno  */
#line 223 "src/sintatico.y"
                             {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3150 "src/sintatico.tab.c"
    break;

  case 31: /* comando_unico: comando_de_atribuicao  */
#line 226 "src/sintatico.y"
                                {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3158 "src/sintatico.tab.c"
    break;

  case 32: /* comando_unico: exp_or_empty PONTO_VIRGULA  */
#line 229 "src/sintatico.y"
                                     {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 3166 "src/sintatico.tab.c"
    break;

  case 33: /* comando_condicional: IF ABRE_PARENTESES exp FECHA_PARENTESES comando_unico  */
#line 235 "src/sintatico.y"
                                                                             {
		(yyval.node) = novo_node("IF", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3176 "src/sintatico.tab.c"
    break;

  case 34: /* comando_condicional: IF ABRE_PARENTESES exp FECHA_PARENTESES bloco_de_comando  */
#line 240 "src/sintatico.y"
                                                                                {
		(yyval.node) = novo_node("IF", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3186 "src/sintatico.tab.c"
    break;

  case 35: /* comando_condicional: IF ABRE_PARENTESES exp FECHA_PARENTESES comando_unico ELSE comando_unico  */
#line 245 "src/sintatico.y"
                                                                                   {
		(yyval.node) = novo_node("IF_ELSE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), (yyvsp[-4].node));
	}
#line 3197 "src/sintatico.tab.c"
    break;

  case 36: /* comando_condicional: IF ABRE_PARENTESES exp FECHA_PARENTESES bloco_de_comando ELSE comando_unico  */
#line 251 "src/sintatico.y"
                                                                                      {
		(yyval.node) = novo_node("IF_ELSE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), (yyvsp[-4].node));
	}
#line 3208 "src/sintatico.tab.c"
    break;

  case 37: /* comando_condicional: IF ABRE_PARENTESES exp FECHA_PARENTESES comando_unico ELSE bloco_de_comando  */
#line 257 "src/sintatico.y"
                                                                                      {
		(yyval.node) = novo_node("IF_ELSE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), (yyvsp[-4].node));
	}
#line 3219 "src/sintatico.tab.c"
    break;

  case 38: /* comando_condicional: IF ABRE_PARENTESES exp FECHA_PARENTESES bloco_de_comando ELSE bloco_de_comando  */
#line 263 "src/sintatico.y"
                                                                                         {
		(yyval.node) = novo_node("IF_ELSE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), (yyvsp[-4].node));
	}
#line 3230 "src/sintatico.tab.c"
    break;

  case 39: /* comando_iterativo: FOR ABRE_PARENTESES expressao_for PONTO_VIRGULA expressao_for PONTO_VIRGULA expressao_for FECHA_PARENTESES comando  */
#line 272 "src/sintatico.y"
                                                                                                                             {
		(yyval.node) = novo_node("FOR", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		coloca_node_filho((yyval.node), (yyvsp[-4].node));
		coloca_node_filho((yyval.node), (yyvsp[-6].node));
	}
#line 3242 "src/sintatico.tab.c"
    break;

  case 40: /* expressao_for: id ATRIB exp  */
#line 282 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("ATRIB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3252 "src/sintatico.tab.c"
    break;

  case 41: /* expressao_for: exp_or_empty  */
#line 287 "src/sintatico.y"
                       {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3260 "src/sintatico.tab.c"
    break;

  case 42: /* exp_or_empty: exp  */
#line 293 "src/sintatico.y"
            {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3268 "src/sintatico.tab.c"
    break;

  case 43: /* exp_or_empty: %empty  */
#line 296 "src/sintatico.y"
                 {
		(yyval.node) = (t_node*)0;
	}
#line 3276 "src/sintatico.tab.c"
    break;

  case 44: /* exp: exp GT exp  */
#line 302 "src/sintatico.y"
                    {
		(yyval.node) = novo_node("GT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3286 "src/sintatico.tab.c"
    break;

  case 45: /* exp: exp LT exp  */
#line 307 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("LT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3296 "src/sintatico.tab.c"
    break;

  case 46: /* exp: exp EQ exp  */
#line 312 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("EQ", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3306 "src/sintatico.tab.c"
    break;

  case 47: /* exp: exp NE exp  */
#line 317 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("NE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3316 "src/sintatico.tab.c"
    break;

  case 48: /* exp: exp LE exp  */
#line 322 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("LE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3326 "src/sintatico.tab.c"
    break;

  case 49: /* exp: exp GE exp  */
#line 327 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("GE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3336 "src/sintatico.tab.c"
    break;

  case 50: /* exp: exp AND exp  */
#line 332 "src/sintatico.y"
                      {
		(yyval.node) = novo_node("AND", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3346 "src/sintatico.tab.c"
    break;

  case 51: /* exp: exp OR exp  */
#line 337 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("OR", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3356 "src/sintatico.tab.c"
    break;

  case 52: /* exp: exp_list  */
#line 342 "src/sintatico.y"
                   {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3364 "src/sintatico.tab.c"
    break;

  case 53: /* exp_list: exp_list CONSTRUTOR exp_list  */
#line 348 "src/sintatico.y"
                                     {
		(yyval.node) = novo_node("CONSTRUTOR", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3374 "src/sintatico.tab.c"
    break;

  case 54: /* exp_list: exp_list FILTER exp_list  */
#line 353 "src/sintatico.y"
                                   {
		(yyval.node) = novo_node("FILTER", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3384 "src/sintatico.tab.c"
    break;

  case 55: /* exp_list: exp_list MAP exp_list  */
#line 358 "src/sintatico.y"
                                {
		(yyval.node) = novo_node("MAP", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3394 "src/sintatico.tab.c"
    break;

  case 56: /* exp_list: exp_aritmetica  */
#line 363 "src/sintatico.y"
                         {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3402 "src/sintatico.tab.c"
    break;

  case 57: /* exp_aritmetica: termo  */
#line 370 "src/sintatico.y"
              {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3410 "src/sintatico.tab.c"
    break;

  case 58: /* exp_aritmetica: exp_aritmetica SOMA termo  */
#line 373 "src/sintatico.y"
                                    {
		(yyval.node) = novo_node("SOMA", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3420 "src/sintatico.tab.c"
    break;

  case 59: /* exp_aritmetica: exp_aritmetica SUB termo  */
#line 378 "src/sintatico.y"
                                   {
		(yyval.node) = novo_node("SUB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3430 "src/sintatico.tab.c"
    break;

  case 60: /* termo: fator  */
#line 386 "src/sintatico.y"
              {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3438 "src/sintatico.tab.c"
    break;

  case 61: /* termo: termo MULT fator  */
#line 389 "src/sintatico.y"
                           {
		(yyval.node) = novo_node("MULT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3448 "src/sintatico.tab.c"
    break;

  case 62: /* termo: termo DIV fator  */
#line 394 "src/sintatico.y"
                          {
		(yyval.node) = novo_node("DIV", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
	}
#line 3458 "src/sintatico.tab.c"
    break;

  case 63: /* fator: constante  */
#line 402 "src/sintatico.y"
                  {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3466 "src/sintatico.tab.c"
    break;

  case 64: /* fator: func_call_exp  */
#line 405 "src/sintatico.y"
                        {
		(yyval.node) = (yyvsp[0].node);
	}
#line 3474 "src/sintatico.tab.c"
    break;

  case 65: /* fator: SUB fator  */
#line 408 "src/sintatico.y"
                    {
		(yyval.node) = novo_node("SUB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3483 "src/sintatico.tab.c"
    break;

  case 66: /* fator: SOMA fator  */
#line 412 "src/sintatico.y"
                     {
		(yyval.node) = novo_node("SOMA", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3492 "src/sintatico.tab.c"
    break;

  case 67: /* fator: TAIL_OR_NOT fator  */
#line 416 "src/sintatico.y"
                            {
		(yyval.node) = novo_node("TAIL_NOT", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3501 "src/sintatico.tab.c"
    break;

  case 68: /* fator: TAIL_POP fator  */
#line 420 "src/sintatico.y"
                         {
		(yyval.node) = novo_node("TAIL_POP", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3510 "src/sintatico.tab.c"
    break;

  case 69: /* fator: HEADER fator  */
#line 424 "src/sintatico.y"
                       {
		(yyval.node) = novo_node("HEADER", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
	}
#line 3519 "src/sintatico.tab.c"
    break;

  case 70: /* fator: ID  */
#line 428 "src/sintatico.y"
             {
		t_simbolo *token;
		token = verifica_contexto(nome_id_atual);
		(yyval.node) = novo_node(nome_id_atual, yylineno, coluna);
		(yyval.node)->token = token;
	}
#line 3530 "src/sintatico.tab.c"
    break;

  case 71: /* fator: ABRE_PARENTESES exp FECHA_PARENTESES  */
#line 434 "src/sintatico.y"
                                               {
		(yyval.node) = (yyvsp[-1].node);
	}
#line 3538 "src/sintatico.tab.c"
    break;

  case 72: /* comando_de_atribuicao: id ATRIB exp PONTO_VIRGULA  */
#line 441 "src/sintatico.y"
                               {
		t_simbolo *token;
		token = verifica_contexto((yyvsp[-3].node)->nome);
		(yyval.node) = novo_node("ATRIB", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
		coloca_node_filho((yyval.node), (yyvsp[-3].node));
		(yyval.node)->token = token;
	}
#line 3551 "src/sintatico.tab.c"
    break;

  case 73: /* func_call_exp: id ABRE_PARENTESES func_call_parameters FECHA_PARENTESES  */
#line 452 "src/sintatico.y"
                                                                   {
		t_simbolo *token;
		token = verifica_contexto((yyvsp[-3].node)->nome);
		(yyval.node) = novo_node("func_call_exp", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
		coloca_node_filho((yyval.node), (yyvsp[-3].node));
		(yyval.node)->token = token;

		verifica_qnt_parametros_chamada_func((yyvsp[-3].node)->nome);
		num_parametros_chamada_func = 0;
	}
#line 3567 "src/sintatico.tab.c"
    break;

  case 74: /* func_call_exp: id ABRE_PARENTESES FECHA_PARENTESES  */
#line 463 "src/sintatico.y"
                                               {
		t_simbolo *token;
		token = verifica_contexto((yyvsp[-2].node)->nome);
		(yyval.node) = novo_node("func_call_exp", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[-2].node));
		(yyval.node)->token = token;

		verifica_qnt_parametros_chamada_func((yyvsp[-2].node)->nome);
		num_parametros_chamada_func = 0;
	}
#line 3582 "src/sintatico.tab.c"
    break;

  case 75: /* func_call_exp: READ ABRE_PARENTESES id FECHA_PARENTESES  */
#line 473 "src/sintatico.y"
                                                    {
		t_simbolo *token;
		token = verifica_contexto((yyvsp[-1].node)->nome);
		(yyval.node) = novo_node("READ", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
		(yyval.node)->token = token;
	}
#line 3594 "src/sintatico.tab.c"
    break;

  case 76: /* func_call_exp: WRITE ABRE_PARENTESES exp FECHA_PARENTESES  */
#line 480 "src/sintatico.y"
                                                      {
		(yyval.node) = novo_node("WRITE", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3603 "src/sintatico.tab.c"
    break;

  case 77: /* func_call_exp: WRITELN ABRE_PARENTESES exp FECHA_PARENTESES  */
#line 484 "src/sintatico.y"
                                                        {
		(yyval.node) = novo_node("WRITELN", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3612 "src/sintatico.tab.c"
    break;

  case 78: /* func_call_parameters: func_call_parameters VIRGULA exp  */
#line 491 "src/sintatico.y"
                                         {
		(yyval.node) = novo_node("lista_de_expressao", -1, -1);
		coloca_node_filho((yyval.node), (yyvsp[0].node));
		coloca_node_filho((yyval.node), (yyvsp[-2].node));

		num_parametros_chamada_func++;
	}
#line 3624 "src/sintatico.tab.c"
    break;

  case 79: /* func_call_parameters: exp  */
#line 498 "src/sintatico.y"
              {
		(yyval.node) = (yyvsp[0].node);

		num_parametros_chamada_func++;
		// $$ = novo_node("lista_de_parametros", -1, -1);
		// coloca_node_filho($$, $1);
	}
#line 3636 "src/sintatico.tab.c"
    break;

  case 80: /* chamada_de_retorno: RETURN exp PONTO_VIRGULA  */
#line 509 "src/sintatico.y"
                                 {
		(yyval.node) = novo_node("RETURN", yylineno, coluna);
		coloca_node_filho((yyval.node), (yyvsp[-1].node));
	}
#line 3645 "src/sintatico.tab.c"
    break;

  case 86: /* constante: INTEGER_CONST  */
#line 528 "src/sintatico.y"
                      {
		(yyval.node) = novo_node("INTEGER_CONST", yylineno, coluna);
	}
#line 3653 "src/sintatico.tab.c"
    break;

  case 87: /* constante: FLOAT_CONST  */
#line 531 "src/sintatico.y"
                      {
		(yyval.node) = novo_node("FLOAT_CONST", yylineno, coluna);
	}
#line 3661 "src/sintatico.tab.c"
    break;

  case 88: /* constante: CONSTANTE_NIL  */
#line 534 "src/sintatico.y"
                        {
		(yyval.node) = novo_node("CONSTANTE_NIL", yylineno, coluna);
	}
#line 3669 "src/sintatico.tab.c"
    break;

  case 89: /* constante: STRING_LITERAL  */
#line 537 "src/sintatico.y"
                         {
		(yyval.node) = novo_node("STRING_LITERAL", yylineno, coluna);
	}
#line 3677 "src/sintatico.tab.c"
    break;


#line 3681 "src/sintatico.tab.c"

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

#line 543 "src/sintatico.y"


int yyerror (const char* s) {
	contador_erro++;
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

	if(contador_erro == 0) {
		fprintf (stderr, GRN"\nNenhum erro encontrado\n\n"reset);
		// TAC file
		char *end = argv[1] + strlen(argv[1]);
		while (end > argv[1] && *end != '.') --end;
		if (end > argv[1]) *end = '\0';
		tac_output_file = fopen(strcat(argv[1], ".tac"), "w");
		gera_codigo_intermediario();
		fclose(tac_output_file);
	} else {
		fprintf (stderr, RED"\nTotal de %d erros (ver inicio do log)\n\n"reset, contador_erro);
	}


	fclose(yyin);
	yylex_destroy();
	destroi_tabela_simbolos();
	destroi_arvore_escopo();
	destroi_arvore(ast);
	
	return 0;
}
