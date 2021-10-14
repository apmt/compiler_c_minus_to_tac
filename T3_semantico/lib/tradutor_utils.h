
#include <stdlib.h>
#include <string.h>

#define RED "\033[0;31m"
#define GRN "\033[0;32m"
#define BLUE "\033[0;34m"
#define MAGENTA "\033[0;35m"
#define CYAN "\033[0;36m"
#define reset "\033[0m"

#define MAX_NUMBER_OF_FUNC_PARAMS_IN_C 253

#define CIPL_INT 0
#define CIPL_FLOAT 1
#define CIPL_LIST_INT 2
#define CIPL_LIST_FLOAT 3

// #### VARIAVEIS GLOBAIS ####

extern int coluna;
extern int *linha;
extern char nome_funcao_atual[64];

// #### TABELA DE SIMBOLOS ####

typedef struct t_simbolo {
    char *nome;
    char *tipo;
    int escopo;
    char *var_ou_func;
    char *tipos_dos_parametros[MAX_NUMBER_OF_FUNC_PARAMS_IN_C];
    int contador_de_parametros;
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

typedef struct t_node_escopo {
    int num_escopo;
    struct t_node_escopo * node_mae;
}t_node_escopo;

extern int contador_escopo;
extern int num_escopo_atual;

void incrementa_escopo();
void decrementa_escopo();
void destroi_arvore_escopo();

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

// #### ANALISE SEMANTICA ####

void existe_main();