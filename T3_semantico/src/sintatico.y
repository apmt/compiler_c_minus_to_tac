/* Ana Paula Martins Tarchetti - 17/0056082 */
/* Analisador Sintatico para um subconjunto modificado da linguagem C */

%{
	
#include <stdio.h>
#include "tradutor_utils.h"

extern int yylex(void);
extern int yylex_destroy(void);
extern int yyerror(const char *s);
extern char* yytext;
extern int yylineno;

%}

%define lr.type canonical-lr
// %parse-param {int *randomness}

// Detalhar erros
%define parse.lac full
%define parse.error verbose

%union
{
	struct t_node* node;
};

%type <node> programa lista_de_declaracoes declaracao declaracao_de_variavel
%type <node> declaracao_de_funcao definicao_de_funcao parametros
%type <node> lista_de_parametros parametro comando comandos bloco_de_comando
%type <node> comando_unico comando_condicional comando_iterativo expressao_for list
%type <node> exp_or_empty exp exp_list exp_aritmetica termo fator comando_de_atribuicao func_call_parameters
%type <node> func_call_exp chamada_de_retorno tipo_de_variavel constante tipo_de_variavel_id id

%type <node> ID
%type <node> INT FLOAT LIST
%type <node> CONSTANTE_NIL
%type <node> TAIL_OR_NOT
%type <node> HEADER TAIL_POP MAP FILTER CONSTRUTOR
%type <node> READ WRITE WRITELN
%type <node> MAIN RETURN IF ELSE FOR
%type <node> AND OR
%type <node> LT LE EQ GT GE NE
%type <node> SOMA SUB MULT DIV
%type <node> VIRGULA PONTO_VIRGULA
%type <node> ASPA_SIMPLES ATRIB
%type <node> ABRE_PARENTESES FECHA_PARENTESES ABRE_CHAVES FECHA_CHAVES

%type <node> FLOAT_CONST INTEGER_CONST STRING_LITERAL
%type <node> STRING

%token ID
%token INT FLOAT LIST
%token CONSTANTE_NIL
%token TAIL_OR_NOT
%token HEADER TAIL_POP MAP FILTER CONSTRUTOR
%token READ WRITE WRITELN
%token MAIN RETURN IF ELSE FOR
%token AND OR
%token LT LE EQ GT GE NE
%token SOMA SUB MULT DIV
%token VIRGULA PONTO_VIRGULA
%token ASPA_SIMPLES ATRIB
%token ABRE_PARENTESES FECHA_PARENTESES ABRE_CHAVES FECHA_CHAVES

%token FLOAT_CONST INTEGER_CONST STRING_LITERAL
%token STRING

%left AND OR
%left EQ NE 
%left LT GT GE LE
%right MAP FILTER CONSTRUTOR
%left SOMA SUB
%left MULT DIV
%right TAIL_OR_NOT HEADER TAIL_POP

%nonassoc ELSE
%nonassoc IFX

%start programa

%%

programa:
	lista_de_declaracoes {
		ast = $$;
		$$ = $1;
		// $$ = novo_node("programa", -1, -1);
		// coloca_node_filho($$, $1);
	}	
;

lista_de_declaracoes: 
	  lista_de_declaracoes declaracao {
		$$ = novo_node("lista_de_declaracoes", -1, -1);
		coloca_node_filho($$, $2);
		coloca_node_filho($$, $1);
	}
	| /* epsilon */ {
		$$ = (t_node*)0;
		// $$ = novo_node("lista_de_declaracoes", -1, -1);
	}
;

declaracao: 
	  declaracao_de_variavel {
		$$ = $1;
		// $$ = novo_node("declaracao", -1, -1);
		// coloca_node_filho($$, $1);
	}
	| declaracao_de_funcao {
		$$ = $1;
		// $$ = novo_node("declaracao", -1, -1);
		// coloca_node_filho($$, $1);
	}
	| error {
		yyerrok;
	}
;

declaracao_de_variavel:
	tipo_de_variavel_id {
			var_ou_func_atual = "Variavel";
			incrementa_tabela(nome_id_atual);
		} PONTO_VIRGULA {
		$$ = novo_node("declaracao_de_variavel", -1, -1);
		coloca_node_filho($$, $1);
	}
	  
;

