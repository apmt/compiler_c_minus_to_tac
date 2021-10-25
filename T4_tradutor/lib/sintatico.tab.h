/* A Bison parser, made by GNU Bison 3.7.5.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_LIB_SINTATICO_TAB_H_INCLUDED
# define YY_YY_LIB_SINTATICO_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    ID = 258,                      /* ID  */
    INT = 259,                     /* INT  */
    FLOAT = 260,                   /* FLOAT  */
    LIST = 261,                    /* LIST  */
    CONSTANTE_NIL = 262,           /* CONSTANTE_NIL  */
    TAIL_OR_NOT = 263,             /* TAIL_OR_NOT  */
    HEADER = 264,                  /* HEADER  */
    TAIL_POP = 265,                /* TAIL_POP  */
    MAP = 266,                     /* MAP  */
    FILTER = 267,                  /* FILTER  */
    CONSTRUTOR = 268,              /* CONSTRUTOR  */
    READ = 269,                    /* READ  */
    WRITE = 270,                   /* WRITE  */
    WRITELN = 271,                 /* WRITELN  */
    MAIN = 272,                    /* MAIN  */
    RETURN = 273,                  /* RETURN  */
    IF = 274,                      /* IF  */
    ELSE = 275,                    /* ELSE  */
    FOR = 276,                     /* FOR  */
    AND = 277,                     /* AND  */
    OR = 278,                      /* OR  */
    LT = 279,                      /* LT  */
    LE = 280,                      /* LE  */
    EQ = 281,                      /* EQ  */
    GT = 282,                      /* GT  */
    GE = 283,                      /* GE  */
    NE = 284,                      /* NE  */
    SOMA = 285,                    /* SOMA  */
    SUB = 286,                     /* SUB  */
    MULT = 287,                    /* MULT  */
    DIV = 288,                     /* DIV  */
    VIRGULA = 289,                 /* VIRGULA  */
    PONTO_VIRGULA = 290,           /* PONTO_VIRGULA  */
    ASPA_SIMPLES = 291,            /* ASPA_SIMPLES  */
    ATRIB = 292,                   /* ATRIB  */
    ABRE_PARENTESES = 293,         /* ABRE_PARENTESES  */
    FECHA_PARENTESES = 294,        /* FECHA_PARENTESES  */
    ABRE_CHAVES = 295,             /* ABRE_CHAVES  */
    FECHA_CHAVES = 296,            /* FECHA_CHAVES  */
    FLOAT_CONST = 297,             /* FLOAT_CONST  */
    INTEGER_CONST = 298,           /* INTEGER_CONST  */
    STRING_LITERAL = 299,          /* STRING_LITERAL  */
    STRING = 300                   /* STRING  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 26 "src/sintatico.y"

	struct t_node* node;

#line 113 "lib/sintatico.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_LIB_SINTATICO_TAB_H_INCLUDED  */
