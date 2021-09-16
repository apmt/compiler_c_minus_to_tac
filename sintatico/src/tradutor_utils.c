#define _DEFAULT_SOURCE
#include <stdio.h>
#include "tradutor_utils.h"

// #### TABELA DE SIMBOLOS ####

t_simbolo *tabela_de_simbolos = (t_simbolo *)0;

t_simbolo *coloca_simbolo (char *nome) {
    t_simbolo *aux;
    aux = (t_simbolo *)malloc(sizeof(t_simbolo));
    aux->nome = (char*)malloc(strlen(nome)+1);
    strcpy(aux->nome, nome);
    aux->proximo = (t_simbolo*)tabela_de_simbolos;
    tabela_de_simbolos = aux;
    return aux;
}

t_simbolo * pega_simbolo ( char *nome )
{
  t_simbolo *aux;
  for (aux = tabela_de_simbolos; aux != (t_simbolo *) 0; aux = (t_simbolo *)aux->proximo) {
    if (strcmp(aux->nome, nome) == 0) {
      return aux;
    }
  }
  return 0;
}

void incrementa_tabela(char *nome)  {
	t_simbolo *simbolo;
	simbolo = pega_simbolo(nome);
	if (simbolo == 0) {
		simbolo = coloca_simbolo(nome);
    }
	else {
        // errors++;
		// printf("\nErro: %s ja definido\n", nome);
	}
}

void verifica_contexto(char *nome) {
	if (pega_simbolo(nome) == 0) {
		// printf("\nErro: %s nao declarado\n", nome);
	}
}

void mostra_tabela_simbolos() {
    t_simbolo *aux;
    printf("\n------------------------------------------\n");
    printf("   TABELA DE SIMBOLOS\n");
    printf("------------------------------------------\n");
    printf("nome\t\tescopo\ttipo\tvalor\n");
    printf("------------------------------------------\n");
    for (aux = tabela_de_simbolos; aux != (t_simbolo*)0; aux = (t_simbolo *)aux->proximo) {
        printf("%s\n", aux->nome);
    }
    printf("------------------------------------------\n");
}

void destroi_tabela_simbolos() {

}

// #### ARVORE SINTATICA ABSTRATA ####

t_token *novo_token(char *token_nome, int linha, int coluna) {
    t_token *token  = (t_token *)malloc(sizeof(t_token));
    token->token_nome  = strdup(token_nome);
    token->linha   = linha;
    token->coluna = coluna;
    return token;
}