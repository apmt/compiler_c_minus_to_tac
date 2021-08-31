/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison interface for Yacc-like parsers in C

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    SET = 261,
    ELEM = 262,
    EMPTY = 263,
    IN = 264,
    IS_SET = 265,
    ADD = 266,
    REMOVE = 267,
    EXISTS = 268,
    FORALL = 269,
    READ = 270,
    WRITE = 271,
    WRITELN = 272,
    MAIN = 273,
    RETURN = 274,
    IF = 275,
    ELSE = 276,
    FOR = 277,
    NOT = 278,
    AND = 279,
    OR = 280,
    LT = 281,
    LE = 282,
    EQ = 283,
    GT = 284,
    GE = 285,
    NE = 286,
    ADICAO = 287,
    SUBTRACAO = 288,
    MULTIPLICACAO = 289,
    DIVISAO = 290,
    ASPA_SIMPLES = 291,
    VIRGULA = 292,
    PONTO_VIRGULA = 293,
    ATRIBUICAO = 294,
    ABRE_PARENTESES = 295,
    FECHA_PARENTESES = 296,
    ABRE_CHAVES = 297,
    FECHA_CHAVES = 298,
    CONSTANTE = 299,
    STRING = 300
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 17 "src/sintatico.y"

	int intValue;
	float floatValue;
	char charValue;
	char* strValue;
	char* dataType;

#line 111 "sintatico.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTATICO_TAB_H_INCLUDED  */
