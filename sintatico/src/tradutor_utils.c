#include "tradutor_utils.h"

t_token *novo_token(char *valor, int linha, int coluna) {
    t_token *token  = (t_token *)malloc(sizeof(t_token));
    token->valor  = strdup(valor);
    token->linha   = linha;
    token->coluna = coluna;
    return token;
}