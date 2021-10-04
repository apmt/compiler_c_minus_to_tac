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
    // printf("<INT>");
    coluna += yyleng;
    return INT;
}
"float" {
    // printf("<FLOAT>");
    coluna += yyleng;
    return FLOAT;
}
"list" {
    // printf("<LIST>");
    coluna += yyleng;
    return LIST;
}

    /* Nova constante */
"NIL"         {
    // printf("<CONSTANTE_NIL>");
    coluna += yyleng;
    return CONSTANTE_NIL;
} 

    /* Operador ambiguo */
"!"             {
    // printf("<TAIL_OR_NOT>");
    coluna += yyleng;
    return TAIL_OR_NOT;
}

    /* Novas primitivas */
"?"             {
    // printf("<HEADER>");
    coluna += yyleng;
    return HEADER;
}
"%"             {
    // printf("<TAIL_POP>");
    coluna += yyleng;
    return TAIL_POP;
}
">>"            {
    // printf("<MAP>");
    coluna += yyleng;
    return MAP;
}
"<<"            {
    // printf("<FILTER>");
    coluna += yyleng;
    return FILTER;
}
":"             {
    // printf("<CONSTRUTOR>");
    coluna += yyleng;
    return CONSTRUTOR;
}

    /* Entrada e saida */
"read"          {
    // printf("<READ>");
    coluna += yyleng;
    return READ;
}
"write"         {
    // printf("<WRITE>");
    coluna += yyleng;
    return WRITE;
}
"writeln"       {
    // printf("<WRITELN>");
    coluna += yyleng;
    return WRITELN;
}

    /* Controle de fluxo */
"return"        {
    // printf("<RETURN>");
    coluna += yyleng;
    return RETURN;
}
"if"            {
    // printf("<IF>");
    coluna += yyleng;
    return IF;
}
"else"          {
    // printf("<ELSE>");
    coluna += yyleng;
    return ELSE;
}
"for"           {
    // printf("<FOR>");
    coluna += yyleng;
    return FOR;
}

    /* Operadores logicos */
"&&"            {
    // printf("<AND>");
    coluna += yyleng;
    return AND;
}
"||"            {
    // printf("<OR>");
    coluna += yyleng;
    return OR;
}

    /* Operadores relacionais */
"<"             {
    // printf("<LT>");
    coluna += yyleng;
    return LT;
}
"<="            {
    // printf("<LE>");
    coluna += yyleng;
    return LE;
}
"=="            {
    // printf("<EQ>");
    coluna += yyleng;
    return EQ;
}
">"             {
    // printf("<GT>");
    coluna += yyleng;
    return GT;
}
">="            {
    // printf("<GE>");
    coluna += yyleng;
    return GE;
}
"!="            {
    // printf("<NE>");
    coluna += yyleng;
    return NE;
}

    /* Operadores aritmeticos */
"+"             {
    // printf("<SOMA>");
    coluna += yyleng;
    return SOMA;
}
"-"             {
    // printf("<SUB>");
    coluna += yyleng;
    return SUB;
}
"*"             {
    // printf("<MULT>");
    coluna += yyleng;
    return MULT;
}
"/"             {
    // printf("<DIV>");
    coluna += yyleng;
    return DIV;
}

    /* Operador de atribuicao */
"="             {
    // printf("<ATRIB>");
    coluna += yyleng;
    return ATRIB;
}

    /* Delimitadores e outros */
"," {
    // printf("<VIRGULA>");
    coluna += yyleng;
    return VIRGULA;
}
";" {
    // printf("<PONTO_VIRGULA>");
    coluna += yyleng;
    return PONTO_VIRGULA;
}
"("             {
    // printf("<ABRE_PARENTESES>");
    coluna += yyleng;
    return ABRE_PARENTESES;
}
")"             {
    // printf("<FECHA_PARENTESES>");
    coluna += yyleng;
    return FECHA_PARENTESES;
}
"{"             {
    // printf("<ABRE_CHAVES>"); 
    coluna += yyleng;
    // contador_de_escopo++; 
    // indicador_de_escopo = contador_de_escopo;
    return ABRE_CHAVES;
}
"}"             {
    // printf("<FECHA_CHAVES>"); 
    coluna += yyleng; 
    // indicador_de_escopo--; 
    return FECHA_CHAVES;
}

    /* Regras */
{INTEGER}           {
    // printf("<INTEGER_CONST, %s>", yytext);
    coluna += yyleng;
    return INTEGER_CONST;
}
{FLOAT}           {
    // printf("<FLOAT_CONST, %s>", yytext);
    coluna += yyleng;
    return FLOAT_CONST;
}
{STRING_LITERAL}    {
    // printf("<STRING_LITERAL, %s>", yytext);
    coluna += yyleng;
    return STRING_LITERAL;
}

    /* Outras regras */
{ID}  {
    strcpy(nome_id_atual, yytext);
    // printf("<ID,%s>", yytext);
    coluna += yyleng;
    return ID;
}

{ESPACO}+           { /* Separa os tokens */ coluna += yyleng; }
"\n"                {
    yylineno++;
    // printf("\n%d:  ", yylineno);
    coluna = 1;
}

    /* Reconhecer o resto como erro */
.                   { fprintf(stderr, RED"\nERRO, Simbolo nao reconhecido, linha: %d, na coluna: %d\n"reset, yylineno, coluna); coluna += yyleng; erros++; }


%%