declaracao_de_funcao:
	  tipo_de_variavel_id {
		  var_ou_func_atual = "funcao";
		  incrementa_tabela(nome_id_atual);
		  
		  incrementa_escopo();
	  } ABRE_PARENTESES parametros FECHA_PARENTESES definicao_de_funcao {
		$$ = novo_node("declaracao_de_funcao", -1, -1);
		// coloca_node_filho($$, $5);
		// coloca_node_filho($$, $3);
		// coloca_node_filho($$, $1);
		coloca_node_filho($$, $6);
		coloca_node_filho($$, $4);
		coloca_node_filho($$, $1);
	  }
;

definicao_de_funcao:
	bloco_de_comando {
		$$ = $1;
		// $$ = novo_node("definicao_de_funcao", -1, -1);
		// coloca_node_filho($$, $1);
	}
;

parametros:
	  lista_de_parametros {
		$$ = $1;
		// $$ = novo_node("parametros", -1, -1);
		// coloca_node_filho($$, $1);
	}
	| /* epsilon */ {
		$$ = (t_node*)0;
		// $$ = novo_node("parametros", -1, -1);
	}
;

lista_de_parametros:
	  lista_de_parametros VIRGULA parametro {
		$$ = novo_node("lista_de_parametros", -1, -1);
		coloca_node_filho($$, $3);
		coloca_node_filho($$, $1);
	}
	| parametro {
		$$ = $1;
		// $$ = novo_node("lista_de_parametros", -1, -1);
		// coloca_node_filho($$, $1);
	}
;

parametro:
	  tipo_de_variavel_id {
		$$ = novo_node("parametro", -1, -1);
		coloca_node_filho($$, $1);

		var_ou_func_atual = "Variavel (parametro)";
		incrementa_tabela(nome_id_atual);
	  }
;

tipo_de_variavel_id:
	tipo_de_variavel id {
		$$ = novo_node(nome_tipo_atual, yylineno, coluna);
		coloca_node_filho($$, $2);
	}
;

id:
	ID {
		// printf(">>%s, %d, %s\n", nome_id_atual, yylineno, var_ou_func_str);
		// incrementa_tabela(nome_id_atual);
		$$ = novo_node(nome_id_atual, yylineno, coluna);
	}
;

comando:
	  {incrementa_escopo();} bloco_de_comando {
		$$ = $2;
		// $$ = novo_node("comando", -1, -1);
		// coloca_node_filho($$, $1);
	}
	| comando_unico {
		$$ = $1;
		// $$ = novo_node("comando", -1, -1);
		// coloca_node_filho($$, $1);
	}
	| error {
		yyerrok;
	}
;

comandos:
	  comandos comando {
		$$ = novo_node("comandos", -1, -1);
		coloca_node_filho($$, $2);
		coloca_node_filho($$, $1);
	}
    | /* epsilon */ {
		$$ = (t_node*)0;
		// $$ = novo_node("comandos", -1, -1);
	}
;

bloco_de_comando:
	  ABRE_CHAVES comandos FECHA_CHAVES {
		// $$ = $2;
		$$ = novo_node("BLOCO", yylineno, coluna);
		coloca_node_filho($$, $2);
		decrementa_escopo();
	}
;

