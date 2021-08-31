/* Ana Paula Martins Tarchetti - 17/0056082 */
/* Analisador Lexico para um subconjunto modificado da linguagem C */

%option warn noyywrap nodefault
%option noinput nounput

%{
    #include <stdio.h>
    #include <string.h>

    #include "sintatico.tab.h"
    #include "tradutor_utils.h"

    #define RED "\e[0;31m"
    #define GRN "\e[0;32m"
    #define reset "\e[0m"
    int coluna = 1;
    int erros = 0;
    int contador_de_identificador = 0;
    int contador_de_escopo = 0;
    int indicador_de_escopo = 0;
    
    typedef struct t_celula {
        int linha;
        int escopo;
        char identificador[63];
        struct t_celula *prox;
    } t_celula;

    typedef struct t_tabela {
        struct t_celula *inicio;
        struct t_celula *fim;
    } t_tabela;

    t_tabela tabela_de_simbolos;

    t_tabela criaTabela() {
        t_tabela tabela;
        tabela.inicio = (t_celula*)malloc(sizeof(t_celula));
        tabela.inicio->prox = NULL;
        tabela.fim = tabela.inicio;
        return tabela;
    }

    void destroiTabela() {
        t_celula *aux = tabela_de_simbolos.inicio;
        t_celula *prox;
        while(aux->prox != NULL) {
            prox = aux->prox;
            free(aux);
            aux = prox;
        }
        free(aux);
        tabela_de_simbolos.inicio = NULL;
        tabela_de_simbolos.fim = NULL;
    }

    void push_celula(char *identificador) {
        t_celula *aux = tabela_de_simbolos.inicio;
         while(aux->prox != NULL) {
            aux = aux->prox;
            if(strcmp(identificador, aux->identificador) == 0 && indicador_de_escopo == aux->escopo) {
                return;
            }
        }

        t_celula *celula = (t_celula*) malloc(sizeof(t_celula));
        celula->linha = contador_de_identificador;
        celula->escopo = indicador_de_escopo;
        strcpy(celula->identificador,identificador);
        celula->prox = NULL;

        tabela_de_simbolos.fim->prox = celula;
        tabela_de_simbolos.fim = celula;

        contador_de_identificador++;
    }

    void mostra_tabela() {
        t_celula *aux = tabela_de_simbolos.inicio;
        printf("---------------------------------------------------\n");
        printf("\tTabela de simbolos\n");
        printf("---------------------------------------------------\n");
        while(aux->prox != NULL) {
            aux = aux->prox;
            printf("%d\t| %s\t| escopo: %d\n", aux->linha, aux->identificador, aux->escopo);
        }
    }

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
    yylval.token = novo_token(yytext, yylineno, coluna);
    return INT;
}
"float" {
    printf("<FLOAT>"); coluna += yyleng;
    yylval.token = novo_token(yytext, yylineno, coluna);
    return FLOAT;
}
"list" {
    printf("<LIST>"); coluna += yyleng;
    yylval.token = novo_token(yytext, yylineno, coluna);
    return LIST;
}

    /* Nova constante */
"NIL"         { printf("<CONSTANTE_NIL>"); coluna += yyleng; return CONSTANTE_NIL;}

    /* Operador ambiguo */
"!"             { printf("<TOP_OR_NOT>"); coluna += yyleng; return TOP_OR_NOT;}

    /* Novas primitivas */
"?"             { printf("<HEADER>"); coluna += yyleng; return HEADER;}
"%"             { printf("<POP>"); coluna += yyleng; return POP;}
">>"            { printf("<MAP>"); coluna += yyleng; return MAP;}
"<<"            { printf("<FILTER>"); coluna += yyleng; return FILTER;}
":"             { printf("<CONSTRUTOR>"); coluna += yyleng; return CONSTRUTOR;}

    /* Entrada e saida */
"read"          { printf("<READ>"); coluna += yyleng; return READ;}
"write"         { printf("<WRITE>"); coluna += yyleng; return WRITE;}
"writeln"       { printf("<WRITELN>"); coluna += yyleng; return WRITELN;}

    /* Palavra chave MAIN */
