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
    LIST = 261,
    CONSTANTE_NIL = 262,
    TOP_OR_NOT = 263,
    HEADER = 264,
    POP = 265,
    MAP = 266,
    FILTER = 267,
    CONSTRUTOR = 268,
    READ = 269,
    WRITE = 270,
    WRITELN = 271,
    MAIN = 272,
    RETURN = 273,
    IF = 274,
    ELSE = 275,
    FOR = 276,
    AND = 277,
    OR = 278,
    LT = 279,
    LE = 280,
    EQ = 281,
    GT = 282,
    GE = 283,
    NE = 284,
    SOMA = 285,
    SUB = 286,
    MULT = 287,
    DIV = 288,
    ASPA_SIMPLES = 289,
    VIRGULA = 290,
    PONTO_VIRGULA = 291,
    ATRIB = 292,
    ABRE_PARENTESES = 293,
    FECHA_PARENTESES = 294,
    ABRE_CHAVES = 295,
    FECHA_CHAVES = 296,
    CONSTANTE = 297,
    INTEGER = 298,
    STRING_LITERAL = 299,
    STRING = 300
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 20 "sintatico.y"

	// node struct
	// tokens_especiais
	int intValue;
	float floatValue;
	char charValue;
	char* strValue;
	char* dataType;

#line 113 "sintatico.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SINTATICO_TAB_H_INCLUDED  */