comando_unico:
	  comando_condicional {
		$$ = $1;
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
	| comando_iterativo {
		$$ = $1;
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
	| declaracao_de_variavel {
		$$ = $1;
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
	| chamada_de_retorno {
		$$ = $1;
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
	| comando_de_atribuicao {
		$$ = $1;
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
	| exp_or_empty PONTO_VIRGULA {
		$$ = $1;
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
;

comando_condicional:
	  IF ABRE_PARENTESES exp FECHA_PARENTESES comando %prec IFX {
		$$ = novo_node("IF", yylineno, coluna);
		coloca_node_filho($$, $5);
		coloca_node_filho($$, $3);
	}
	| IF ABRE_PARENTESES exp FECHA_PARENTESES comando ELSE comando {
		$$ = novo_node("IF_ELSE", yylineno, coluna);
		coloca_node_filho($$, $7);
		coloca_node_filho($$, $5);
		coloca_node_filho($$, $3);
	}
;

comando_iterativo:
	  FOR ABRE_PARENTESES expressao_for PONTO_VIRGULA expressao_for PONTO_VIRGULA expressao_for FECHA_PARENTESES comando {
		$$ = novo_node("FOR", yylineno, coluna);
		coloca_node_filho($$, $9);
		coloca_node_filho($$, $7);
		coloca_node_filho($$, $5);
		coloca_node_filho($$, $3);
	}
;

expressao_for:
	id ATRIB exp {
		$$ = novo_node("ATRIB", yylineno, coluna);
		coloca_node_filho($$, $3);
		coloca_node_filho($$, $1);
	}
	| exp_or_empty {
		$$ = $1;
		// $$ = novo_node("expressao_for", -1, -1);
		// coloca_node_filho($$, $1);
	}
;

exp_or_empty:
	exp {
		$$ = $1;
		// $$ = novo_node("expressao", -1, -1);
		// coloca_node_filho($$, $1);
	}
	| /* epsilon */ {
		$$ = (t_node*)0;
		// $$ = novo_node("expressao", -1, -1);
	}
;

exp:
	exp GT exp {
		$$ = novo_node("GT", yylineno, coluna);
		coloca_node_filho($$, $3);
		coloca_node_filho($$, $1);
	}
	| exp LT exp {
		$$ = novo_node("LT", yylineno, coluna);
		coloca_node_filho($$, $3);
		coloca_node_filho($$, $1);
	}
	| exp EQ exp {
		$$ = novo_node("EQ", yylineno, coluna);
		coloca_node_filho($$, $3);
		coloca_node_filho($$, $1);
	}
	| exp NE exp {
		$$ = novo_node("NE", yylineno, coluna);
		coloca_node_filho($$, $3);
		coloca_node_filho($$, $1);
	}
	| exp LE exp {
		$$ = novo_node("LE", yylineno, coluna);
		coloca_node_filho($$, $3);
		coloca_node_filho($$, $1);
	}
	| exp GE exp {
		$$ = novo_node("GE", yylineno, coluna);
		coloca_node_filho($$, $3);
		coloca_node_filho($$, $1);
	}
	| exp AND exp {
		$$ = novo_node("AND", yylineno, coluna);
		coloca_node_filho($$, $3);
		coloca_node_filho($$, $1);
	}
	| exp OR exp {
		$$ = novo_node("OR", yylineno, coluna);
		coloca_node_filho($$, $3);
		coloca_node_filho($$, $1);
	}
	| exp_list {
		$$ = $1;
		// $$ = novo_node("exp", -1, -1);
		// coloca_node_filho($$, $1);
	}
;

exp_list:
	exp_list CONSTRUTOR exp_list {
		$$ = novo_node("CONSTRUTOR", yylineno, coluna);
		coloca_node_filho($$, $3);
		coloca_node_filho($$, $1);
	}
	| exp_list FILTER exp_list {
		$$ = novo_node("FILTER", yylineno, coluna);
		coloca_node_filho($$, $3);
		coloca_node_filho($$, $1);
	}
	| exp_list MAP exp_list {
		$$ = novo_node("MAP", yylineno, coluna);
		coloca_node_filho($$, $3);
		coloca_node_filho($$, $1);
	}
	| exp_aritmetica {
		$$ = $1;
		// $$ = novo_node("exp_list", -1, -1);
		// coloca_node_filho($$, $1);
	}

;

exp_aritmetica:
	termo {
		$$ = $1;
		// $$ = novo_node("exp_aritmetica", -1, -1);
		// coloca_node_filho($$, $1);
	}
	| exp_aritmetica SOMA termo {
		$$ = novo_node("SOMA", yylineno, coluna);
		coloca_node_filho($$, $3);
		coloca_node_filho($$, $1);
	}
	| exp_aritmetica SUB termo {
		$$ = novo_node("SUB", yylineno, coluna);
		coloca_node_filho($$, $3);
		coloca_node_filho($$, $1);
	}
;

termo:
	fator {
		$$ = $1;
		// $$ = novo_node("termo", -1, -1);
		// coloca_node_filho($$, $1);
	}
	| termo MULT fator {
		$$ = novo_node("MULT", yylineno, coluna);
		coloca_node_filho($$, $3);
		coloca_node_filho($$, $1);
	}
	| termo DIV fator {
		$$ = novo_node("DIV", yylineno, coluna);
		coloca_node_filho($$, $3);
		coloca_node_filho($$, $1);
	}
;

fator:
	constante {
		$$ = $1;
		// $$ = novo_node("fator", -1, -1);
		// coloca_node_filho($$, $1);
	}
	| func_call_exp {
		// $$ = $1;
		$$ = novo_node("func_call_exp", -1, -1);
		coloca_node_filho($$, $1);
	}
	| SUB fator {
		$$ = novo_node("SUB", yylineno, coluna);
		coloca_node_filho($$, $2);
	}
	| SOMA fator {
		$$ = novo_node("SOMA", yylineno, coluna);
		coloca_node_filho($$, $2);
	}
	| TAIL_OR_NOT fator {
		$$ = novo_node("TAIL_NOT", yylineno, coluna);
		coloca_node_filho($$, $2);
	}
	| TAIL_POP fator {
		$$ = novo_node("TAIL_POP", yylineno, coluna);
		coloca_node_filho($$, $2);
	}
	| HEADER fator {
		$$ = novo_node("HEADER", yylineno, coluna);
		coloca_node_filho($$, $2);
	}
	| ID {
		verifica_contexto(nome_id_atual);
		$$ = novo_node(nome_id_atual, yylineno, coluna);
	}
	| ABRE_PARENTESES exp FECHA_PARENTESES {
		// $$ = $2;
		$$ = novo_node("fator", -1, -1);
		coloca_node_filho($$, $2);
	}
	
;

comando_de_atribuicao:
    id ATRIB exp PONTO_VIRGULA {
		verifica_contexto($1->nome);
		$$ = novo_node("ATRIB", yylineno, coluna);
		coloca_node_filho($$, $3);
		coloca_node_filho($$, $1);
	}
;

func_call_exp:
	  id ABRE_PARENTESES func_call_parameters FECHA_PARENTESES {
		verifica_contexto($1->nome);
		$$ = novo_node("my_func_call_exp", -1, -1);
		coloca_node_filho($$, $3);
		coloca_node_filho($$, $1);
	}
	|  id ABRE_PARENTESES FECHA_PARENTESES {
		verifica_contexto($1->nome);
		$$ = novo_node("my_func_call_exp", -1, -1);
		coloca_node_filho($$, $1);
	}
	|  READ ABRE_PARENTESES exp FECHA_PARENTESES {
		$$ = novo_node("READ", yylineno, coluna);
		coloca_node_filho($$, $3);
	}
	|  WRITE ABRE_PARENTESES exp FECHA_PARENTESES {
		$$ = novo_node("WRITE", yylineno, coluna);
		coloca_node_filho($$, $3);
	}
	|  WRITELN ABRE_PARENTESES exp FECHA_PARENTESES {
		$$ = novo_node("WRITELN", yylineno, coluna);
		coloca_node_filho($$, $3);
	}
;

func_call_parameters:
	func_call_parameters VIRGULA exp {
		$$ = novo_node("lista_de_expressao", -1, -1);
		coloca_node_filho($$, $3);
		coloca_node_filho($$, $1);
	}
	| exp {
		$$ = $1;
		// $$ = novo_node("lista_de_parametros", -1, -1);
		// coloca_node_filho($$, $1);
	}
;


chamada_de_retorno:
	RETURN exp PONTO_VIRGULA {
		$$ = novo_node("RETURN", yylineno, coluna);
		coloca_node_filho($$, $2);
	}
;

tipo_de_variavel:
	  INT {
		strcpy(nome_tipo_atual, "INT");
	  }
	| FLOAT {
		strcpy(nome_tipo_atual, "FLOAT");
	  }
	| list
;

list:
	  INT LIST {
		strcpy(nome_tipo_atual, "LIST (int)");
	  }
	| FLOAT LIST {
		strcpy(nome_tipo_atual, "LIST (float)");
	  }
;


constante:
	INTEGER_CONST {
		$$ = novo_node("INTEGER_CONST", yylineno, coluna);
	}
	| FLOAT_CONST {
		$$ = novo_node("FLOAT_CONST", yylineno, coluna);
	}
	| CONSTANTE_NIL {
		$$ = novo_node("CONSTANTE_NIL", yylineno, coluna);
	}
	| STRING_LITERAL {
		$$ = novo_node("STRING_LITERAL", yylineno, coluna);
	}
;


%%

int yyerror (const char* s) {
	fprintf (stderr, RED"ERRO, linha: %d, na coluna: %d, %s\n"reset, yylineno, coluna, s);
  	return 0;
}

int main()
{
    coluna = 1;
	linha = &yylineno;
	yyparse();

	mostra_tabela_simbolos();

	printf("\n");
	tree_output_file = fopen("tree_output_file.txt","w");
    fprintf(tree_output_file,"[PROGRAMA");
	imprime_ast(ast, 0);
    fprintf(tree_output_file,"]");
	fclose(tree_output_file);

	existe_main();

	yylex_destroy();
	destroi_tabela_simbolos();
	destroi_arvore_escopo();
	destroi_arvore(ast);
	return 0;
}