
#include <stdlib.h>
#include <string.h>

// #### TABELA DE SIMBOLOS ####

typedef struct t_simbolo {
    char *nome;
    char *tipo;
    int escopo;
    char *var_ou_func;
    struct t_simbolo * proximo;
}t_simbolo;

extern char *var_ou_func_atual;
extern t_simbolo *tabela_de_simbolos;

t_simbolo *coloca_simbolo ();
t_simbolo *pega_simbolo ();
void incrementa_tabela (char *nome);
void verifica_contexto(char *nome);
void mostra_tabela_simbolos();
void destroi_tabela_simbolos();

// #### ESCOPO ####

extern int contador_escopo;

void incrementa_escopo();
void decrementa_escopo();

// #### ARVORE SINTATICA ABSTRATA ####

typedef struct t_node {
    char *nome;
    int linha;
    int coluna;
    // TokenType tipo;
    struct t_node *primeiro_filho;
    struct t_node *proximo_irmao;
}t_node;

t_node *novo_node(char *nome, int linha, int coluna);
void coloca_node_filho(t_node *node_pai_ptr, t_node *node_filho_ptr);
void imprime_ast(t_node *node_raiz_ptr, int profundidade);
void destroi_arvore(t_node *node_raiz_ptr);

extern t_node *ast;

extern char nome_id_atual[31];
extern char nome_tipo_atual[31];

extern FILE *tree_output_file;