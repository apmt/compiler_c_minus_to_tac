/* Ana Paula Martins Tarchetti - 17/0056082 */
/* Analisador Sintatico para um subconjunto modificado da linguagem C */

%{
#include <stdio.h>

extern int yylex(void);
extern int yyerror(const char *s);
extern char* yytext;
extern int yylineno;

extern int coluna;
%}

%define lr.type canonical-lr
%parse-param {int *randomness}

// Detalhar erros
%define parse.lac full
%define parse.error verbose

%union {
	// node struct
	// tokens_especiais
	int intValue;
	float floatValue;
	char charValue;
	char* strValue;
	char* dataType;
}

// %type <node> programa ... (regras em azul)
// %type <strValue> STRING_LITERAL
// %type <intValue> INTEGER
// %type <floatValue> FLOAT
// %type <strValue> ID
// ...

%token ID
%token INT FLOAT LIST
%token CONSTANTE_NIL
%token TOP_OR_NOT
%token HEADER POP MAP FILTER CONSTRUTOR
%token READ WRITE WRITELN
%token MAIN RETURN IF ELSE FOR
%token AND OR
%token LT LE EQ GT GE NE
%token SOMA SUB MULT DIV
%token ASPA_SIMPLES VIRGULA PONTO_VIRGULA ATRIB
%token ABRE_PARENTESES FECHA_PARENTESES ABRE_CHAVES FECHA_CHAVES

%token <dval> CONSTANTE INTEGER STRING_LITERAL
%token STRING

%left LT GT ATRIB GE LE EQ NE 
// %left SOMA SUB TOP_OR_NOT
// %left MULT DIV
%left OR AND
// %left VIRGULA
// %left ABRE_PARENTESES ABRE_CHAVES

%start programa

%%

programa:
	lista_de_declaracoes {
		// $$ = $1
	}
;

lista_de_declaracoes: 
	  lista_de_declaracoes declaracao {
		// $$ = create_node($1, $2);
		}
	| /* epsilon */ {
		// $$ = null
		}
;

declaracao: 
	  declaracao_de_variavel {
		// $$ = $1
	}
	| declaracao_de_funcao {
		// $$ = $1
	}
	| error {
		// yyerror/print
		// erro sintatico
		// print erro na linha tal
		// coluna, yylineno
	}
;

declaracao_de_variavel:
	  tipo_de_variavel lista_de_IDs PONTO_VIRGULA
;

lista_de_IDs:
	  lista_de_IDs VIRGULA ID {
		  // Código C $$ lista_de_IDs
		  // $1 lista_de_IDs
		  // $2 VIRGULA
		  // $3 ID
		  // $$ = create_node($1, $3);
	  }
	| ID 
	{
		  // Código C $$ lista_de_IDs
		  // $1 lista_de_IDs
		  // $2 VIRGULA
		  // $3 ID
		//   $$ = create_node($1);
	  }
;

declaracao_de_funcao:
	  tipo_de_variavel ID ABRE_PARENTESES parametros FECHA_PARENTESES definicao_de_funcao
;

definicao_de_funcao:
	  ABRE_CHAVES bloco_de_comando FECHA_CHAVES
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
	  tipo_de_variavel ID
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
	  IF ABRE_PARENTESES expressao FECHA_PARENTESES comando {
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
	  FOR ABRE_PARENTESES comando_de_expressao comando_de_expressao FECHA_PARENTESES comando
	| FOR ABRE_PARENTESES comando_de_expressao comando_de_expressao expressao FECHA_PARENTESES comando
;

comando_de_expressao:
	  expressao PONTO_VIRGULA
	| PONTO_VIRGULA
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
	| TOP_OR_NOT fator
	| ID
	| ABRE_PARENTESES exp FECHA_PARENTESES
;

comando_de_atribuicao:
    ID ATRIB exp
;

chamada_de_funcao:
	  ID ABRE_PARENTESES parametros FECHA_PARENTESES PONTO_VIRGULA
;

chamada_de_retorno:
	  RETURN expressao PONTO_VIRGULA
	| RETURN PONTO_VIRGULA
;

tipo_de_variavel:
	  INT
	| FLOAT
	| LIST
;

constante:
	  CONSTANTE
;


%%

int yyerror (const char* s) {
	fprintf (stderr, "%s\n", s);
}

int main(int argc, char **argv)
{
  yyparse();
  return 0;
}