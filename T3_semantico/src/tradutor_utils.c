#define _DEFAULT_SOURCE
#include <stdio.h>
#include "tradutor_utils.h"


// #### VARIAVEIS GLOBAIS ####

int coluna;
int *linha;
char nome_funcao_atual[64];
int num_parametros_chamada_func = 0;


// #### ESCOPO ####

int num_escopo_atual = 0;
int contador_escopo = 0;

t_node_escopo *arvore_de_escopo = (t_node_escopo *)0;
t_node_escopo *node_escopo_atual = (t_node_escopo *)0;

void incrementa_escopo() {
  if(contador_escopo == 0 && arvore_de_escopo == (t_node_escopo *)0) {
    arvore_de_escopo = (t_node_escopo *)malloc(sizeof(t_node_escopo));
    node_escopo_atual = arvore_de_escopo;
    arvore_de_escopo->num_escopo = contador_escopo;
    arvore_de_escopo->node_mae = (t_node_escopo *)0;
  }

  contador_escopo++;
  num_escopo_atual = contador_escopo;
  t_node_escopo *node_escopo  = (t_node_escopo *)malloc(sizeof(t_node_escopo));
  node_escopo->num_escopo = contador_escopo;
  node_escopo->node_mae = node_escopo_atual;
  node_escopo_atual = node_escopo;
}

void decrementa_escopo() {
  t_node_escopo *node_escopo = node_escopo_atual;
  if(node_escopo_atual != (t_node_escopo *)0) {
    node_escopo_atual = node_escopo_atual->node_mae;
  }
  if(node_escopo_atual != (t_node_escopo *)0) {
    num_escopo_atual = node_escopo_atual->num_escopo;
  }
  free(node_escopo);
}

void destroi_arvore_escopo() {
  if(arvore_de_escopo != (t_node_escopo *)0) {
    free(arvore_de_escopo);
  }
}

// #### TABELA DE SIMBOLOS ####

char *var_ou_func_atual = "*";
t_simbolo *tabela_de_simbolos = (t_simbolo *)0;

t_simbolo *coloca_simbolo(char *nome) {
    t_simbolo *aux;
    aux = (t_simbolo *)malloc(sizeof(t_simbolo));
    aux->nome = (char*)malloc(strlen(nome)+1);
    strcpy(aux->nome, nome);
    aux->tipo = (char*)malloc(strlen(nome_tipo_atual)+1);
    strcpy(aux->tipo, nome_tipo_atual);
    aux->escopo = num_escopo_atual;
    aux->var_ou_func = (char*)malloc(strlen(var_ou_func_atual)+1);
    strcpy(aux->var_ou_func, var_ou_func_atual);
    aux->contador_de_parametros = 0;
    aux->proximo = (t_simbolo*)tabela_de_simbolos;
    tabela_de_simbolos = aux;
    return aux;
}

t_simbolo *pega_simbolo(char *nome) {
  t_simbolo *aux;
  for (aux = tabela_de_simbolos; aux != (t_simbolo*)0; aux = (t_simbolo *)aux->proximo) {
    if (strcmp(aux->nome, nome) == 0 && aux->escopo == contador_escopo) {
      return aux;
    }
  }
  return 0;
}

void incrementa_tabela(char *nome)  {
	t_simbolo *simbolo;
  t_simbolo *aux;
	simbolo = pega_simbolo(nome);
	if (simbolo == 0) {
		simbolo = coloca_simbolo(nome);

    // Incrementa lista de parametros da funcao
    if(strcmp(var_ou_func_atual, "funcao") == 0) {
      strcpy(nome_funcao_atual, nome);
    }
    else if(strcmp(var_ou_func_atual, "Variavel (parametro)") == 0) {
      for (aux = tabela_de_simbolos; aux != (t_simbolo*)0; aux = (t_simbolo *)aux->proximo) {
        if (strcmp(aux->nome, nome_funcao_atual) == 0) {
          aux->tipos_dos_parametros[aux->contador_de_parametros] = strdup(nome_tipo_atual);
          aux->contador_de_parametros++;
        }
      }
    }
    // END Incrementa lista de parametros da funcao
  }
	else {
        // errors++;
	  printf(RED"ERRO, linha: %d, na coluna: %d, '%s' ja definida\n"reset, *linha, coluna, nome);
	}
}

void verifica_contexto(char *nome) {
  t_simbolo *aux;
  t_node_escopo *node_escopo_aux;
  int num_escopo_verificacao;
  int foi_declarado = 0;

  for (node_escopo_aux = node_escopo_atual; node_escopo_aux != (t_node_escopo*)0; node_escopo_aux = (t_node_escopo *)node_escopo_aux->node_mae) {
    num_escopo_verificacao = node_escopo_aux->num_escopo;
    for (aux = tabela_de_simbolos; aux != (t_simbolo*)0; aux = (t_simbolo *)aux->proximo) {
      if(strcmp(aux->nome, nome) == 0 && aux->escopo == num_escopo_verificacao) {
        foi_declarado = 1;
      }
    }
  }

	if (foi_declarado == 0) {
	  printf(RED"ERRO, linha: %d, na coluna: %d, referencia nao definida para '%s'\n"reset, *linha, coluna, nome);
	}
}

