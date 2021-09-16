/* Ana Paula Martins Tarchetti - 17/0056082 */
/* Analisador Lexico para um subconjunto modificado da linguagem C */

%option warn noyywrap nodefault
%option noinput nounput
%option never-interactive

%{
    #include <stdio.h>
    #include <string.h>

    #include "sintatico.tab.h"
    #include "tradutor_utils.h"

    #define RED "\033[0;31m"
    #define GRN "\033[0;32m"
    #define reset "\033[0m"

    int coluna = 1;
    int erros = 0;

%}

LETRA           [a-zA-Z]
DIGITO          [0-9]

ID              [_a-zA-Z][_a-zA-Z0-9]*
INTEGER         {DIGITO}+
FLOAT           ({DIGITO}*\.?{DIGITO}+|{DIGITO}+\.)
STRING_LITERAL  \"(\\.|[^"\\])*\"

ESPACO          [ \t\v\f\r]

%%

    /* Tipos */
"int" { 
    printf("<INT>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return INT;
}
"float" {
    printf("<FLOAT>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return FLOAT;
}
"list" {
    printf("<LIST>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return LIST;
}

    /* Nova constante */
"NIL"         {
    printf("<CONSTANTE_NIL>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return CONSTANTE_NIL;
} 

    /* Operador ambiguo */
"!"             {
    printf("<TAIL_OR_NOT>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return TAIL_OR_NOT;
}

    /* Novas primitivas */
"?"             {
    printf("<HEADER>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return HEADER;
}
"%"             {
    printf("<TAIL_POP>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return TAIL_POP;
}
">>"            {
    printf("<MAP>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return MAP;
}
"<<"            {
    printf("<FILTER>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return FILTER;
}
":"             {
    printf("<CONSTRUTOR>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return CONSTRUTOR;
}

    /* Entrada e saida */
"read"          {
    printf("<READ>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return READ;
}
"write"         {
    printf("<WRITE>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return WRITE;
}
"writeln"       {
    printf("<WRITELN>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return WRITELN;
}

    /* Controle de fluxo */
"return"        {
    printf("<RETURN>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return RETURN;
}
"if"            {
    printf("<IF>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return IF;
}
"else"          {
    printf("<ELSE>"); coluna+= yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return ELSE;
}
"for"           {
    printf("<FOR>"); coluna+= yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return FOR;
}

    /* Operadores logicos */
"&&"            {
    printf("<AND>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return AND;
}
"||"            {
    printf("<OR>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return OR;
}

    /* Operadores relacionais */
"<"             {
    printf("<LT>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return LT;
}
"<="            {
    printf("<LE>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return LE;
}
"=="            {
    printf("<EQ>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return EQ;
}
">"             {
    printf("<GT>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return GT;
}
">="            {
    printf("<GE>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return GE;
}
"!="            {
    printf("<NE>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return NE;
}

    /* Operadores aritmeticos */
"+"             {
    printf("<SOMA>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return SOMA;
}
"-"             {
    printf("<SUB>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return SUB;
}
"*"             {
    printf("<MULT>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return MULT;
}
"/"             {
    printf("<DIV>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return DIV;
}

    /* Operador de atribuicao */
"="             {
    printf("<ATRIB>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return ATRIB;
}

    /* Delimitadores e outros */
"," {
    printf("<VIRGULA>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return VIRGULA;
}
";" {
    printf("<PONTO_VIRGULA>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return PONTO_VIRGULA;
}
"("             {
    printf("<ABRE_PARENTESES>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return ABRE_PARENTESES;
}
")"             {
    printf("<FECHA_PARENTESES>"); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return FECHA_PARENTESES;
}
"{"             {
    printf("<ABRE_CHAVES>"); 
    coluna += yyleng;
    // contador_de_escopo++; 
    // indicador_de_escopo = contador_de_escopo;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return ABRE_CHAVES;
}
"}"             {
    printf("<FECHA_CHAVES>"); 
    coluna += yyleng; 
    // indicador_de_escopo--; 
    yylval.node = novo_node(yytext, yylineno, coluna);
    return FECHA_CHAVES;
}

    /* Regras */
{INTEGER}           {
    printf("<INTEGER_CONST, %s>", yytext); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return INTEGER_CONST;
}
{FLOAT}           {
    printf("<FLOAT_CONST, %s>", yytext); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return FLOAT_CONST;
}
{STRING_LITERAL}    {
    printf("<STRING_LITERAL, %s>", yytext); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return STRING_LITERAL;
}

    /* Outras regras */
{ID}  {
    printf("<ID,%s>", yytext); coluna += yyleng;
    yylval.node = novo_node(yytext, yylineno, coluna);
    return ID;
}

{ESPACO}+           { /* Separa os tokens */ coluna += yyleng; }
"\n"                { printf("\n"); yylineno++; coluna = 1; }

    /* Reconhecer o resto como erro */
.                   { printf(RED"\nERRO, Simbolo nao reconhecido, linha: %d, na coluna: %d"reset, yylineno, coluna); coluna += yyleng; erros++; }


%%

