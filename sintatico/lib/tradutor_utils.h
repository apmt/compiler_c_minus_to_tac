
#include <stdlib.h>
#include <string.h>

// #### TABELA DE SIMBOLOS ####

typedef struct t_simbolo {
    char *nome;
    struct t_simbolo * proximo;
}t_simbolo;

extern t_simbolo *tabela_de_simbolos;

t_simbolo *coloca_simbolo ();
t_simbolo *pega_simbolo ();
void incrementa_tabela (char *nome);
void verifica_contexto(char *nome);
void mostra_tabela_simbolos();
void destroi_tabela_simbolos();

// #### ARVORE SINTATICA ABSTRATA ####

typedef struct t_node {
    char *nome;
    int linha;
    int coluna;
    // TokenType tipo;
    struct t_node *primeiro_filho;
    struct t_node *proximo_filho;
}t_node;

t_node *novo_node(char *nome, int linha, int coluna);

extern t_node *ast;