char* get_tipo_pelo_contexto(char *nome) {
  t_simbolo *aux;
  t_node_escopo *node_escopo_aux;
  int num_escopo_verificacao;

  for (node_escopo_aux = node_escopo_atual; node_escopo_aux != (t_node_escopo*)0; node_escopo_aux = (t_node_escopo *)node_escopo_aux->node_mae) {
    num_escopo_verificacao = node_escopo_aux->num_escopo;
    for (aux = tabela_de_simbolos; aux != (t_simbolo*)0; aux = (t_simbolo *)aux->proximo) {
      if(strcmp(aux->nome, nome) == 0 && aux->escopo == num_escopo_verificacao) {
        return aux->tipo;
      }
    }
  }

  return NULL;
}

void mostra_tabela_simbolos() {
    t_simbolo *aux;
    int i;
    int contador_aux_2, contador_aux_1 = 1;
    for (aux = tabela_de_simbolos; aux != (t_simbolo*)0; aux = (t_simbolo *)aux->proximo) {
      contador_aux_1++;
    }

    printf("\n================================================================================================\n");
    printf("\t\t\t\tTABELA DE SIMBOLOS\n");
    printf("================================================================================================\n");
    printf("%-32s\t| %-8s\t| %-12s\t| %-32s\n", "nome", "escopo", "tipo", "declaracao");
    printf("================================================================================================\n");
    while(contador_aux_1--) {
      contador_aux_2 = 0;
      for (aux = tabela_de_simbolos; aux != (t_simbolo*)0; aux = (t_simbolo *)aux->proximo) {
          contador_aux_2++;
          if(contador_aux_2 == contador_aux_1) {
            if(strcmp(aux->var_ou_func, "funcao") == 0){
              printf("%-32s\t| %-8d\t| %-12s\t| %-7s(", aux->nome, aux->escopo, aux->tipo, aux->var_ou_func);
              for(i = 0; i < aux->contador_de_parametros; i++){
                if(i==0) printf("%s", aux->tipos_dos_parametros[i]);
                else printf(",%s", aux->tipos_dos_parametros[i]);
              }
              printf(")\n");
            } else {
              printf("%-32s\t| %-8d\t| %-12s\t| %-32s\n", aux->nome, aux->escopo, aux->tipo, aux->var_ou_func);
            }
          }
      }
    }
    printf("================================================================================================\n");
}

void destroi_tabela_simbolos() {
  t_simbolo *aux, *proximo;
  int i;
  for (aux = tabela_de_simbolos; aux != (t_simbolo*)0; aux = proximo) {
    proximo = (t_simbolo *)aux->proximo;
    free(aux->nome);
    free(aux->tipo);
    free(aux->var_ou_func);
    for(i = 0; i < aux->contador_de_parametros; i++){
      free(aux->tipos_dos_parametros[i]);
    }
    free(aux);
    // Confirmar que aux nao sera nulo na proxima iteracao
    aux = (t_simbolo*)1;
  }
}

// #### ARVORE SINTATICA ABSTRATA ####

