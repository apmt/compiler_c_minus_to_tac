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
    TAIL_OR_NOT = 262,             /* TAIL_OR_NOT  */
    HEADER = 263,                  /* HEADER  */
    TAIL_POP = 264,                /* TAIL_POP  */
    MAP = 265,                     /* MAP  */
    FILTER = 266,                  /* FILTER  */
    CONSTRUTOR = 267,              /* CONSTRUTOR  */
    READ = 268,                    /* READ  */
    WRITE = 269,                   /* WRITE  */
    WRITELN = 270,                 /* WRITELN  */
    MAIN = 271,                    /* MAIN  */
    RETURN = 272,                  /* RETURN  */
    IF = 273,                      /* IF  */
    ELSE = 274,                    /* ELSE  */
    FOR = 275,                     /* FOR  */
    AND = 276,                     /* AND  */
    OR = 277,                      /* OR  */
    LT = 278,                      /* LT  */
    LE = 279,                      /* LE  */
    EQ = 280,                      /* EQ  */
    GT = 281,                      /* GT  */
    GE = 282,                      /* GE  */
    NE = 283,                      /* NE  */
    SOMA = 284,                    /* SOMA  */
    SUB = 285,                     /* SUB  */
    MULT = 286,                    /* MULT  */
    DIV = 287,                     /* DIV  */
    VIRGULA = 288,                 /* VIRGULA  */
    PONTO_VIRGULA = 289,           /* PONTO_VIRGULA  */
    ASPA_SIMPLES = 290,            /* ASPA_SIMPLES  */
    ATRIB = 291,                   /* ATRIB  */
    ABRE_PARENTESES = 292,         /* ABRE_PARENTESES  */
    FECHA_PARENTESES = 293,        /* FECHA_PARENTESES  */
    ABRE_CHAVES = 294,             /* ABRE_CHAVES  */
    FECHA_CHAVES = 295,            /* FECHA_CHAVES  */
    CONSTANTE_NIL = 296,           /* CONSTANTE_NIL  */
    FLOAT_CONST = 297,             /* FLOAT_CONST  */
    INTEGER_CONST = 298,           /* INTEGER_CONST  */
    STRING_LITERAL = 299           /* STRING_LITERAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 26 "src/sintatico.y"

	struct t_node* node;

#line 112 "lib/sintatico.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_LIB_SINTATICO_TAB_H_INCLUDED  */
