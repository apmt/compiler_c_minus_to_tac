all: lib/tradutor_utils.h src/tradutor_utils.c src/lexico.l src/sintatico.y
	bison --defines=lib/sintatico.tab.h src/sintatico.y -o src/sintatico.tab.c
	flex -o src/lex.yy.c src/lexico.l
	gcc -I lib/ -Wall -o tradutor src/sintatico.tab.c src/lex.yy.c src/tradutor_utils.c -lfl

debug: lib/tradutor_utils.h src/tradutor_utils.c src/lexico.l src/sintatico.y
	bison -v --defines=lib/sintatico.tab.h src/sintatico.y -o src/sintatico.tab.c
	flex -o src/lex.yy.c src/lexico.l
	gcc -I lib/ -Wall -o tradutor src/sintatico.tab.c src/lex.yy.c src/tradutor_utils.c -lfl

run:
	./tradutor < teste.c

memcheck:
	valgrind -v --tool=memcheck --leak-check=full --show-leak-kinds=all --track-origins=yes --log-file="logfile.out" ./tradutor < tests/lexico/correto_teste_1.c

.PHONY: clean
clean:
	rm -f lib/sintatico.tab.h src/lex.yy.c src/sintatico.tab.c tradutor logfile.out src/sintatico.output
