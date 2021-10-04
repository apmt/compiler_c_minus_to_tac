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
    aux->tipo = (char*)malloc(strlen(nome_tipo_atual)+1);
    strcpy(aux->tipo, nome_tipo_atual);
    aux->escopo = contador_escopo;
    aux->proximo = (t_simbolo*)tabela_de_simbolos;
    tabela_de_simbolos = aux;
    return aux;
}

t_simbolo *pega_simbolo(char *nome)
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

    int contador_aux_2, contador_aux_1 = 1;
    for (aux = tabela_de_simbolos; aux != (t_simbolo*)0; aux = (t_simbolo *)aux->proximo) {
      contador_aux_1++;
    }

    printf("\n=====================================================================================\n");
    printf("\t\t\t\tTABELA DE SIMBOLOS\n");
    printf("=====================================================================================\n");
    printf("%-32s\t| %-8s\t| %-12s\t| %-32s\n", "nome", "escopo", "tipo", "valor");
    printf("=====================================================================================\n");
    while(contador_aux_1--) {
      contador_aux_2 = 0;
      for (aux = tabela_de_simbolos; aux != (t_simbolo*)0; aux = (t_simbolo *)aux->proximo) {
          contador_aux_2++;
          if(contador_aux_2 == contador_aux_1) {
            printf("%-32s\t| %-8d\t| %-12s\t| %-32s\n", aux->nome, aux->escopo, aux->tipo, "0*");
          }
      }
    }
    printf("=====================================================================================\n");
}

void destroi_tabela_simbolos() {
  t_simbolo *aux, *proximo;
  for (aux = tabela_de_simbolos; aux != (t_simbolo*)0; aux = proximo) {
    proximo = (t_simbolo *)aux->proximo;
    free(aux->nome);
    free(aux->tipo);
    free(aux);
    // Confirmar que aux nao sera nulo na proxima iteracao
    aux = (t_simbolo*)1;
  }
}

// #### ESCOPO ####

int contador_escopo = 0;

void incrementa_escopo() {
  contador_escopo++;
}

void decrementa_escopo() {
  contador_escopo--;
}

// #### ARVORE SINTATICA ABSTRATA ####

t_node *novo_node(char *nome, int linha, int coluna) {
    t_node *node  = (t_node *)malloc(sizeof(t_node));
    node->nome = (char*)malloc(strlen(nome)+1);
    strcpy(node->nome, nome);
    node->linha  = linha;
    node->coluna = coluna;
    node->primeiro_filho = (t_node *)0;
    node->proximo_irmao = (t_node *)0;
    return node;
}

t_node *ast = (t_node *)0;

void coloca_node_filho(t_node *node_pai_ptr, t_node *node_filho_ptr) {
  if(node_filho_ptr == (t_node*)0) {
    return;
  }
  if(node_pai_ptr->primeiro_filho == (t_node*)0) {
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

  if(node_raiz_ptr->linha != -1) {
    int i = profundidade;
    while(i--) {
      printf(" -");
    }
    printf(" %s\n", node_raiz_ptr->nome);
    fprintf(tree_output_file,"[\"%s\"", node_raiz_ptr->nome);
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

  t_node *aux, *proximo;
  for (aux = node_raiz_ptr->primeiro_filho; aux != (t_node *)0; aux = proximo){
    proximo = aux->proximo_irmao;
    destroi_arvore(aux);
  }

  free(node_raiz_ptr->nome);
  free(node_raiz_ptr);
}

char nome_id_atual[31];
char nome_tipo_atual[31];

FILE *tree_output_file;
