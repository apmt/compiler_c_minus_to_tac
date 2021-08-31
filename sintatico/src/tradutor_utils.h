
#include <stdlib.h>
#include <string.h>

typedef struct t_node {
    char *valor;
    int linha;
    int coluna;
    // TokenType type;
    // t_node *child;
    // t_node *next;
}t_node;

typedef struct t_token {
    char *valor;
    int linha;
    int coluna;
}t_token;

t_token *novo_token(char *valor, int linha, int coluna);
