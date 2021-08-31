all: tradutor_utils.h
	bison -d sintatico.y
	flex lexico.l
	gcc -g -Wall -o tradutor sintatico.tab.c lex.yy.c tradutor_utils.c -lfl

run:
	./tradutor < teste_geral.c

clean:
	rm lex.yy.c sintatico.tab.c sintatico.tab.h

memcheck:
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./tradutor < tests/correto_teste_1.c