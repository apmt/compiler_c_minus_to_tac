/* Ana Paula Martins Tarchetti - 17/0056082 */
/* Analisador Lexico para um subconjunto modificado da linguagem C */

%option warn noyywrap nodefault
%option noinput nounput

%{
    #include <stdio.h>
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
"int"           { printf("<INT>"); coluna += yyleng; }
"float"         { printf("<FLOAT>"); coluna += yyleng; }
"list"          { printf("<LIST>"); coluna += yyleng; }

    /* Nova constante */
"NIL"         { printf("<CONSTANTE_NIL>"); coluna += yyleng; }

    /* Operador ambiguo */
"!"             { printf("<TOP_OR_NOT>"); coluna += yyleng; }

    /* Novas primitivas */
"?"             { printf("<HEADER>"); coluna += yyleng; }
"%"             { printf("<POP>"); coluna += yyleng; }
">>"            { printf("<MAP>"); coluna += yyleng; }
"<<"            { printf("<FILTER>"); coluna += yyleng; }
":"             { printf("<CONSTRUTOR>"); coluna += yyleng; }

    /* Entrada e saida */
"read"          { printf("<READ>"); coluna += yyleng; }
"write"         { printf("<WRITE>"); coluna += yyleng; }
"writeln"       { printf("<WRITELN>"); coluna += yyleng; }

    /* Palavra chave MAIN */
"main"          { printf("<MAIN>"); coluna += yyleng; }

    /* Controle de fluxo */
"return"        { printf("<RETURN>"); coluna += yyleng; }
"if"            { printf("<IF>"); coluna += yyleng; }
"else"          { printf("<ELSE>"); coluna+= yyleng; }
"for"           { printf("<FOR>"); coluna+= yyleng; }

    /* Operadores logicos */
"&&"            { printf("<AND>"); coluna += yyleng; }
"||"            { printf("<OR>"); coluna += yyleng; }

    /* Operadores relacionais */
"<"             { printf("<LT>"); coluna += yyleng; }
"<="            { printf("<LE>"); coluna += yyleng; }
"=="            { printf("<EQ>"); coluna += yyleng; }
">"             { printf("<GT>"); coluna += yyleng; }
">="            { printf("<GE>"); coluna += yyleng; }
"!="            { printf("<NE>"); coluna += yyleng; }

    /* Operadores aritmeticos */
"+"             { printf("<SOMA>"); coluna += yyleng; }
"-"             { printf("<SUB>"); coluna += yyleng; }
"*"             { printf("<MULT>"); coluna += yyleng; }
"/"             { printf("<DIV>"); coluna += yyleng; }

    /* Operador de atribuicao */
"="             { printf("<ATRIB>"); coluna += yyleng; }

    /* Delimitadores e outros */
","             { printf("<VIRGULA>"); coluna += yyleng; }
";"             { printf("<PONTO_VIRGULA>"); coluna += yyleng; }
"("             { printf("<ABRE_PARENTESES>"); coluna += yyleng; }
")"             { printf("<FECHA_PARENTESES>"); coluna += yyleng; }
"{"             { printf("<ABRE_CHAVES>"); coluna += yyleng; contador_de_escopo++; indicador_de_escopo = contador_de_escopo;}
"}"             { printf("<FECHA_CHAVES>"); coluna += yyleng; indicador_de_escopo--;}

    /* Regras */
{INTEGER}           { printf("<INTEGER, %s>", yytext); coluna += yyleng; }
{FLOAT}           { printf("<FLOAT, %s>", yytext); coluna += yyleng; }
{STRING_LITERAL}    { printf("<STRING_LITERAL, %s>", yytext); coluna += yyleng; }

    /* Outras regras */
{ID}                { push_celula(yytext); printf("<ID,%s>", yytext); coluna += yyleng; }
{ESPACO}+           { /* Separa os tokens */ coluna += yyleng; }
"\n"                { printf("\n"); yylineno++; coluna = 1; }

    /* Reconhecer o resto como erro */
.                               { printf(RED"ERRO, Simbolo nao reconhecido, linha: %d, na coluna: %d"reset, yylineno, coluna); coluna += yyleng; erros++; }

%%


 int main() {
    tabela_de_simbolos = criaTabela();
    yylex();
    if(erros == 0) {
        printf(GRN"\nTotal de erros: %d\n"reset, erros);
    } else {
        printf(RED"\nTotal de erros: %d\n"reset, erros);
    }
    yylex_destroy();
    mostra_tabela();
    destroiTabela();
}