t_node *novo_node(char *nome, int linha, int coluna) {
    // t_simbolo *aux;
    char *tipo = NULL;

    // GET IDs TYPE
    tipo = get_tipo_pelo_contexto(nome);
    if(tipo != NULL) {
      tipo = strdup(tipo);
    }

    // GET CONSTs TYPE
    if(strcmp(nome, "INTEGER_CONST") == 0) tipo = strdup("INT");
    if(strcmp(nome, "FLOAT_CONST") == 0) tipo = strdup("FLOAT");
    if(strcmp(nome, "CONSTANTE_NIL") == 0) tipo = strdup("UNDEF_NIL");
    if(strcmp(nome, "STRING_LITERAL") == 0) tipo = strdup("STRING");

    t_node *node  = (t_node *)malloc(sizeof(t_node));
    node->nome = (char*)malloc(strlen(nome)+1);
    strcpy(node->nome, nome);
    node->linha  = linha;
    node->coluna = coluna;
    //TODO
    if(tipo != NULL) {
      node->tipo = tipo;
    } else {
      node->tipo = (char*)malloc(strlen("UNDEF")+1);
      strcpy(node->tipo, "UNDEF");
    }
    //END TODO
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
    printf(" %s", node_raiz_ptr->nome);
    if(strcmp(node_raiz_ptr->tipo, "UNDEF") == 0) printf(BLUE" %s\n"reset, node_raiz_ptr->tipo);
    else printf(MAGENTA" %s\n"reset, node_raiz_ptr->tipo);
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

void anota_ast(t_node *node_raiz_ptr, int profundidade) {
  if(node_raiz_ptr == (t_node*)0) {
    return;
  }

  t_node *aux;
  for (aux = node_raiz_ptr->primeiro_filho; aux != (t_node *) 0; aux = aux->proximo_irmao){
    if(node_raiz_ptr->linha != -1) {
      anota_ast(aux, profundidade + 1);
    } else {
      anota_ast(aux, profundidade);
    }
  }

  if(strcmp(node_raiz_ptr->nome, "SOMA") == 0
    || strcmp(node_raiz_ptr->nome, "SUB") == 0
    || strcmp(node_raiz_ptr->nome, "MULT") == 0
    || strcmp(node_raiz_ptr->nome, "DIV") == 0) {
    char *tipo_1 = NULL;
    char *tipo_2 = NULL;

    if(node_raiz_ptr->primeiro_filho != NULL) {
      tipo_1 = node_raiz_ptr->primeiro_filho->tipo;
      if(strcmp(tipo_1, "LIST (int)") == 0
          || strcmp(tipo_1, "LIST (float)") == 0) {
            printf(RED"ERRO, linha: %d, coluna: %d, operacao '%s' nao espera tipo 'LIST'\n"reset, *linha, coluna, node_raiz_ptr->nome);
      } else if(node_raiz_ptr->primeiro_filho->proximo_irmao == NULL) {
        if(strcmp(node_raiz_ptr->nome, "SOMA") == 0
          || strcmp(node_raiz_ptr->nome, "SUB") == 0) {
            if(strcmp(tipo_1, "INT") == 0) {
              free(node_raiz_ptr->tipo);
              node_raiz_ptr->tipo = strdup("INT");
            } else if(strcmp(tipo_1, "FLOAT") == 0) {
              free(node_raiz_ptr->tipo);
              node_raiz_ptr->tipo = strdup("FLOAT");
            } 
          }
      }
      if(node_raiz_ptr->primeiro_filho->proximo_irmao != NULL) {
        tipo_2 = node_raiz_ptr->primeiro_filho->proximo_irmao->tipo;
        if(strcmp(tipo_2, "LIST (int)") == 0
          || strcmp(tipo_2, "LIST (float)") == 0) {
            printf(RED"ERRO, linha: %d, coluna: %d, operacao '%s' nao espera tipo 'LIST'\n"reset, *linha, coluna, node_raiz_ptr->nome);
        } else if(strcmp(tipo_1, "INT") == 0 && strcmp(tipo_2, "INT") == 0) {
          free(node_raiz_ptr->tipo);
          node_raiz_ptr->tipo = strdup("INT");
        } else if(strcmp(tipo_1, "FLOAT") == 0 || strcmp(tipo_2, "FLOAT") == 0) {
          free(node_raiz_ptr->tipo);
          node_raiz_ptr->tipo = strdup("FLOAT");
        }
      }
    }
  }

  // if(node_raiz_ptr->linha != -1) {
    // printf(" %s", node_raiz_ptr->nome);
    // if(strcmp(node_raiz_ptr->tipo, "UNDEF") == 0) printf(BLUE" %s\n"reset, node_raiz_ptr->tipo);
    // else printf(MAGENTA" %s\n"reset, node_raiz_ptr->tipo);
  // }
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
  free(node_raiz_ptr->tipo);
  free(node_raiz_ptr);
}

char nome_id_atual[31];
char nome_tipo_atual[31];

FILE *tree_output_file;

// #### ANALISE SEMANTICA ####

void existe_main() {
  t_simbolo *aux;
  int existe = 0;
  for (aux = tabela_de_simbolos; aux != (t_simbolo*)0; aux = (t_simbolo *)aux->proximo) {
    if(strcmp(aux->nome,"main") == 0 && aux->escopo == 0) {
      existe = 1;
    }
  }
  if(existe == 0) {
    fprintf (stderr, RED"ERRO: referencia indefinida para `main'\n"reset);
  }
}

void verifica_qnt_parametros_chamada_func(char *nome_funcao_chamada) {
  t_simbolo *aux;
  for (aux = tabela_de_simbolos; aux != (t_simbolo*)0; aux = (t_simbolo *)aux->proximo) {
    if(strcmp(aux->nome, nome_funcao_chamada) == 0){
      if(aux->contador_de_parametros != num_parametros_chamada_func) {
        printf(RED"ERRO, linha: %d, coluna: %d, quantidade incorreta de paramentros passados para a funcao '%s'\n"reset, *linha, coluna, nome_funcao_chamada);
      }
    }
  }
}



