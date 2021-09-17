/* Ana Paula Martins Tarchetti - 17/0056082 */
/* Analisador Sintatico para um subconjunto modificado da linguagem C */

%{
	
#include <stdio.h>
#include "tradutor_utils.h"

#define RED "\033[0;31m"
#define GRN "\033[0;32m"
#define reset "\033[0m"

extern int yylex(void);
extern int yylex_destroy(void);
extern int yyerror(const char *s);
extern char* yytext;
extern int yylineno;

extern int coluna;

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
%type <node> comando_unico comando_condicional comando_iterativo expressao_for
%type <node> expressao exp exp_list exp_aritmetica termo fator comando_de_atribuicao
%type <node> exp_funcao chamada_de_retorno tipo_de_variavel constante tipo_de_variavel_id id

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
		// $$ = (t_node*)0;
		$$ = novo_node("parametros", -1, -1);
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
	tipo_de_variavel_id PONTO_VIRGULA {
		$$ = novo_node("declaracao_de_variavel", -1, -1);
		coloca_node_filho($$, $1);
	}
	  
;

declaracao_de_funcao:
	  tipo_de_variavel_id ABRE_PARENTESES parametros FECHA_PARENTESES definicao_de_funcao {
		$$ = novo_node("declaracao_de_funcao", -1, -1);
		coloca_node_filho($$, $5);
		coloca_node_filho($$, $3);
		coloca_node_filho($$, $1);
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
		incrementa_tabela($1->nome);
		$$ = novo_node(nome_id_atual, yylineno, coluna);
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
		// $$ = (t_node*)0;
		$$ = novo_node("parametros", -1, -1);
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
	  }
;

comando:
	  bloco_de_comando {
		$$ = $1;
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
		// $$ = (t_node*)0;
		$$ = novo_node("comandos", -1, -1);
	}
;

bloco_de_comando:
	  ABRE_CHAVES comandos FECHA_CHAVES {
		// $$ = $2;
		$$ = novo_node("BLOCO", yylineno, coluna);
		coloca_node_filho($$, $2);
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
	| expressao PONTO_VIRGULA {
		$$ = $1;
		// $$ = novo_node("comando_unico", -1, -1);
		// coloca_node_filho($$, $1);
	}
;

comando_condicional:
	  IF ABRE_PARENTESES expressao FECHA_PARENTESES comando %prec IFX {
		$$ = novo_node("IF", yylineno, coluna);
		coloca_node_filho($$, $5);
		coloca_node_filho($$, $3);
	}
	| IF ABRE_PARENTESES expressao FECHA_PARENTESES comando ELSE comando {
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
	id ATRIB expressao {
		$$ = novo_node("ATRIB", yylineno, coluna);
		coloca_node_filho($$, $3);
		coloca_node_filho($$, $1);
	}
	| expressao {
		$$ = $1;
		// $$ = novo_node("expressao_for", -1, -1);
		// coloca_node_filho($$, $1);
	}
;

expressao:
	expressao VIRGULA exp {
		$$ = novo_node("expressao", -1, -1);
		coloca_node_filho($$, $3);
		coloca_node_filho($$, $1);
	}
	| exp {
		$$ = $1;
		// $$ = novo_node("expressao", -1, -1);
		// coloca_node_filho($$, $1);
	}
	| /* epsilon */ {
		// $$ = (t_node*)0;
		$$ = novo_node("expressao", -1, -1);
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
		verifica_contexto($1->nome);
		$$ = novo_node(nome_id_atual, yylineno, coluna);
	}
	| ABRE_PARENTESES exp FECHA_PARENTESES {
		// $$ = $2;
		$$ = novo_node("fator", -1, -1);
		coloca_node_filho($$, $2);
	}
	
;

comando_de_atribuicao:
    id ATRIB expressao PONTO_VIRGULA {
		verifica_contexto($1->nome);
		$$ = novo_node("ATRIB", yylineno, coluna);
		coloca_node_filho($$, $3);
		coloca_node_filho($$, $1);
	}
;

exp_funcao:
	  id ABRE_PARENTESES expressao FECHA_PARENTESES {
		verifica_contexto($1->nome);
		$$ = novo_node("exp_funcao", -1, -1);
		coloca_node_filho($$, $3);
		coloca_node_filho($$, $1);
	}
	|  READ ABRE_PARENTESES expressao FECHA_PARENTESES {
		$$ = novo_node("READ", yylineno, coluna);
		coloca_node_filho($$, $3);
	}
	|  WRITE ABRE_PARENTESES expressao FECHA_PARENTESES {
		$$ = novo_node("WRITE", yylineno, coluna);
		coloca_node_filho($$, $3);
	}
	|  WRITELN ABRE_PARENTESES expressao FECHA_PARENTESES {
		$$ = novo_node("WRITELN", yylineno, coluna);
		coloca_node_filho($$, $3);
	}
;

chamada_de_retorno:
	RETURN expressao PONTO_VIRGULA {
		$$ = novo_node("RETURN", yylineno, coluna);
		coloca_node_filho($$, $2);
	}
;

tipo_de_variavel:
	  INT {
		strcpy(nome_tipo_atual, "INT");
		$$ = novo_node("INT", yylineno, coluna);
	  }
	| FLOAT {
		strcpy(nome_tipo_atual, "FLOAT");
		$$ = novo_node("FLOAT", yylineno, coluna);
	  }
	| int_list {
		strcpy(nome_tipo_atual, "INT_LIST");
		$$ = novo_node("INT_LIST", yylineno, coluna);
	  }
	| float_list {
		strcpy(nome_tipo_atual, "FLOAT_LIST");
		$$ = novo_node("FLOAT_LIST", yylineno, coluna);
	}
;

int_list:
	INT LIST
;

float_list:
	FLOAT LIST
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
	| exp_funcao {
		// $$ = $1;
		$$ = novo_node("constante", -1, -1);
		coloca_node_filho($$, $1);
	}
;


%%

int yyerror (const char* s) {
	fprintf (stderr, RED"yylineno: %d, na coluna: %d, %s\n"reset, yylineno, coluna, s);
  	return 0;
}

int main()
{
	printf("1:  ");
	yyparse();
	yylex_destroy();

	mostra_tabela_simbolos();
	destroi_tabela_simbolos();

	printf("\n");
	tree_output_file = fopen("tree_output_file.txt","w");
    fprintf(tree_output_file,"[PROGRAMA");
	imprime_ast(ast, 0);
	destroi_arvore(ast);
    fprintf(tree_output_file,"]");
	fclose(tree_output_file);

	return 0;
}