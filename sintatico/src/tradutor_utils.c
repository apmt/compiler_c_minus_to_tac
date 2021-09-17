#define _DEFAULT_SOURCE
#include <stdio.h>
#include "tradutor_utils.h"

// #### TABELA DE SIMBOLOS ####

t_simbolo *tabela_de_simbolos = (t_simbolo *)0;

t_simbolo *coloca_simbolo(char *nome) {
    t_simbolo *aux;
    aux = (t_simbolo *)malloc(sizeof(t_simbolo));
    aux->nome = (char*)malloc(strlen(nome)+1);
    strcpy(aux->nome, nome);
    aux->proximo = (t_simbolo*)tabela_de_simbolos;
    tabela_de_simbolos = aux;
    return aux;
}

t_simbolo * pega_simbolo(char *nome)
{
  t_simbolo *aux;
  for (aux = tabela_de_simbolos; aux != (t_simbolo*)0; aux = (t_simbolo *)aux->proximo) {
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
    printf("\n\n--------------------------------------------------\n");
    printf("            TABELA DE SIMBOLOS\n");
    printf("--------------------------------------------------\n");
    printf("nome\t\t| escopo\t| tipo\t| valor\n");
    printf("--------------------------------------------------\n");
    for (aux = tabela_de_simbolos; aux != (t_simbolo*)0; aux = (t_simbolo *)aux->proximo) {
        printf("%s\n", aux->nome);
    }
    printf("--------------------------------------------------\n");
}

void destroi_tabela_simbolos() {
  t_simbolo *aux, *proximo;
  for (aux = tabela_de_simbolos; aux != (t_simbolo*)0; aux = proximo) {
    proximo = (t_simbolo *)aux->proximo;
    free(aux->nome);
    free(aux);
    // Confirmar que aux nao sera nulo na proxima iteracao
    aux = (t_simbolo*)1;
  }
}

// #### ARVORE SINTATICA ABSTRATA ####

t_node *novo_node(char *nome, int linha, int coluna) {
    t_node *node  = (t_node *)malloc(sizeof(t_node));
    node->nome  = strdup(nome);
    node->linha   = linha;
    node->coluna = coluna;
    node->primeiro_filho = (t_node *)0;
    node->proximo_irmao = (t_node *)0;
    return node;
}

t_node *ast = (t_node *)0;

void coloca_node_filho(t_node *node_pai_ptr, t_node *node_filho_ptr) {
  if(node_pai_ptr->primeiro_filho == NULL) {
    node_pai_ptr->primeiro_filho = node_filho_ptr;
  }
  else {
    t_node *aux = node_filho_ptr;
    aux->proximo_irmao = (t_node*)node_pai_ptr->primeiro_filho;
    node_pai_ptr->primeiro_filho = aux;
  }
}

void imprime_ast(t_node *node_raiz_ptr, int profundidade) {
  if(node_raiz_ptr == (t_node*)0) {
    return;
  }

  int i = profundidade;
  while(i--) {
    printf(" -");
  }

  if(node_raiz_ptr->linha != -1) {
    printf(" %s\n", node_raiz_ptr->nome);
    fprintf(tree_output_file,"[%s", node_raiz_ptr->nome);
  }

  t_node *aux;
  for (aux = node_raiz_ptr->primeiro_filho; aux != (t_node *) 0; aux = aux->proximo_irmao){
    if(node_raiz_ptr->linha != -1) {
      imprime_ast(aux, profundidade+1);
    } else {
      imprime_ast(aux, profundidade);
    }
  }

  if(node_raiz_ptr->linha != -1) {
    fprintf(tree_output_file,"]");
  }
}


void destroi_arvore(t_node *node_raiz_ptr) {
  if(node_raiz_ptr == (t_node*)0) {
    return;
  }

  // t_node *aux, *proximo;
  // for (aux = node_raiz_ptr->primeiro_filho; aux != (t_node *) 0; aux = proximo){
  //   proximo = (t_node *)aux->proximo_irmao;
  //   destroi_arvore(aux->primeiro_filho);
  //   free(aux->nome);
  //   free(aux);
  //   aux = (t_node*)1;
  // }

  t_node *aux;
  for (aux = node_raiz_ptr->primeiro_filho; aux != (t_node *) 0; aux = aux->proximo_irmao){
    destroi_arvore(aux);
  }

  free(node_raiz_ptr->nome);
  free(node_raiz_ptr);
}

char nome_id_atual[31];
FILE *tree_output_file;