"main"          { printf("<MAIN>"); coluna += yyleng; return MAIN;}

    /* Controle de fluxo */
"return"        { printf("<RETURN>"); coluna += yyleng; return RETURN;}
"if"            { printf("<IF>"); coluna += yyleng; return IF;}
"else"          { printf("<ELSE>"); coluna+= yyleng; return ELSE;}
"for"           { printf("<FOR>"); coluna+= yyleng; return FOR;}

    /* Operadores logicos */
"&&"            { printf("<AND>"); coluna += yyleng; return AND;}
"||"            { printf("<OR>"); coluna += yyleng; return OR;}

    /* Operadores relacionais */
"<"             { printf("<LT>"); coluna += yyleng; return LT;}
"<="            { printf("<LE>"); coluna += yyleng; return LE;}
"=="            { printf("<EQ>"); coluna += yyleng; return EQ;}
">"             { printf("<GT>"); coluna += yyleng; return GT;}
">="            { printf("<GE>"); coluna += yyleng; return GE;}
"!="            { printf("<NE>"); coluna += yyleng; return NE;}

    /* Operadores aritmeticos */
"+"             { printf("<SOMA>"); coluna += yyleng; return SOMA;}
"-"             { printf("<SUB>"); coluna += yyleng; return SUB;}
"*"             { printf("<MULT>"); coluna += yyleng; return MULT;}
"/"             { printf("<DIV>"); coluna += yyleng; return DIV;}

    /* Operador de atribuicao */
"="             { printf("<ATRIB>"); coluna += yyleng; return ATRIB;}

    /* Delimitadores e outros */
"," {
    printf("<VIRGULA>"); coluna += yyleng;
    yylval.token = novo_token(yytext, yylineno, coluna);
    return VIRGULA;
}
";" {
    printf("<PONTO_VIRGULA>"); coluna += yyleng;
    yylval.token = novo_token(yytext, yylineno, coluna);
    return PONTO_VIRGULA;
}
"("             { printf("<ABRE_PARENTESES>"); coluna += yyleng; return ABRE_PARENTESES;}
")"             { printf("<FECHA_PARENTESES>"); coluna += yyleng; return FECHA_PARENTESES;}
"{"             { printf("<ABRE_CHAVES>"); coluna += yyleng; contador_de_escopo++; indicador_de_escopo = contador_de_escopo; return ABRE_CHAVES;}
"}"             { printf("<FECHA_CHAVES>"); coluna += yyleng; indicador_de_escopo--; return FECHA_CHAVES;}

    /* Regras */
{INTEGER}           { printf("<INTEGER, %s>", yytext); coluna += yyleng; return INTEGER;}
{FLOAT}           { printf("<FLOAT, %s>", yytext); coluna += yyleng; return FLOAT;}
{STRING_LITERAL}    { printf("<STRING_LITERAL, %s>", yytext); coluna += yyleng; return STRING_LITERAL;}

    /* Outras regras */
{ID}  {
    printf("<ID,%s>", yytext); coluna += yyleng;
    /* push_celula(yytext); */
    yylval.token = novo_token(yytext, yylineno, coluna);
    return ID;
}
{ESPACO}+           { /* Separa os tokens */ coluna += yyleng; }
"\n"                { printf("\n"); yylineno++; coluna = 1; }

    /* Reconhecer o resto como erro */
.                               { printf(RED"ERRO, Simbolo nao reconhecido, linha: %d, na coluna: %d"reset, yylineno, coluna); coluna += yyleng; erros++; }

%%


//  int main() {
//     tabela_de_simbolos = criaTabela();
//     yylex();
//     if(erros == 0) {
//         printf(GRN"\nTotal de erros: %d\n"reset, erros);
//     } else {
//         printf(RED"\nTotal de erros: %d\n"reset, erros);
//     }
//     yylex_destroy();
//     mostra_tabela();
//     destroiTabela();
// }
