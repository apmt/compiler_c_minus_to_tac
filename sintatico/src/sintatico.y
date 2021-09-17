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
%type <node> lista_de_IDs declaracao_de_funcao definicao_de_funcao parametros
%type <node> lista_de_parametros parametro comando comandos bloco_de_comando
%type <node> comando_unico comando_condicional comando_iterativo expressao_for
%type <node> expressao exp exp_list exp_aritmetica termo fator comando_de_atribuicao
%type <node> exp_funcao chamada_de_retorno tipo_de_variavel constante

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
}	
;

lista_de_declaracoes: 
	  lista_de_declaracoes declaracao {
		$$ = novo_node("lista_de_declaracoes", -1, -1);
		coloca_node_filho($$, $1);
		// coloca_node_filho($$, $2);
	}
	| /* epsilon */ {
		$$ = (t_node*)0;
	}
;

declaracao: 
	  declaracao_de_variavel {
		// $$ = $1
	}
	| declaracao_de_funcao {
	// 	// $$ = $1
	}
	| error {
		yyerrok;
	}
;

declaracao_de_variavel:
	  tipo_de_variavel lista_de_IDs PONTO_VIRGULA {
		// $$ = create_node($1, $2);
	  }
	  
;

lista_de_IDs:
	  lista_de_IDs VIRGULA ID {
		  incrementa_tabela($3->nome);
		  // Código C $$ lista_de_IDs
		  // $1 lista_de_IDs
		  // $2 VIRGULA
		  // $3 ID
		  // $$ = create_node($1, $3);
	  }
	| ID 
	{
		incrementa_tabela($1->nome);
		  // Código C $$ lista_de_IDs
		  // $1 lista_de_IDs
		  // $2 VIRGULA
		  // $3 ID
		//   $$ = create_node($1);
	  }
;

declaracao_de_funcao:
	  tipo_de_variavel ID ABRE_PARENTESES parametros FECHA_PARENTESES definicao_de_funcao {
		  incrementa_tabela($2->nome);
	  }
;

definicao_de_funcao:
	 bloco_de_comando
;

parametros:
	  lista_de_parametros
	| /* epsilon */ {
		$$ = (t_node*)0;
	}
;

lista_de_parametros:
	  lista_de_parametros VIRGULA parametro
	| parametro
;

parametro:
	  tipo_de_variavel ID {
		  incrementa_tabela($2->nome);
	  }
;

comando:
	  bloco_de_comando
	| comando_unico
	| error {
		yyerrok;
	}
;

comandos:
	  comandos comando
    | /* epsilon */ {
		$$ = (t_node*)0;
	}
;

bloco_de_comando:
	  ABRE_CHAVES comandos FECHA_CHAVES
;

comando_unico:
	  comando_condicional
	| comando_iterativo
	| declaracao_de_variavel
	| chamada_de_retorno
	| comando_de_atribuicao
	| expressao PONTO_VIRGULA
;

comando_condicional:
	  IF ABRE_PARENTESES expressao FECHA_PARENTESES comando %prec IFX {
		// 
		// $$ = create_node(tipo_node, $3, $5);
		}
	| IF ABRE_PARENTESES expressao FECHA_PARENTESES comando ELSE comando {
		// $$ = create_node($3, $5, $7);
		}
;

comando_iterativo:
	  FOR ABRE_PARENTESES expressao_for PONTO_VIRGULA expressao_for PONTO_VIRGULA expressao_for FECHA_PARENTESES comando
;

expressao_for:
	  ID ATRIB expressao
	| expressao
;

expressao:
	  expressao VIRGULA exp
	| exp
;

exp:
	  exp GT exp
	| exp LT exp
	| exp EQ exp
	| exp NE exp
	| exp LE exp
	| exp GE exp
	| exp AND exp
	| exp OR exp
	| exp_list
;

exp_list:
	  exp_list CONSTRUTOR exp_list
	| exp_list FILTER exp_list
	| exp_list MAP exp_list
	| exp_aritmetica
	| /* epsilon */ {
		$$ = (t_node*)0;
	}
;

exp_aritmetica:
	  termo
	| exp_aritmetica SOMA termo
	| exp_aritmetica SUB termo
;

termo:
	  fator
	| termo MULT fator
	| termo DIV fator
;

fator:
	  constante
	| SUB fator
	| SOMA fator
	| TAIL_OR_NOT fator
	| TAIL_POP fator
	| HEADER fator
	| ID {
		verifica_contexto($1->nome);
	}
	| ABRE_PARENTESES exp FECHA_PARENTESES
;

comando_de_atribuicao:
    ID ATRIB expressao PONTO_VIRGULA {
		verifica_contexto($1->nome);
	}
;

exp_funcao:
	  ID ABRE_PARENTESES expressao FECHA_PARENTESES {
			  verifica_contexto($1->nome);
		}
	|  READ ABRE_PARENTESES expressao FECHA_PARENTESES 
	|  WRITE ABRE_PARENTESES expressao FECHA_PARENTESES 
	|  WRITELN ABRE_PARENTESES expressao FECHA_PARENTESES 
;

chamada_de_retorno:
	  RETURN expressao PONTO_VIRGULA
;

tipo_de_variavel:
	  INT {
		// $$ create_node($1);
	  }
	| FLOAT {
		// $$ create_node($1);
	  }
	| INT LIST {
		// $$ create_node($1);
	  }
	| FLOAT LIST {
	// $$ create_node($1);
	}
;

constante:
	  INTEGER_CONST
	| FLOAT_CONST
	| CONSTANTE_NIL
	| STRING_LITERAL
	| exp_funcao
;


%%

int yyerror (const char* s) {
	fprintf (stderr, RED"linha: %d, na coluna: %d, %s\n"reset, yylineno, coluna, s);
  	return 0;
}

int main()
{
	printf("1:  ");
	yyparse();
	yylex_destroy();

	mostra_tabela_simbolos();
	destroi_tabela_simbolos();
	return 0;
}