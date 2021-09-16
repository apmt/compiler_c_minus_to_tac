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
	struct t_token* token;
	struct t_node* node;
};

%type <node> programa lista_de_declaracoes declaracao declaracao_de_variavel
%type <node> lista_de_IDs tipo_de_variavel

%type <token> ID
%type <token> INT FLOAT LIST
%type <token> VIRGULA PONTO_VIRGULA

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
		// $$ = $1;
	}
;

lista_de_declaracoes: 
	  lista_de_declaracoes declaracao {
		// $$ = create_node($1, $2);
		}
	| /* epsilon */ {
		$$ = NULL;
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
		// yyerror/print
		// erro sintatico
		// print erro na linha tal
		// coluna, yylineno
	}
;

declaracao_de_variavel:
	  tipo_de_variavel lista_de_IDs PONTO_VIRGULA {
	  }
	// $$ = create_node($1, $2);
;

lista_de_IDs:
	  lista_de_IDs VIRGULA ID {
		  incrementa_tabela($3->token_nome);
		  // Código C $$ lista_de_IDs
		  // $1 lista_de_IDs
		  // $2 VIRGULA
		  // $3 ID
		  // $$ = create_node($1, $3);
	  }
	| ID 
	{
		incrementa_tabela($1->token_nome);
		  // Código C $$ lista_de_IDs
		  // $1 lista_de_IDs
		  // $2 VIRGULA
		  // $3 ID
		//   $$ = create_node($1);
	  }
;

declaracao_de_funcao:
	  tipo_de_variavel ID ABRE_PARENTESES parametros FECHA_PARENTESES definicao_de_funcao {
		  incrementa_tabela($2->token_nome);
	  }
;

definicao_de_funcao:
	 bloco_de_comando
;

parametros:
	  lista_de_parametros
	| /* epsilon */
;

lista_de_parametros:
	  lista_de_parametros VIRGULA parametro
	| parametro
;

parametro:
	  tipo_de_variavel ID {
		  incrementa_tabela($2->token_nome);
	  }
;

comando:
	  bloco_de_comando
	| comando_unico
;

comandos:
	  comandos comando
    | /* epsilon */
;

bloco_de_comando:
	  ABRE_CHAVES comandos FECHA_CHAVES
;

comando_unico:
	  comando_condicional
	| comando_iterativo
	| declaracao_de_variavel
	| chamada_de_funcao
	| chamada_de_retorno
	| comando_de_atribuicao
;

comando_condicional:
	  IF ABRE_PARENTESES expressao FECHA_PARENTESES comando %prec IFX {
		// 
		// $$ = create_node(tipo_node, $3, $5);
		}
	| IF ABRE_PARENTESES expressao FECHA_PARENTESES comando ELSE comando {
		// $$ = create_node($3, $5, $7);
		}
	| error {
		// print erro na linha tal
		// coluna, yylineno
	}
;

comando_iterativo:
	  FOR ABRE_PARENTESES comando_de_expressao comando_de_expressao expressao FECHA_PARENTESES comando
;

comando_de_expressao:
	   expressao PONTO_VIRGULA
	// | PONTO_VIRGULA
	| error {
		// errado: expected ;
		// print erro na linha tal
		// coluna, yylineno
	}
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
	| exp_list CONSTRUTOR exp_list
	| exp_list FILTER exp_list
	| exp_list MAP exp_list
	| exp_aritmetica
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
	| TAIL_OR_NOT fator
	| TAIL_POP fator
	| HEADER fator
	| ID {
		verifica_contexto($1->token_nome);
	}
	| ABRE_PARENTESES exp FECHA_PARENTESES
;

comando_de_atribuicao:
    ID ATRIB expressao PONTO_VIRGULA {
		verifica_contexto($1->token_nome);
	}
;

chamada_de_funcao:
	  ID ABRE_PARENTESES expressao FECHA_PARENTESES PONTO_VIRGULA {
		  verifica_contexto($1->token_nome);
	  }
	|  READ ABRE_PARENTESES expressao FECHA_PARENTESES PONTO_VIRGULA
	|  WRITE ABRE_PARENTESES expressao FECHA_PARENTESES PONTO_VIRGULA
	|  WRITELN ABRE_PARENTESES expressao FECHA_PARENTESES PONTO_VIRGULA
;

exp_funcao:
	  ID ABRE_PARENTESES expressao FECHA_PARENTESES {
			  verifica_contexto($1->token_nome);
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
	yyparse();
	yylex_destroy();

	mostra_tabela_simbolos();
	destroi_tabela_simbolos();
	return 0;
}